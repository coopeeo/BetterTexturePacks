#pragma once
#include <Geode/ui/Popup.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <functional>
#include <iostream>

using namespace geode::prelude;


class GeodeQuickPopup : public FLAlertLayer, public FLAlertLayerProtocol {
protected:
    sol::function m_selected;
    sol::function m_selected2;
    bool m_cancelledByEscape;
    bool m_usedEscape = false;

    void keyBackClicked() override {
        m_usedEscape = true;
        FLAlertLayer::keyBackClicked();
    }

    void FLAlert_Clicked(FLAlertLayer* layer, bool btn2) override {
        if (m_cancelledByEscape && m_usedEscape) {
            return;
        }
        if (btn2 && m_selected2) {
            #ifndef GEODE_IS_ANDROID
            try {
                if (m_selected2.valid()) {
                    m_selected2();
                }
            } catch (const sol::error& e) {
                geode::log::error("Lua error in right button callback: {}", e.what());
            }
            #else
            if (m_selected2.valid()) {
                m_selected2();
            }
            #endif
        } else if (!btn2 && m_selected) {
            #ifndef GEODE_IS_ANDROID
            try {
                if (m_selected.valid()) {
                    m_selected();
                }
            } catch (const sol::error& e) {
                geode::log::error("Lua error in left button callback: {}", e.what());
            }
            #else
            if (m_selected.valid()) {
                m_selected();
            }
            #endif
        }
    }

public:
    static GeodeQuickPopup* create(
        char const* title, std::string const& content, char const* btn1, char const* btn2,
        sol::function selected, sol::function selected2, float width
    ) {
        auto inst = new GeodeQuickPopup;
        inst->m_selected = selected;
        inst->m_selected2 = selected2;
        inst->m_cancelledByEscape = false;
        inst->init(inst, title, content, btn1, btn2, width, false, .0f, 1.0f);
        if (inst && inst->init(inst, title, content, btn1, btn2, width, false, .0f, 1.0f)) {
            inst->autorelease();
            return inst;
        }
        CC_SAFE_DELETE(inst);
        return nullptr;
    }
};