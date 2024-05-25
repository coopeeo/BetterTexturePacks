#pragma once
#include <Geode/Geode.hpp>
#include <Geode/utils/file.hpp>
#include "JsonPacks/jsonmain.h"
#include <Geode/utils/web.hpp>
#include "connect.hpp"
#include "publicvars/vars.h"
using namespace geode::prelude;
ghc::filesystem::path getGDResourcesPath(const std::string& a) {
    ghc::filesystem::path gdpath = geode::dirs::getGameDir();
    return gdpath / "Resources" / a;
} // geode::dirs::getGameDir() / "Resources"


void senderror(bool a,auto firstarg,auto secondarg, auto error, std::string path) {
    if (a) {
         geode::log::error("Unknown exception occurred");
    } else {
        geode::log::error("{}({}) error {} \n path is {}",firstarg,secondarg,error,path);
        const char*  dec  = fmt::format("{} \nCaused By Texture Pack \n{}({})\nWould you like to open the script",error,firstarg,secondarg).c_str();
       auto popup= geode::createQuickPopup(
        "[Texture pack manager]",
        dec,
        "No", "Open File",
        [path](auto, bool btn2) {
            if (btn2) {
                geode::utils::web::openLinkInBrowser(path);
            }
        }, false
    );
    popup->m_scene = layer;
    popup->show();
    }
}

void runLua(const std::string& scriptpath, auto py) {
    sol::state lua;
    auto settings = JsonManager(py);
    lua.open_libraries(sol::lib::base, sol::lib::math, sol::lib::table, sol::lib::string, sol::lib::package);
    lua.set_function("logMessage", &logMessage);
	lua.set_function("print", &info);
	lua.set_function("wait", &wait);
	sol::table geodetable = lua.create_named_table("geode");
	sol::table log = lua.create_named_table("log");
	log["debug"] = &debug; 
	log["info"] = &info;
	geodetable["NewThread"] = &newthread;
	geodetable["log"] = log;
    geodetable["ThisLayer"] = &getcurrentlayer;
    geodetable["GetID"] = &getid;
    geodetable["SetID"] =  &setid;
    geodetable["Alert"] = &Alert;
    try {
        lua.script_file(scriptpath);
    } catch (const sol::error& e) {
        senderror(false,settings.first,settings.second ,e.what(),scriptpath);
    };
}




void getTextureLoaderResources(const std::string& a) {
   Mod* textureLoader = Loader::get()->getLoadedMod("geode.texture-loader");
   std::vector<std::string> packPaths;
   std::vector<std::string> packPathsval;
    gd::vector<gd::string> paths = CCFileUtils::sharedFileUtils()->getSearchPaths();
    if(textureLoader){
         ghc::filesystem::path textureLoaderPacks = textureLoader->getConfigDir();
         std::string packDirStr = fmt::format("{}{}", textureLoaderPacks, "\\packs");
        for(std::string path : paths){

            ghc::filesystem::path fpath = ghc::filesystem::path(path);
            ghc::filesystem::path pathParent = ghc::filesystem::path(path);
             ghc::filesystem::path packDir = ghc::filesystem::path(packDirStr);
            while(pathParent.has_parent_path()){

                if(pathParent == packDir){
                    if(std::find(packPaths.begin(), packPaths.end(), fpath.string()) == packPaths.end()) {
                        packPaths.push_back( (fpath).string());
                        log::info("{}", (fpath / a).string() );
                        break;
                    }
                }
                if(pathParent == ghc::filesystem::current_path().root_path()  ){
                    break;
                }
                pathParent = pathParent.parent_path();
            }
        }
        // yes this fixes dupes
        for(std::string gennew : packPaths){
            ghc::filesystem::path fpath = ghc::filesystem::path(gennew);
            if (ghc::filesystem::exists(fpath)) {
                for (const auto& entry : ghc::filesystem::directory_iterator(fpath / a)) {
                    if (ghc::filesystem::is_regular_file(entry)) {
                    try {
                     runLua(entry.path().string(), gennew);
                     } catch (const std::exception& e) {
                        auto settings = JsonManager(gennew);
                        senderror(false,settings.first,settings.second,e.what(),entry.path().string());
                    } catch (...) {
                     senderror(true,nullptr,nullptr,nullptr,nullptr);
                }

                 }
        }

        };

    }
    }

}

void allfilesindir(const std::string& foldername) {
    auto pathtoget = getGDResourcesPath(foldername);
     if (ghc::filesystem::exists(pathtoget)) {
        for (const auto& entry : ghc::filesystem::directory_iterator(pathtoget)) {
        if (ghc::filesystem::is_regular_file(entry)) {
            try {
            runLua(entry.path().string(), geode::dirs::getGameDir() / "Resources");
            } catch (const std::exception& e) {
                    auto settings = JsonManager(geode::dirs::getGameDir() / "Resources");
                    senderror(false,settings.first,settings.second,e.what(),entry.path().string());
                    } catch (...) {
                      senderror(true,nullptr,nullptr,nullptr,nullptr);
                }

         }
        }
     }
    Mod* textureLoader = Loader::get()->getLoadedMod("geode.texture-loader");
    if(textureLoader){
        getTextureLoaderResources(foldername);
    }
}
