#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "sol.hpp"
#include "connect.hpp"
#include "gdfiles.hpp"
#include "publicvars/vars.h"

using namespace geode::prelude;


bool getallfiles(const std::string& foldername) {
    allfilesindir(foldername);
     return true;
}

class $modify(m, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        layer = this;
        getallfiles("Main_menu");
        getallfiles("Menu_layer");
        return true;
    }
};
