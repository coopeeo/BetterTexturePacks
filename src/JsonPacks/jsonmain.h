#pragma once
#include <Geode/Geode.hpp>
#include <matjson.hpp>
#include <Geode/utils/file.hpp>
#include "imagenthisfixesit.hpp"
using namespace geode::prelude;

 std::pair<std::string, std::string> JsonManager(auto paths) {
    auto gdpath = ghc::filesystem::path(paths) / "packinfo" / "pack.json";
    log::debug("{}",gdpath);
    std::string id = "unknown (unable to get)";
   std::string name = "unknown (unable to get)";
    auto data =   file::readString(gdpath);  
     if (data) {  
       
        std::optional<matjson::Value> value = matjson::Value::from_str(data.value());

        if (value.has_value()){
         log::debug("{}",value);
         if (value->is_object()) {
            matjson::Value& json_object = value.value();
           if (json_object.contains("id") && json_object["id"].is_string()) {
               id= json_object["id"].as_string();
               
            }
            if (json_object.contains("name") && json_object["name"].is_string()) {
               name= json_object["name"].as_string();
            }
         }
        }

}
return {name,id};
}