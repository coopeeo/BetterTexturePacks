#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <chrono>
#include <thread>
#include "publicvars/vars.h"
#include "luafixes/geodequickpopup.hpp"
using namespace geode::prelude;
void logMessage(const std::string& message) {
    std::cout << "Lua says: " << message << std::endl;
}
void debug(std::string message) {
    log::debug("{}",message);
}
void info(std::string message) {
    log::info("{}",message );
}
cocos2d::CCNode* getcurrentlayer() {
    return layer;
}



bool Alert(const char* name, const char* dec, const char* button1, const char* button2, sol::function function1, sol::function function2) {
    if (!name) {
        name = "Alert";
    }
    if (!dec) {
        dec = "Put something here";
    }
    if (!button1) {
        button1 = "No";
    }
    if (!button2) {
        button2 = "Yes";
    }

    auto popup = GeodeQuickPopup::create(
        name,
        dec,
        button1, button2,
        function1, function2,
        350.f
    );

    if (!popup) {
        return false;
    }

    popup->m_scene = layer;
    popup->show();
    return true;
}


std::string getid(CCNode* c) {
    if (!c) {
        return nullptr;
    };
    return c->getID();
}
CCNode* setid(CCNode* self, const std::string& name) {
    if (!self) {
        return nullptr;
    };
    self->setID(name);
    return self;
}

void wait(float arg1) {
    int time = arg1 * 1000;
     std::this_thread::sleep_for(std::chrono::milliseconds(time));
};

void newthread(sol::function fun) {
    // Create a new thread (execution stack) for the coroutine
    sol::thread runner = sol::thread::create(fun.lua_state());
    
    // Create a state_view for the new thread
    sol::state_view runner_state(runner.state());
    
    // Load the function onto the new thread's stack
    sol::function runner_fun = runner_state[fun];
    
    // Create a coroutine from the function
    sol::coroutine f = runner_fun;
    
    
    // Execute the coroutine
    f();
}