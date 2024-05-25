#include <Geode/Geode.hpp>
#include "sol.hpp"

void register_cocos2d_CCEGLViewProtocol(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCEGLViewProtocol");
	t["getViewPortRect"] = sol::c_call<decltype(&cocos2d::CCEGLViewProtocol::getViewPortRect), &cocos2d::CCEGLViewProtocol::getViewPortRect>;
	t["getScaleX"] = sol::c_call<decltype(&cocos2d::CCEGLViewProtocol::getScaleX), &cocos2d::CCEGLViewProtocol::getScaleX>;
	t["getScaleY"] = sol::c_call<decltype(&cocos2d::CCEGLViewProtocol::getScaleY), &cocos2d::CCEGLViewProtocol::getScaleY>;
	t["setDesignResolutionSize"] = sol::c_call<decltype(&cocos2d::CCEGLViewProtocol::setDesignResolutionSize), &cocos2d::CCEGLViewProtocol::setDesignResolutionSize>;
	t["setFrameSize"] = sol::c_call<decltype(&cocos2d::CCEGLViewProtocol::setFrameSize), &cocos2d::CCEGLViewProtocol::setFrameSize>;
}
void register_cocos2d_CCMotionStreak(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMotionStreak");
	t["getDontOpacityFade"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::getDontOpacityFade), &cocos2d::CCMotionStreak::getDontOpacityFade>;
	t["getM_fMaxSeg"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::getM_fMaxSeg), &cocos2d::CCMotionStreak::getM_fMaxSeg>;
	t["setDontOpacityFade"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setDontOpacityFade), &cocos2d::CCMotionStreak::setDontOpacityFade>;
	t["setFastMode"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setFastMode), &cocos2d::CCMotionStreak::setFastMode>;
	t["setM_fMaxSeg"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setM_fMaxSeg), &cocos2d::CCMotionStreak::setM_fMaxSeg>;
	t["setStartingPositionInitialized"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setStartingPositionInitialized), &cocos2d::CCMotionStreak::setStartingPositionInitialized>;
	t["setStroke"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setStroke), &cocos2d::CCMotionStreak::setStroke>;
	t["enableRepeatMode"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::enableRepeatMode), &cocos2d::CCMotionStreak::enableRepeatMode>;
	t["isFastMode"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::isFastMode), &cocos2d::CCMotionStreak::isFastMode>;
	t["isStartingPositionInitialized"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::isStartingPositionInitialized), &cocos2d::CCMotionStreak::isStartingPositionInitialized>;
	t["reset"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::reset), &cocos2d::CCMotionStreak::reset>;
	t["resumeStroke"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::resumeStroke), &cocos2d::CCMotionStreak::resumeStroke>;
	t["stopStroke"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::stopStroke), &cocos2d::CCMotionStreak::stopStroke>;
	t["tintWithColor"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::tintWithColor), &cocos2d::CCMotionStreak::tintWithColor>;
	t["updateFade"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::updateFade), &cocos2d::CCMotionStreak::updateFade>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::update), &cocos2d::CCMotionStreak::update>;
	t["setPosition"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setPosition), &cocos2d::CCMotionStreak::setPosition>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::draw), &cocos2d::CCMotionStreak::draw>;
	t["getOpacity"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::getOpacity), &cocos2d::CCMotionStreak::getOpacity>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setOpacity), &cocos2d::CCMotionStreak::setOpacity>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setOpacityModifyRGB), &cocos2d::CCMotionStreak::setOpacityModifyRGB>;
	t["isOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::isOpacityModifyRGB), &cocos2d::CCMotionStreak::isOpacityModifyRGB>;
	t["setBlendFunc"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setBlendFunc), &cocos2d::CCMotionStreak::setBlendFunc>;
	t["getBlendFunc"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::getBlendFunc), &cocos2d::CCMotionStreak::getBlendFunc>;
	t["getTexture"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::getTexture), &cocos2d::CCMotionStreak::getTexture>;
	t["setTexture"] = sol::c_call<decltype(&cocos2d::CCMotionStreak::setTexture), &cocos2d::CCMotionStreak::setTexture>;
}
void register_cocos2d_CCScene(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCScene");
	t["create"] = sol::c_call<decltype(&cocos2d::CCScene::create), &cocos2d::CCScene::create>;
	t["getHighestChildZ"] = sol::c_call<decltype(&cocos2d::CCScene::getHighestChildZ), &cocos2d::CCScene::getHighestChildZ>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCScene::init), &cocos2d::CCScene::init>;
}
void register_cocos2d_CCParticleSystem(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCParticleSystem");
	t["create"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::create), &cocos2d::CCParticleSystem::create>;
	t["createWithTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::createWithTotalParticles), &cocos2d::CCParticleSystem::createWithTotalParticles>;
	t["initParticle"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::initParticle), &cocos2d::CCParticleSystem::initParticle>;
	t["initWithFile"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::initWithFile), &cocos2d::CCParticleSystem::initWithFile>;
	t["getAtlasIndex"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getAtlasIndex), &cocos2d::CCParticleSystem::getAtlasIndex>;
	t["getDontCleanupOnFinish"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getDontCleanupOnFinish), &cocos2d::CCParticleSystem::getDontCleanupOnFinish>;
	t["getDynamicRotationIsDir"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getDynamicRotationIsDir), &cocos2d::CCParticleSystem::getDynamicRotationIsDir>;
	t["getEndRGBVarSync"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndRGBVarSync), &cocos2d::CCParticleSystem::getEndRGBVarSync>;
	t["getFadeInTime"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFadeInTime), &cocos2d::CCParticleSystem::getFadeInTime>;
	t["getFadeInTimeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFadeInTimeVar), &cocos2d::CCParticleSystem::getFadeInTimeVar>;
	t["getFadeOutTime"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFadeOutTime), &cocos2d::CCParticleSystem::getFadeOutTime>;
	t["getFadeOutTimeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFadeOutTimeVar), &cocos2d::CCParticleSystem::getFadeOutTimeVar>;
	t["getFrictionPos"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionPos), &cocos2d::CCParticleSystem::getFrictionPos>;
	t["getFrictionPosVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionPosVar), &cocos2d::CCParticleSystem::getFrictionPosVar>;
	t["getFrictionRot"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionRot), &cocos2d::CCParticleSystem::getFrictionRot>;
	t["getFrictionRotVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionRotVar), &cocos2d::CCParticleSystem::getFrictionRotVar>;
	t["getFrictionSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionSize), &cocos2d::CCParticleSystem::getFrictionSize>;
	t["getFrictionSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getFrictionSizeVar), &cocos2d::CCParticleSystem::getFrictionSizeVar>;
	t["getOrderSensitive"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getOrderSensitive), &cocos2d::CCParticleSystem::getOrderSensitive>;
	t["getRespawn"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRespawn), &cocos2d::CCParticleSystem::getRespawn>;
	t["getRespawnVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRespawnVar), &cocos2d::CCParticleSystem::getRespawnVar>;
	t["getStartRGBVarSync"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartRGBVarSync), &cocos2d::CCParticleSystem::getStartRGBVarSync>;
	t["getStartRadiusEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartRadiusEqualToEnd), &cocos2d::CCParticleSystem::getStartRadiusEqualToEnd>;
	t["getStartSizeEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSizeEqualToEnd), &cocos2d::CCParticleSystem::getStartSizeEqualToEnd>;
	t["getStartSpinEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSpinEqualToEnd), &cocos2d::CCParticleSystem::getStartSpinEqualToEnd>;
	t["getTimeElapsed"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getTimeElapsed), &cocos2d::CCParticleSystem::getTimeElapsed>;
	t["getUseUniformColorMode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getUseUniformColorMode), &cocos2d::CCParticleSystem::getUseUniformColorMode>;
	t["getUsingSchedule"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getUsingSchedule), &cocos2d::CCParticleSystem::getUsingSchedule>;
	t["getWasRemoved"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getWasRemoved), &cocos2d::CCParticleSystem::getWasRemoved>;
	t["setAtlasIndex"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setAtlasIndex), &cocos2d::CCParticleSystem::setAtlasIndex>;
	t["setDontCleanupOnFinish"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setDontCleanupOnFinish), &cocos2d::CCParticleSystem::setDontCleanupOnFinish>;
	t["setDynamicRotationIsDir"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setDynamicRotationIsDir), &cocos2d::CCParticleSystem::setDynamicRotationIsDir>;
	t["setEndAlpha"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndAlpha), &cocos2d::CCParticleSystem::setEndAlpha>;
	t["setEndRGBVarSync"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndRGBVarSync), &cocos2d::CCParticleSystem::setEndRGBVarSync>;
	t["setFadeInTime"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFadeInTime), &cocos2d::CCParticleSystem::setFadeInTime>;
	t["setFadeInTimeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFadeInTimeVar), &cocos2d::CCParticleSystem::setFadeInTimeVar>;
	t["setFadeOutTime"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFadeOutTime), &cocos2d::CCParticleSystem::setFadeOutTime>;
	t["setFadeOutTimeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFadeOutTimeVar), &cocos2d::CCParticleSystem::setFadeOutTimeVar>;
	t["setFrictionPos"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionPos), &cocos2d::CCParticleSystem::setFrictionPos>;
	t["setFrictionPosVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionPosVar), &cocos2d::CCParticleSystem::setFrictionPosVar>;
	t["setFrictionRot"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionRot), &cocos2d::CCParticleSystem::setFrictionRot>;
	t["setFrictionRotVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionRotVar), &cocos2d::CCParticleSystem::setFrictionRotVar>;
	t["setFrictionSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionSize), &cocos2d::CCParticleSystem::setFrictionSize>;
	t["setFrictionSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setFrictionSizeVar), &cocos2d::CCParticleSystem::setFrictionSizeVar>;
	t["setOrderSensitive"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setOrderSensitive), &cocos2d::CCParticleSystem::setOrderSensitive>;
	t["setRespawn"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRespawn), &cocos2d::CCParticleSystem::setRespawn>;
	t["setRespawnVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRespawnVar), &cocos2d::CCParticleSystem::setRespawnVar>;
	t["setStartAlpha"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartAlpha), &cocos2d::CCParticleSystem::setStartAlpha>;
	t["setStartRGBVarSync"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartRGBVarSync), &cocos2d::CCParticleSystem::setStartRGBVarSync>;
	t["setStartRadiusEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartRadiusEqualToEnd), &cocos2d::CCParticleSystem::setStartRadiusEqualToEnd>;
	t["setStartSizeEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSizeEqualToEnd), &cocos2d::CCParticleSystem::setStartSizeEqualToEnd>;
	t["setStartSpinEqualToEnd"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSpinEqualToEnd), &cocos2d::CCParticleSystem::setStartSpinEqualToEnd>;
	t["setUsingSchedule"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setUsingSchedule), &cocos2d::CCParticleSystem::setUsingSchedule>;
	t["setWasRemoved"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setWasRemoved), &cocos2d::CCParticleSystem::setWasRemoved>;
	t["addParticle"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::addParticle), &cocos2d::CCParticleSystem::addParticle>;
	t["calculateWorldSpace"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::calculateWorldSpace), &cocos2d::CCParticleSystem::calculateWorldSpace>;
	t["isFull"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::isFull), &cocos2d::CCParticleSystem::isFull>;
	t["loadDefaults"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::loadDefaults), &cocos2d::CCParticleSystem::loadDefaults>;
	t["loadScaledDefaults"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::loadScaledDefaults), &cocos2d::CCParticleSystem::loadScaledDefaults>;
	t["resetSystem"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::resetSystem), &cocos2d::CCParticleSystem::resetSystem>;
	t["resumeSystem"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::resumeSystem), &cocos2d::CCParticleSystem::resumeSystem>;
	t["saveDefaults"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::saveDefaults), &cocos2d::CCParticleSystem::saveDefaults>;
	t["stopSystem"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::stopSystem), &cocos2d::CCParticleSystem::stopSystem>;
	t["toggleUniformColorMode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::toggleUniformColorMode), &cocos2d::CCParticleSystem::toggleUniformColorMode>;
	t["updateVisible"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::updateVisible), &cocos2d::CCParticleSystem::updateVisible>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::update), &cocos2d::CCParticleSystem::update>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::init), &cocos2d::CCParticleSystem::init>;
	t["setScaleX"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setScaleX), &cocos2d::CCParticleSystem::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setScaleY), &cocos2d::CCParticleSystem::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setScale), &cocos2d::CCParticleSystem::setScale>;
	t["setVisible"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setVisible), &cocos2d::CCParticleSystem::setVisible>;
	t["setRotation"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRotation), &cocos2d::CCParticleSystem::setRotation>;
	t["getBatchNode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getBatchNode), &cocos2d::CCParticleSystem::getBatchNode>;
	t["setBatchNode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setBatchNode), &cocos2d::CCParticleSystem::setBatchNode>;
	t["getParticleCount"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getParticleCount), &cocos2d::CCParticleSystem::getParticleCount>;
	t["getDuration"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getDuration), &cocos2d::CCParticleSystem::getDuration>;
	t["setDuration"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setDuration), &cocos2d::CCParticleSystem::setDuration>;
	t["getSourcePosition"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getSourcePosition), &cocos2d::CCParticleSystem::getSourcePosition>;
	t["setSourcePosition"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setSourcePosition), &cocos2d::CCParticleSystem::setSourcePosition>;
	t["getPosVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getPosVar), &cocos2d::CCParticleSystem::getPosVar>;
	t["setPosVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setPosVar), &cocos2d::CCParticleSystem::setPosVar>;
	t["getLife"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getLife), &cocos2d::CCParticleSystem::getLife>;
	t["setLife"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setLife), &cocos2d::CCParticleSystem::setLife>;
	t["getLifeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getLifeVar), &cocos2d::CCParticleSystem::getLifeVar>;
	t["setLifeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setLifeVar), &cocos2d::CCParticleSystem::setLifeVar>;
	t["getAngle"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getAngle), &cocos2d::CCParticleSystem::getAngle>;
	t["setAngle"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setAngle), &cocos2d::CCParticleSystem::setAngle>;
	t["getAngleVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getAngleVar), &cocos2d::CCParticleSystem::getAngleVar>;
	t["setAngleVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setAngleVar), &cocos2d::CCParticleSystem::setAngleVar>;
	t["updateEmissionRate"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::updateEmissionRate), &cocos2d::CCParticleSystem::updateEmissionRate>;
	t["getGravity"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getGravity), &cocos2d::CCParticleSystem::getGravity>;
	t["setGravity"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setGravity), &cocos2d::CCParticleSystem::setGravity>;
	t["getSpeed"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getSpeed), &cocos2d::CCParticleSystem::getSpeed>;
	t["setSpeed"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setSpeed), &cocos2d::CCParticleSystem::setSpeed>;
	t["getSpeedVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getSpeedVar), &cocos2d::CCParticleSystem::getSpeedVar>;
	t["setSpeedVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setSpeedVar), &cocos2d::CCParticleSystem::setSpeedVar>;
	t["getTangentialAccel"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getTangentialAccel), &cocos2d::CCParticleSystem::getTangentialAccel>;
	t["setTangentialAccel"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setTangentialAccel), &cocos2d::CCParticleSystem::setTangentialAccel>;
	t["getTangentialAccelVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getTangentialAccelVar), &cocos2d::CCParticleSystem::getTangentialAccelVar>;
	t["setTangentialAccelVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setTangentialAccelVar), &cocos2d::CCParticleSystem::setTangentialAccelVar>;
	t["getRadialAccel"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRadialAccel), &cocos2d::CCParticleSystem::getRadialAccel>;
	t["setRadialAccel"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRadialAccel), &cocos2d::CCParticleSystem::setRadialAccel>;
	t["getRadialAccelVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRadialAccelVar), &cocos2d::CCParticleSystem::getRadialAccelVar>;
	t["setRadialAccelVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRadialAccelVar), &cocos2d::CCParticleSystem::setRadialAccelVar>;
	t["getRotationIsDir"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRotationIsDir), &cocos2d::CCParticleSystem::getRotationIsDir>;
	t["setRotationIsDir"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRotationIsDir), &cocos2d::CCParticleSystem::setRotationIsDir>;
	t["getStartRadius"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartRadius), &cocos2d::CCParticleSystem::getStartRadius>;
	t["setStartRadius"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartRadius), &cocos2d::CCParticleSystem::setStartRadius>;
	t["getStartRadiusVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartRadiusVar), &cocos2d::CCParticleSystem::getStartRadiusVar>;
	t["setStartRadiusVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartRadiusVar), &cocos2d::CCParticleSystem::setStartRadiusVar>;
	t["getEndRadius"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndRadius), &cocos2d::CCParticleSystem::getEndRadius>;
	t["setEndRadius"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndRadius), &cocos2d::CCParticleSystem::setEndRadius>;
	t["getEndRadiusVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndRadiusVar), &cocos2d::CCParticleSystem::getEndRadiusVar>;
	t["setEndRadiusVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndRadiusVar), &cocos2d::CCParticleSystem::setEndRadiusVar>;
	t["getRotatePerSecond"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRotatePerSecond), &cocos2d::CCParticleSystem::getRotatePerSecond>;
	t["setRotatePerSecond"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRotatePerSecond), &cocos2d::CCParticleSystem::setRotatePerSecond>;
	t["getRotatePerSecondVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getRotatePerSecondVar), &cocos2d::CCParticleSystem::getRotatePerSecondVar>;
	t["setRotatePerSecondVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setRotatePerSecondVar), &cocos2d::CCParticleSystem::setRotatePerSecondVar>;
	t["isActive"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::isActive), &cocos2d::CCParticleSystem::isActive>;
	t["isBlendAdditive"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::isBlendAdditive), &cocos2d::CCParticleSystem::isBlendAdditive>;
	t["setBlendAdditive"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setBlendAdditive), &cocos2d::CCParticleSystem::setBlendAdditive>;
	t["getStartSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSize), &cocos2d::CCParticleSystem::getStartSize>;
	t["setStartSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSize), &cocos2d::CCParticleSystem::setStartSize>;
	t["getStartSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSizeVar), &cocos2d::CCParticleSystem::getStartSizeVar>;
	t["setStartSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSizeVar), &cocos2d::CCParticleSystem::setStartSizeVar>;
	t["getEndSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndSize), &cocos2d::CCParticleSystem::getEndSize>;
	t["setEndSize"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndSize), &cocos2d::CCParticleSystem::setEndSize>;
	t["getEndSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndSizeVar), &cocos2d::CCParticleSystem::getEndSizeVar>;
	t["setEndSizeVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndSizeVar), &cocos2d::CCParticleSystem::setEndSizeVar>;
	t["getStartColor"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartColor), &cocos2d::CCParticleSystem::getStartColor>;
	t["setStartColor"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartColor), &cocos2d::CCParticleSystem::setStartColor>;
	t["getStartColorVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartColorVar), &cocos2d::CCParticleSystem::getStartColorVar>;
	t["setStartColorVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartColorVar), &cocos2d::CCParticleSystem::setStartColorVar>;
	t["getEndColor"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndColor), &cocos2d::CCParticleSystem::getEndColor>;
	t["setEndColor"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndColor), &cocos2d::CCParticleSystem::setEndColor>;
	t["getEndColorVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndColorVar), &cocos2d::CCParticleSystem::getEndColorVar>;
	t["setEndColorVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndColorVar), &cocos2d::CCParticleSystem::setEndColorVar>;
	t["getStartSpin"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSpin), &cocos2d::CCParticleSystem::getStartSpin>;
	t["setStartSpin"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSpin), &cocos2d::CCParticleSystem::setStartSpin>;
	t["getStartSpinVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getStartSpinVar), &cocos2d::CCParticleSystem::getStartSpinVar>;
	t["setStartSpinVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setStartSpinVar), &cocos2d::CCParticleSystem::setStartSpinVar>;
	t["getEndSpin"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndSpin), &cocos2d::CCParticleSystem::getEndSpin>;
	t["setEndSpin"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndSpin), &cocos2d::CCParticleSystem::setEndSpin>;
	t["getEndSpinVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEndSpinVar), &cocos2d::CCParticleSystem::getEndSpinVar>;
	t["setEndSpinVar"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEndSpinVar), &cocos2d::CCParticleSystem::setEndSpinVar>;
	t["getEmissionRate"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEmissionRate), &cocos2d::CCParticleSystem::getEmissionRate>;
	t["setEmissionRate"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEmissionRate), &cocos2d::CCParticleSystem::setEmissionRate>;
	t["getTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getTotalParticles), &cocos2d::CCParticleSystem::getTotalParticles>;
	t["setTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setTotalParticles), &cocos2d::CCParticleSystem::setTotalParticles>;
	t["getOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getOpacityModifyRGB), &cocos2d::CCParticleSystem::getOpacityModifyRGB>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setOpacityModifyRGB), &cocos2d::CCParticleSystem::setOpacityModifyRGB>;
	t["getPositionType"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getPositionType), &cocos2d::CCParticleSystem::getPositionType>;
	t["setPositionType"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setPositionType), &cocos2d::CCParticleSystem::setPositionType>;
	t["isAutoRemoveOnFinish"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::isAutoRemoveOnFinish), &cocos2d::CCParticleSystem::isAutoRemoveOnFinish>;
	t["setAutoRemoveOnFinish"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setAutoRemoveOnFinish), &cocos2d::CCParticleSystem::setAutoRemoveOnFinish>;
	t["getEmitterMode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getEmitterMode), &cocos2d::CCParticleSystem::getEmitterMode>;
	t["setEmitterMode"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setEmitterMode), &cocos2d::CCParticleSystem::setEmitterMode>;
	t["initWithTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::initWithTotalParticles), &cocos2d::CCParticleSystem::initWithTotalParticles>;
	t["updateQuadWithParticle"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::updateQuadWithParticle), &cocos2d::CCParticleSystem::updateQuadWithParticle>;
	t["postStep"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::postStep), &cocos2d::CCParticleSystem::postStep>;
	t["updateWithNoTime"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::updateWithNoTime), &cocos2d::CCParticleSystem::updateWithNoTime>;
	t["setBlendFunc"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setBlendFunc), &cocos2d::CCParticleSystem::setBlendFunc>;
	t["getBlendFunc"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getBlendFunc), &cocos2d::CCParticleSystem::getBlendFunc>;
	t["getTexture"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::getTexture), &cocos2d::CCParticleSystem::getTexture>;
	t["setTexture"] = sol::c_call<decltype(&cocos2d::CCParticleSystem::setTexture), &cocos2d::CCParticleSystem::setTexture>;
}
void register_cocos2d_CCParticleSystemQuad(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCParticleSystemQuad");
	t["createWithTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::createWithTotalParticles), &cocos2d::CCParticleSystemQuad::createWithTotalParticles>;
	t["initIndices"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::initIndices), &cocos2d::CCParticleSystemQuad::initIndices>;
	t["initTexCoordsWithRect"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::initTexCoordsWithRect), &cocos2d::CCParticleSystemQuad::initTexCoordsWithRect>;
	t["getOpacity"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::getOpacity), &cocos2d::CCParticleSystemQuad::getOpacity>;
	t["setDisplayFrame"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setDisplayFrame), &cocos2d::CCParticleSystemQuad::setDisplayFrame>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setOpacity), &cocos2d::CCParticleSystemQuad::setOpacity>;
	t["setTextureWithRect"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setTextureWithRect), &cocos2d::CCParticleSystemQuad::setTextureWithRect>;
	t["listenBackToForeground"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::listenBackToForeground), &cocos2d::CCParticleSystemQuad::listenBackToForeground>;
	t["updateTexCoords"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::updateTexCoords), &cocos2d::CCParticleSystemQuad::updateTexCoords>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::draw), &cocos2d::CCParticleSystemQuad::draw>;
	t["setBatchNode"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setBatchNode), &cocos2d::CCParticleSystemQuad::setBatchNode>;
	t["setTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setTotalParticles), &cocos2d::CCParticleSystemQuad::setTotalParticles>;
	t["initWithTotalParticles"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::initWithTotalParticles), &cocos2d::CCParticleSystemQuad::initWithTotalParticles>;
	t["updateQuadWithParticle"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::updateQuadWithParticle), &cocos2d::CCParticleSystemQuad::updateQuadWithParticle>;
	t["postStep"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::postStep), &cocos2d::CCParticleSystemQuad::postStep>;
	t["setTexture"] = sol::c_call<decltype(&cocos2d::CCParticleSystemQuad::setTexture), &cocos2d::CCParticleSystemQuad::setTexture>;
}
void register_cocos2d_CCFileUtils(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCFileUtils");
	t["addSearchPath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::addSearchPath), &cocos2d::CCFileUtils::addSearchPath>;
	t["addSearchResolutionsOrder"] = sol::c_call<decltype(&cocos2d::CCFileUtils::addSearchResolutionsOrder), &cocos2d::CCFileUtils::addSearchResolutionsOrder>;
	t["fullPathForFilename"] = sol::c_call<decltype(&cocos2d::CCFileUtils::fullPathForFilename), &cocos2d::CCFileUtils::fullPathForFilename>;
	t["fullPathFromRelativeFile"] = sol::c_call<decltype(&cocos2d::CCFileUtils::fullPathFromRelativeFile), &cocos2d::CCFileUtils::fullPathFromRelativeFile>;
	t["getAndroidPath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getAndroidPath), &cocos2d::CCFileUtils::getAndroidPath>;
	t["getFileData"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getFileData), &cocos2d::CCFileUtils::getFileData>;
	t["getFileDataFromZip"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getFileDataFromZip), &cocos2d::CCFileUtils::getFileDataFromZip>;
	t["getSearchPaths"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getSearchPaths), &cocos2d::CCFileUtils::getSearchPaths>;
	t["getSearchResolutionsOrder"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getSearchResolutionsOrder), &cocos2d::CCFileUtils::getSearchResolutionsOrder>;
	t["getWritablePath2"] = sol::c_call<decltype(&cocos2d::CCFileUtils::getWritablePath2), &cocos2d::CCFileUtils::getWritablePath2>;
	t["isAbsolutePath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::isAbsolutePath), &cocos2d::CCFileUtils::isAbsolutePath>;
	t["isPopupNotify"] = sol::c_call<decltype(&cocos2d::CCFileUtils::isPopupNotify), &cocos2d::CCFileUtils::isPopupNotify>;
	t["loadFilenameLookupDictionaryFromFile"] = sol::c_call<decltype(&cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile), &cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile>;
	t["purgeCachedEntries"] = sol::c_call<decltype(&cocos2d::CCFileUtils::purgeCachedEntries), &cocos2d::CCFileUtils::purgeCachedEntries>;
	t["purgeFileUtils"] = sol::c_call<decltype(&cocos2d::CCFileUtils::purgeFileUtils), &cocos2d::CCFileUtils::purgeFileUtils>;
	t["removeAllPaths"] = sol::c_call<decltype(&cocos2d::CCFileUtils::removeAllPaths), &cocos2d::CCFileUtils::removeAllPaths>;
	t["removeFullPath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::removeFullPath), &cocos2d::CCFileUtils::removeFullPath>;
	t["removeSearchPath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::removeSearchPath), &cocos2d::CCFileUtils::removeSearchPath>;
	t["setAndroidPath"] = sol::c_call<decltype(&cocos2d::CCFileUtils::setAndroidPath), &cocos2d::CCFileUtils::setAndroidPath>;
	t["setFilenameLookupDictionary"] = sol::c_call<decltype(&cocos2d::CCFileUtils::setFilenameLookupDictionary), &cocos2d::CCFileUtils::setFilenameLookupDictionary>;
	t["setPopupNotify"] = sol::c_call<decltype(&cocos2d::CCFileUtils::setPopupNotify), &cocos2d::CCFileUtils::setPopupNotify>;
	t["setSearchPaths"] = sol::c_call<decltype(&cocos2d::CCFileUtils::setSearchPaths), &cocos2d::CCFileUtils::setSearchPaths>;
	t["setSearchResolutionsOrder"] = sol::c_call<decltype(&cocos2d::CCFileUtils::setSearchResolutionsOrder), &cocos2d::CCFileUtils::setSearchResolutionsOrder>;
	t["sharedFileUtils"] = sol::c_call<decltype(&cocos2d::CCFileUtils::sharedFileUtils), &cocos2d::CCFileUtils::sharedFileUtils>;
}
void register_cocos2d_CCNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCNode");
	t["create"] = sol::c_call<decltype(&cocos2d::CCNode::create), &cocos2d::CCNode::create>;
	t["getActionByTag"] = sol::c_call<decltype(&cocos2d::CCNode::getActionByTag), &cocos2d::CCNode::getActionByTag>;
	t["getComponent"] = sol::c_call<decltype(&cocos2d::CCNode::getComponent), &cocos2d::CCNode::getComponent>;
	t["getScriptHandler"] = sol::c_call<decltype(&cocos2d::CCNode::getScriptHandler), &cocos2d::CCNode::getScriptHandler>;
	t["getTransformTemp"] = sol::c_call<decltype(&cocos2d::CCNode::getTransformTemp), &cocos2d::CCNode::getTransformTemp>;
	t["getUseChildIndex"] = sol::c_call<decltype(&cocos2d::CCNode::getUseChildIndex), &cocos2d::CCNode::getUseChildIndex>;
	t["setAdditionalTransform"] = sol::c_call<decltype(&cocos2d::CCNode::setAdditionalTransform), &cocos2d::CCNode::setAdditionalTransform>;
	t["setUseChildIndex"] = sol::c_call<decltype(&cocos2d::CCNode::setUseChildIndex), &cocos2d::CCNode::setUseChildIndex>;
	t["boundingBox"] = sol::c_call<decltype(&cocos2d::CCNode::boundingBox), &cocos2d::CCNode::boundingBox>;
	t["convertToNodeSpace"] = sol::c_call<decltype(&cocos2d::CCNode::convertToNodeSpace), &cocos2d::CCNode::convertToNodeSpace>;
	t["convertToNodeSpaceAR"] = sol::c_call<decltype(&cocos2d::CCNode::convertToNodeSpaceAR), &cocos2d::CCNode::convertToNodeSpaceAR>;
	t["convertToWorldSpace"] = sol::c_call<decltype(&cocos2d::CCNode::convertToWorldSpace), &cocos2d::CCNode::convertToWorldSpace>;
	t["convertToWorldSpaceAR"] = sol::c_call<decltype(&cocos2d::CCNode::convertToWorldSpaceAR), &cocos2d::CCNode::convertToWorldSpaceAR>;
	t["convertTouchToNodeSpace"] = sol::c_call<decltype(&cocos2d::CCNode::convertTouchToNodeSpace), &cocos2d::CCNode::convertTouchToNodeSpace>;
	t["convertTouchToNodeSpaceAR"] = sol::c_call<decltype(&cocos2d::CCNode::convertTouchToNodeSpaceAR), &cocos2d::CCNode::convertTouchToNodeSpaceAR>;
	t["description"] = sol::c_call<decltype(&cocos2d::CCNode::description), &cocos2d::CCNode::description>;
	t["numberOfRunningActions"] = sol::c_call<decltype(&cocos2d::CCNode::numberOfRunningActions), &cocos2d::CCNode::numberOfRunningActions>;
	t["pauseSchedulerAndActions"] = sol::c_call<decltype(&cocos2d::CCNode::pauseSchedulerAndActions), &cocos2d::CCNode::pauseSchedulerAndActions>;
	t["qsortAllChildrenWithIndex"] = sol::c_call<decltype(&cocos2d::CCNode::qsortAllChildrenWithIndex), &cocos2d::CCNode::qsortAllChildrenWithIndex>;
	t["resumeSchedulerAndActions"] = sol::c_call<decltype(&cocos2d::CCNode::resumeSchedulerAndActions), &cocos2d::CCNode::resumeSchedulerAndActions>;
	t["runAction"] = sol::c_call<decltype(&cocos2d::CCNode::runAction), &cocos2d::CCNode::runAction>;
	t["scheduleOnce"] = sol::c_call<decltype(&cocos2d::CCNode::scheduleOnce), &cocos2d::CCNode::scheduleOnce>;
	t["scheduleUpdate"] = sol::c_call<decltype(&cocos2d::CCNode::scheduleUpdate), &cocos2d::CCNode::scheduleUpdate>;
	t["scheduleUpdateWithPriority"] = sol::c_call<decltype(&cocos2d::CCNode::scheduleUpdateWithPriority), &cocos2d::CCNode::scheduleUpdateWithPriority>;
	t["scheduleUpdateWithPriorityLua"] = sol::c_call<decltype(&cocos2d::CCNode::scheduleUpdateWithPriorityLua), &cocos2d::CCNode::scheduleUpdateWithPriorityLua>;
	t["sortAllChildrenNoIndex"] = sol::c_call<decltype(&cocos2d::CCNode::sortAllChildrenNoIndex), &cocos2d::CCNode::sortAllChildrenNoIndex>;
	t["sortAllChildrenWithIndex"] = sol::c_call<decltype(&cocos2d::CCNode::sortAllChildrenWithIndex), &cocos2d::CCNode::sortAllChildrenWithIndex>;
	t["stopAction"] = sol::c_call<decltype(&cocos2d::CCNode::stopAction), &cocos2d::CCNode::stopAction>;
	t["stopActionByTag"] = sol::c_call<decltype(&cocos2d::CCNode::stopActionByTag), &cocos2d::CCNode::stopActionByTag>;
	t["stopAllActions"] = sol::c_call<decltype(&cocos2d::CCNode::stopAllActions), &cocos2d::CCNode::stopAllActions>;
	t["transform"] = sol::c_call<decltype(&cocos2d::CCNode::transform), &cocos2d::CCNode::transform>;
	t["transformAncestors"] = sol::c_call<decltype(&cocos2d::CCNode::transformAncestors), &cocos2d::CCNode::transformAncestors>;
	t["unschedule"] = sol::c_call<decltype(&cocos2d::CCNode::unschedule), &cocos2d::CCNode::unschedule>;
	t["unscheduleAllSelectors"] = sol::c_call<decltype(&cocos2d::CCNode::unscheduleAllSelectors), &cocos2d::CCNode::unscheduleAllSelectors>;
	t["unscheduleUpdate"] = sol::c_call<decltype(&cocos2d::CCNode::unscheduleUpdate), &cocos2d::CCNode::unscheduleUpdate>;
	t["updateChildIndexes"] = sol::c_call<decltype(&cocos2d::CCNode::updateChildIndexes), &cocos2d::CCNode::updateChildIndexes>;
	t["getChildrenCount"] = sol::c_call<decltype(&cocos2d::CCNode::getChildrenCount), &cocos2d::CCNode::getChildrenCount>;
	t["getContentSize"] = sol::c_call<decltype(&cocos2d::CCNode::getContentSize), &cocos2d::CCNode::getContentSize>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCNode::update), &cocos2d::CCNode::update>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCNode::init), &cocos2d::CCNode::init>;
	t["setZOrder"] = sol::c_call<decltype(&cocos2d::CCNode::setZOrder), &cocos2d::CCNode::setZOrder>;
	t["_setZOrder"] = sol::c_call<decltype(&cocos2d::CCNode::_setZOrder), &cocos2d::CCNode::_setZOrder>;
	t["getZOrder"] = sol::c_call<decltype(&cocos2d::CCNode::getZOrder), &cocos2d::CCNode::getZOrder>;
	t["setVertexZ"] = sol::c_call<decltype(&cocos2d::CCNode::setVertexZ), &cocos2d::CCNode::setVertexZ>;
	t["getVertexZ"] = sol::c_call<decltype(&cocos2d::CCNode::getVertexZ), &cocos2d::CCNode::getVertexZ>;
	t["setScaleX"] = sol::c_call<decltype(&cocos2d::CCNode::setScaleX), &cocos2d::CCNode::setScaleX>;
	t["getScaleX"] = sol::c_call<decltype(&cocos2d::CCNode::getScaleX), &cocos2d::CCNode::getScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&cocos2d::CCNode::setScaleY), &cocos2d::CCNode::setScaleY>;
	t["getScaleY"] = sol::c_call<decltype(&cocos2d::CCNode::getScaleY), &cocos2d::CCNode::getScaleY>;
	t["getScale"] = sol::c_call<decltype(&cocos2d::CCNode::getScale), &cocos2d::CCNode::getScale>;
	t["setPositionX"] = sol::c_call<decltype(&cocos2d::CCNode::setPositionX), &cocos2d::CCNode::setPositionX>;
	t["getPositionX"] = sol::c_call<decltype(&cocos2d::CCNode::getPositionX), &cocos2d::CCNode::getPositionX>;
	t["setPositionY"] = sol::c_call<decltype(&cocos2d::CCNode::setPositionY), &cocos2d::CCNode::setPositionY>;
	t["getPositionY"] = sol::c_call<decltype(&cocos2d::CCNode::getPositionY), &cocos2d::CCNode::getPositionY>;
	t["setSkewX"] = sol::c_call<decltype(&cocos2d::CCNode::setSkewX), &cocos2d::CCNode::setSkewX>;
	t["getSkewX"] = sol::c_call<decltype(&cocos2d::CCNode::getSkewX), &cocos2d::CCNode::getSkewX>;
	t["setSkewY"] = sol::c_call<decltype(&cocos2d::CCNode::setSkewY), &cocos2d::CCNode::setSkewY>;
	t["getSkewY"] = sol::c_call<decltype(&cocos2d::CCNode::getSkewY), &cocos2d::CCNode::getSkewY>;
	t["setAnchorPoint"] = sol::c_call<decltype(&cocos2d::CCNode::setAnchorPoint), &cocos2d::CCNode::setAnchorPoint>;
	t["getAnchorPoint"] = sol::c_call<decltype(&cocos2d::CCNode::getAnchorPoint), &cocos2d::CCNode::getAnchorPoint>;
	t["getAnchorPointInPoints"] = sol::c_call<decltype(&cocos2d::CCNode::getAnchorPointInPoints), &cocos2d::CCNode::getAnchorPointInPoints>;
	t["setContentSize"] = sol::c_call<decltype(&cocos2d::CCNode::setContentSize), &cocos2d::CCNode::setContentSize>;
	t["getScaledContentSize"] = sol::c_call<decltype(&cocos2d::CCNode::getScaledContentSize), &cocos2d::CCNode::getScaledContentSize>;
	t["setVisible"] = sol::c_call<decltype(&cocos2d::CCNode::setVisible), &cocos2d::CCNode::setVisible>;
	t["isVisible"] = sol::c_call<decltype(&cocos2d::CCNode::isVisible), &cocos2d::CCNode::isVisible>;
	t["setRotation"] = sol::c_call<decltype(&cocos2d::CCNode::setRotation), &cocos2d::CCNode::setRotation>;
	t["getRotation"] = sol::c_call<decltype(&cocos2d::CCNode::getRotation), &cocos2d::CCNode::getRotation>;
	t["setRotationX"] = sol::c_call<decltype(&cocos2d::CCNode::setRotationX), &cocos2d::CCNode::setRotationX>;
	t["getRotationX"] = sol::c_call<decltype(&cocos2d::CCNode::getRotationX), &cocos2d::CCNode::getRotationX>;
	t["setRotationY"] = sol::c_call<decltype(&cocos2d::CCNode::setRotationY), &cocos2d::CCNode::setRotationY>;
	t["getRotationY"] = sol::c_call<decltype(&cocos2d::CCNode::getRotationY), &cocos2d::CCNode::getRotationY>;
	t["setOrderOfArrival"] = sol::c_call<decltype(&cocos2d::CCNode::setOrderOfArrival), &cocos2d::CCNode::setOrderOfArrival>;
	t["getOrderOfArrival"] = sol::c_call<decltype(&cocos2d::CCNode::getOrderOfArrival), &cocos2d::CCNode::getOrderOfArrival>;
	t["setGLServerState"] = sol::c_call<decltype(&cocos2d::CCNode::setGLServerState), &cocos2d::CCNode::setGLServerState>;
	t["getGLServerState"] = sol::c_call<decltype(&cocos2d::CCNode::getGLServerState), &cocos2d::CCNode::getGLServerState>;
	t["ignoreAnchorPointForPosition"] = sol::c_call<decltype(&cocos2d::CCNode::ignoreAnchorPointForPosition), &cocos2d::CCNode::ignoreAnchorPointForPosition>;
	t["isIgnoreAnchorPointForPosition"] = sol::c_call<decltype(&cocos2d::CCNode::isIgnoreAnchorPointForPosition), &cocos2d::CCNode::isIgnoreAnchorPointForPosition>;
	t["getChildByTag"] = sol::c_call<decltype(&cocos2d::CCNode::getChildByTag), &cocos2d::CCNode::getChildByTag>;
	t["getChildren"] = sol::c_call<decltype(&cocos2d::CCNode::getChildren), &cocos2d::CCNode::getChildren>;
	t["setParent"] = sol::c_call<decltype(&cocos2d::CCNode::setParent), &cocos2d::CCNode::setParent>;
	t["getParent"] = sol::c_call<decltype(&cocos2d::CCNode::getParent), &cocos2d::CCNode::getParent>;
	t["removeFromParent"] = sol::c_call<decltype(&cocos2d::CCNode::removeFromParent), &cocos2d::CCNode::removeFromParent>;
	t["removeFromParentAndCleanup"] = sol::c_call<decltype(&cocos2d::CCNode::removeFromParentAndCleanup), &cocos2d::CCNode::removeFromParentAndCleanup>;
	t["removeMeAndCleanup"] = sol::c_call<decltype(&cocos2d::CCNode::removeMeAndCleanup), &cocos2d::CCNode::removeMeAndCleanup>;
	t["removeAllChildren"] = sol::c_call<decltype(&cocos2d::CCNode::removeAllChildren), &cocos2d::CCNode::removeAllChildren>;
	t["removeAllChildrenWithCleanup"] = sol::c_call<decltype(&cocos2d::CCNode::removeAllChildrenWithCleanup), &cocos2d::CCNode::removeAllChildrenWithCleanup>;
	t["reorderChild"] = sol::c_call<decltype(&cocos2d::CCNode::reorderChild), &cocos2d::CCNode::reorderChild>;
	t["sortAllChildren"] = sol::c_call<decltype(&cocos2d::CCNode::sortAllChildren), &cocos2d::CCNode::sortAllChildren>;
	t["getGrid"] = sol::c_call<decltype(&cocos2d::CCNode::getGrid), &cocos2d::CCNode::getGrid>;
	t["setGrid"] = sol::c_call<decltype(&cocos2d::CCNode::setGrid), &cocos2d::CCNode::setGrid>;
	t["getUserData"] = sol::c_call<decltype(&cocos2d::CCNode::getUserData), &cocos2d::CCNode::getUserData>;
	t["setUserData"] = sol::c_call<decltype(&cocos2d::CCNode::setUserData), &cocos2d::CCNode::setUserData>;
	t["getShaderProgram"] = sol::c_call<decltype(&cocos2d::CCNode::getShaderProgram), &cocos2d::CCNode::getShaderProgram>;
	t["setShaderProgram"] = sol::c_call<decltype(&cocos2d::CCNode::setShaderProgram), &cocos2d::CCNode::setShaderProgram>;
	t["getCamera"] = sol::c_call<decltype(&cocos2d::CCNode::getCamera), &cocos2d::CCNode::getCamera>;
	t["isRunning"] = sol::c_call<decltype(&cocos2d::CCNode::isRunning), &cocos2d::CCNode::isRunning>;
	t["registerScriptHandler"] = sol::c_call<decltype(&cocos2d::CCNode::registerScriptHandler), &cocos2d::CCNode::registerScriptHandler>;
	t["unregisterScriptHandler"] = sol::c_call<decltype(&cocos2d::CCNode::unregisterScriptHandler), &cocos2d::CCNode::unregisterScriptHandler>;
	t["onEnter"] = sol::c_call<decltype(&cocos2d::CCNode::onEnter), &cocos2d::CCNode::onEnter>;
	t["onEnterTransitionDidFinish"] = sol::c_call<decltype(&cocos2d::CCNode::onEnterTransitionDidFinish), &cocos2d::CCNode::onEnterTransitionDidFinish>;
	t["onExit"] = sol::c_call<decltype(&cocos2d::CCNode::onExit), &cocos2d::CCNode::onExit>;
	t["onExitTransitionDidStart"] = sol::c_call<decltype(&cocos2d::CCNode::onExitTransitionDidStart), &cocos2d::CCNode::onExitTransitionDidStart>;
	t["cleanup"] = sol::c_call<decltype(&cocos2d::CCNode::cleanup), &cocos2d::CCNode::cleanup>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCNode::draw), &cocos2d::CCNode::draw>;
	t["visit"] = sol::c_call<decltype(&cocos2d::CCNode::visit), &cocos2d::CCNode::visit>;
	t["setActionManager"] = sol::c_call<decltype(&cocos2d::CCNode::setActionManager), &cocos2d::CCNode::setActionManager>;
	t["getActionManager"] = sol::c_call<decltype(&cocos2d::CCNode::getActionManager), &cocos2d::CCNode::getActionManager>;
	t["setScheduler"] = sol::c_call<decltype(&cocos2d::CCNode::setScheduler), &cocos2d::CCNode::setScheduler>;
	t["getScheduler"] = sol::c_call<decltype(&cocos2d::CCNode::getScheduler), &cocos2d::CCNode::getScheduler>;
	t["updateTransform"] = sol::c_call<decltype(&cocos2d::CCNode::updateTransform), &cocos2d::CCNode::updateTransform>;
	t["nodeToParentTransform"] = sol::c_call<decltype(&cocos2d::CCNode::nodeToParentTransform), &cocos2d::CCNode::nodeToParentTransform>;
	t["nodeToParentTransformFast"] = sol::c_call<decltype(&cocos2d::CCNode::nodeToParentTransformFast), &cocos2d::CCNode::nodeToParentTransformFast>;
	t["parentToNodeTransform"] = sol::c_call<decltype(&cocos2d::CCNode::parentToNodeTransform), &cocos2d::CCNode::parentToNodeTransform>;
	t["nodeToWorldTransform"] = sol::c_call<decltype(&cocos2d::CCNode::nodeToWorldTransform), &cocos2d::CCNode::nodeToWorldTransform>;
	t["nodeToWorldTransformFast"] = sol::c_call<decltype(&cocos2d::CCNode::nodeToWorldTransformFast), &cocos2d::CCNode::nodeToWorldTransformFast>;
	t["worldToNodeTransform"] = sol::c_call<decltype(&cocos2d::CCNode::worldToNodeTransform), &cocos2d::CCNode::worldToNodeTransform>;
	t["addComponent"] = sol::c_call<decltype(&cocos2d::CCNode::addComponent), &cocos2d::CCNode::addComponent>;
	t["removeAllComponents"] = sol::c_call<decltype(&cocos2d::CCNode::removeAllComponents), &cocos2d::CCNode::removeAllComponents>;
	t["updateTweenAction"] = sol::c_call<decltype(&cocos2d::CCNode::updateTweenAction), &cocos2d::CCNode::updateTweenAction>;
	t["updateTweenActionInt"] = sol::c_call<decltype(&cocos2d::CCNode::updateTweenActionInt), &cocos2d::CCNode::updateTweenActionInt>;
}
void register_cocos2d_CCScheduler(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCScheduler");
	t["getTimeScale"] = sol::c_call<decltype(&cocos2d::CCScheduler::getTimeScale), &cocos2d::CCScheduler::getTimeScale>;
	t["setTimeScale"] = sol::c_call<decltype(&cocos2d::CCScheduler::setTimeScale), &cocos2d::CCScheduler::setTimeScale>;
	t["isTargetPaused"] = sol::c_call<decltype(&cocos2d::CCScheduler::isTargetPaused), &cocos2d::CCScheduler::isTargetPaused>;
	t["pauseAllTargets"] = sol::c_call<decltype(&cocos2d::CCScheduler::pauseAllTargets), &cocos2d::CCScheduler::pauseAllTargets>;
	t["pauseAllTargetsWithMinPriority"] = sol::c_call<decltype(&cocos2d::CCScheduler::pauseAllTargetsWithMinPriority), &cocos2d::CCScheduler::pauseAllTargetsWithMinPriority>;
	t["pauseTarget"] = sol::c_call<decltype(&cocos2d::CCScheduler::pauseTarget), &cocos2d::CCScheduler::pauseTarget>;
	t["resumeTarget"] = sol::c_call<decltype(&cocos2d::CCScheduler::resumeTarget), &cocos2d::CCScheduler::resumeTarget>;
	t["resumeTargets"] = sol::c_call<decltype(&cocos2d::CCScheduler::resumeTargets), &cocos2d::CCScheduler::resumeTargets>;
	t["scheduleScriptFunc"] = sol::c_call<decltype(&cocos2d::CCScheduler::scheduleScriptFunc), &cocos2d::CCScheduler::scheduleScriptFunc>;
	t["scheduleUpdateForTarget"] = sol::c_call<decltype(&cocos2d::CCScheduler::scheduleUpdateForTarget), &cocos2d::CCScheduler::scheduleUpdateForTarget>;
	t["unscheduleAll"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleAll), &cocos2d::CCScheduler::unscheduleAll>;
	t["unscheduleAllForTarget"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleAllForTarget), &cocos2d::CCScheduler::unscheduleAllForTarget>;
	t["unscheduleAllWithMinPriority"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleAllWithMinPriority), &cocos2d::CCScheduler::unscheduleAllWithMinPriority>;
	t["unscheduleScriptEntry"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleScriptEntry), &cocos2d::CCScheduler::unscheduleScriptEntry>;
	t["unscheduleSelector"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleSelector), &cocos2d::CCScheduler::unscheduleSelector>;
	t["unscheduleUpdateForTarget"] = sol::c_call<decltype(&cocos2d::CCScheduler::unscheduleUpdateForTarget), &cocos2d::CCScheduler::unscheduleUpdateForTarget>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCScheduler::update), &cocos2d::CCScheduler::update>;
}
void register_cocos2d_CCLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCLayer");
	t["create"] = sol::c_call<decltype(&cocos2d::CCLayer::create), &cocos2d::CCLayer::create>;
	t["getScriptAccelerateHandlerEntry"] = sol::c_call<decltype(&cocos2d::CCLayer::getScriptAccelerateHandlerEntry), &cocos2d::CCLayer::getScriptAccelerateHandlerEntry>;
	t["getScriptKeypadHandlerEntry"] = sol::c_call<decltype(&cocos2d::CCLayer::getScriptKeypadHandlerEntry), &cocos2d::CCLayer::getScriptKeypadHandlerEntry>;
	t["getScriptTouchHandlerEntry"] = sol::c_call<decltype(&cocos2d::CCLayer::getScriptTouchHandlerEntry), &cocos2d::CCLayer::getScriptTouchHandlerEntry>;
	t["registerScriptAccelerateHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::registerScriptAccelerateHandler), &cocos2d::CCLayer::registerScriptAccelerateHandler>;
	t["registerScriptKeypadHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::registerScriptKeypadHandler), &cocos2d::CCLayer::registerScriptKeypadHandler>;
	t["unregisterScriptAccelerateHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::unregisterScriptAccelerateHandler), &cocos2d::CCLayer::unregisterScriptAccelerateHandler>;
	t["unregisterScriptKeypadHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::unregisterScriptKeypadHandler), &cocos2d::CCLayer::unregisterScriptKeypadHandler>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCLayer::init), &cocos2d::CCLayer::init>;
	t["onEnter"] = sol::c_call<decltype(&cocos2d::CCLayer::onEnter), &cocos2d::CCLayer::onEnter>;
	t["onEnterTransitionDidFinish"] = sol::c_call<decltype(&cocos2d::CCLayer::onEnterTransitionDidFinish), &cocos2d::CCLayer::onEnterTransitionDidFinish>;
	t["onExit"] = sol::c_call<decltype(&cocos2d::CCLayer::onExit), &cocos2d::CCLayer::onExit>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&cocos2d::CCLayer::registerWithTouchDispatcher), &cocos2d::CCLayer::registerWithTouchDispatcher>;
	t["registerScriptTouchHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::registerScriptTouchHandler), &cocos2d::CCLayer::registerScriptTouchHandler>;
	t["unregisterScriptTouchHandler"] = sol::c_call<decltype(&cocos2d::CCLayer::unregisterScriptTouchHandler), &cocos2d::CCLayer::unregisterScriptTouchHandler>;
	t["isTouchEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::isTouchEnabled), &cocos2d::CCLayer::isTouchEnabled>;
	t["setTouchEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::setTouchEnabled), &cocos2d::CCLayer::setTouchEnabled>;
	t["setTouchMode"] = sol::c_call<decltype(&cocos2d::CCLayer::setTouchMode), &cocos2d::CCLayer::setTouchMode>;
	t["getTouchMode"] = sol::c_call<decltype(&cocos2d::CCLayer::getTouchMode), &cocos2d::CCLayer::getTouchMode>;
	t["setTouchPriority"] = sol::c_call<decltype(&cocos2d::CCLayer::setTouchPriority), &cocos2d::CCLayer::setTouchPriority>;
	t["getTouchPriority"] = sol::c_call<decltype(&cocos2d::CCLayer::getTouchPriority), &cocos2d::CCLayer::getTouchPriority>;
	t["isAccelerometerEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::isAccelerometerEnabled), &cocos2d::CCLayer::isAccelerometerEnabled>;
	t["setAccelerometerEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::setAccelerometerEnabled), &cocos2d::CCLayer::setAccelerometerEnabled>;
	t["setAccelerometerInterval"] = sol::c_call<decltype(&cocos2d::CCLayer::setAccelerometerInterval), &cocos2d::CCLayer::setAccelerometerInterval>;
	t["isKeypadEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::isKeypadEnabled), &cocos2d::CCLayer::isKeypadEnabled>;
	t["setKeypadEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::setKeypadEnabled), &cocos2d::CCLayer::setKeypadEnabled>;
	t["isKeyboardEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::isKeyboardEnabled), &cocos2d::CCLayer::isKeyboardEnabled>;
	t["setKeyboardEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::setKeyboardEnabled), &cocos2d::CCLayer::setKeyboardEnabled>;
	t["isMouseEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::isMouseEnabled), &cocos2d::CCLayer::isMouseEnabled>;
	t["setMouseEnabled"] = sol::c_call<decltype(&cocos2d::CCLayer::setMouseEnabled), &cocos2d::CCLayer::setMouseEnabled>;
	t["ccTouchBegan"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchBegan), &cocos2d::CCLayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchMoved), &cocos2d::CCLayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchEnded), &cocos2d::CCLayer::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchCancelled), &cocos2d::CCLayer::ccTouchCancelled>;
	t["ccTouchesBegan"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchesBegan), &cocos2d::CCLayer::ccTouchesBegan>;
	t["ccTouchesMoved"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchesMoved), &cocos2d::CCLayer::ccTouchesMoved>;
	t["ccTouchesEnded"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchesEnded), &cocos2d::CCLayer::ccTouchesEnded>;
	t["ccTouchesCancelled"] = sol::c_call<decltype(&cocos2d::CCLayer::ccTouchesCancelled), &cocos2d::CCLayer::ccTouchesCancelled>;
	t["setPreviousPriority"] = sol::c_call<decltype(&cocos2d::CCLayer::setPreviousPriority), &cocos2d::CCLayer::setPreviousPriority>;
	t["getPreviousPriority"] = sol::c_call<decltype(&cocos2d::CCLayer::getPreviousPriority), &cocos2d::CCLayer::getPreviousPriority>;
	t["didAccelerate"] = sol::c_call<decltype(&cocos2d::CCLayer::didAccelerate), &cocos2d::CCLayer::didAccelerate>;
	t["keyBackClicked"] = sol::c_call<decltype(&cocos2d::CCLayer::keyBackClicked), &cocos2d::CCLayer::keyBackClicked>;
	t["keyMenuClicked"] = sol::c_call<decltype(&cocos2d::CCLayer::keyMenuClicked), &cocos2d::CCLayer::keyMenuClicked>;
	t["keyDown"] = sol::c_call<decltype(&cocos2d::CCLayer::keyDown), &cocos2d::CCLayer::keyDown>;
}
void register_cocos2d_CCObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCObject");
	t["createWithCoder"] = sol::c_call<decltype(&cocos2d::CCObject::createWithCoder), &cocos2d::CCObject::createWithCoder>;
	t["getObjType"] = sol::c_call<decltype(&cocos2d::CCObject::getObjType), &cocos2d::CCObject::getObjType>;
	t["setObjType"] = sol::c_call<decltype(&cocos2d::CCObject::setObjType), &cocos2d::CCObject::setObjType>;
	t["autorelease"] = sol::c_call<decltype(&cocos2d::CCObject::autorelease), &cocos2d::CCObject::autorelease>;
	t["copy"] = sol::c_call<decltype(&cocos2d::CCObject::copy), &cocos2d::CCObject::copy>;
	t["isSingleReference"] = sol::c_call<decltype(&cocos2d::CCObject::isSingleReference), &cocos2d::CCObject::isSingleReference>;
	t["release"] = sol::c_call<decltype(&cocos2d::CCObject::release), &cocos2d::CCObject::release>;
	t["retain"] = sol::c_call<decltype(&cocos2d::CCObject::retain), &cocos2d::CCObject::retain>;
	t["retainCount"] = sol::c_call<decltype(&cocos2d::CCObject::retainCount), &cocos2d::CCObject::retainCount>;
	t["getTag"] = sol::c_call<decltype(&cocos2d::CCObject::getTag), &cocos2d::CCObject::getTag>;
	t["isEqual"] = sol::c_call<decltype(&cocos2d::CCObject::isEqual), &cocos2d::CCObject::isEqual>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCObject::update), &cocos2d::CCObject::update>;
	t["encodeWithCoder"] = sol::c_call<decltype(&cocos2d::CCObject::encodeWithCoder), &cocos2d::CCObject::encodeWithCoder>;
	t["canEncode"] = sol::c_call<decltype(&cocos2d::CCObject::canEncode), &cocos2d::CCObject::canEncode>;
	t["setTag"] = sol::c_call<decltype(&cocos2d::CCObject::setTag), &cocos2d::CCObject::setTag>;
}
void register_cocos2d_CCOrbitCamera(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCOrbitCamera");
	t["create"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::create), &cocos2d::CCOrbitCamera::create>;
	t["initWithDuration"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::initWithDuration), &cocos2d::CCOrbitCamera::initWithDuration>;
	t["sphericalRadius"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::sphericalRadius), &cocos2d::CCOrbitCamera::sphericalRadius>;
	t["copyWithZone"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::copyWithZone), &cocos2d::CCOrbitCamera::copyWithZone>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::update), &cocos2d::CCOrbitCamera::update>;
	t["startWithTarget"] = sol::c_call<decltype(&cocos2d::CCOrbitCamera::startWithTarget), &cocos2d::CCOrbitCamera::startWithTarget>;
}
void register_cocos2d_CCLayerColor(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCLayerColor");
	t["setVertices"] = sol::c_call<decltype(&cocos2d::CCLayerColor::setVertices), &cocos2d::CCLayerColor::setVertices>;
	t["addToVertices"] = sol::c_call<decltype(&cocos2d::CCLayerColor::addToVertices), &cocos2d::CCLayerColor::addToVertices>;
	t["changeHeight"] = sol::c_call<decltype(&cocos2d::CCLayerColor::changeHeight), &cocos2d::CCLayerColor::changeHeight>;
	t["changeWidth"] = sol::c_call<decltype(&cocos2d::CCLayerColor::changeWidth), &cocos2d::CCLayerColor::changeWidth>;
	t["changeWidthAndHeight"] = sol::c_call<decltype(&cocos2d::CCLayerColor::changeWidthAndHeight), &cocos2d::CCLayerColor::changeWidthAndHeight>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCLayerColor::init), &cocos2d::CCLayerColor::init>;
	t["setContentSize"] = sol::c_call<decltype(&cocos2d::CCLayerColor::setContentSize), &cocos2d::CCLayerColor::setContentSize>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCLayerColor::draw), &cocos2d::CCLayerColor::draw>;
	t["setColor"] = sol::c_call<decltype(&cocos2d::CCLayerColor::setColor), &cocos2d::CCLayerColor::setColor>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCLayerColor::setOpacity), &cocos2d::CCLayerColor::setOpacity>;
	t["setBlendFunc"] = sol::c_call<decltype(&cocos2d::CCLayerColor::setBlendFunc), &cocos2d::CCLayerColor::setBlendFunc>;
	t["getBlendFunc"] = sol::c_call<decltype(&cocos2d::CCLayerColor::getBlendFunc), &cocos2d::CCLayerColor::getBlendFunc>;
}
void register_cocos2d_CCLayerRGBA(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCLayerRGBA");
	t["create"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::create), &cocos2d::CCLayerRGBA::create>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::init), &cocos2d::CCLayerRGBA::init>;
	t["setColor"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::setColor), &cocos2d::CCLayerRGBA::setColor>;
	t["getColor"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::getColor), &cocos2d::CCLayerRGBA::getColor>;
	t["getDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::getDisplayedColor), &cocos2d::CCLayerRGBA::getDisplayedColor>;
	t["getDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::getDisplayedOpacity), &cocos2d::CCLayerRGBA::getDisplayedOpacity>;
	t["getOpacity"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::getOpacity), &cocos2d::CCLayerRGBA::getOpacity>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::setOpacity), &cocos2d::CCLayerRGBA::setOpacity>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::setOpacityModifyRGB), &cocos2d::CCLayerRGBA::setOpacityModifyRGB>;
	t["isOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::isOpacityModifyRGB), &cocos2d::CCLayerRGBA::isOpacityModifyRGB>;
	t["isCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::isCascadeColorEnabled), &cocos2d::CCLayerRGBA::isCascadeColorEnabled>;
	t["setCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::setCascadeColorEnabled), &cocos2d::CCLayerRGBA::setCascadeColorEnabled>;
	t["updateDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::updateDisplayedColor), &cocos2d::CCLayerRGBA::updateDisplayedColor>;
	t["isCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::isCascadeOpacityEnabled), &cocos2d::CCLayerRGBA::isCascadeOpacityEnabled>;
	t["setCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::setCascadeOpacityEnabled), &cocos2d::CCLayerRGBA::setCascadeOpacityEnabled>;
	t["updateDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCLayerRGBA::updateDisplayedOpacity), &cocos2d::CCLayerRGBA::updateDisplayedOpacity>;
}
void register_cocos2d_CCMouseDispatcher(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMouseDispatcher");
	t["addDelegate"] = sol::c_call<decltype(&cocos2d::CCMouseDispatcher::addDelegate), &cocos2d::CCMouseDispatcher::addDelegate>;
	t["dispatchScrollMSG"] = sol::c_call<decltype(&cocos2d::CCMouseDispatcher::dispatchScrollMSG), &cocos2d::CCMouseDispatcher::dispatchScrollMSG>;
	t["forceAddDelegate"] = sol::c_call<decltype(&cocos2d::CCMouseDispatcher::forceAddDelegate), &cocos2d::CCMouseDispatcher::forceAddDelegate>;
	t["forceRemoveDelegate"] = sol::c_call<decltype(&cocos2d::CCMouseDispatcher::forceRemoveDelegate), &cocos2d::CCMouseDispatcher::forceRemoveDelegate>;
	t["removeDelegate"] = sol::c_call<decltype(&cocos2d::CCMouseDispatcher::removeDelegate), &cocos2d::CCMouseDispatcher::removeDelegate>;
}
void register_cocos2d_CCTouchDispatcher(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCTouchDispatcher");
	t["init"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::init), &cocos2d::CCTouchDispatcher::init>;
	t["getTargetPrio"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::getTargetPrio), &cocos2d::CCTouchDispatcher::getTargetPrio>;
	t["setDispatchEvents"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::setDispatchEvents), &cocos2d::CCTouchDispatcher::setDispatchEvents>;
	t["setPriority"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::setPriority), &cocos2d::CCTouchDispatcher::setPriority>;
	t["addPrioTargetedDelegate"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::addPrioTargetedDelegate), &cocos2d::CCTouchDispatcher::addPrioTargetedDelegate>;
	t["addStandardDelegate"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::addStandardDelegate), &cocos2d::CCTouchDispatcher::addStandardDelegate>;
	t["addTargetedDelegate"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::addTargetedDelegate), &cocos2d::CCTouchDispatcher::addTargetedDelegate>;
	t["isDispatchEvents"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::isDispatchEvents), &cocos2d::CCTouchDispatcher::isDispatchEvents>;
	t["isUsingForcePrio"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::isUsingForcePrio), &cocos2d::CCTouchDispatcher::isUsingForcePrio>;
	t["registerForcePrio"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::registerForcePrio), &cocos2d::CCTouchDispatcher::registerForcePrio>;
	t["removeAllDelegates"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::removeAllDelegates), &cocos2d::CCTouchDispatcher::removeAllDelegates>;
	t["removeDelegate"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::removeDelegate), &cocos2d::CCTouchDispatcher::removeDelegate>;
	t["touches"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::touches), &cocos2d::CCTouchDispatcher::touches>;
	t["unregisterForcePrio"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::unregisterForcePrio), &cocos2d::CCTouchDispatcher::unregisterForcePrio>;
	t["touchesBegan"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::touchesBegan), &cocos2d::CCTouchDispatcher::touchesBegan>;
	t["touchesMoved"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::touchesMoved), &cocos2d::CCTouchDispatcher::touchesMoved>;
	t["touchesEnded"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::touchesEnded), &cocos2d::CCTouchDispatcher::touchesEnded>;
	t["touchesCancelled"] = sol::c_call<decltype(&cocos2d::CCTouchDispatcher::touchesCancelled), &cocos2d::CCTouchDispatcher::touchesCancelled>;
}
void register_cocos2d_CCEGLView(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCEGLView");
	t["swapBuffers"] = sol::c_call<decltype(&cocos2d::CCEGLView::swapBuffers), &cocos2d::CCEGLView::swapBuffers>;
	t["toggleFullScreen"] = sol::c_call<decltype(&cocos2d::CCEGLView::toggleFullScreen), &cocos2d::CCEGLView::toggleFullScreen>;
}
void register_cocos2d_CCIMEDispatcher(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCIMEDispatcher");
	t["sharedDispatcher"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::sharedDispatcher), &cocos2d::CCIMEDispatcher::sharedDispatcher>;
	t["dispatchDeleteBackward"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::dispatchDeleteBackward), &cocos2d::CCIMEDispatcher::dispatchDeleteBackward>;
	t["dispatchDeleteForward"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::dispatchDeleteForward), &cocos2d::CCIMEDispatcher::dispatchDeleteForward>;
	t["dispatchInsertText"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::dispatchInsertText), &cocos2d::CCIMEDispatcher::dispatchInsertText>;
	t["getContentText"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::getContentText), &cocos2d::CCIMEDispatcher::getContentText>;
	t["hasDelegate"] = sol::c_call<decltype(&cocos2d::CCIMEDispatcher::hasDelegate), &cocos2d::CCIMEDispatcher::hasDelegate>;
}
void register_cocos2d_CCKeyboardDispatcher(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCKeyboardDispatcher");
	t["convertKeyCode"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::convertKeyCode), &cocos2d::CCKeyboardDispatcher::convertKeyCode>;
	t["getAltKeyPressed"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::getAltKeyPressed), &cocos2d::CCKeyboardDispatcher::getAltKeyPressed>;
	t["getBlockRepeat"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::getBlockRepeat), &cocos2d::CCKeyboardDispatcher::getBlockRepeat>;
	t["getCommandKeyPressed"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::getCommandKeyPressed), &cocos2d::CCKeyboardDispatcher::getCommandKeyPressed>;
	t["getControlKeyPressed"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::getControlKeyPressed), &cocos2d::CCKeyboardDispatcher::getControlKeyPressed>;
	t["getShiftKeyPressed"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::getShiftKeyPressed), &cocos2d::CCKeyboardDispatcher::getShiftKeyPressed>;
	t["setBlockRepeat"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::setBlockRepeat), &cocos2d::CCKeyboardDispatcher::setBlockRepeat>;
	t["addDelegate"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::addDelegate), &cocos2d::CCKeyboardDispatcher::addDelegate>;
	t["dispatchKeyboardMSG"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG), &cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG>;
	t["forceAddDelegate"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::forceAddDelegate), &cocos2d::CCKeyboardDispatcher::forceAddDelegate>;
	t["forceRemoveDelegate"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::forceRemoveDelegate), &cocos2d::CCKeyboardDispatcher::forceRemoveDelegate>;
	t["keyToString"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::keyToString), &cocos2d::CCKeyboardDispatcher::keyToString>;
	t["removeDelegate"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::removeDelegate), &cocos2d::CCKeyboardDispatcher::removeDelegate>;
	t["updateModifierKeys"] = sol::c_call<decltype(&cocos2d::CCKeyboardDispatcher::updateModifierKeys), &cocos2d::CCKeyboardDispatcher::updateModifierKeys>;
}
void register_cocos2d_CCDirector(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCDirector");
	t["sharedDirector"] = sol::c_call<decltype(&cocos2d::CCDirector::sharedDirector), &cocos2d::CCDirector::sharedDirector>;
	t["getActualDeltaTime"] = sol::c_call<decltype(&cocos2d::CCDirector::getActualDeltaTime), &cocos2d::CCDirector::getActualDeltaTime>;
	t["getAnimationInterval"] = sol::c_call<decltype(&cocos2d::CCDirector::getAnimationInterval), &cocos2d::CCDirector::getAnimationInterval>;
	t["getContentScaleFactor"] = sol::c_call<decltype(&cocos2d::CCDirector::getContentScaleFactor), &cocos2d::CCDirector::getContentScaleFactor>;
	t["getDelegate"] = sol::c_call<decltype(&cocos2d::CCDirector::getDelegate), &cocos2d::CCDirector::getDelegate>;
	t["getDontCallWillSwitch"] = sol::c_call<decltype(&cocos2d::CCDirector::getDontCallWillSwitch), &cocos2d::CCDirector::getDontCallWillSwitch>;
	t["getIsTransitioning"] = sol::c_call<decltype(&cocos2d::CCDirector::getIsTransitioning), &cocos2d::CCDirector::getIsTransitioning>;
	t["getLoadedTextureQuality"] = sol::c_call<decltype(&cocos2d::CCDirector::getLoadedTextureQuality), &cocos2d::CCDirector::getLoadedTextureQuality>;
	t["getNextScene"] = sol::c_call<decltype(&cocos2d::CCDirector::getNextScene), &cocos2d::CCDirector::getNextScene>;
	t["getNotificationNode"] = sol::c_call<decltype(&cocos2d::CCDirector::getNotificationNode), &cocos2d::CCDirector::getNotificationNode>;
	t["getOpenGLView"] = sol::c_call<decltype(&cocos2d::CCDirector::getOpenGLView), &cocos2d::CCDirector::getOpenGLView>;
	t["getProjection"] = sol::c_call<decltype(&cocos2d::CCDirector::getProjection), &cocos2d::CCDirector::getProjection>;
	t["getRunningScene"] = sol::c_call<decltype(&cocos2d::CCDirector::getRunningScene), &cocos2d::CCDirector::getRunningScene>;
	t["getSceneReference"] = sol::c_call<decltype(&cocos2d::CCDirector::getSceneReference), &cocos2d::CCDirector::getSceneReference>;
	t["getScreenBottom"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenBottom), &cocos2d::CCDirector::getScreenBottom>;
	t["getScreenLeft"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenLeft), &cocos2d::CCDirector::getScreenLeft>;
	t["getScreenRight"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenRight), &cocos2d::CCDirector::getScreenRight>;
	t["getScreenScaleFactor"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenScaleFactor), &cocos2d::CCDirector::getScreenScaleFactor>;
	t["getScreenScaleFactorH"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenScaleFactorH), &cocos2d::CCDirector::getScreenScaleFactorH>;
	t["getScreenScaleFactorMax"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenScaleFactorMax), &cocos2d::CCDirector::getScreenScaleFactorMax>;
	t["getScreenScaleFactorW"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenScaleFactorW), &cocos2d::CCDirector::getScreenScaleFactorW>;
	t["getScreenTop"] = sol::c_call<decltype(&cocos2d::CCDirector::getScreenTop), &cocos2d::CCDirector::getScreenTop>;
	t["getSecondsPerFrame"] = sol::c_call<decltype(&cocos2d::CCDirector::getSecondsPerFrame), &cocos2d::CCDirector::getSecondsPerFrame>;
	t["getSmoothFix"] = sol::c_call<decltype(&cocos2d::CCDirector::getSmoothFix), &cocos2d::CCDirector::getSmoothFix>;
	t["getSmoothFixCheck"] = sol::c_call<decltype(&cocos2d::CCDirector::getSmoothFixCheck), &cocos2d::CCDirector::getSmoothFixCheck>;
	t["getSmoothFixCounter"] = sol::c_call<decltype(&cocos2d::CCDirector::getSmoothFixCounter), &cocos2d::CCDirector::getSmoothFixCounter>;
	t["getTotalFrames"] = sol::c_call<decltype(&cocos2d::CCDirector::getTotalFrames), &cocos2d::CCDirector::getTotalFrames>;
	t["getVisibleOrigin"] = sol::c_call<decltype(&cocos2d::CCDirector::getVisibleOrigin), &cocos2d::CCDirector::getVisibleOrigin>;
	t["getVisibleSize"] = sol::c_call<decltype(&cocos2d::CCDirector::getVisibleSize), &cocos2d::CCDirector::getVisibleSize>;
	t["getWinSize"] = sol::c_call<decltype(&cocos2d::CCDirector::getWinSize), &cocos2d::CCDirector::getWinSize>;
	t["getWinSizeInPixels"] = sol::c_call<decltype(&cocos2d::CCDirector::getWinSizeInPixels), &cocos2d::CCDirector::getWinSizeInPixels>;
	t["getZEye"] = sol::c_call<decltype(&cocos2d::CCDirector::getZEye), &cocos2d::CCDirector::getZEye>;
	t["setActualDeltaTime"] = sol::c_call<decltype(&cocos2d::CCDirector::setActualDeltaTime), &cocos2d::CCDirector::setActualDeltaTime>;
	t["setAlphaBlending"] = sol::c_call<decltype(&cocos2d::CCDirector::setAlphaBlending), &cocos2d::CCDirector::setAlphaBlending>;
	t["setContentScaleFactor"] = sol::c_call<decltype(&cocos2d::CCDirector::setContentScaleFactor), &cocos2d::CCDirector::setContentScaleFactor>;
	t["setDefaultValues"] = sol::c_call<decltype(&cocos2d::CCDirector::setDefaultValues), &cocos2d::CCDirector::setDefaultValues>;
	t["setDelegate"] = sol::c_call<decltype(&cocos2d::CCDirector::setDelegate), &cocos2d::CCDirector::setDelegate>;
	t["setDeltaTime"] = sol::c_call<decltype(&cocos2d::CCDirector::setDeltaTime), &cocos2d::CCDirector::setDeltaTime>;
	t["setDepthTest"] = sol::c_call<decltype(&cocos2d::CCDirector::setDepthTest), &cocos2d::CCDirector::setDepthTest>;
	t["setDisplayStats"] = sol::c_call<decltype(&cocos2d::CCDirector::setDisplayStats), &cocos2d::CCDirector::setDisplayStats>;
	t["setDontCallWillSwitch"] = sol::c_call<decltype(&cocos2d::CCDirector::setDontCallWillSwitch), &cocos2d::CCDirector::setDontCallWillSwitch>;
	t["setGLDefaultValues"] = sol::c_call<decltype(&cocos2d::CCDirector::setGLDefaultValues), &cocos2d::CCDirector::setGLDefaultValues>;
	t["setNextDeltaTimeZero"] = sol::c_call<decltype(&cocos2d::CCDirector::setNextDeltaTimeZero), &cocos2d::CCDirector::setNextDeltaTimeZero>;
	t["setNotificationNode"] = sol::c_call<decltype(&cocos2d::CCDirector::setNotificationNode), &cocos2d::CCDirector::setNotificationNode>;
	t["setOpenGLView"] = sol::c_call<decltype(&cocos2d::CCDirector::setOpenGLView), &cocos2d::CCDirector::setOpenGLView>;
	t["setProjection"] = sol::c_call<decltype(&cocos2d::CCDirector::setProjection), &cocos2d::CCDirector::setProjection>;
	t["setSceneReference"] = sol::c_call<decltype(&cocos2d::CCDirector::setSceneReference), &cocos2d::CCDirector::setSceneReference>;
	t["setSmoothFix"] = sol::c_call<decltype(&cocos2d::CCDirector::setSmoothFix), &cocos2d::CCDirector::setSmoothFix>;
	t["setSmoothFixCheck"] = sol::c_call<decltype(&cocos2d::CCDirector::setSmoothFixCheck), &cocos2d::CCDirector::setSmoothFixCheck>;
	t["setViewport"] = sol::c_call<decltype(&cocos2d::CCDirector::setViewport), &cocos2d::CCDirector::setViewport>;
	t["applySmoothFix"] = sol::c_call<decltype(&cocos2d::CCDirector::applySmoothFix), &cocos2d::CCDirector::applySmoothFix>;
	t["checkSceneReference"] = sol::c_call<decltype(&cocos2d::CCDirector::checkSceneReference), &cocos2d::CCDirector::checkSceneReference>;
	t["convertToGL"] = sol::c_call<decltype(&cocos2d::CCDirector::convertToGL), &cocos2d::CCDirector::convertToGL>;
	t["convertToUI"] = sol::c_call<decltype(&cocos2d::CCDirector::convertToUI), &cocos2d::CCDirector::convertToUI>;
	t["drawScene"] = sol::c_call<decltype(&cocos2d::CCDirector::drawScene), &cocos2d::CCDirector::drawScene>;
	t["end"] = sol::c_call<decltype(&cocos2d::CCDirector::end), &cocos2d::CCDirector::end>;
	t["isDisplayStats"] = sol::c_call<decltype(&cocos2d::CCDirector::isDisplayStats), &cocos2d::CCDirector::isDisplayStats>;
	t["isNextDeltaTimeZero"] = sol::c_call<decltype(&cocos2d::CCDirector::isNextDeltaTimeZero), &cocos2d::CCDirector::isNextDeltaTimeZero>;
	t["isPaused"] = sol::c_call<decltype(&cocos2d::CCDirector::isPaused), &cocos2d::CCDirector::isPaused>;
	t["isSendCleanupToScene"] = sol::c_call<decltype(&cocos2d::CCDirector::isSendCleanupToScene), &cocos2d::CCDirector::isSendCleanupToScene>;
	t["levelForSceneInStack"] = sol::c_call<decltype(&cocos2d::CCDirector::levelForSceneInStack), &cocos2d::CCDirector::levelForSceneInStack>;
	t["pause"] = sol::c_call<decltype(&cocos2d::CCDirector::pause), &cocos2d::CCDirector::pause>;
	t["popScene"] = sol::c_call<decltype(&cocos2d::CCDirector::popScene), &cocos2d::CCDirector::popScene>;
	t["popSceneWithTransition"] = sol::c_call<decltype(&cocos2d::CCDirector::popSceneWithTransition), &cocos2d::CCDirector::popSceneWithTransition>;
	t["popToRootScene"] = sol::c_call<decltype(&cocos2d::CCDirector::popToRootScene), &cocos2d::CCDirector::popToRootScene>;
	t["popToSceneInStack"] = sol::c_call<decltype(&cocos2d::CCDirector::popToSceneInStack), &cocos2d::CCDirector::popToSceneInStack>;
	t["popToSceneStackLevel"] = sol::c_call<decltype(&cocos2d::CCDirector::popToSceneStackLevel), &cocos2d::CCDirector::popToSceneStackLevel>;
	t["purgeCachedData"] = sol::c_call<decltype(&cocos2d::CCDirector::purgeCachedData), &cocos2d::CCDirector::purgeCachedData>;
	t["pushScene"] = sol::c_call<decltype(&cocos2d::CCDirector::pushScene), &cocos2d::CCDirector::pushScene>;
	t["removeStatsLabel"] = sol::c_call<decltype(&cocos2d::CCDirector::removeStatsLabel), &cocos2d::CCDirector::removeStatsLabel>;
	t["replaceScene"] = sol::c_call<decltype(&cocos2d::CCDirector::replaceScene), &cocos2d::CCDirector::replaceScene>;
	t["resetSmoothFixCounter"] = sol::c_call<decltype(&cocos2d::CCDirector::resetSmoothFixCounter), &cocos2d::CCDirector::resetSmoothFixCounter>;
	t["reshapeProjection"] = sol::c_call<decltype(&cocos2d::CCDirector::reshapeProjection), &cocos2d::CCDirector::reshapeProjection>;
	t["resume"] = sol::c_call<decltype(&cocos2d::CCDirector::resume), &cocos2d::CCDirector::resume>;
	t["runWithScene"] = sol::c_call<decltype(&cocos2d::CCDirector::runWithScene), &cocos2d::CCDirector::runWithScene>;
	t["sceneCount"] = sol::c_call<decltype(&cocos2d::CCDirector::sceneCount), &cocos2d::CCDirector::sceneCount>;
	t["setupScreenScale"] = sol::c_call<decltype(&cocos2d::CCDirector::setupScreenScale), &cocos2d::CCDirector::setupScreenScale>;
	t["showFPSLabel"] = sol::c_call<decltype(&cocos2d::CCDirector::showFPSLabel), &cocos2d::CCDirector::showFPSLabel>;
	t["toggleShowFPS"] = sol::c_call<decltype(&cocos2d::CCDirector::toggleShowFPS), &cocos2d::CCDirector::toggleShowFPS>;
	t["updateContentScale"] = sol::c_call<decltype(&cocos2d::CCDirector::updateContentScale), &cocos2d::CCDirector::updateContentScale>;
	t["updateScreenScale"] = sol::c_call<decltype(&cocos2d::CCDirector::updateScreenScale), &cocos2d::CCDirector::updateScreenScale>;
	t["willSwitchToScene"] = sol::c_call<decltype(&cocos2d::CCDirector::willSwitchToScene), &cocos2d::CCDirector::willSwitchToScene>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCDirector::init), &cocos2d::CCDirector::init>;
	t["getScheduler"] = sol::c_call<decltype(&cocos2d::CCDirector::getScheduler), &cocos2d::CCDirector::getScheduler>;
	t["setScheduler"] = sol::c_call<decltype(&cocos2d::CCDirector::setScheduler), &cocos2d::CCDirector::setScheduler>;
	t["getActionManager"] = sol::c_call<decltype(&cocos2d::CCDirector::getActionManager), &cocos2d::CCDirector::getActionManager>;
	t["setActionManager"] = sol::c_call<decltype(&cocos2d::CCDirector::setActionManager), &cocos2d::CCDirector::setActionManager>;
	t["getTouchDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::getTouchDispatcher), &cocos2d::CCDirector::getTouchDispatcher>;
	t["setTouchDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::setTouchDispatcher), &cocos2d::CCDirector::setTouchDispatcher>;
	t["getKeypadDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::getKeypadDispatcher), &cocos2d::CCDirector::getKeypadDispatcher>;
	t["setKeypadDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::setKeypadDispatcher), &cocos2d::CCDirector::setKeypadDispatcher>;
	t["getKeyboardDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::getKeyboardDispatcher), &cocos2d::CCDirector::getKeyboardDispatcher>;
	t["setKeyboardDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::setKeyboardDispatcher), &cocos2d::CCDirector::setKeyboardDispatcher>;
	t["getMouseDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::getMouseDispatcher), &cocos2d::CCDirector::getMouseDispatcher>;
	t["setMouseDispatcher"] = sol::c_call<decltype(&cocos2d::CCDirector::setMouseDispatcher), &cocos2d::CCDirector::setMouseDispatcher>;
	t["getAccelerometer"] = sol::c_call<decltype(&cocos2d::CCDirector::getAccelerometer), &cocos2d::CCDirector::getAccelerometer>;
	t["setAccelerometer"] = sol::c_call<decltype(&cocos2d::CCDirector::setAccelerometer), &cocos2d::CCDirector::setAccelerometer>;
	t["getDeltaTime"] = sol::c_call<decltype(&cocos2d::CCDirector::getDeltaTime), &cocos2d::CCDirector::getDeltaTime>;
	t["setSceneDelegate"] = sol::c_call<decltype(&cocos2d::CCDirector::setSceneDelegate), &cocos2d::CCDirector::setSceneDelegate>;
	t["getSceneDelegate"] = sol::c_call<decltype(&cocos2d::CCDirector::getSceneDelegate), &cocos2d::CCDirector::getSceneDelegate>;
}
void register_cocos2d_CCNodeRGBA(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCNodeRGBA");
	t["create"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::create), &cocos2d::CCNodeRGBA::create>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::init), &cocos2d::CCNodeRGBA::init>;
	t["setColor"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::setColor), &cocos2d::CCNodeRGBA::setColor>;
	t["getColor"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::getColor), &cocos2d::CCNodeRGBA::getColor>;
	t["getDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::getDisplayedColor), &cocos2d::CCNodeRGBA::getDisplayedColor>;
	t["getDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::getDisplayedOpacity), &cocos2d::CCNodeRGBA::getDisplayedOpacity>;
	t["getOpacity"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::getOpacity), &cocos2d::CCNodeRGBA::getOpacity>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::setOpacity), &cocos2d::CCNodeRGBA::setOpacity>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::setOpacityModifyRGB), &cocos2d::CCNodeRGBA::setOpacityModifyRGB>;
	t["isOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::isOpacityModifyRGB), &cocos2d::CCNodeRGBA::isOpacityModifyRGB>;
	t["isCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::isCascadeColorEnabled), &cocos2d::CCNodeRGBA::isCascadeColorEnabled>;
	t["setCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::setCascadeColorEnabled), &cocos2d::CCNodeRGBA::setCascadeColorEnabled>;
	t["updateDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::updateDisplayedColor), &cocos2d::CCNodeRGBA::updateDisplayedColor>;
	t["isCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::isCascadeOpacityEnabled), &cocos2d::CCNodeRGBA::isCascadeOpacityEnabled>;
	t["setCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::setCascadeOpacityEnabled), &cocos2d::CCNodeRGBA::setCascadeOpacityEnabled>;
	t["updateDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCNodeRGBA::updateDisplayedOpacity), &cocos2d::CCNodeRGBA::updateDisplayedOpacity>;
}
void register_cocos2d_CCSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCSprite");
	t["createWithSpriteFrame"] = sol::c_call<decltype(&cocos2d::CCSprite::createWithSpriteFrame), &cocos2d::CCSprite::createWithSpriteFrame>;
	t["createWithSpriteFrameName"] = sol::c_call<decltype(&cocos2d::CCSprite::createWithSpriteFrameName), &cocos2d::CCSprite::createWithSpriteFrameName>;
	t["getAtlasIndex"] = sol::c_call<decltype(&cocos2d::CCSprite::getAtlasIndex), &cocos2d::CCSprite::getAtlasIndex>;
	t["getBlVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::getBlVertexMod), &cocos2d::CCSprite::getBlVertexMod>;
	t["getBrVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::getBrVertexMod), &cocos2d::CCSprite::getBrVertexMod>;
	t["getDontDraw"] = sol::c_call<decltype(&cocos2d::CCSprite::getDontDraw), &cocos2d::CCSprite::getDontDraw>;
	t["getOffsetPosition"] = sol::c_call<decltype(&cocos2d::CCSprite::getOffsetPosition), &cocos2d::CCSprite::getOffsetPosition>;
	t["getQuad"] = sol::c_call<decltype(&cocos2d::CCSprite::getQuad), &cocos2d::CCSprite::getQuad>;
	t["getTextureAtlas"] = sol::c_call<decltype(&cocos2d::CCSprite::getTextureAtlas), &cocos2d::CCSprite::getTextureAtlas>;
	t["getTextureRect"] = sol::c_call<decltype(&cocos2d::CCSprite::getTextureRect), &cocos2d::CCSprite::getTextureRect>;
	t["getTlVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::getTlVertexMod), &cocos2d::CCSprite::getTlVertexMod>;
	t["getTrVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::getTrVertexMod), &cocos2d::CCSprite::getTrVertexMod>;
	t["getUnflippedOffsetPosition"] = sol::c_call<decltype(&cocos2d::CCSprite::getUnflippedOffsetPosition), &cocos2d::CCSprite::getUnflippedOffsetPosition>;
	t["getUseVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::getUseVertexMod), &cocos2d::CCSprite::getUseVertexMod>;
	t["setAtlasIndex"] = sol::c_call<decltype(&cocos2d::CCSprite::setAtlasIndex), &cocos2d::CCSprite::setAtlasIndex>;
	t["setBlVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::setBlVertexMod), &cocos2d::CCSprite::setBlVertexMod>;
	t["setBrVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::setBrVertexMod), &cocos2d::CCSprite::setBrVertexMod>;
	t["setDontDraw"] = sol::c_call<decltype(&cocos2d::CCSprite::setDontDraw), &cocos2d::CCSprite::setDontDraw>;
	t["setFlipX"] = sol::c_call<decltype(&cocos2d::CCSprite::setFlipX), &cocos2d::CCSprite::setFlipX>;
	t["setFlipY"] = sol::c_call<decltype(&cocos2d::CCSprite::setFlipY), &cocos2d::CCSprite::setFlipY>;
	t["setTextureAtlas"] = sol::c_call<decltype(&cocos2d::CCSprite::setTextureAtlas), &cocos2d::CCSprite::setTextureAtlas>;
	t["setTlVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::setTlVertexMod), &cocos2d::CCSprite::setTlVertexMod>;
	t["setTrVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::setTrVertexMod), &cocos2d::CCSprite::setTrVertexMod>;
	t["setUseVertexMod"] = sol::c_call<decltype(&cocos2d::CCSprite::setUseVertexMod), &cocos2d::CCSprite::setUseVertexMod>;
	t["isFlipX"] = sol::c_call<decltype(&cocos2d::CCSprite::isFlipX), &cocos2d::CCSprite::isFlipX>;
	t["isFlipY"] = sol::c_call<decltype(&cocos2d::CCSprite::isFlipY), &cocos2d::CCSprite::isFlipY>;
	t["isTextureRectRotated"] = sol::c_call<decltype(&cocos2d::CCSprite::isTextureRectRotated), &cocos2d::CCSprite::isTextureRectRotated>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCSprite::init), &cocos2d::CCSprite::init>;
	t["setVertexZ"] = sol::c_call<decltype(&cocos2d::CCSprite::setVertexZ), &cocos2d::CCSprite::setVertexZ>;
	t["setScaleX"] = sol::c_call<decltype(&cocos2d::CCSprite::setScaleX), &cocos2d::CCSprite::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&cocos2d::CCSprite::setScaleY), &cocos2d::CCSprite::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&cocos2d::CCSprite::setScale), &cocos2d::CCSprite::setScale>;
	t["setPosition"] = sol::c_call<decltype(&cocos2d::CCSprite::setPosition), &cocos2d::CCSprite::setPosition>;
	t["setSkewX"] = sol::c_call<decltype(&cocos2d::CCSprite::setSkewX), &cocos2d::CCSprite::setSkewX>;
	t["setSkewY"] = sol::c_call<decltype(&cocos2d::CCSprite::setSkewY), &cocos2d::CCSprite::setSkewY>;
	t["setAnchorPoint"] = sol::c_call<decltype(&cocos2d::CCSprite::setAnchorPoint), &cocos2d::CCSprite::setAnchorPoint>;
	t["setVisible"] = sol::c_call<decltype(&cocos2d::CCSprite::setVisible), &cocos2d::CCSprite::setVisible>;
	t["setRotation"] = sol::c_call<decltype(&cocos2d::CCSprite::setRotation), &cocos2d::CCSprite::setRotation>;
	t["setRotationX"] = sol::c_call<decltype(&cocos2d::CCSprite::setRotationX), &cocos2d::CCSprite::setRotationX>;
	t["setRotationY"] = sol::c_call<decltype(&cocos2d::CCSprite::setRotationY), &cocos2d::CCSprite::setRotationY>;
	t["ignoreAnchorPointForPosition"] = sol::c_call<decltype(&cocos2d::CCSprite::ignoreAnchorPointForPosition), &cocos2d::CCSprite::ignoreAnchorPointForPosition>;
	t["removeChild"] = sol::c_call<decltype(&cocos2d::CCSprite::removeChild), &cocos2d::CCSprite::removeChild>;
	t["removeAllChildrenWithCleanup"] = sol::c_call<decltype(&cocos2d::CCSprite::removeAllChildrenWithCleanup), &cocos2d::CCSprite::removeAllChildrenWithCleanup>;
	t["reorderChild"] = sol::c_call<decltype(&cocos2d::CCSprite::reorderChild), &cocos2d::CCSprite::reorderChild>;
	t["sortAllChildren"] = sol::c_call<decltype(&cocos2d::CCSprite::sortAllChildren), &cocos2d::CCSprite::sortAllChildren>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCSprite::draw), &cocos2d::CCSprite::draw>;
	t["updateTransform"] = sol::c_call<decltype(&cocos2d::CCSprite::updateTransform), &cocos2d::CCSprite::updateTransform>;
	t["initWithSpriteFrame"] = sol::c_call<decltype(&cocos2d::CCSprite::initWithSpriteFrame), &cocos2d::CCSprite::initWithSpriteFrame>;
	t["initWithSpriteFrameName"] = sol::c_call<decltype(&cocos2d::CCSprite::initWithSpriteFrameName), &cocos2d::CCSprite::initWithSpriteFrameName>;
	t["setChildColor"] = sol::c_call<decltype(&cocos2d::CCSprite::setChildColor), &cocos2d::CCSprite::setChildColor>;
	t["setChildOpacity"] = sol::c_call<decltype(&cocos2d::CCSprite::setChildOpacity), &cocos2d::CCSprite::setChildOpacity>;
	t["getBatchNode"] = sol::c_call<decltype(&cocos2d::CCSprite::getBatchNode), &cocos2d::CCSprite::getBatchNode>;
	t["setBatchNode"] = sol::c_call<decltype(&cocos2d::CCSprite::setBatchNode), &cocos2d::CCSprite::setBatchNode>;
	t["refreshTextureRect"] = sol::c_call<decltype(&cocos2d::CCSprite::refreshTextureRect), &cocos2d::CCSprite::refreshTextureRect>;
	t["setVertexRect"] = sol::c_call<decltype(&cocos2d::CCSprite::setVertexRect), &cocos2d::CCSprite::setVertexRect>;
	t["setDisplayFrame"] = sol::c_call<decltype(&cocos2d::CCSprite::setDisplayFrame), &cocos2d::CCSprite::setDisplayFrame>;
	t["isFrameDisplayed"] = sol::c_call<decltype(&cocos2d::CCSprite::isFrameDisplayed), &cocos2d::CCSprite::isFrameDisplayed>;
	t["displayFrame"] = sol::c_call<decltype(&cocos2d::CCSprite::displayFrame), &cocos2d::CCSprite::displayFrame>;
	t["setDisplayFrameWithAnimationName"] = sol::c_call<decltype(&cocos2d::CCSprite::setDisplayFrameWithAnimationName), &cocos2d::CCSprite::setDisplayFrameWithAnimationName>;
	t["isDirty"] = sol::c_call<decltype(&cocos2d::CCSprite::isDirty), &cocos2d::CCSprite::isDirty>;
	t["setDirty"] = sol::c_call<decltype(&cocos2d::CCSprite::setDirty), &cocos2d::CCSprite::setDirty>;
	t["setColor"] = sol::c_call<decltype(&cocos2d::CCSprite::setColor), &cocos2d::CCSprite::setColor>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCSprite::setOpacity), &cocos2d::CCSprite::setOpacity>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCSprite::setOpacityModifyRGB), &cocos2d::CCSprite::setOpacityModifyRGB>;
	t["isOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCSprite::isOpacityModifyRGB), &cocos2d::CCSprite::isOpacityModifyRGB>;
	t["updateDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCSprite::updateDisplayedColor), &cocos2d::CCSprite::updateDisplayedColor>;
	t["updateDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCSprite::updateDisplayedOpacity), &cocos2d::CCSprite::updateDisplayedOpacity>;
	t["setBlendFunc"] = sol::c_call<decltype(&cocos2d::CCSprite::setBlendFunc), &cocos2d::CCSprite::setBlendFunc>;
	t["getBlendFunc"] = sol::c_call<decltype(&cocos2d::CCSprite::getBlendFunc), &cocos2d::CCSprite::getBlendFunc>;
	t["getTexture"] = sol::c_call<decltype(&cocos2d::CCSprite::getTexture), &cocos2d::CCSprite::getTexture>;
	t["setTexture"] = sol::c_call<decltype(&cocos2d::CCSprite::setTexture), &cocos2d::CCSprite::setTexture>;
}
void register_cocos2d_CCLabelBMFont(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCLabelBMFont");
	t["createBatched"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::createBatched), &cocos2d::CCLabelBMFont::createBatched>;
	t["purgeCachedData"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::purgeCachedData), &cocos2d::CCLabelBMFont::purgeCachedData>;
	t["initWithString"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::initWithString), &cocos2d::CCLabelBMFont::initWithString>;
	t["getConfiguration"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getConfiguration), &cocos2d::CCLabelBMFont::getConfiguration>;
	t["getExtraKerning"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getExtraKerning), &cocos2d::CCLabelBMFont::getExtraKerning>;
	t["getFntFile"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getFntFile), &cocos2d::CCLabelBMFont::getFntFile>;
	t["getIsBatched"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getIsBatched), &cocos2d::CCLabelBMFont::getIsBatched>;
	t["getTargetArray"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getTargetArray), &cocos2d::CCLabelBMFont::getTargetArray>;
	t["setExtraKerning"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setExtraKerning), &cocos2d::CCLabelBMFont::setExtraKerning>;
	t["setFntFile"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setFntFile), &cocos2d::CCLabelBMFont::setFntFile>;
	t["setIsBatched"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setIsBatched), &cocos2d::CCLabelBMFont::setIsBatched>;
	t["setTargetArray"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setTargetArray), &cocos2d::CCLabelBMFont::setTargetArray>;
	t["createFontChars"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::createFontChars), &cocos2d::CCLabelBMFont::createFontChars>;
	t["limitLabelWidth"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::limitLabelWidth), &cocos2d::CCLabelBMFont::limitLabelWidth>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::init), &cocos2d::CCLabelBMFont::init>;
	t["setScaleX"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setScaleX), &cocos2d::CCLabelBMFont::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setScaleY), &cocos2d::CCLabelBMFont::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setScale), &cocos2d::CCLabelBMFont::setScale>;
	t["setAnchorPoint"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setAnchorPoint), &cocos2d::CCLabelBMFont::setAnchorPoint>;
	t["setCString"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setCString), &cocos2d::CCLabelBMFont::setCString>;
	t["updateLabel"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::updateLabel), &cocos2d::CCLabelBMFont::updateLabel>;
	t["setAlignment"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setAlignment), &cocos2d::CCLabelBMFont::setAlignment>;
	t["setWidth"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setWidth), &cocos2d::CCLabelBMFont::setWidth>;
	t["setLineBreakWithoutSpace"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setLineBreakWithoutSpace), &cocos2d::CCLabelBMFont::setLineBreakWithoutSpace>;
	t["getString"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getString), &cocos2d::CCLabelBMFont::getString>;
	t["setColor"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setColor), &cocos2d::CCLabelBMFont::setColor>;
	t["getColor"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getColor), &cocos2d::CCLabelBMFont::getColor>;
	t["getDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getDisplayedColor), &cocos2d::CCLabelBMFont::getDisplayedColor>;
	t["getDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getDisplayedOpacity), &cocos2d::CCLabelBMFont::getDisplayedOpacity>;
	t["getOpacity"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::getOpacity), &cocos2d::CCLabelBMFont::getOpacity>;
	t["setOpacity"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setOpacity), &cocos2d::CCLabelBMFont::setOpacity>;
	t["setOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setOpacityModifyRGB), &cocos2d::CCLabelBMFont::setOpacityModifyRGB>;
	t["isOpacityModifyRGB"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::isOpacityModifyRGB), &cocos2d::CCLabelBMFont::isOpacityModifyRGB>;
	t["isCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::isCascadeColorEnabled), &cocos2d::CCLabelBMFont::isCascadeColorEnabled>;
	t["setCascadeColorEnabled"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setCascadeColorEnabled), &cocos2d::CCLabelBMFont::setCascadeColorEnabled>;
	t["updateDisplayedColor"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::updateDisplayedColor), &cocos2d::CCLabelBMFont::updateDisplayedColor>;
	t["isCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::isCascadeOpacityEnabled), &cocos2d::CCLabelBMFont::isCascadeOpacityEnabled>;
	t["setCascadeOpacityEnabled"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::setCascadeOpacityEnabled), &cocos2d::CCLabelBMFont::setCascadeOpacityEnabled>;
	t["updateDisplayedOpacity"] = sol::c_call<decltype(&cocos2d::CCLabelBMFont::updateDisplayedOpacity), &cocos2d::CCLabelBMFont::updateDisplayedOpacity>;
}
void register_cocos2d_CCApplication(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCApplication");
	t["gameDidSave"] = sol::c_call<decltype(&cocos2d::CCApplication::gameDidSave), &cocos2d::CCApplication::gameDidSave>;
	t["openURL"] = sol::c_call<decltype(&cocos2d::CCApplication::openURL), &cocos2d::CCApplication::openURL>;
}
void register_cocos2d_CCArray(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCArray");
	t["createWithArray"] = sol::c_call<decltype(&cocos2d::CCArray::createWithArray), &cocos2d::CCArray::createWithArray>;
	t["createWithCapacity"] = sol::c_call<decltype(&cocos2d::CCArray::createWithCapacity), &cocos2d::CCArray::createWithCapacity>;
	t["createWithContentsOfFile"] = sol::c_call<decltype(&cocos2d::CCArray::createWithContentsOfFile), &cocos2d::CCArray::createWithContentsOfFile>;
	t["createWithContentsOfFileThreadSafe"] = sol::c_call<decltype(&cocos2d::CCArray::createWithContentsOfFileThreadSafe), &cocos2d::CCArray::createWithContentsOfFileThreadSafe>;
	t["createWithObject"] = sol::c_call<decltype(&cocos2d::CCArray::createWithObject), &cocos2d::CCArray::createWithObject>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCArray::init), &cocos2d::CCArray::init>;
	t["initWithArray"] = sol::c_call<decltype(&cocos2d::CCArray::initWithArray), &cocos2d::CCArray::initWithArray>;
	t["initWithCapacity"] = sol::c_call<decltype(&cocos2d::CCArray::initWithCapacity), &cocos2d::CCArray::initWithCapacity>;
	t["initWithObject"] = sol::c_call<decltype(&cocos2d::CCArray::initWithObject), &cocos2d::CCArray::initWithObject>;
	t["addObject"] = sol::c_call<decltype(&cocos2d::CCArray::addObject), &cocos2d::CCArray::addObject>;
	t["addObjectNew"] = sol::c_call<decltype(&cocos2d::CCArray::addObjectNew), &cocos2d::CCArray::addObjectNew>;
	t["addObjectsFromArray"] = sol::c_call<decltype(&cocos2d::CCArray::addObjectsFromArray), &cocos2d::CCArray::addObjectsFromArray>;
	t["capacity"] = sol::c_call<decltype(&cocos2d::CCArray::capacity), &cocos2d::CCArray::capacity>;
	t["containsObject"] = sol::c_call<decltype(&cocos2d::CCArray::containsObject), &cocos2d::CCArray::containsObject>;
	t["count"] = sol::c_call<decltype(&cocos2d::CCArray::count), &cocos2d::CCArray::count>;
	t["exchangeObject"] = sol::c_call<decltype(&cocos2d::CCArray::exchangeObject), &cocos2d::CCArray::exchangeObject>;
	t["exchangeObjectAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::exchangeObjectAtIndex), &cocos2d::CCArray::exchangeObjectAtIndex>;
	t["fastRemoveObject"] = sol::c_call<decltype(&cocos2d::CCArray::fastRemoveObject), &cocos2d::CCArray::fastRemoveObject>;
	t["fastRemoveObjectAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::fastRemoveObjectAtIndex), &cocos2d::CCArray::fastRemoveObjectAtIndex>;
	t["fastRemoveObjectAtIndexChild"] = sol::c_call<decltype(&cocos2d::CCArray::fastRemoveObjectAtIndexChild), &cocos2d::CCArray::fastRemoveObjectAtIndexChild>;
	t["fastRemoveObjectAtIndexNew"] = sol::c_call<decltype(&cocos2d::CCArray::fastRemoveObjectAtIndexNew), &cocos2d::CCArray::fastRemoveObjectAtIndexNew>;
	t["indexOfObject"] = sol::c_call<decltype(&cocos2d::CCArray::indexOfObject), &cocos2d::CCArray::indexOfObject>;
	t["insertObject"] = sol::c_call<decltype(&cocos2d::CCArray::insertObject), &cocos2d::CCArray::insertObject>;
	t["isEqualToArray"] = sol::c_call<decltype(&cocos2d::CCArray::isEqualToArray), &cocos2d::CCArray::isEqualToArray>;
	t["lastObject"] = sol::c_call<decltype(&cocos2d::CCArray::lastObject), &cocos2d::CCArray::lastObject>;
	t["objectAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::objectAtIndex), &cocos2d::CCArray::objectAtIndex>;
	t["randomObject"] = sol::c_call<decltype(&cocos2d::CCArray::randomObject), &cocos2d::CCArray::randomObject>;
	t["recreateNewIndexes"] = sol::c_call<decltype(&cocos2d::CCArray::recreateNewIndexes), &cocos2d::CCArray::recreateNewIndexes>;
	t["reduceMemoryFootprint"] = sol::c_call<decltype(&cocos2d::CCArray::reduceMemoryFootprint), &cocos2d::CCArray::reduceMemoryFootprint>;
	t["removeAllObjects"] = sol::c_call<decltype(&cocos2d::CCArray::removeAllObjects), &cocos2d::CCArray::removeAllObjects>;
	t["removeLastObject"] = sol::c_call<decltype(&cocos2d::CCArray::removeLastObject), &cocos2d::CCArray::removeLastObject>;
	t["removeObject"] = sol::c_call<decltype(&cocos2d::CCArray::removeObject), &cocos2d::CCArray::removeObject>;
	t["removeObjectAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::removeObjectAtIndex), &cocos2d::CCArray::removeObjectAtIndex>;
	t["removeObjectAtIndexChild"] = sol::c_call<decltype(&cocos2d::CCArray::removeObjectAtIndexChild), &cocos2d::CCArray::removeObjectAtIndexChild>;
	t["removeObjectsInArray"] = sol::c_call<decltype(&cocos2d::CCArray::removeObjectsInArray), &cocos2d::CCArray::removeObjectsInArray>;
	t["replaceObjectAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::replaceObjectAtIndex), &cocos2d::CCArray::replaceObjectAtIndex>;
	t["reverseObjects"] = sol::c_call<decltype(&cocos2d::CCArray::reverseObjects), &cocos2d::CCArray::reverseObjects>;
	t["stringAtIndex"] = sol::c_call<decltype(&cocos2d::CCArray::stringAtIndex), &cocos2d::CCArray::stringAtIndex>;
	t["copyWithZone"] = sol::c_call<decltype(&cocos2d::CCArray::copyWithZone), &cocos2d::CCArray::copyWithZone>;
}
void register_cocos2d_CCDictionary(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCDictionary");
	t["create"] = sol::c_call<decltype(&cocos2d::CCDictionary::create), &cocos2d::CCDictionary::create>;
	t["createWithContentsOfFile"] = sol::c_call<decltype(&cocos2d::CCDictionary::createWithContentsOfFile), &cocos2d::CCDictionary::createWithContentsOfFile>;
	t["createWithContentsOfFileThreadSafe"] = sol::c_call<decltype(&cocos2d::CCDictionary::createWithContentsOfFileThreadSafe), &cocos2d::CCDictionary::createWithContentsOfFileThreadSafe>;
	t["createWithDictionary"] = sol::c_call<decltype(&cocos2d::CCDictionary::createWithDictionary), &cocos2d::CCDictionary::createWithDictionary>;
	t["getFirstKey"] = sol::c_call<decltype(&cocos2d::CCDictionary::getFirstKey), &cocos2d::CCDictionary::getFirstKey>;
	t["allKeys"] = sol::c_call<decltype(&cocos2d::CCDictionary::allKeys), &cocos2d::CCDictionary::allKeys>;
	t["allKeysForObject"] = sol::c_call<decltype(&cocos2d::CCDictionary::allKeysForObject), &cocos2d::CCDictionary::allKeysForObject>;
	t["charForKey"] = sol::c_call<decltype(&cocos2d::CCDictionary::charForKey), &cocos2d::CCDictionary::charForKey>;
	t["count"] = sol::c_call<decltype(&cocos2d::CCDictionary::count), &cocos2d::CCDictionary::count>;
	t["randomObject"] = sol::c_call<decltype(&cocos2d::CCDictionary::randomObject), &cocos2d::CCDictionary::randomObject>;
	t["removeAllObjects"] = sol::c_call<decltype(&cocos2d::CCDictionary::removeAllObjects), &cocos2d::CCDictionary::removeAllObjects>;
	t["removeObjectForElememt"] = sol::c_call<decltype(&cocos2d::CCDictionary::removeObjectForElememt), &cocos2d::CCDictionary::removeObjectForElememt>;
	t["removeObjectsForKeys"] = sol::c_call<decltype(&cocos2d::CCDictionary::removeObjectsForKeys), &cocos2d::CCDictionary::removeObjectsForKeys>;
	t["copyWithZone"] = sol::c_call<decltype(&cocos2d::CCDictionary::copyWithZone), &cocos2d::CCDictionary::copyWithZone>;
}
void register_cocos2d_CCTransitionFade(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCTransitionFade");
	t["onEnter"] = sol::c_call<decltype(&cocos2d::CCTransitionFade::onEnter), &cocos2d::CCTransitionFade::onEnter>;
	t["onExit"] = sol::c_call<decltype(&cocos2d::CCTransitionFade::onExit), &cocos2d::CCTransitionFade::onExit>;
}
void register_cocos2d_CCDrawNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCDrawNode");
	t["create"] = sol::c_call<decltype(&cocos2d::CCDrawNode::create), &cocos2d::CCDrawNode::create>;
	t["getBlendFunc"] = sol::c_call<decltype(&cocos2d::CCDrawNode::getBlendFunc), &cocos2d::CCDrawNode::getBlendFunc>;
	t["setBlendFunc"] = sol::c_call<decltype(&cocos2d::CCDrawNode::setBlendFunc), &cocos2d::CCDrawNode::setBlendFunc>;
	t["clear"] = sol::c_call<decltype(&cocos2d::CCDrawNode::clear), &cocos2d::CCDrawNode::clear>;
	t["drawCircle"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawCircle), &cocos2d::CCDrawNode::drawCircle>;
	t["drawCubicBezier"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawCubicBezier), &cocos2d::CCDrawNode::drawCubicBezier>;
	t["drawDot"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawDot), &cocos2d::CCDrawNode::drawDot>;
	t["drawLines"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawLines), &cocos2d::CCDrawNode::drawLines>;
	t["drawPolygon"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawPolygon), &cocos2d::CCDrawNode::drawPolygon>;
	t["drawPreciseCubicBezier"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawPreciseCubicBezier), &cocos2d::CCDrawNode::drawPreciseCubicBezier>;
	t["drawRect"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawRect), &cocos2d::CCDrawNode::drawRect>;
	t["drawSegment"] = sol::c_call<decltype(&cocos2d::CCDrawNode::drawSegment), &cocos2d::CCDrawNode::drawSegment>;
	t["listenBackToForeground"] = sol::c_call<decltype(&cocos2d::CCDrawNode::listenBackToForeground), &cocos2d::CCDrawNode::listenBackToForeground>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCDrawNode::init), &cocos2d::CCDrawNode::init>;
	t["draw"] = sol::c_call<decltype(&cocos2d::CCDrawNode::draw), &cocos2d::CCDrawNode::draw>;
}
void register_cocos2d_CCSpriteBatchNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCSpriteBatchNode");
	t["initWithTexture"] = sol::c_call<decltype(&cocos2d::CCSpriteBatchNode::initWithTexture), &cocos2d::CCSpriteBatchNode::initWithTexture>;
}
void register_cocos2d_CCMenuItem(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMenuItem");
	t["initWithTarget"] = sol::c_call<decltype(&cocos2d::CCMenuItem::initWithTarget), &cocos2d::CCMenuItem::initWithTarget>;
	t["getScriptTapHandler"] = sol::c_call<decltype(&cocos2d::CCMenuItem::getScriptTapHandler), &cocos2d::CCMenuItem::getScriptTapHandler>;
	t["setTarget"] = sol::c_call<decltype(&cocos2d::CCMenuItem::setTarget), &cocos2d::CCMenuItem::setTarget>;
	t["rect"] = sol::c_call<decltype(&cocos2d::CCMenuItem::rect), &cocos2d::CCMenuItem::rect>;
	t["activate"] = sol::c_call<decltype(&cocos2d::CCMenuItem::activate), &cocos2d::CCMenuItem::activate>;
	t["selected"] = sol::c_call<decltype(&cocos2d::CCMenuItem::selected), &cocos2d::CCMenuItem::selected>;
	t["unselected"] = sol::c_call<decltype(&cocos2d::CCMenuItem::unselected), &cocos2d::CCMenuItem::unselected>;
	t["registerScriptTapHandler"] = sol::c_call<decltype(&cocos2d::CCMenuItem::registerScriptTapHandler), &cocos2d::CCMenuItem::registerScriptTapHandler>;
	t["unregisterScriptTapHandler"] = sol::c_call<decltype(&cocos2d::CCMenuItem::unregisterScriptTapHandler), &cocos2d::CCMenuItem::unregisterScriptTapHandler>;
	t["isEnabled"] = sol::c_call<decltype(&cocos2d::CCMenuItem::isEnabled), &cocos2d::CCMenuItem::isEnabled>;
	t["setEnabled"] = sol::c_call<decltype(&cocos2d::CCMenuItem::setEnabled), &cocos2d::CCMenuItem::setEnabled>;
	t["isSelected"] = sol::c_call<decltype(&cocos2d::CCMenuItem::isSelected), &cocos2d::CCMenuItem::isSelected>;
}
void register_cocos2d_CCMenu(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMenu");
	t["createWithArray"] = sol::c_call<decltype(&cocos2d::CCMenu::createWithArray), &cocos2d::CCMenu::createWithArray>;
	t["createWithItem"] = sol::c_call<decltype(&cocos2d::CCMenu::createWithItem), &cocos2d::CCMenu::createWithItem>;
	t["initWithArray"] = sol::c_call<decltype(&cocos2d::CCMenu::initWithArray), &cocos2d::CCMenu::initWithArray>;
	t["setHandlerPriority"] = sol::c_call<decltype(&cocos2d::CCMenu::setHandlerPriority), &cocos2d::CCMenu::setHandlerPriority>;
	t["alignItemsHorizontally"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsHorizontally), &cocos2d::CCMenu::alignItemsHorizontally>;
	t["alignItemsHorizontallyWithPadding"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsHorizontallyWithPadding), &cocos2d::CCMenu::alignItemsHorizontallyWithPadding>;
	t["alignItemsInColumnsWithArray"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsInColumnsWithArray), &cocos2d::CCMenu::alignItemsInColumnsWithArray>;
	t["alignItemsInRowsWithArray"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsInRowsWithArray), &cocos2d::CCMenu::alignItemsInRowsWithArray>;
	t["alignItemsVertically"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsVertically), &cocos2d::CCMenu::alignItemsVertically>;
	t["alignItemsVerticallyWithPadding"] = sol::c_call<decltype(&cocos2d::CCMenu::alignItemsVerticallyWithPadding), &cocos2d::CCMenu::alignItemsVerticallyWithPadding>;
	t["init"] = sol::c_call<decltype(&cocos2d::CCMenu::init), &cocos2d::CCMenu::init>;
	t["removeChild"] = sol::c_call<decltype(&cocos2d::CCMenu::removeChild), &cocos2d::CCMenu::removeChild>;
	t["onExit"] = sol::c_call<decltype(&cocos2d::CCMenu::onExit), &cocos2d::CCMenu::onExit>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&cocos2d::CCMenu::registerWithTouchDispatcher), &cocos2d::CCMenu::registerWithTouchDispatcher>;
	t["ccTouchBegan"] = sol::c_call<decltype(&cocos2d::CCMenu::ccTouchBegan), &cocos2d::CCMenu::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&cocos2d::CCMenu::ccTouchMoved), &cocos2d::CCMenu::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&cocos2d::CCMenu::ccTouchEnded), &cocos2d::CCMenu::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&cocos2d::CCMenu::ccTouchCancelled), &cocos2d::CCMenu::ccTouchCancelled>;
}
void register_cocos2d_CCDelayTime(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCDelayTime");
	t["create"] = sol::c_call<decltype(&cocos2d::CCDelayTime::create), &cocos2d::CCDelayTime::create>;
	t["copyWithZone"] = sol::c_call<decltype(&cocos2d::CCDelayTime::copyWithZone), &cocos2d::CCDelayTime::copyWithZone>;
	t["update"] = sol::c_call<decltype(&cocos2d::CCDelayTime::update), &cocos2d::CCDelayTime::update>;
	t["reverse"] = sol::c_call<decltype(&cocos2d::CCDelayTime::reverse), &cocos2d::CCDelayTime::reverse>;
}

void register_GJDropDownLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJDropDownLayer");
	t["draw"] = sol::c_call<decltype(&GJDropDownLayer::draw), &GJDropDownLayer::draw>;
	t["ccTouchBegan"] = sol::c_call<decltype(&GJDropDownLayer::ccTouchBegan), &GJDropDownLayer::ccTouchBegan>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&GJDropDownLayer::registerWithTouchDispatcher), &GJDropDownLayer::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJDropDownLayer::keyBackClicked), &GJDropDownLayer::keyBackClicked>;
	t["showLayer"] = sol::c_call<decltype(&GJDropDownLayer::showLayer), &GJDropDownLayer::showLayer>;
	t["layerHidden"] = sol::c_call<decltype(&GJDropDownLayer::layerHidden), &GJDropDownLayer::layerHidden>;
	t["disableUI"] = sol::c_call<decltype(&GJDropDownLayer::disableUI), &GJDropDownLayer::disableUI>;
	t["enableUI"] = sol::c_call<decltype(&GJDropDownLayer::enableUI), &GJDropDownLayer::enableUI>;
}
void register_AccountHelpLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AccountHelpLayer");
	t["create"] = sol::c_call<decltype(&AccountHelpLayer::create), &AccountHelpLayer::create>;
	t["customSetup"] = sol::c_call<decltype(&AccountHelpLayer::customSetup), &AccountHelpLayer::customSetup>;
	t["layerHidden"] = sol::c_call<decltype(&AccountHelpLayer::layerHidden), &AccountHelpLayer::layerHidden>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&AccountHelpLayer::FLAlert_Clicked), &AccountHelpLayer::FLAlert_Clicked>;
}
void register_AccountLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AccountLayer");
	t["create"] = sol::c_call<decltype(&AccountLayer::create), &AccountLayer::create>;
	t["onBackup"] = sol::c_call<decltype(&AccountLayer::onBackup), &AccountLayer::onBackup>;
	t["onLogin"] = sol::c_call<decltype(&AccountLayer::onLogin), &AccountLayer::onLogin>;
	t["onMore"] = sol::c_call<decltype(&AccountLayer::onMore), &AccountLayer::onMore>;
	t["onSync"] = sol::c_call<decltype(&AccountLayer::onSync), &AccountLayer::onSync>;
	t["customSetup"] = sol::c_call<decltype(&AccountLayer::customSetup), &AccountLayer::customSetup>;
	t["layerHidden"] = sol::c_call<decltype(&AccountLayer::layerHidden), &AccountLayer::layerHidden>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&AccountLayer::FLAlert_Clicked), &AccountLayer::FLAlert_Clicked>;
}
void register_FLAlertLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FLAlertLayer");
	t["onBtn1"] = sol::c_call<decltype(&FLAlertLayer::onBtn1), &FLAlertLayer::onBtn1>;
	t["onBtn2"] = sol::c_call<decltype(&FLAlertLayer::onBtn2), &FLAlertLayer::onBtn2>;
	t["ccTouchBegan"] = sol::c_call<decltype(&FLAlertLayer::ccTouchBegan), &FLAlertLayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&FLAlertLayer::ccTouchMoved), &FLAlertLayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&FLAlertLayer::ccTouchEnded), &FLAlertLayer::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&FLAlertLayer::ccTouchCancelled), &FLAlertLayer::ccTouchCancelled>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&FLAlertLayer::registerWithTouchDispatcher), &FLAlertLayer::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&FLAlertLayer::keyBackClicked), &FLAlertLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&FLAlertLayer::keyDown), &FLAlertLayer::keyDown>;
	t["show"] = sol::c_call<decltype(&FLAlertLayer::show), &FLAlertLayer::show>;
}
void register_AccountLoginLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AccountLoginLayer");
	t["create"] = sol::c_call<decltype(&AccountLoginLayer::create), &AccountLoginLayer::create>;
	t["init"] = sol::c_call<decltype(&AccountLoginLayer::init), &AccountLoginLayer::init>;
	t["onForgotPassword"] = sol::c_call<decltype(&AccountLoginLayer::onForgotPassword), &AccountLoginLayer::onForgotPassword>;
	t["onForgotUser"] = sol::c_call<decltype(&AccountLoginLayer::onForgotUser), &AccountLoginLayer::onForgotUser>;
	t["keyBackClicked"] = sol::c_call<decltype(&AccountLoginLayer::keyBackClicked), &AccountLoginLayer::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&AccountLoginLayer::FLAlert_Clicked), &AccountLoginLayer::FLAlert_Clicked>;
	t["textInputClosed"] = sol::c_call<decltype(&AccountLoginLayer::textInputClosed), &AccountLoginLayer::textInputClosed>;
}
void register_AccountRegisterLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AccountRegisterLayer");
	t["create"] = sol::c_call<decltype(&AccountRegisterLayer::create), &AccountRegisterLayer::create>;
	t["init"] = sol::c_call<decltype(&AccountRegisterLayer::init), &AccountRegisterLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&AccountRegisterLayer::keyBackClicked), &AccountRegisterLayer::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&AccountRegisterLayer::FLAlert_Clicked), &AccountRegisterLayer::FLAlert_Clicked>;
	t["textInputClosed"] = sol::c_call<decltype(&AccountRegisterLayer::textInputClosed), &AccountRegisterLayer::textInputClosed>;
	t["textInputShouldOffset"] = sol::c_call<decltype(&AccountRegisterLayer::textInputShouldOffset), &AccountRegisterLayer::textInputShouldOffset>;
	t["textInputReturn"] = sol::c_call<decltype(&AccountRegisterLayer::textInputReturn), &AccountRegisterLayer::textInputReturn>;
	t["allowTextInput"] = sol::c_call<decltype(&AccountRegisterLayer::allowTextInput), &AccountRegisterLayer::allowTextInput>;
}
void register_AchievementBar(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AchievementBar");
	t["create"] = sol::c_call<decltype(&AchievementBar::create), &AchievementBar::create>;
	t["init"] = sol::c_call<decltype(&AchievementBar::init), &AchievementBar::init>;
	t["show"] = sol::c_call<decltype(&AchievementBar::show), &AchievementBar::show>;
	t["setOpacity"] = sol::c_call<decltype(&AchievementBar::setOpacity), &AchievementBar::setOpacity>;
}
void register_AchievementManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AchievementManager");
	t["sharedState"] = sol::c_call<decltype(&AchievementManager::sharedState), &AchievementManager::sharedState>;
	t["addAchievement"] = sol::c_call<decltype(&AchievementManager::addAchievement), &AchievementManager::addAchievement>;
	t["addManualAchievements"] = sol::c_call<decltype(&AchievementManager::addManualAchievements), &AchievementManager::addManualAchievements>;
	t["reportAchievementWithID"] = sol::c_call<decltype(&AchievementManager::reportAchievementWithID), &AchievementManager::reportAchievementWithID>;
	t["reportPlatformAchievementWithID"] = sol::c_call<decltype(&AchievementManager::reportPlatformAchievementWithID), &AchievementManager::reportPlatformAchievementWithID>;
	t["resetAchievement"] = sol::c_call<decltype(&AchievementManager::resetAchievement), &AchievementManager::resetAchievement>;
}
void register_AchievementNotifier(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AchievementNotifier");
	t["showNextAchievement"] = sol::c_call<decltype(&AchievementNotifier::showNextAchievement), &AchievementNotifier::showNextAchievement>;
	t["willSwitchToScene"] = sol::c_call<decltype(&AchievementNotifier::willSwitchToScene), &AchievementNotifier::willSwitchToScene>;
}
void register_AchievementsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AchievementsLayer");
	t["create"] = sol::c_call<decltype(&AchievementsLayer::create), &AchievementsLayer::create>;
	t["loadPage"] = sol::c_call<decltype(&AchievementsLayer::loadPage), &AchievementsLayer::loadPage>;
	t["onNextPage"] = sol::c_call<decltype(&AchievementsLayer::onNextPage), &AchievementsLayer::onNextPage>;
	t["onPrevPage"] = sol::c_call<decltype(&AchievementsLayer::onPrevPage), &AchievementsLayer::onPrevPage>;
	t["keyDown"] = sol::c_call<decltype(&AchievementsLayer::keyDown), &AchievementsLayer::keyDown>;
	t["customSetup"] = sol::c_call<decltype(&AchievementsLayer::customSetup), &AchievementsLayer::customSetup>;
}
void register_CCSpritePlus(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCSpritePlus");
	t["setScaleX"] = sol::c_call<decltype(&CCSpritePlus::setScaleX), &CCSpritePlus::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&CCSpritePlus::setScaleY), &CCSpritePlus::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&CCSpritePlus::setScale), &CCSpritePlus::setScale>;
	t["setPosition"] = sol::c_call<decltype(&CCSpritePlus::setPosition), &CCSpritePlus::setPosition>;
	t["setRotation"] = sol::c_call<decltype(&CCSpritePlus::setRotation), &CCSpritePlus::setRotation>;
	t["setRotationX"] = sol::c_call<decltype(&CCSpritePlus::setRotationX), &CCSpritePlus::setRotationX>;
	t["setRotationY"] = sol::c_call<decltype(&CCSpritePlus::setRotationY), &CCSpritePlus::setRotationY>;
	t["initWithTexture"] = sol::c_call<decltype(&CCSpritePlus::initWithTexture), &CCSpritePlus::initWithTexture>;
	t["initWithSpriteFrameName"] = sol::c_call<decltype(&CCSpritePlus::initWithSpriteFrameName), &CCSpritePlus::initWithSpriteFrameName>;
	t["setFlipX"] = sol::c_call<decltype(&CCSpritePlus::setFlipX), &CCSpritePlus::setFlipX>;
	t["setFlipY"] = sol::c_call<decltype(&CCSpritePlus::setFlipY), &CCSpritePlus::setFlipY>;
}
void register_GameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameObject");
	t["createGroupContainer"] = sol::c_call<decltype(&GameObject::createGroupContainer), &GameObject::createGroupContainer>;
	t["createWithFrame"] = sol::c_call<decltype(&GameObject::createWithFrame), &GameObject::createWithFrame>;
	t["createWithKey"] = sol::c_call<decltype(&GameObject::createWithKey), &GameObject::createWithKey>;
	t["duplicateValues"] = sol::c_call<decltype(&GameObject::duplicateValues), &GameObject::duplicateValues>;
	t["ignoreEditorDuration"] = sol::c_call<decltype(&GameObject::ignoreEditorDuration), &GameObject::ignoreEditorDuration>;
	t["isEditorSpawnableTrigger"] = sol::c_call<decltype(&GameObject::isEditorSpawnableTrigger), &GameObject::isEditorSpawnableTrigger>;
	t["isFacingDown"] = sol::c_call<decltype(&GameObject::isFacingDown), &GameObject::isFacingDown>;
	t["isFacingLeft"] = sol::c_call<decltype(&GameObject::isFacingLeft), &GameObject::isFacingLeft>;
	t["isSpawnableTrigger"] = sol::c_call<decltype(&GameObject::isSpawnableTrigger), &GameObject::isSpawnableTrigger>;
	t["isSpeedObject"] = sol::c_call<decltype(&GameObject::isSpeedObject), &GameObject::isSpeedObject>;
	t["isStoppableTrigger"] = sol::c_call<decltype(&GameObject::isStoppableTrigger), &GameObject::isStoppableTrigger>;
	t["isTrigger"] = sol::c_call<decltype(&GameObject::isTrigger), &GameObject::isTrigger>;
	t["loadGroupsFromString"] = sol::c_call<decltype(&GameObject::loadGroupsFromString), &GameObject::loadGroupsFromString>;
	t["playDestroyObjectAnim"] = sol::c_call<decltype(&GameObject::playDestroyObjectAnim), &GameObject::playDestroyObjectAnim>;
	t["updateObjectEditorColor"] = sol::c_call<decltype(&GameObject::updateObjectEditorColor), &GameObject::updateObjectEditorColor>;
	t["setScaleX"] = sol::c_call<decltype(&GameObject::setScaleX), &GameObject::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&GameObject::setScaleY), &GameObject::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&GameObject::setScale), &GameObject::setScale>;
	t["setPosition"] = sol::c_call<decltype(&GameObject::setPosition), &GameObject::setPosition>;
	t["setVisible"] = sol::c_call<decltype(&GameObject::setVisible), &GameObject::setVisible>;
	t["setRotation"] = sol::c_call<decltype(&GameObject::setRotation), &GameObject::setRotation>;
	t["setRotationX"] = sol::c_call<decltype(&GameObject::setRotationX), &GameObject::setRotationX>;
	t["setRotationY"] = sol::c_call<decltype(&GameObject::setRotationY), &GameObject::setRotationY>;
	t["setOpacity"] = sol::c_call<decltype(&GameObject::setOpacity), &GameObject::setOpacity>;
	t["initWithTexture"] = sol::c_call<decltype(&GameObject::initWithTexture), &GameObject::initWithTexture>;
	t["setChildColor"] = sol::c_call<decltype(&GameObject::setChildColor), &GameObject::setChildColor>;
	t["setFlipX"] = sol::c_call<decltype(&GameObject::setFlipX), &GameObject::setFlipX>;
	t["setFlipY"] = sol::c_call<decltype(&GameObject::setFlipY), &GameObject::setFlipY>;
	t["customSetup"] = sol::c_call<decltype(&GameObject::customSetup), &GameObject::customSetup>;
	t["setupCustomSprites"] = sol::c_call<decltype(&GameObject::setupCustomSprites), &GameObject::setupCustomSprites>;
	t["deactivateObject"] = sol::c_call<decltype(&GameObject::deactivateObject), &GameObject::deactivateObject>;
	t["getSaveString"] = sol::c_call<decltype(&GameObject::getSaveString), &GameObject::getSaveString>;
	t["isFlipX"] = sol::c_call<decltype(&GameObject::isFlipX), &GameObject::isFlipX>;
	t["isFlipY"] = sol::c_call<decltype(&GameObject::isFlipY), &GameObject::isFlipY>;
	t["setObjectColor"] = sol::c_call<decltype(&GameObject::setObjectColor), &GameObject::setObjectColor>;
	t["addToGroup"] = sol::c_call<decltype(&GameObject::addToGroup), &GameObject::addToGroup>;
	t["removeFromGroup"] = sol::c_call<decltype(&GameObject::removeFromGroup), &GameObject::removeFromGroup>;
}
void register_EnhancedGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EnhancedGameObject");
	t["customSetup"] = sol::c_call<decltype(&EnhancedGameObject::customSetup), &EnhancedGameObject::customSetup>;
	t["resetObject"] = sol::c_call<decltype(&EnhancedGameObject::resetObject), &EnhancedGameObject::resetObject>;
	t["deactivateObject"] = sol::c_call<decltype(&EnhancedGameObject::deactivateObject), &EnhancedGameObject::deactivateObject>;
	t["getSaveString"] = sol::c_call<decltype(&EnhancedGameObject::getSaveString), &EnhancedGameObject::getSaveString>;
}
void register_EffectGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EffectGameObject");
	t["create"] = sol::c_call<decltype(&EffectGameObject::create), &EffectGameObject::create>;
	t["init"] = sol::c_call<decltype(&EffectGameObject::init), &EffectGameObject::init>;
	t["setOpacity"] = sol::c_call<decltype(&EffectGameObject::setOpacity), &EffectGameObject::setOpacity>;
	t["customSetup"] = sol::c_call<decltype(&EffectGameObject::customSetup), &EffectGameObject::customSetup>;
	t["triggerObject"] = sol::c_call<decltype(&EffectGameObject::triggerObject), &EffectGameObject::triggerObject>;
	t["getSaveString"] = sol::c_call<decltype(&EffectGameObject::getSaveString), &EffectGameObject::getSaveString>;
}
void register_AdvancedFollowTriggerObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AdvancedFollowTriggerObject");
	t["create"] = sol::c_call<decltype(&AdvancedFollowTriggerObject::create), &AdvancedFollowTriggerObject::create>;
	t["getAdvancedFollowID"] = sol::c_call<decltype(&AdvancedFollowTriggerObject::getAdvancedFollowID), &AdvancedFollowTriggerObject::getAdvancedFollowID>;
	t["getSaveString"] = sol::c_call<decltype(&AdvancedFollowTriggerObject::getSaveString), &AdvancedFollowTriggerObject::getSaveString>;
}
void register_AdvancedFollowEditObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AdvancedFollowEditObject");
	t["create"] = sol::c_call<decltype(&AdvancedFollowEditObject::create), &AdvancedFollowEditObject::create>;
	t["getSaveString"] = sol::c_call<decltype(&AdvancedFollowEditObject::getSaveString), &AdvancedFollowEditObject::getSaveString>;
}
void register_AnimatedGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AnimatedGameObject");
	t["create"] = sol::c_call<decltype(&AnimatedGameObject::create), &AnimatedGameObject::create>;
	t["init"] = sol::c_call<decltype(&AnimatedGameObject::init), &AnimatedGameObject::init>;
	t["setOpacity"] = sol::c_call<decltype(&AnimatedGameObject::setOpacity), &AnimatedGameObject::setOpacity>;
}
void register_CCAnimatedSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCAnimatedSprite");
	t["initWithType"] = sol::c_call<decltype(&CCAnimatedSprite::initWithType), &CCAnimatedSprite::initWithType>;
	t["tweenToAnimation"] = sol::c_call<decltype(&CCAnimatedSprite::tweenToAnimation), &CCAnimatedSprite::tweenToAnimation>;
	t["tweenToAnimationFinished"] = sol::c_call<decltype(&CCAnimatedSprite::tweenToAnimationFinished), &CCAnimatedSprite::tweenToAnimationFinished>;
	t["setOpacity"] = sol::c_call<decltype(&CCAnimatedSprite::setOpacity), &CCAnimatedSprite::setOpacity>;
	t["setColor"] = sol::c_call<decltype(&CCAnimatedSprite::setColor), &CCAnimatedSprite::setColor>;
}
void register_AnimatedShopKeeper(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AnimatedShopKeeper");
	t["create"] = sol::c_call<decltype(&AnimatedShopKeeper::create), &AnimatedShopKeeper::create>;
	t["init"] = sol::c_call<decltype(&AnimatedShopKeeper::init), &AnimatedShopKeeper::init>;
}
void register_AppDelegate(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AppDelegate");
	t["pauseGame"] = sol::c_call<decltype(&AppDelegate::pauseGame), &AppDelegate::pauseGame>;
	t["platformShutdown"] = sol::c_call<decltype(&AppDelegate::platformShutdown), &AppDelegate::platformShutdown>;
	t["setupGLView"] = sol::c_call<decltype(&AppDelegate::setupGLView), &AppDelegate::setupGLView>;
	t["applicationDidFinishLaunching"] = sol::c_call<decltype(&AppDelegate::applicationDidFinishLaunching), &AppDelegate::applicationDidFinishLaunching>;
	t["applicationDidEnterBackground"] = sol::c_call<decltype(&AppDelegate::applicationDidEnterBackground), &AppDelegate::applicationDidEnterBackground>;
	t["applicationWillEnterForeground"] = sol::c_call<decltype(&AppDelegate::applicationWillEnterForeground), &AppDelegate::applicationWillEnterForeground>;
	t["applicationWillBecomeActive"] = sol::c_call<decltype(&AppDelegate::applicationWillBecomeActive), &AppDelegate::applicationWillBecomeActive>;
	t["applicationWillResignActive"] = sol::c_call<decltype(&AppDelegate::applicationWillResignActive), &AppDelegate::applicationWillResignActive>;
	t["trySaveGame"] = sol::c_call<decltype(&AppDelegate::trySaveGame), &AppDelegate::trySaveGame>;
	t["willSwitchToScene"] = sol::c_call<decltype(&AppDelegate::willSwitchToScene), &AppDelegate::willSwitchToScene>;
}
void register_AudioEffectsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AudioEffectsLayer");
	t["create"] = sol::c_call<decltype(&AudioEffectsLayer::create), &AudioEffectsLayer::create>;
	t["init"] = sol::c_call<decltype(&AudioEffectsLayer::init), &AudioEffectsLayer::init>;
	t["updateTweenAction"] = sol::c_call<decltype(&AudioEffectsLayer::updateTweenAction), &AudioEffectsLayer::updateTweenAction>;
}
void register_AudioLineGuideGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("AudioLineGuideGameObject");
	t["create"] = sol::c_call<decltype(&AudioLineGuideGameObject::create), &AudioLineGuideGameObject::create>;
	t["init"] = sol::c_call<decltype(&AudioLineGuideGameObject::init), &AudioLineGuideGameObject::init>;
}
void register_BoomListView(sol::state_view lua)
{
	sol::table t = lua.create_named_table("BoomListView");
	t["setupList"] = sol::c_call<decltype(&BoomListView::setupList), &BoomListView::setupList>;
	t["numberOfRowsInSection"] = sol::c_call<decltype(&BoomListView::numberOfRowsInSection), &BoomListView::numberOfRowsInSection>;
	t["getListCell"] = sol::c_call<decltype(&BoomListView::getListCell), &BoomListView::getListCell>;
	t["loadCell"] = sol::c_call<decltype(&BoomListView::loadCell), &BoomListView::loadCell>;
}
void register_BoomScrollLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("BoomScrollLayer");
	t["visit"] = sol::c_call<decltype(&BoomScrollLayer::visit), &BoomScrollLayer::visit>;
	t["ccTouchBegan"] = sol::c_call<decltype(&BoomScrollLayer::ccTouchBegan), &BoomScrollLayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&BoomScrollLayer::ccTouchMoved), &BoomScrollLayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&BoomScrollLayer::ccTouchEnded), &BoomScrollLayer::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&BoomScrollLayer::ccTouchCancelled), &BoomScrollLayer::ccTouchCancelled>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&BoomScrollLayer::registerWithTouchDispatcher), &BoomScrollLayer::registerWithTouchDispatcher>;
}
void register_BrowseSmartTemplateLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("BrowseSmartTemplateLayer");
	t["keyBackClicked"] = sol::c_call<decltype(&BrowseSmartTemplateLayer::keyBackClicked), &BrowseSmartTemplateLayer::keyBackClicked>;
	t["onBack"] = sol::c_call<decltype(&BrowseSmartTemplateLayer::onBack), &BrowseSmartTemplateLayer::onBack>;
}
void register_BrowseSmartKeyLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("BrowseSmartKeyLayer");
	t["create"] = sol::c_call<decltype(&BrowseSmartKeyLayer::create), &BrowseSmartKeyLayer::create>;
	t["init"] = sol::c_call<decltype(&BrowseSmartKeyLayer::init), &BrowseSmartKeyLayer::init>;
	t["onBack"] = sol::c_call<decltype(&BrowseSmartKeyLayer::onBack), &BrowseSmartKeyLayer::onBack>;
}
void register_ButtonSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ButtonSprite");
	t["setColor"] = sol::c_call<decltype(&ButtonSprite::setColor), &ButtonSprite::setColor>;
	t["setString"] = sol::c_call<decltype(&ButtonSprite::setString), &ButtonSprite::setString>;
	t["updateBGImage"] = sol::c_call<decltype(&ButtonSprite::updateBGImage), &ButtonSprite::updateBGImage>;
	t["updateSpriteBGSize"] = sol::c_call<decltype(&ButtonSprite::updateSpriteBGSize), &ButtonSprite::updateSpriteBGSize>;
}
void register_CameraTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CameraTriggerGameObject");
	t["create"] = sol::c_call<decltype(&CameraTriggerGameObject::create), &CameraTriggerGameObject::create>;
}
void register_CCBlockLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCBlockLayer");
	t["init"] = sol::c_call<decltype(&CCBlockLayer::init), &CCBlockLayer::init>;
	t["draw"] = sol::c_call<decltype(&CCBlockLayer::draw), &CCBlockLayer::draw>;
	t["keyBackClicked"] = sol::c_call<decltype(&CCBlockLayer::keyBackClicked), &CCBlockLayer::keyBackClicked>;
	t["showLayer"] = sol::c_call<decltype(&CCBlockLayer::showLayer), &CCBlockLayer::showLayer>;
	t["layerHidden"] = sol::c_call<decltype(&CCBlockLayer::layerHidden), &CCBlockLayer::layerHidden>;
}
void register_CCCircleWave(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCCircleWave");
	t["init"] = sol::c_call<decltype(&CCCircleWave::init), &CCCircleWave::init>;
	t["setPosition"] = sol::c_call<decltype(&CCCircleWave::setPosition), &CCCircleWave::setPosition>;
	t["removeMeAndCleanup"] = sol::c_call<decltype(&CCCircleWave::removeMeAndCleanup), &CCCircleWave::removeMeAndCleanup>;
	t["draw"] = sol::c_call<decltype(&CCCircleWave::draw), &CCCircleWave::draw>;
	t["updateTweenAction"] = sol::c_call<decltype(&CCCircleWave::updateTweenAction), &CCCircleWave::updateTweenAction>;
}
void register_CCContentLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCContentLayer");
	t["create"] = sol::c_call<decltype(&CCContentLayer::create), &CCContentLayer::create>;
	t["setPosition"] = sol::c_call<decltype(&CCContentLayer::setPosition), &CCContentLayer::setPosition>;
}
void register_CCCounterLabel(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCCounterLabel");
	t["create"] = sol::c_call<decltype(&CCCounterLabel::create), &CCCounterLabel::create>;
	t["init"] = sol::c_call<decltype(&CCCounterLabel::init), &CCCounterLabel::init>;
	t["setTargetCount"] = sol::c_call<decltype(&CCCounterLabel::setTargetCount), &CCCounterLabel::setTargetCount>;
}
void register_CCMenuItemSpriteExtra(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMenuItemSpriteExtra");
	t["init"] = sol::c_call<decltype(&CCMenuItemSpriteExtra::init), &CCMenuItemSpriteExtra::init>;
	t["activate"] = sol::c_call<decltype(&CCMenuItemSpriteExtra::activate), &CCMenuItemSpriteExtra::activate>;
	t["selected"] = sol::c_call<decltype(&CCMenuItemSpriteExtra::selected), &CCMenuItemSpriteExtra::selected>;
	t["unselected"] = sol::c_call<decltype(&CCMenuItemSpriteExtra::unselected), &CCMenuItemSpriteExtra::unselected>;
}
void register_CCMenuItemToggler(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMenuItemToggler");
	t["create"] = sol::c_call<decltype(&CCMenuItemToggler::create), &CCMenuItemToggler::create>;
	t["init"] = sol::c_call<decltype(&CCMenuItemToggler::init), &CCMenuItemToggler::init>;
	t["toggle"] = sol::c_call<decltype(&CCMenuItemToggler::toggle), &CCMenuItemToggler::toggle>;
	t["activate"] = sol::c_call<decltype(&CCMenuItemToggler::activate), &CCMenuItemToggler::activate>;
	t["selected"] = sol::c_call<decltype(&CCMenuItemToggler::selected), &CCMenuItemToggler::selected>;
	t["unselected"] = sol::c_call<decltype(&CCMenuItemToggler::unselected), &CCMenuItemToggler::unselected>;
	t["setEnabled"] = sol::c_call<decltype(&CCMenuItemToggler::setEnabled), &CCMenuItemToggler::setEnabled>;
}
void register_CCMoveCNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCMoveCNode");
	t["create"] = sol::c_call<decltype(&CCMoveCNode::create), &CCMoveCNode::create>;
}
void register_CCPartAnimSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCPartAnimSprite");
	t["setColor"] = sol::c_call<decltype(&CCPartAnimSprite::setColor), &CCPartAnimSprite::setColor>;
	t["setScaleX"] = sol::c_call<decltype(&CCPartAnimSprite::setScaleX), &CCPartAnimSprite::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&CCPartAnimSprite::setScaleY), &CCPartAnimSprite::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&CCPartAnimSprite::setScale), &CCPartAnimSprite::setScale>;
	t["setOpacity"] = sol::c_call<decltype(&CCPartAnimSprite::setOpacity), &CCPartAnimSprite::setOpacity>;
	t["setBlendFunc"] = sol::c_call<decltype(&CCPartAnimSprite::setBlendFunc), &CCPartAnimSprite::setBlendFunc>;
	t["setDisplayFrame"] = sol::c_call<decltype(&CCPartAnimSprite::setDisplayFrame), &CCPartAnimSprite::setDisplayFrame>;
	t["isFrameDisplayed"] = sol::c_call<decltype(&CCPartAnimSprite::isFrameDisplayed), &CCPartAnimSprite::isFrameDisplayed>;
	t["displayFrame"] = sol::c_call<decltype(&CCPartAnimSprite::displayFrame), &CCPartAnimSprite::displayFrame>;
}
void register_CCScrollLayerExt(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCScrollLayerExt");
	t["moveToTop"] = sol::c_call<decltype(&CCScrollLayerExt::moveToTop), &CCScrollLayerExt::moveToTop>;
	t["moveToTopWithOffset"] = sol::c_call<decltype(&CCScrollLayerExt::moveToTopWithOffset), &CCScrollLayerExt::moveToTopWithOffset>;
	t["scrollLayer"] = sol::c_call<decltype(&CCScrollLayerExt::scrollLayer), &CCScrollLayerExt::scrollLayer>;
	t["visit"] = sol::c_call<decltype(&CCScrollLayerExt::visit), &CCScrollLayerExt::visit>;
	t["ccTouchBegan"] = sol::c_call<decltype(&CCScrollLayerExt::ccTouchBegan), &CCScrollLayerExt::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&CCScrollLayerExt::ccTouchMoved), &CCScrollLayerExt::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&CCScrollLayerExt::ccTouchEnded), &CCScrollLayerExt::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&CCScrollLayerExt::ccTouchCancelled), &CCScrollLayerExt::ccTouchCancelled>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&CCScrollLayerExt::registerWithTouchDispatcher), &CCScrollLayerExt::registerWithTouchDispatcher>;
}
void register_CCSpriteGrayscale(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCSpriteGrayscale");
	t["createWithSpriteFrameName"] = sol::c_call<decltype(&CCSpriteGrayscale::createWithSpriteFrameName), &CCSpriteGrayscale::createWithSpriteFrameName>;
}
void register_CCSpritePart(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCSpritePart");
	t["setVisible"] = sol::c_call<decltype(&CCSpritePart::setVisible), &CCSpritePart::setVisible>;
}
void register_CCTextInputNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CCTextInputNode");
	t["addTextArea"] = sol::c_call<decltype(&CCTextInputNode::addTextArea), &CCTextInputNode::addTextArea>;
	t["init"] = sol::c_call<decltype(&CCTextInputNode::init), &CCTextInputNode::init>;
	t["refreshLabel"] = sol::c_call<decltype(&CCTextInputNode::refreshLabel), &CCTextInputNode::refreshLabel>;
	t["setString"] = sol::c_call<decltype(&CCTextInputNode::setString), &CCTextInputNode::setString>;
	t["updateCursorPosition"] = sol::c_call<decltype(&CCTextInputNode::updateCursorPosition), &CCTextInputNode::updateCursorPosition>;
	t["updateDefaultFontValues"] = sol::c_call<decltype(&CCTextInputNode::updateDefaultFontValues), &CCTextInputNode::updateDefaultFontValues>;
	t["visit"] = sol::c_call<decltype(&CCTextInputNode::visit), &CCTextInputNode::visit>;
	t["ccTouchBegan"] = sol::c_call<decltype(&CCTextInputNode::ccTouchBegan), &CCTextInputNode::ccTouchBegan>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&CCTextInputNode::registerWithTouchDispatcher), &CCTextInputNode::registerWithTouchDispatcher>;
	t["textChanged"] = sol::c_call<decltype(&CCTextInputNode::textChanged), &CCTextInputNode::textChanged>;
	t["onClickTrackNode"] = sol::c_call<decltype(&CCTextInputNode::onClickTrackNode), &CCTextInputNode::onClickTrackNode>;
	t["onTextFieldInsertText"] = sol::c_call<decltype(&CCTextInputNode::onTextFieldInsertText), &CCTextInputNode::onTextFieldInsertText>;
	t["onTextFieldAttachWithIME"] = sol::c_call<decltype(&CCTextInputNode::onTextFieldAttachWithIME), &CCTextInputNode::onTextFieldAttachWithIME>;
	t["onTextFieldDetachWithIME"] = sol::c_call<decltype(&CCTextInputNode::onTextFieldDetachWithIME), &CCTextInputNode::onTextFieldDetachWithIME>;
}
void register_ChallengesPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ChallengesPage");
	t["create"] = sol::c_call<decltype(&ChallengesPage::create), &ChallengesPage::create>;
	t["createChallengeNode"] = sol::c_call<decltype(&ChallengesPage::createChallengeNode), &ChallengesPage::createChallengeNode>;
	t["onClose"] = sol::c_call<decltype(&ChallengesPage::onClose), &ChallengesPage::onClose>;
	t["updateTimers"] = sol::c_call<decltype(&ChallengesPage::updateTimers), &ChallengesPage::updateTimers>;
	t["init"] = sol::c_call<decltype(&ChallengesPage::init), &ChallengesPage::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&ChallengesPage::keyBackClicked), &ChallengesPage::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&ChallengesPage::show), &ChallengesPage::show>;
	t["currencyWillExit"] = sol::c_call<decltype(&ChallengesPage::currencyWillExit), &ChallengesPage::currencyWillExit>;
}
void register_GJChallengeItem(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJChallengeItem");
	t["init"] = sol::c_call<decltype(&GJChallengeItem::init), &GJChallengeItem::init>;
	t["encodeWithCoder"] = sol::c_call<decltype(&GJChallengeItem::encodeWithCoder), &GJChallengeItem::encodeWithCoder>;
}
void register_ChallengeNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ChallengeNode");
	t["create"] = sol::c_call<decltype(&ChallengeNode::create), &ChallengeNode::create>;
	t["init"] = sol::c_call<decltype(&ChallengeNode::init), &ChallengeNode::init>;
}
void register_CharacterColorPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CharacterColorPage");
	t["create"] = sol::c_call<decltype(&CharacterColorPage::create), &CharacterColorPage::create>;
	t["activeColorForMode"] = sol::c_call<decltype(&CharacterColorPage::activeColorForMode), &CharacterColorPage::activeColorForMode>;
	t["colorForIndex"] = sol::c_call<decltype(&CharacterColorPage::colorForIndex), &CharacterColorPage::colorForIndex>;
	t["createColorMenu"] = sol::c_call<decltype(&CharacterColorPage::createColorMenu), &CharacterColorPage::createColorMenu>;
	t["offsetForIndex"] = sol::c_call<decltype(&CharacterColorPage::offsetForIndex), &CharacterColorPage::offsetForIndex>;
	t["onClose"] = sol::c_call<decltype(&CharacterColorPage::onClose), &CharacterColorPage::onClose>;
	t["onMode"] = sol::c_call<decltype(&CharacterColorPage::onMode), &CharacterColorPage::onMode>;
	t["onPlayerColor"] = sol::c_call<decltype(&CharacterColorPage::onPlayerColor), &CharacterColorPage::onPlayerColor>;
	t["toggleGlow"] = sol::c_call<decltype(&CharacterColorPage::toggleGlow), &CharacterColorPage::toggleGlow>;
	t["toggleShip"] = sol::c_call<decltype(&CharacterColorPage::toggleShip), &CharacterColorPage::toggleShip>;
	t["updateColorMode"] = sol::c_call<decltype(&CharacterColorPage::updateColorMode), &CharacterColorPage::updateColorMode>;
	t["updateIconColors"] = sol::c_call<decltype(&CharacterColorPage::updateIconColors), &CharacterColorPage::updateIconColors>;
	t["init"] = sol::c_call<decltype(&CharacterColorPage::init), &CharacterColorPage::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&CharacterColorPage::keyBackClicked), &CharacterColorPage::keyBackClicked>;
}
void register_CheckpointObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CheckpointObject");
	t["create"] = sol::c_call<decltype(&CheckpointObject::create), &CheckpointObject::create>;
	t["init"] = sol::c_call<decltype(&CheckpointObject::init), &CheckpointObject::init>;
}
void register_CollisionBlockPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CollisionBlockPopup");
	t["create"] = sol::c_call<decltype(&CollisionBlockPopup::create), &CollisionBlockPopup::create>;
	t["init"] = sol::c_call<decltype(&CollisionBlockPopup::init), &CollisionBlockPopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&CollisionBlockPopup::keyBackClicked), &CollisionBlockPopup::keyBackClicked>;
	t["textInputClosed"] = sol::c_call<decltype(&CollisionBlockPopup::textInputClosed), &CollisionBlockPopup::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&CollisionBlockPopup::textChanged), &CollisionBlockPopup::textChanged>;
}
void register_ColorAction(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ColorAction");
	t["isInUse"] = sol::c_call<decltype(&ColorAction::isInUse), &ColorAction::isInUse>;
}
void register_ColorActionSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ColorActionSprite");
	t["create"] = sol::c_call<decltype(&ColorActionSprite::create), &ColorActionSprite::create>;
	t["init"] = sol::c_call<decltype(&ColorActionSprite::init), &ColorActionSprite::init>;
}
void register_ColorChannelSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ColorChannelSprite");
	t["create"] = sol::c_call<decltype(&ColorChannelSprite::create), &ColorChannelSprite::create>;
	t["updateOpacity"] = sol::c_call<decltype(&ColorChannelSprite::updateOpacity), &ColorChannelSprite::updateOpacity>;
	t["init"] = sol::c_call<decltype(&ColorChannelSprite::init), &ColorChannelSprite::init>;
}
void register_ColorSelectLiveOverlay(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ColorSelectLiveOverlay");
	t["create"] = sol::c_call<decltype(&ColorSelectLiveOverlay::create), &ColorSelectLiveOverlay::create>;
	t["init"] = sol::c_call<decltype(&ColorSelectLiveOverlay::init), &ColorSelectLiveOverlay::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&ColorSelectLiveOverlay::keyBackClicked), &ColorSelectLiveOverlay::keyBackClicked>;
}
void register_SetupTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTriggerPopup");
	t["init"] = sol::c_call<decltype(&SetupTriggerPopup::init), &SetupTriggerPopup::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&SetupTriggerPopup::ccTouchBegan), &SetupTriggerPopup::ccTouchBegan>;
	t["keyBackClicked"] = sol::c_call<decltype(&SetupTriggerPopup::keyBackClicked), &SetupTriggerPopup::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&SetupTriggerPopup::show), &SetupTriggerPopup::show>;
	t["onClose"] = sol::c_call<decltype(&SetupTriggerPopup::onClose), &SetupTriggerPopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupTriggerPopup::textChanged), &SetupTriggerPopup::textChanged>;
	t["sliderBegan"] = sol::c_call<decltype(&SetupTriggerPopup::sliderBegan), &SetupTriggerPopup::sliderBegan>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupTriggerPopup::updateDefaultTriggerValues), &SetupTriggerPopup::updateDefaultTriggerValues>;
}
void register_ColorSelectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ColorSelectPopup");
	t["init"] = sol::c_call<decltype(&ColorSelectPopup::init), &ColorSelectPopup::init>;
	t["show"] = sol::c_call<decltype(&ColorSelectPopup::show), &ColorSelectPopup::show>;
	t["textChanged"] = sol::c_call<decltype(&ColorSelectPopup::textChanged), &ColorSelectPopup::textChanged>;
	t["colorValueChanged"] = sol::c_call<decltype(&ColorSelectPopup::colorValueChanged), &ColorSelectPopup::colorValueChanged>;
	t["colorSelectClosed"] = sol::c_call<decltype(&ColorSelectPopup::colorSelectClosed), &ColorSelectPopup::colorSelectClosed>;
}
void register_CommentCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CommentCell");
	t["loadFromComment"] = sol::c_call<decltype(&CommentCell::loadFromComment), &CommentCell::loadFromComment>;
	t["onConfirmDelete"] = sol::c_call<decltype(&CommentCell::onConfirmDelete), &CommentCell::onConfirmDelete>;
	t["onLike"] = sol::c_call<decltype(&CommentCell::onLike), &CommentCell::onLike>;
	t["updateLabelValues"] = sol::c_call<decltype(&CommentCell::updateLabelValues), &CommentCell::updateLabelValues>;
	t["init"] = sol::c_call<decltype(&CommentCell::init), &CommentCell::init>;
	t["draw"] = sol::c_call<decltype(&CommentCell::draw), &CommentCell::draw>;
	t["likedItem"] = sol::c_call<decltype(&CommentCell::likedItem), &CommentCell::likedItem>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&CommentCell::FLAlert_Clicked), &CommentCell::FLAlert_Clicked>;
}
void register_CommunityCreditNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CommunityCreditNode");
	t["create"] = sol::c_call<decltype(&CommunityCreditNode::create), &CommunityCreditNode::create>;
	t["init"] = sol::c_call<decltype(&CommunityCreditNode::init), &CommunityCreditNode::init>;
}
void register_CommunityCreditsPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CommunityCreditsPage");
	t["create"] = sol::c_call<decltype(&CommunityCreditsPage::create), &CommunityCreditsPage::create>;
	t["init"] = sol::c_call<decltype(&CommunityCreditsPage::init), &CommunityCreditsPage::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&CommunityCreditsPage::keyBackClicked), &CommunityCreditsPage::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&CommunityCreditsPage::show), &CommunityCreditsPage::show>;
}
void register_ConfigureHSVWidget(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ConfigureHSVWidget");
	t["textChanged"] = sol::c_call<decltype(&ConfigureHSVWidget::textChanged), &ConfigureHSVWidget::textChanged>;
}
void register_ConfigureValuePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ConfigureValuePopup");
	t["create"] = sol::c_call<decltype(&ConfigureValuePopup::create), &ConfigureValuePopup::create>;
	t["init"] = sol::c_call<decltype(&ConfigureValuePopup::init), &ConfigureValuePopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&ConfigureValuePopup::keyBackClicked), &ConfigureValuePopup::keyBackClicked>;
	t["textChanged"] = sol::c_call<decltype(&ConfigureValuePopup::textChanged), &ConfigureValuePopup::textChanged>;
}
void register_CountTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CountTriggerGameObject");
	t["create"] = sol::c_call<decltype(&CountTriggerGameObject::create), &CountTriggerGameObject::create>;
}
void register_CreateGuidelinesLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CreateGuidelinesLayer");
	t["update"] = sol::c_call<decltype(&CreateGuidelinesLayer::update), &CreateGuidelinesLayer::update>;
	t["ccTouchBegan"] = sol::c_call<decltype(&CreateGuidelinesLayer::ccTouchBegan), &CreateGuidelinesLayer::ccTouchBegan>;
	t["ccTouchEnded"] = sol::c_call<decltype(&CreateGuidelinesLayer::ccTouchEnded), &CreateGuidelinesLayer::ccTouchEnded>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&CreateGuidelinesLayer::registerWithTouchDispatcher), &CreateGuidelinesLayer::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&CreateGuidelinesLayer::keyBackClicked), &CreateGuidelinesLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&CreateGuidelinesLayer::keyDown), &CreateGuidelinesLayer::keyDown>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&CreateGuidelinesLayer::FLAlert_Clicked), &CreateGuidelinesLayer::FLAlert_Clicked>;
	t["onInfo"] = sol::c_call<decltype(&CreateGuidelinesLayer::onInfo), &CreateGuidelinesLayer::onInfo>;
	t["onRecord"] = sol::c_call<decltype(&CreateGuidelinesLayer::onRecord), &CreateGuidelinesLayer::onRecord>;
}
void register_CreateMenuItem(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CreateMenuItem");
	t["create"] = sol::c_call<decltype(&CreateMenuItem::create), &CreateMenuItem::create>;
	t["init"] = sol::c_call<decltype(&CreateMenuItem::init), &CreateMenuItem::init>;
}
void register_CreateParticlePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CreateParticlePopup");
	t["init"] = sol::c_call<decltype(&CreateParticlePopup::init), &CreateParticlePopup::init>;
	t["onClose"] = sol::c_call<decltype(&CreateParticlePopup::onClose), &CreateParticlePopup::onClose>;
	t["willClose"] = sol::c_call<decltype(&CreateParticlePopup::willClose), &CreateParticlePopup::willClose>;
	t["update"] = sol::c_call<decltype(&CreateParticlePopup::update), &CreateParticlePopup::update>;
	t["ccTouchBegan"] = sol::c_call<decltype(&CreateParticlePopup::ccTouchBegan), &CreateParticlePopup::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&CreateParticlePopup::ccTouchMoved), &CreateParticlePopup::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&CreateParticlePopup::ccTouchEnded), &CreateParticlePopup::ccTouchEnded>;
	t["keyBackClicked"] = sol::c_call<decltype(&CreateParticlePopup::keyBackClicked), &CreateParticlePopup::keyBackClicked>;
	t["sliderBegan"] = sol::c_call<decltype(&CreateParticlePopup::sliderBegan), &CreateParticlePopup::sliderBegan>;
	t["colorSelectClosed"] = sol::c_call<decltype(&CreateParticlePopup::colorSelectClosed), &CreateParticlePopup::colorSelectClosed>;
	t["textChanged"] = sol::c_call<decltype(&CreateParticlePopup::textChanged), &CreateParticlePopup::textChanged>;
}
void register_CreatorLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CreatorLayer");
	t["create"] = sol::c_call<decltype(&CreatorLayer::create), &CreatorLayer::create>;
	t["scene"] = sol::c_call<decltype(&CreatorLayer::scene), &CreatorLayer::scene>;
	t["onAdventureMap"] = sol::c_call<decltype(&CreatorLayer::onAdventureMap), &CreatorLayer::onAdventureMap>;
	t["onBack"] = sol::c_call<decltype(&CreatorLayer::onBack), &CreatorLayer::onBack>;
	t["onChallenge"] = sol::c_call<decltype(&CreatorLayer::onChallenge), &CreatorLayer::onChallenge>;
	t["onDailyLevel"] = sol::c_call<decltype(&CreatorLayer::onDailyLevel), &CreatorLayer::onDailyLevel>;
	t["onEventLevel"] = sol::c_call<decltype(&CreatorLayer::onEventLevel), &CreatorLayer::onEventLevel>;
	t["onFeaturedLevels"] = sol::c_call<decltype(&CreatorLayer::onFeaturedLevels), &CreatorLayer::onFeaturedLevels>;
	t["onGauntlets"] = sol::c_call<decltype(&CreatorLayer::onGauntlets), &CreatorLayer::onGauntlets>;
	t["onLeaderboards"] = sol::c_call<decltype(&CreatorLayer::onLeaderboards), &CreatorLayer::onLeaderboards>;
	t["onMapPacks"] = sol::c_call<decltype(&CreatorLayer::onMapPacks), &CreatorLayer::onMapPacks>;
	t["onMultiplayer"] = sol::c_call<decltype(&CreatorLayer::onMultiplayer), &CreatorLayer::onMultiplayer>;
	t["onMyLevels"] = sol::c_call<decltype(&CreatorLayer::onMyLevels), &CreatorLayer::onMyLevels>;
	t["onOnlineLevels"] = sol::c_call<decltype(&CreatorLayer::onOnlineLevels), &CreatorLayer::onOnlineLevels>;
	t["onPaths"] = sol::c_call<decltype(&CreatorLayer::onPaths), &CreatorLayer::onPaths>;
	t["onSavedLevels"] = sol::c_call<decltype(&CreatorLayer::onSavedLevels), &CreatorLayer::onSavedLevels>;
	t["onSecretVault"] = sol::c_call<decltype(&CreatorLayer::onSecretVault), &CreatorLayer::onSecretVault>;
	t["onTopLists"] = sol::c_call<decltype(&CreatorLayer::onTopLists), &CreatorLayer::onTopLists>;
	t["onTreasureRoom"] = sol::c_call<decltype(&CreatorLayer::onTreasureRoom), &CreatorLayer::onTreasureRoom>;
	t["onWeeklyLevel"] = sol::c_call<decltype(&CreatorLayer::onWeeklyLevel), &CreatorLayer::onWeeklyLevel>;
	t["init"] = sol::c_call<decltype(&CreatorLayer::init), &CreatorLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&CreatorLayer::keyBackClicked), &CreatorLayer::keyBackClicked>;
	t["sceneWillResume"] = sol::c_call<decltype(&CreatorLayer::sceneWillResume), &CreatorLayer::sceneWillResume>;
	t["dialogClosed"] = sol::c_call<decltype(&CreatorLayer::dialogClosed), &CreatorLayer::dialogClosed>;
}
void register_CurrencyRewardLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CurrencyRewardLayer");
	t["create"] = sol::c_call<decltype(&CurrencyRewardLayer::create), &CurrencyRewardLayer::create>;
	t["init"] = sol::c_call<decltype(&CurrencyRewardLayer::init), &CurrencyRewardLayer::init>;
	t["update"] = sol::c_call<decltype(&CurrencyRewardLayer::update), &CurrencyRewardLayer::update>;
}
void register_CustomizeObjectLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomizeObjectLayer");
	t["create"] = sol::c_call<decltype(&CustomizeObjectLayer::create), &CustomizeObjectLayer::create>;
	t["getActiveMode"] = sol::c_call<decltype(&CustomizeObjectLayer::getActiveMode), &CustomizeObjectLayer::getActiveMode>;
	t["highlightSelected"] = sol::c_call<decltype(&CustomizeObjectLayer::highlightSelected), &CustomizeObjectLayer::highlightSelected>;
	t["init"] = sol::c_call<decltype(&CustomizeObjectLayer::init), &CustomizeObjectLayer::init>;
	t["onBreakApart"] = sol::c_call<decltype(&CustomizeObjectLayer::onBreakApart), &CustomizeObjectLayer::onBreakApart>;
	t["onBrowse"] = sol::c_call<decltype(&CustomizeObjectLayer::onBrowse), &CustomizeObjectLayer::onBrowse>;
	t["onClear"] = sol::c_call<decltype(&CustomizeObjectLayer::onClear), &CustomizeObjectLayer::onClear>;
	t["onClose"] = sol::c_call<decltype(&CustomizeObjectLayer::onClose), &CustomizeObjectLayer::onClose>;
	t["onCopy"] = sol::c_call<decltype(&CustomizeObjectLayer::onCopy), &CustomizeObjectLayer::onCopy>;
	t["onEditColor"] = sol::c_call<decltype(&CustomizeObjectLayer::onEditColor), &CustomizeObjectLayer::onEditColor>;
	t["onHSV"] = sol::c_call<decltype(&CustomizeObjectLayer::onHSV), &CustomizeObjectLayer::onHSV>;
	t["onLiveEdit"] = sol::c_call<decltype(&CustomizeObjectLayer::onLiveEdit), &CustomizeObjectLayer::onLiveEdit>;
	t["onNextColorChannel"] = sol::c_call<decltype(&CustomizeObjectLayer::onNextColorChannel), &CustomizeObjectLayer::onNextColorChannel>;
	t["onPaste"] = sol::c_call<decltype(&CustomizeObjectLayer::onPaste), &CustomizeObjectLayer::onPaste>;
	t["onSelectColor"] = sol::c_call<decltype(&CustomizeObjectLayer::onSelectColor), &CustomizeObjectLayer::onSelectColor>;
	t["onSelectMode"] = sol::c_call<decltype(&CustomizeObjectLayer::onSelectMode), &CustomizeObjectLayer::onSelectMode>;
	t["onSettings"] = sol::c_call<decltype(&CustomizeObjectLayer::onSettings), &CustomizeObjectLayer::onSettings>;
	t["onUpdateCustomColor"] = sol::c_call<decltype(&CustomizeObjectLayer::onUpdateCustomColor), &CustomizeObjectLayer::onUpdateCustomColor>;
	t["sliderChanged"] = sol::c_call<decltype(&CustomizeObjectLayer::sliderChanged), &CustomizeObjectLayer::sliderChanged>;
	t["toggleVisible"] = sol::c_call<decltype(&CustomizeObjectLayer::toggleVisible), &CustomizeObjectLayer::toggleVisible>;
	t["updateChannelLabel"] = sol::c_call<decltype(&CustomizeObjectLayer::updateChannelLabel), &CustomizeObjectLayer::updateChannelLabel>;
	t["updateColorSprite"] = sol::c_call<decltype(&CustomizeObjectLayer::updateColorSprite), &CustomizeObjectLayer::updateColorSprite>;
	t["updateCustomColorLabels"] = sol::c_call<decltype(&CustomizeObjectLayer::updateCustomColorLabels), &CustomizeObjectLayer::updateCustomColorLabels>;
	t["updateHSVButtons"] = sol::c_call<decltype(&CustomizeObjectLayer::updateHSVButtons), &CustomizeObjectLayer::updateHSVButtons>;
	t["updateKerningLabel"] = sol::c_call<decltype(&CustomizeObjectLayer::updateKerningLabel), &CustomizeObjectLayer::updateKerningLabel>;
	t["updateSelected"] = sol::c_call<decltype(&CustomizeObjectLayer::updateSelected), &CustomizeObjectLayer::updateSelected>;
	t["keyBackClicked"] = sol::c_call<decltype(&CustomizeObjectLayer::keyBackClicked), &CustomizeObjectLayer::keyBackClicked>;
	t["textInputOpened"] = sol::c_call<decltype(&CustomizeObjectLayer::textInputOpened), &CustomizeObjectLayer::textInputOpened>;
	t["textChanged"] = sol::c_call<decltype(&CustomizeObjectLayer::textChanged), &CustomizeObjectLayer::textChanged>;
	t["hsvPopupClosed"] = sol::c_call<decltype(&CustomizeObjectLayer::hsvPopupClosed), &CustomizeObjectLayer::hsvPopupClosed>;
	t["colorSelectClosed"] = sol::c_call<decltype(&CustomizeObjectLayer::colorSelectClosed), &CustomizeObjectLayer::colorSelectClosed>;
	t["colorSetupClosed"] = sol::c_call<decltype(&CustomizeObjectLayer::colorSetupClosed), &CustomizeObjectLayer::colorSetupClosed>;
}
void register_CustomizeObjectSettingsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomizeObjectSettingsPopup");
	t["create"] = sol::c_call<decltype(&CustomizeObjectSettingsPopup::create), &CustomizeObjectSettingsPopup::create>;
	t["init"] = sol::c_call<decltype(&CustomizeObjectSettingsPopup::init), &CustomizeObjectSettingsPopup::init>;
	t["onClose"] = sol::c_call<decltype(&CustomizeObjectSettingsPopup::onClose), &CustomizeObjectSettingsPopup::onClose>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&CustomizeObjectSettingsPopup::onCustomToggleTriggerValue), &CustomizeObjectSettingsPopup::onCustomToggleTriggerValue>;
}
void register_CustomListView(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomListView");
	t["setupList"] = sol::c_call<decltype(&CustomListView::setupList), &CustomListView::setupList>;
	t["getListCell"] = sol::c_call<decltype(&CustomListView::getListCell), &CustomListView::getListCell>;
	t["loadCell"] = sol::c_call<decltype(&CustomListView::loadCell), &CustomListView::loadCell>;
}
void register_CustomSongCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomSongCell");
	t["onDelete"] = sol::c_call<decltype(&CustomSongCell::onDelete), &CustomSongCell::onDelete>;
}
void register_CustomSFXCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomSFXCell");
	t["init"] = sol::c_call<decltype(&CustomSFXCell::init), &CustomSFXCell::init>;
	t["sfxObjectSelected"] = sol::c_call<decltype(&CustomSFXCell::sfxObjectSelected), &CustomSFXCell::sfxObjectSelected>;
}
void register_CustomSFXWidget(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomSFXWidget");
	t["downloadFailed"] = sol::c_call<decltype(&CustomSFXWidget::downloadFailed), &CustomSFXWidget::downloadFailed>;
	t["init"] = sol::c_call<decltype(&CustomSFXWidget::init), &CustomSFXWidget::init>;
	t["onDownload"] = sol::c_call<decltype(&CustomSFXWidget::onDownload), &CustomSFXWidget::onDownload>;
	t["onPlayback"] = sol::c_call<decltype(&CustomSFXWidget::onPlayback), &CustomSFXWidget::onPlayback>;
	t["showLoadingArt"] = sol::c_call<decltype(&CustomSFXWidget::showLoadingArt), &CustomSFXWidget::showLoadingArt>;
	t["downloadSFXFinished"] = sol::c_call<decltype(&CustomSFXWidget::downloadSFXFinished), &CustomSFXWidget::downloadSFXFinished>;
	t["downloadSFXFailed"] = sol::c_call<decltype(&CustomSFXWidget::downloadSFXFailed), &CustomSFXWidget::downloadSFXFailed>;
	t["songStateChanged"] = sol::c_call<decltype(&CustomSFXWidget::songStateChanged), &CustomSFXWidget::songStateChanged>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&CustomSFXWidget::FLAlert_Clicked), &CustomSFXWidget::FLAlert_Clicked>;
}
void register_CustomSongLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomSongLayer");
	t["create"] = sol::c_call<decltype(&CustomSongLayer::create), &CustomSongLayer::create>;
	t["init"] = sol::c_call<decltype(&CustomSongLayer::init), &CustomSongLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&CustomSongLayer::keyBackClicked), &CustomSongLayer::keyBackClicked>;
	t["textChanged"] = sol::c_call<decltype(&CustomSongLayer::textChanged), &CustomSongLayer::textChanged>;
	t["textInputClosed"] = sol::c_call<decltype(&CustomSongLayer::textInputClosed), &CustomSongLayer::textInputClosed>;
	t["dropDownLayerWillClose"] = sol::c_call<decltype(&CustomSongLayer::dropDownLayerWillClose), &CustomSongLayer::dropDownLayerWillClose>;
	t["musicBrowserClosed"] = sol::c_call<decltype(&CustomSongLayer::musicBrowserClosed), &CustomSongLayer::musicBrowserClosed>;
}
void register_CustomSongWidget(sol::state_view lua)
{
	sol::table t = lua.create_named_table("CustomSongWidget");
	t["create"] = sol::c_call<decltype(&CustomSongWidget::create), &CustomSongWidget::create>;
	t["deleteSong"] = sol::c_call<decltype(&CustomSongWidget::deleteSong), &CustomSongWidget::deleteSong>;
	t["init"] = sol::c_call<decltype(&CustomSongWidget::init), &CustomSongWidget::init>;
	t["onDownload"] = sol::c_call<decltype(&CustomSongWidget::onDownload), &CustomSongWidget::onDownload>;
	t["onGetSongInfo"] = sol::c_call<decltype(&CustomSongWidget::onGetSongInfo), &CustomSongWidget::onGetSongInfo>;
	t["onMore"] = sol::c_call<decltype(&CustomSongWidget::onMore), &CustomSongWidget::onMore>;
	t["onPlayback"] = sol::c_call<decltype(&CustomSongWidget::onPlayback), &CustomSongWidget::onPlayback>;
	t["onSelect"] = sol::c_call<decltype(&CustomSongWidget::onSelect), &CustomSongWidget::onSelect>;
	t["showError"] = sol::c_call<decltype(&CustomSongWidget::showError), &CustomSongWidget::showError>;
	t["startDownload"] = sol::c_call<decltype(&CustomSongWidget::startDownload), &CustomSongWidget::startDownload>;
	t["updateMultiAssetInfo"] = sol::c_call<decltype(&CustomSongWidget::updateMultiAssetInfo), &CustomSongWidget::updateMultiAssetInfo>;
	t["updateSongInfo"] = sol::c_call<decltype(&CustomSongWidget::updateSongInfo), &CustomSongWidget::updateSongInfo>;
	t["updateSongObject"] = sol::c_call<decltype(&CustomSongWidget::updateSongObject), &CustomSongWidget::updateSongObject>;
	t["updateWithMultiAssets"] = sol::c_call<decltype(&CustomSongWidget::updateWithMultiAssets), &CustomSongWidget::updateWithMultiAssets>;
	t["loadSongInfoFinished"] = sol::c_call<decltype(&CustomSongWidget::loadSongInfoFinished), &CustomSongWidget::loadSongInfoFinished>;
	t["loadSongInfoFailed"] = sol::c_call<decltype(&CustomSongWidget::loadSongInfoFailed), &CustomSongWidget::loadSongInfoFailed>;
	t["downloadSongFinished"] = sol::c_call<decltype(&CustomSongWidget::downloadSongFinished), &CustomSongWidget::downloadSongFinished>;
	t["downloadSongFailed"] = sol::c_call<decltype(&CustomSongWidget::downloadSongFailed), &CustomSongWidget::downloadSongFailed>;
	t["downloadSFXFinished"] = sol::c_call<decltype(&CustomSongWidget::downloadSFXFinished), &CustomSongWidget::downloadSFXFinished>;
	t["downloadSFXFailed"] = sol::c_call<decltype(&CustomSongWidget::downloadSFXFailed), &CustomSongWidget::downloadSFXFailed>;
	t["musicActionFinished"] = sol::c_call<decltype(&CustomSongWidget::musicActionFinished), &CustomSongWidget::musicActionFinished>;
	t["musicActionFailed"] = sol::c_call<decltype(&CustomSongWidget::musicActionFailed), &CustomSongWidget::musicActionFailed>;
	t["songStateChanged"] = sol::c_call<decltype(&CustomSongWidget::songStateChanged), &CustomSongWidget::songStateChanged>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&CustomSongWidget::FLAlert_Clicked), &CustomSongWidget::FLAlert_Clicked>;
}
void register_DailyLevelNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DailyLevelNode");
	t["create"] = sol::c_call<decltype(&DailyLevelNode::create), &DailyLevelNode::create>;
	t["init"] = sol::c_call<decltype(&DailyLevelNode::init), &DailyLevelNode::init>;
	t["onClaimReward"] = sol::c_call<decltype(&DailyLevelNode::onClaimReward), &DailyLevelNode::onClaimReward>;
	t["showSkipButton"] = sol::c_call<decltype(&DailyLevelNode::showSkipButton), &DailyLevelNode::showSkipButton>;
	t["updateTimeLabel"] = sol::c_call<decltype(&DailyLevelNode::updateTimeLabel), &DailyLevelNode::updateTimeLabel>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&DailyLevelNode::FLAlert_Clicked), &DailyLevelNode::FLAlert_Clicked>;
}
void register_DailyLevelPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DailyLevelPage");
	t["create"] = sol::c_call<decltype(&DailyLevelPage::create), &DailyLevelPage::create>;
	t["init"] = sol::c_call<decltype(&DailyLevelPage::init), &DailyLevelPage::init>;
	t["updateTimers"] = sol::c_call<decltype(&DailyLevelPage::updateTimers), &DailyLevelPage::updateTimers>;
	t["show"] = sol::c_call<decltype(&DailyLevelPage::show), &DailyLevelPage::show>;
	t["dailyStatusFinished"] = sol::c_call<decltype(&DailyLevelPage::dailyStatusFinished), &DailyLevelPage::dailyStatusFinished>;
	t["dailyStatusFailed"] = sol::c_call<decltype(&DailyLevelPage::dailyStatusFailed), &DailyLevelPage::dailyStatusFailed>;
	t["levelDownloadFinished"] = sol::c_call<decltype(&DailyLevelPage::levelDownloadFinished), &DailyLevelPage::levelDownloadFinished>;
	t["levelDownloadFailed"] = sol::c_call<decltype(&DailyLevelPage::levelDownloadFailed), &DailyLevelPage::levelDownloadFailed>;
}
void register_RingObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RingObject");
	t["create"] = sol::c_call<decltype(&RingObject::create), &RingObject::create>;
}
void register_DashRingObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DashRingObject");
	t["create"] = sol::c_call<decltype(&DashRingObject::create), &DashRingObject::create>;
}
void register_DemonFilterSelectLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DemonFilterSelectLayer");
	t["create"] = sol::c_call<decltype(&DemonFilterSelectLayer::create), &DemonFilterSelectLayer::create>;
	t["init"] = sol::c_call<decltype(&DemonFilterSelectLayer::init), &DemonFilterSelectLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&DemonFilterSelectLayer::keyBackClicked), &DemonFilterSelectLayer::keyBackClicked>;
}
void register_DialogLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DialogLayer");
	t["createDialogLayer"] = sol::c_call<decltype(&DialogLayer::createDialogLayer), &DialogLayer::createDialogLayer>;
	t["init"] = sol::c_call<decltype(&DialogLayer::init), &DialogLayer::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&DialogLayer::ccTouchBegan), &DialogLayer::ccTouchBegan>;
	t["ccTouchEnded"] = sol::c_call<decltype(&DialogLayer::ccTouchEnded), &DialogLayer::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&DialogLayer::ccTouchCancelled), &DialogLayer::ccTouchCancelled>;
	t["keyBackClicked"] = sol::c_call<decltype(&DialogLayer::keyBackClicked), &DialogLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&DialogLayer::keyDown), &DialogLayer::keyDown>;
}
void register_DialogObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DialogObject");
	t["create"] = sol::c_call<decltype(&DialogObject::create), &DialogObject::create>;
	t["init"] = sol::c_call<decltype(&DialogObject::init), &DialogObject::init>;
}
void register_DrawGridLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("DrawGridLayer");
	t["addAudioLineObject"] = sol::c_call<decltype(&DrawGridLayer::addAudioLineObject), &DrawGridLayer::addAudioLineObject>;
	t["loadTimeMarkers"] = sol::c_call<decltype(&DrawGridLayer::loadTimeMarkers), &DrawGridLayer::loadTimeMarkers>;
	t["update"] = sol::c_call<decltype(&DrawGridLayer::update), &DrawGridLayer::update>;
	t["draw"] = sol::c_call<decltype(&DrawGridLayer::draw), &DrawGridLayer::draw>;
}
void register_EditButtonBar(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditButtonBar");
	t["create"] = sol::c_call<decltype(&EditButtonBar::create), &EditButtonBar::create>;
	t["init"] = sol::c_call<decltype(&EditButtonBar::init), &EditButtonBar::init>;
	t["loadFromItems"] = sol::c_call<decltype(&EditButtonBar::loadFromItems), &EditButtonBar::loadFromItems>;
}
void register_EditGameObjectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditGameObjectPopup");
	t["create"] = sol::c_call<decltype(&EditGameObjectPopup::create), &EditGameObjectPopup::create>;
	t["init"] = sol::c_call<decltype(&EditGameObjectPopup::init), &EditGameObjectPopup::init>;
}
void register_EditLevelLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditLevelLayer");
	t["create"] = sol::c_call<decltype(&EditLevelLayer::create), &EditLevelLayer::create>;
	t["confirmClone"] = sol::c_call<decltype(&EditLevelLayer::confirmClone), &EditLevelLayer::confirmClone>;
	t["confirmDelete"] = sol::c_call<decltype(&EditLevelLayer::confirmDelete), &EditLevelLayer::confirmDelete>;
	t["confirmMoveToTop"] = sol::c_call<decltype(&EditLevelLayer::confirmMoveToTop), &EditLevelLayer::confirmMoveToTop>;
	t["init"] = sol::c_call<decltype(&EditLevelLayer::init), &EditLevelLayer::init>;
	t["onBack"] = sol::c_call<decltype(&EditLevelLayer::onBack), &EditLevelLayer::onBack>;
	t["onClone"] = sol::c_call<decltype(&EditLevelLayer::onClone), &EditLevelLayer::onClone>;
	t["onEdit"] = sol::c_call<decltype(&EditLevelLayer::onEdit), &EditLevelLayer::onEdit>;
	t["onGuidelines"] = sol::c_call<decltype(&EditLevelLayer::onGuidelines), &EditLevelLayer::onGuidelines>;
	t["onHelp"] = sol::c_call<decltype(&EditLevelLayer::onHelp), &EditLevelLayer::onHelp>;
	t["onLevelInfo"] = sol::c_call<decltype(&EditLevelLayer::onLevelInfo), &EditLevelLayer::onLevelInfo>;
	t["onMoveToTop"] = sol::c_call<decltype(&EditLevelLayer::onMoveToTop), &EditLevelLayer::onMoveToTop>;
	t["onPlay"] = sol::c_call<decltype(&EditLevelLayer::onPlay), &EditLevelLayer::onPlay>;
	t["onSetFolder"] = sol::c_call<decltype(&EditLevelLayer::onSetFolder), &EditLevelLayer::onSetFolder>;
	t["onShare"] = sol::c_call<decltype(&EditLevelLayer::onShare), &EditLevelLayer::onShare>;
	t["onUpdateDescription"] = sol::c_call<decltype(&EditLevelLayer::onUpdateDescription), &EditLevelLayer::onUpdateDescription>;
	t["keyBackClicked"] = sol::c_call<decltype(&EditLevelLayer::keyBackClicked), &EditLevelLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&EditLevelLayer::keyDown), &EditLevelLayer::keyDown>;
	t["setIDPopupClosed"] = sol::c_call<decltype(&EditLevelLayer::setIDPopupClosed), &EditLevelLayer::setIDPopupClosed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&EditLevelLayer::FLAlert_Clicked), &EditLevelLayer::FLAlert_Clicked>;
	t["textInputOpened"] = sol::c_call<decltype(&EditLevelLayer::textInputOpened), &EditLevelLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&EditLevelLayer::textInputClosed), &EditLevelLayer::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&EditLevelLayer::textChanged), &EditLevelLayer::textChanged>;
	t["uploadActionFinished"] = sol::c_call<decltype(&EditLevelLayer::uploadActionFinished), &EditLevelLayer::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&EditLevelLayer::uploadActionFailed), &EditLevelLayer::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&EditLevelLayer::onClosePopup), &EditLevelLayer::onClosePopup>;
}
void register_GJOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJOptionsLayer");
	t["init"] = sol::c_call<decltype(&GJOptionsLayer::init), &GJOptionsLayer::init>;
}
void register_EditorOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditorOptionsLayer");
	t["create"] = sol::c_call<decltype(&EditorOptionsLayer::create), &EditorOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&EditorOptionsLayer::init), &EditorOptionsLayer::init>;
	t["onClose"] = sol::c_call<decltype(&EditorOptionsLayer::onClose), &EditorOptionsLayer::onClose>;
	t["setupOptions"] = sol::c_call<decltype(&EditorOptionsLayer::setupOptions), &EditorOptionsLayer::setupOptions>;
}
void register_EditorPauseLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditorPauseLayer");
	t["create"] = sol::c_call<decltype(&EditorPauseLayer::create), &EditorPauseLayer::create>;
	t["init"] = sol::c_call<decltype(&EditorPauseLayer::init), &EditorPauseLayer::init>;
	t["onCreateLoop"] = sol::c_call<decltype(&EditorPauseLayer::onCreateLoop), &EditorPauseLayer::onCreateLoop>;
	t["onExitEditor"] = sol::c_call<decltype(&EditorPauseLayer::onExitEditor), &EditorPauseLayer::onExitEditor>;
	t["onExitNoSave"] = sol::c_call<decltype(&EditorPauseLayer::onExitNoSave), &EditorPauseLayer::onExitNoSave>;
	t["onResetUnusedColors"] = sol::c_call<decltype(&EditorPauseLayer::onResetUnusedColors), &EditorPauseLayer::onResetUnusedColors>;
	t["onResume"] = sol::c_call<decltype(&EditorPauseLayer::onResume), &EditorPauseLayer::onResume>;
	t["onSave"] = sol::c_call<decltype(&EditorPauseLayer::onSave), &EditorPauseLayer::onSave>;
	t["onSaveAndExit"] = sol::c_call<decltype(&EditorPauseLayer::onSaveAndExit), &EditorPauseLayer::onSaveAndExit>;
	t["onSaveAndPlay"] = sol::c_call<decltype(&EditorPauseLayer::onSaveAndPlay), &EditorPauseLayer::onSaveAndPlay>;
	t["onSelectAll"] = sol::c_call<decltype(&EditorPauseLayer::onSelectAll), &EditorPauseLayer::onSelectAll>;
	t["onSelectAllLeft"] = sol::c_call<decltype(&EditorPauseLayer::onSelectAllLeft), &EditorPauseLayer::onSelectAllLeft>;
	t["onSong"] = sol::c_call<decltype(&EditorPauseLayer::onSong), &EditorPauseLayer::onSong>;
	t["saveLevel"] = sol::c_call<decltype(&EditorPauseLayer::saveLevel), &EditorPauseLayer::saveLevel>;
	t["keyBackClicked"] = sol::c_call<decltype(&EditorPauseLayer::keyBackClicked), &EditorPauseLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&EditorPauseLayer::keyDown), &EditorPauseLayer::keyDown>;
	t["customSetup"] = sol::c_call<decltype(&EditorPauseLayer::customSetup), &EditorPauseLayer::customSetup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&EditorPauseLayer::FLAlert_Clicked), &EditorPauseLayer::FLAlert_Clicked>;
}
void register_EditorUI(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditorUI");
	t["createCustomItems"] = sol::c_call<decltype(&EditorUI::createCustomItems), &EditorUI::createCustomItems>;
	t["createLoop"] = sol::c_call<decltype(&EditorUI::createLoop), &EditorUI::createLoop>;
	t["deleteObject"] = sol::c_call<decltype(&EditorUI::deleteObject), &EditorUI::deleteObject>;
	t["getCreateBtn"] = sol::c_call<decltype(&EditorUI::getCreateBtn), &EditorUI::getCreateBtn>;
	t["getSelectedObjects"] = sol::c_call<decltype(&EditorUI::getSelectedObjects), &EditorUI::getSelectedObjects>;
	t["init"] = sol::c_call<decltype(&EditorUI::init), &EditorUI::init>;
	t["isSpecialSnapObject"] = sol::c_call<decltype(&EditorUI::isSpecialSnapObject), &EditorUI::isSpecialSnapObject>;
	t["moveForCommand"] = sol::c_call<decltype(&EditorUI::moveForCommand), &EditorUI::moveForCommand>;
	t["onCopy"] = sol::c_call<decltype(&EditorUI::onCopy), &EditorUI::onCopy>;
	t["onCopyState"] = sol::c_call<decltype(&EditorUI::onCopyState), &EditorUI::onCopyState>;
	t["onCreate"] = sol::c_call<decltype(&EditorUI::onCreate), &EditorUI::onCreate>;
	t["onCreateButton"] = sol::c_call<decltype(&EditorUI::onCreateButton), &EditorUI::onCreateButton>;
	t["onDelete"] = sol::c_call<decltype(&EditorUI::onDelete), &EditorUI::onDelete>;
	t["onDeleteSelected"] = sol::c_call<decltype(&EditorUI::onDeleteSelected), &EditorUI::onDeleteSelected>;
	t["onDeleteSelectedType"] = sol::c_call<decltype(&EditorUI::onDeleteSelectedType), &EditorUI::onDeleteSelectedType>;
	t["onDeselectAll"] = sol::c_call<decltype(&EditorUI::onDeselectAll), &EditorUI::onDeselectAll>;
	t["onDuplicate"] = sol::c_call<decltype(&EditorUI::onDuplicate), &EditorUI::onDuplicate>;
	t["onEditColor"] = sol::c_call<decltype(&EditorUI::onEditColor), &EditorUI::onEditColor>;
	t["onGoToBaseLayer"] = sol::c_call<decltype(&EditorUI::onGoToBaseLayer), &EditorUI::onGoToBaseLayer>;
	t["onGoToLayer"] = sol::c_call<decltype(&EditorUI::onGoToLayer), &EditorUI::onGoToLayer>;
	t["onGroupDown"] = sol::c_call<decltype(&EditorUI::onGroupDown), &EditorUI::onGroupDown>;
	t["onGroupSticky"] = sol::c_call<decltype(&EditorUI::onGroupSticky), &EditorUI::onGroupSticky>;
	t["onGroupUp"] = sol::c_call<decltype(&EditorUI::onGroupUp), &EditorUI::onGroupUp>;
	t["onLockLayer"] = sol::c_call<decltype(&EditorUI::onLockLayer), &EditorUI::onLockLayer>;
	t["onNewCustomItem"] = sol::c_call<decltype(&EditorUI::onNewCustomItem), &EditorUI::onNewCustomItem>;
	t["onPaste"] = sol::c_call<decltype(&EditorUI::onPaste), &EditorUI::onPaste>;
	t["onPasteColor"] = sol::c_call<decltype(&EditorUI::onPasteColor), &EditorUI::onPasteColor>;
	t["onPasteState"] = sol::c_call<decltype(&EditorUI::onPasteState), &EditorUI::onPasteState>;
	t["onPause"] = sol::c_call<decltype(&EditorUI::onPause), &EditorUI::onPause>;
	t["onPlayback"] = sol::c_call<decltype(&EditorUI::onPlayback), &EditorUI::onPlayback>;
	t["onPlaytest"] = sol::c_call<decltype(&EditorUI::onPlaytest), &EditorUI::onPlaytest>;
	t["onSelectBuildTab"] = sol::c_call<decltype(&EditorUI::onSelectBuildTab), &EditorUI::onSelectBuildTab>;
	t["onSettings"] = sol::c_call<decltype(&EditorUI::onSettings), &EditorUI::onSettings>;
	t["onStopPlaytest"] = sol::c_call<decltype(&EditorUI::onStopPlaytest), &EditorUI::onStopPlaytest>;
	t["onUngroupSticky"] = sol::c_call<decltype(&EditorUI::onUngroupSticky), &EditorUI::onUngroupSticky>;
	t["onUpdateDeleteFilter"] = sol::c_call<decltype(&EditorUI::onUpdateDeleteFilter), &EditorUI::onUpdateDeleteFilter>;
	t["recreateButtonTabs"] = sol::c_call<decltype(&EditorUI::recreateButtonTabs), &EditorUI::recreateButtonTabs>;
	t["reloadCustomItems"] = sol::c_call<decltype(&EditorUI::reloadCustomItems), &EditorUI::reloadCustomItems>;
	t["resetObjectEditorValues"] = sol::c_call<decltype(&EditorUI::resetObjectEditorValues), &EditorUI::resetObjectEditorValues>;
	t["shouldDeleteObject"] = sol::c_call<decltype(&EditorUI::shouldDeleteObject), &EditorUI::shouldDeleteObject>;
	t["showLiveColorSelectForMode"] = sol::c_call<decltype(&EditorUI::showLiveColorSelectForMode), &EditorUI::showLiveColorSelectForMode>;
	t["showMaxBasicError"] = sol::c_call<decltype(&EditorUI::showMaxBasicError), &EditorUI::showMaxBasicError>;
	t["showMaxCoinError"] = sol::c_call<decltype(&EditorUI::showMaxCoinError), &EditorUI::showMaxCoinError>;
	t["showMaxError"] = sol::c_call<decltype(&EditorUI::showMaxError), &EditorUI::showMaxError>;
	t["showUI"] = sol::c_call<decltype(&EditorUI::showUI), &EditorUI::showUI>;
	t["updateZoom"] = sol::c_call<decltype(&EditorUI::updateZoom), &EditorUI::updateZoom>;
	t["valueFromXPos"] = sol::c_call<decltype(&EditorUI::valueFromXPos), &EditorUI::valueFromXPos>;
	t["draw"] = sol::c_call<decltype(&EditorUI::draw), &EditorUI::draw>;
	t["ccTouchBegan"] = sol::c_call<decltype(&EditorUI::ccTouchBegan), &EditorUI::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&EditorUI::ccTouchMoved), &EditorUI::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&EditorUI::ccTouchEnded), &EditorUI::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&EditorUI::ccTouchCancelled), &EditorUI::ccTouchCancelled>;
	t["keyBackClicked"] = sol::c_call<decltype(&EditorUI::keyBackClicked), &EditorUI::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&EditorUI::keyDown), &EditorUI::keyDown>;
	t["setIDPopupClosed"] = sol::c_call<decltype(&EditorUI::setIDPopupClosed), &EditorUI::setIDPopupClosed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&EditorUI::FLAlert_Clicked), &EditorUI::FLAlert_Clicked>;
	t["songStateChanged"] = sol::c_call<decltype(&EditorUI::songStateChanged), &EditorUI::songStateChanged>;
	t["keyUp"] = sol::c_call<decltype(&EditorUI::keyUp), &EditorUI::keyUp>;
	t["scrollWheel"] = sol::c_call<decltype(&EditorUI::scrollWheel), &EditorUI::scrollWheel>;
	t["scaleXYChanged"] = sol::c_call<decltype(&EditorUI::scaleXYChanged), &EditorUI::scaleXYChanged>;
}
void register_EditTriggersPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EditTriggersPopup");
	t["create"] = sol::c_call<decltype(&EditTriggersPopup::create), &EditTriggersPopup::create>;
	t["init"] = sol::c_call<decltype(&EditTriggersPopup::init), &EditTriggersPopup::init>;
}
void register_EndLevelLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EndLevelLayer");
	t["create"] = sol::c_call<decltype(&EndLevelLayer::create), &EndLevelLayer::create>;
	t["goEdit"] = sol::c_call<decltype(&EndLevelLayer::goEdit), &EndLevelLayer::goEdit>;
	t["onEdit"] = sol::c_call<decltype(&EndLevelLayer::onEdit), &EndLevelLayer::onEdit>;
	t["onLevelLeaderboard"] = sol::c_call<decltype(&EndLevelLayer::onLevelLeaderboard), &EndLevelLayer::onLevelLeaderboard>;
	t["onMenu"] = sol::c_call<decltype(&EndLevelLayer::onMenu), &EndLevelLayer::onMenu>;
	t["onReplay"] = sol::c_call<decltype(&EndLevelLayer::onReplay), &EndLevelLayer::onReplay>;
	t["playCoinEffect"] = sol::c_call<decltype(&EndLevelLayer::playCoinEffect), &EndLevelLayer::playCoinEffect>;
	t["playCurrencyEffect"] = sol::c_call<decltype(&EndLevelLayer::playCurrencyEffect), &EndLevelLayer::playCurrencyEffect>;
	t["playDiamondEffect"] = sol::c_call<decltype(&EndLevelLayer::playDiamondEffect), &EndLevelLayer::playDiamondEffect>;
	t["playEndEffect"] = sol::c_call<decltype(&EndLevelLayer::playEndEffect), &EndLevelLayer::playEndEffect>;
	t["playStarEffect"] = sol::c_call<decltype(&EndLevelLayer::playStarEffect), &EndLevelLayer::playStarEffect>;
	t["keyBackClicked"] = sol::c_call<decltype(&EndLevelLayer::keyBackClicked), &EndLevelLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&EndLevelLayer::keyDown), &EndLevelLayer::keyDown>;
	t["customSetup"] = sol::c_call<decltype(&EndLevelLayer::customSetup), &EndLevelLayer::customSetup>;
	t["showLayer"] = sol::c_call<decltype(&EndLevelLayer::showLayer), &EndLevelLayer::showLayer>;
}
void register_EndPortalObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EndPortalObject");
	t["create"] = sol::c_call<decltype(&EndPortalObject::create), &EndPortalObject::create>;
	t["init"] = sol::c_call<decltype(&EndPortalObject::init), &EndPortalObject::init>;
}
void register_EnhancedTriggerObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EnhancedTriggerObject");
	t["create"] = sol::c_call<decltype(&EnhancedTriggerObject::create), &EnhancedTriggerObject::create>;
}
void register_EnterEffectObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EnterEffectObject");
	t["create"] = sol::c_call<decltype(&EnterEffectObject::create), &EnterEffectObject::create>;
}
void register_EventLinkTrigger(sol::state_view lua)
{
	sol::table t = lua.create_named_table("EventLinkTrigger");
	t["create"] = sol::c_call<decltype(&EventLinkTrigger::create), &EventLinkTrigger::create>;
	t["init"] = sol::c_call<decltype(&EventLinkTrigger::init), &EventLinkTrigger::init>;
}
void register_ExtendedLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ExtendedLayer");
	t["create"] = sol::c_call<decltype(&ExtendedLayer::create), &ExtendedLayer::create>;
	t["init"] = sol::c_call<decltype(&ExtendedLayer::init), &ExtendedLayer::init>;
	t["setPosition"] = sol::c_call<decltype(&ExtendedLayer::setPosition), &ExtendedLayer::setPosition>;
}
void register_GManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GManager");
	t["saveGMTo"] = sol::c_call<decltype(&GManager::saveGMTo), &GManager::saveGMTo>;
	t["setup"] = sol::c_call<decltype(&GManager::setup), &GManager::setup>;
}
void register_FindBPMLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FindBPMLayer");
	t["create"] = sol::c_call<decltype(&FindBPMLayer::create), &FindBPMLayer::create>;
	t["init"] = sol::c_call<decltype(&FindBPMLayer::init), &FindBPMLayer::init>;
	t["onClose"] = sol::c_call<decltype(&FindBPMLayer::onClose), &FindBPMLayer::onClose>;
	t["onRecord"] = sol::c_call<decltype(&FindBPMLayer::onRecord), &FindBPMLayer::onRecord>;
}
void register_SetIDPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetIDPopup");
	t["create"] = sol::c_call<decltype(&SetIDPopup::create), &SetIDPopup::create>;
	t["init"] = sol::c_call<decltype(&SetIDPopup::init), &SetIDPopup::init>;
	t["onCancel"] = sol::c_call<decltype(&SetIDPopup::onCancel), &SetIDPopup::onCancel>;
	t["onClose"] = sol::c_call<decltype(&SetIDPopup::onClose), &SetIDPopup::onClose>;
	t["onItemIDArrow"] = sol::c_call<decltype(&SetIDPopup::onItemIDArrow), &SetIDPopup::onItemIDArrow>;
	t["onResetValue"] = sol::c_call<decltype(&SetIDPopup::onResetValue), &SetIDPopup::onResetValue>;
	t["keyBackClicked"] = sol::c_call<decltype(&SetIDPopup::keyBackClicked), &SetIDPopup::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&SetIDPopup::show), &SetIDPopup::show>;
	t["textChanged"] = sol::c_call<decltype(&SetIDPopup::textChanged), &SetIDPopup::textChanged>;
}
void register_FindObjectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FindObjectPopup");
	t["create"] = sol::c_call<decltype(&FindObjectPopup::create), &FindObjectPopup::create>;
	t["init"] = sol::c_call<decltype(&FindObjectPopup::init), &FindObjectPopup::init>;
}
void register_FMODAudioEngine(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FMODAudioEngine");
	t["sharedEngine"] = sol::c_call<decltype(&FMODAudioEngine::sharedEngine), &FMODAudioEngine::sharedEngine>;
	t["clearAllAudio"] = sol::c_call<decltype(&FMODAudioEngine::clearAllAudio), &FMODAudioEngine::clearAllAudio>;
	t["releaseRemovedSounds"] = sol::c_call<decltype(&FMODAudioEngine::releaseRemovedSounds), &FMODAudioEngine::releaseRemovedSounds>;
	t["setChannelPitch"] = sol::c_call<decltype(&FMODAudioEngine::setChannelPitch), &FMODAudioEngine::setChannelPitch>;
	t["setChannelVolume"] = sol::c_call<decltype(&FMODAudioEngine::setChannelVolume), &FMODAudioEngine::setChannelVolume>;
	t["setChannelVolumeMod"] = sol::c_call<decltype(&FMODAudioEngine::setChannelVolumeMod), &FMODAudioEngine::setChannelVolumeMod>;
	t["setMusicTimeMS"] = sol::c_call<decltype(&FMODAudioEngine::setMusicTimeMS), &FMODAudioEngine::setMusicTimeMS>;
	t["stopAllEffects"] = sol::c_call<decltype(&FMODAudioEngine::stopAllEffects), &FMODAudioEngine::stopAllEffects>;
	t["stopAllMusic"] = sol::c_call<decltype(&FMODAudioEngine::stopAllMusic), &FMODAudioEngine::stopAllMusic>;
	t["updateBackgroundFade"] = sol::c_call<decltype(&FMODAudioEngine::updateBackgroundFade), &FMODAudioEngine::updateBackgroundFade>;
	t["updateMetering"] = sol::c_call<decltype(&FMODAudioEngine::updateMetering), &FMODAudioEngine::updateMetering>;
	t["updateQueuedMusic"] = sol::c_call<decltype(&FMODAudioEngine::updateQueuedMusic), &FMODAudioEngine::updateQueuedMusic>;
	t["updateTemporaryEffects"] = sol::c_call<decltype(&FMODAudioEngine::updateTemporaryEffects), &FMODAudioEngine::updateTemporaryEffects>;
	t["update"] = sol::c_call<decltype(&FMODAudioEngine::update), &FMODAudioEngine::update>;
}
void register_FMODLevelVisualizer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FMODLevelVisualizer");
	t["create"] = sol::c_call<decltype(&FMODLevelVisualizer::create), &FMODLevelVisualizer::create>;
	t["updateVisualizer"] = sol::c_call<decltype(&FMODLevelVisualizer::updateVisualizer), &FMODLevelVisualizer::updateVisualizer>;
	t["init"] = sol::c_call<decltype(&FMODLevelVisualizer::init), &FMODLevelVisualizer::init>;
}
void register_FollowRewardPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FollowRewardPage");
	t["create"] = sol::c_call<decltype(&FollowRewardPage::create), &FollowRewardPage::create>;
	t["init"] = sol::c_call<decltype(&FollowRewardPage::init), &FollowRewardPage::init>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&FollowRewardPage::FLAlert_Clicked), &FollowRewardPage::FLAlert_Clicked>;
	t["updateRate"] = sol::c_call<decltype(&FollowRewardPage::updateRate), &FollowRewardPage::updateRate>;
}
void register_ForceBlockGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ForceBlockGameObject");
	t["create"] = sol::c_call<decltype(&ForceBlockGameObject::create), &ForceBlockGameObject::create>;
}
void register_FRequestProfilePage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FRequestProfilePage");
	t["create"] = sol::c_call<decltype(&FRequestProfilePage::create), &FRequestProfilePage::create>;
	t["init"] = sol::c_call<decltype(&FRequestProfilePage::init), &FRequestProfilePage::init>;
	t["isCorrect"] = sol::c_call<decltype(&FRequestProfilePage::isCorrect), &FRequestProfilePage::isCorrect>;
	t["loadPage"] = sol::c_call<decltype(&FRequestProfilePage::loadPage), &FRequestProfilePage::loadPage>;
	t["setupCommentsBrowser"] = sol::c_call<decltype(&FRequestProfilePage::setupCommentsBrowser), &FRequestProfilePage::setupCommentsBrowser>;
	t["keyBackClicked"] = sol::c_call<decltype(&FRequestProfilePage::keyBackClicked), &FRequestProfilePage::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&FRequestProfilePage::FLAlert_Clicked), &FRequestProfilePage::FLAlert_Clicked>;
	t["onClosePopup"] = sol::c_call<decltype(&FRequestProfilePage::onClosePopup), &FRequestProfilePage::onClosePopup>;
	t["uploadActionFinished"] = sol::c_call<decltype(&FRequestProfilePage::uploadActionFinished), &FRequestProfilePage::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&FRequestProfilePage::uploadActionFailed), &FRequestProfilePage::uploadActionFailed>;
	t["setupPageInfo"] = sol::c_call<decltype(&FRequestProfilePage::setupPageInfo), &FRequestProfilePage::setupPageInfo>;
}
void register_FriendRequestPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FriendRequestPopup");
	t["create"] = sol::c_call<decltype(&FriendRequestPopup::create), &FriendRequestPopup::create>;
	t["init"] = sol::c_call<decltype(&FriendRequestPopup::init), &FriendRequestPopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&FriendRequestPopup::keyBackClicked), &FriendRequestPopup::keyBackClicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&FriendRequestPopup::uploadActionFinished), &FriendRequestPopup::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&FriendRequestPopup::uploadActionFailed), &FriendRequestPopup::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&FriendRequestPopup::onClosePopup), &FriendRequestPopup::onClosePopup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&FriendRequestPopup::FLAlert_Clicked), &FriendRequestPopup::FLAlert_Clicked>;
}
void register_FriendsProfilePage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("FriendsProfilePage");
	t["create"] = sol::c_call<decltype(&FriendsProfilePage::create), &FriendsProfilePage::create>;
	t["init"] = sol::c_call<decltype(&FriendsProfilePage::init), &FriendsProfilePage::init>;
	t["onBlocked"] = sol::c_call<decltype(&FriendsProfilePage::onBlocked), &FriendsProfilePage::onBlocked>;
	t["keyBackClicked"] = sol::c_call<decltype(&FriendsProfilePage::keyBackClicked), &FriendsProfilePage::keyBackClicked>;
	t["getUserListFinished"] = sol::c_call<decltype(&FriendsProfilePage::getUserListFinished), &FriendsProfilePage::getUserListFinished>;
	t["getUserListFailed"] = sol::c_call<decltype(&FriendsProfilePage::getUserListFailed), &FriendsProfilePage::getUserListFailed>;
	t["forceReloadList"] = sol::c_call<decltype(&FriendsProfilePage::forceReloadList), &FriendsProfilePage::forceReloadList>;
}
void register_GameCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameCell");
	t["draw"] = sol::c_call<decltype(&GameCell::draw), &GameCell::draw>;
}
void register_GameLevelManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameLevelManager");
	t["sharedState"] = sol::c_call<decltype(&GameLevelManager::sharedState), &GameLevelManager::sharedState>;
	t["acceptFriendRequest"] = sol::c_call<decltype(&GameLevelManager::acceptFriendRequest), &GameLevelManager::acceptFriendRequest>;
	t["addDLToActive"] = sol::c_call<decltype(&GameLevelManager::addDLToActive), &GameLevelManager::addDLToActive>;
	t["blockUser"] = sol::c_call<decltype(&GameLevelManager::blockUser), &GameLevelManager::blockUser>;
	t["cleanupDailyLevels"] = sol::c_call<decltype(&GameLevelManager::cleanupDailyLevels), &GameLevelManager::cleanupDailyLevels>;
	t["createAndGetMapPacks"] = sol::c_call<decltype(&GameLevelManager::createAndGetMapPacks), &GameLevelManager::createAndGetMapPacks>;
	t["createNewLevel"] = sol::c_call<decltype(&GameLevelManager::createNewLevel), &GameLevelManager::createNewLevel>;
	t["createNewLevelList"] = sol::c_call<decltype(&GameLevelManager::createNewLevelList), &GameLevelManager::createNewLevelList>;
	t["dataLoaded"] = sol::c_call<decltype(&GameLevelManager::dataLoaded), &GameLevelManager::dataLoaded>;
	t["deleteComment"] = sol::c_call<decltype(&GameLevelManager::deleteComment), &GameLevelManager::deleteComment>;
	t["deleteFriendRequests"] = sol::c_call<decltype(&GameLevelManager::deleteFriendRequests), &GameLevelManager::deleteFriendRequests>;
	t["deleteLevel"] = sol::c_call<decltype(&GameLevelManager::deleteLevel), &GameLevelManager::deleteLevel>;
	t["deleteLevelList"] = sol::c_call<decltype(&GameLevelManager::deleteLevelList), &GameLevelManager::deleteLevelList>;
	t["deleteServerLevel"] = sol::c_call<decltype(&GameLevelManager::deleteServerLevel), &GameLevelManager::deleteServerLevel>;
	t["deleteServerLevelList"] = sol::c_call<decltype(&GameLevelManager::deleteServerLevelList), &GameLevelManager::deleteServerLevelList>;
	t["deleteUserMessages"] = sol::c_call<decltype(&GameLevelManager::deleteUserMessages), &GameLevelManager::deleteUserMessages>;
	t["downloadLevel"] = sol::c_call<decltype(&GameLevelManager::downloadLevel), &GameLevelManager::downloadLevel>;
	t["downloadUserMessage"] = sol::c_call<decltype(&GameLevelManager::downloadUserMessage), &GameLevelManager::downloadUserMessage>;
	t["encodeDataTo"] = sol::c_call<decltype(&GameLevelManager::encodeDataTo), &GameLevelManager::encodeDataTo>;
	t["firstSetup"] = sol::c_call<decltype(&GameLevelManager::firstSetup), &GameLevelManager::firstSetup>;
	t["followUser"] = sol::c_call<decltype(&GameLevelManager::followUser), &GameLevelManager::followUser>;
	t["getAccountComments"] = sol::c_call<decltype(&GameLevelManager::getAccountComments), &GameLevelManager::getAccountComments>;
	t["getBasePostString"] = sol::c_call<decltype(&GameLevelManager::getBasePostString), &GameLevelManager::getBasePostString>;
	t["getBoolForKey"] = sol::c_call<decltype(&GameLevelManager::getBoolForKey), &GameLevelManager::getBoolForKey>;
	t["getCommentKey"] = sol::c_call<decltype(&GameLevelManager::getCommentKey), &GameLevelManager::getCommentKey>;
	t["getCompletedLevels"] = sol::c_call<decltype(&GameLevelManager::getCompletedLevels), &GameLevelManager::getCompletedLevels>;
	t["getFriendRequests"] = sol::c_call<decltype(&GameLevelManager::getFriendRequests), &GameLevelManager::getFriendRequests>;
	t["getGauntletLevels"] = sol::c_call<decltype(&GameLevelManager::getGauntletLevels), &GameLevelManager::getGauntletLevels>;
	t["getGauntlets"] = sol::c_call<decltype(&GameLevelManager::getGauntlets), &GameLevelManager::getGauntlets>;
	t["getGauntletsearchKey"] = sol::c_call<decltype(&GameLevelManager::getGauntletsearchKey), &GameLevelManager::getGauntletsearchKey>;
	t["getGJChallenges"] = sol::c_call<decltype(&GameLevelManager::getGJChallenges), &GameLevelManager::getGJChallenges>;
	t["getGJDailyLevelState"] = sol::c_call<decltype(&GameLevelManager::getGJDailyLevelState), &GameLevelManager::getGJDailyLevelState>;
	t["getGJRewards"] = sol::c_call<decltype(&GameLevelManager::getGJRewards), &GameLevelManager::getGJRewards>;
	t["getGJUserInfo"] = sol::c_call<decltype(&GameLevelManager::getGJUserInfo), &GameLevelManager::getGJUserInfo>;
	t["getHighestLevelOrder"] = sol::c_call<decltype(&GameLevelManager::getHighestLevelOrder), &GameLevelManager::getHighestLevelOrder>;
	t["getLeaderboardScores"] = sol::c_call<decltype(&GameLevelManager::getLeaderboardScores), &GameLevelManager::getLeaderboardScores>;
	t["getLevelComments"] = sol::c_call<decltype(&GameLevelManager::getLevelComments), &GameLevelManager::getLevelComments>;
	t["getLevelLeaderboard"] = sol::c_call<decltype(&GameLevelManager::getLevelLeaderboard), &GameLevelManager::getLevelLeaderboard>;
	t["getLevelLists"] = sol::c_call<decltype(&GameLevelManager::getLevelLists), &GameLevelManager::getLevelLists>;
	t["getLevelSaveData"] = sol::c_call<decltype(&GameLevelManager::getLevelSaveData), &GameLevelManager::getLevelSaveData>;
	t["getLowestLevelOrder"] = sol::c_call<decltype(&GameLevelManager::getLowestLevelOrder), &GameLevelManager::getLowestLevelOrder>;
	t["getMainLevel"] = sol::c_call<decltype(&GameLevelManager::getMainLevel), &GameLevelManager::getMainLevel>;
	t["getMapPacks"] = sol::c_call<decltype(&GameLevelManager::getMapPacks), &GameLevelManager::getMapPacks>;
	t["getNextFreeTemplateID"] = sol::c_call<decltype(&GameLevelManager::getNextFreeTemplateID), &GameLevelManager::getNextFreeTemplateID>;
	t["getOnlineLevels"] = sol::c_call<decltype(&GameLevelManager::getOnlineLevels), &GameLevelManager::getOnlineLevels>;
	t["getPageInfo"] = sol::c_call<decltype(&GameLevelManager::getPageInfo), &GameLevelManager::getPageInfo>;
	t["getSavedDailyLevel"] = sol::c_call<decltype(&GameLevelManager::getSavedDailyLevel), &GameLevelManager::getSavedDailyLevel>;
	t["getSavedGauntlet"] = sol::c_call<decltype(&GameLevelManager::getSavedGauntlet), &GameLevelManager::getSavedGauntlet>;
	t["getSavedGauntletLevel"] = sol::c_call<decltype(&GameLevelManager::getSavedGauntletLevel), &GameLevelManager::getSavedGauntletLevel>;
	t["getSavedLevelLists"] = sol::c_call<decltype(&GameLevelManager::getSavedLevelLists), &GameLevelManager::getSavedLevelLists>;
	t["getSavedLevels"] = sol::c_call<decltype(&GameLevelManager::getSavedLevels), &GameLevelManager::getSavedLevels>;
	t["getSplitIntFromKey"] = sol::c_call<decltype(&GameLevelManager::getSplitIntFromKey), &GameLevelManager::getSplitIntFromKey>;
	t["getStoredOnlineLevels"] = sol::c_call<decltype(&GameLevelManager::getStoredOnlineLevels), &GameLevelManager::getStoredOnlineLevels>;
	t["getStoredUserList"] = sol::c_call<decltype(&GameLevelManager::getStoredUserList), &GameLevelManager::getStoredUserList>;
	t["getTimeLeft"] = sol::c_call<decltype(&GameLevelManager::getTimeLeft), &GameLevelManager::getTimeLeft>;
	t["getTopArtists"] = sol::c_call<decltype(&GameLevelManager::getTopArtists), &GameLevelManager::getTopArtists>;
	t["getUserList"] = sol::c_call<decltype(&GameLevelManager::getUserList), &GameLevelManager::getUserList>;
	t["getUserMessages"] = sol::c_call<decltype(&GameLevelManager::getUserMessages), &GameLevelManager::getUserMessages>;
	t["getUsers"] = sol::c_call<decltype(&GameLevelManager::getUsers), &GameLevelManager::getUsers>;
	t["handleIt"] = sol::c_call<decltype(&GameLevelManager::handleIt), &GameLevelManager::handleIt>;
	t["hasLikedItem"] = sol::c_call<decltype(&GameLevelManager::hasLikedItem), &GameLevelManager::hasLikedItem>;
	t["hasLikedItemFullCheck"] = sol::c_call<decltype(&GameLevelManager::hasLikedItemFullCheck), &GameLevelManager::hasLikedItemFullCheck>;
	t["invalidateMessages"] = sol::c_call<decltype(&GameLevelManager::invalidateMessages), &GameLevelManager::invalidateMessages>;
	t["invalidateRequests"] = sol::c_call<decltype(&GameLevelManager::invalidateRequests), &GameLevelManager::invalidateRequests>;
	t["isDLActive"] = sol::c_call<decltype(&GameLevelManager::isDLActive), &GameLevelManager::isDLActive>;
	t["isFollowingUser"] = sol::c_call<decltype(&GameLevelManager::isFollowingUser), &GameLevelManager::isFollowingUser>;
	t["isTimeValid"] = sol::c_call<decltype(&GameLevelManager::isTimeValid), &GameLevelManager::isTimeValid>;
	t["levelIDFromCommentKey"] = sol::c_call<decltype(&GameLevelManager::levelIDFromCommentKey), &GameLevelManager::levelIDFromCommentKey>;
	t["likeItem"] = sol::c_call<decltype(&GameLevelManager::likeItem), &GameLevelManager::likeItem>;
	t["limitSavedLevels"] = sol::c_call<decltype(&GameLevelManager::limitSavedLevels), &GameLevelManager::limitSavedLevels>;
	t["makeTimeStamp"] = sol::c_call<decltype(&GameLevelManager::makeTimeStamp), &GameLevelManager::makeTimeStamp>;
	t["markItemAsLiked"] = sol::c_call<decltype(&GameLevelManager::markItemAsLiked), &GameLevelManager::markItemAsLiked>;
	t["markLevelAsDownloaded"] = sol::c_call<decltype(&GameLevelManager::markLevelAsDownloaded), &GameLevelManager::markLevelAsDownloaded>;
	t["markLevelAsRatedStars"] = sol::c_call<decltype(&GameLevelManager::markLevelAsRatedStars), &GameLevelManager::markLevelAsRatedStars>;
	t["onAcceptFriendRequestCompleted"] = sol::c_call<decltype(&GameLevelManager::onAcceptFriendRequestCompleted), &GameLevelManager::onAcceptFriendRequestCompleted>;
	t["onBanUserCompleted"] = sol::c_call<decltype(&GameLevelManager::onBanUserCompleted), &GameLevelManager::onBanUserCompleted>;
	t["onBlockUserCompleted"] = sol::c_call<decltype(&GameLevelManager::onBlockUserCompleted), &GameLevelManager::onBlockUserCompleted>;
	t["onDeleteCommentCompleted"] = sol::c_call<decltype(&GameLevelManager::onDeleteCommentCompleted), &GameLevelManager::onDeleteCommentCompleted>;
	t["onDeleteFriendRequestCompleted"] = sol::c_call<decltype(&GameLevelManager::onDeleteFriendRequestCompleted), &GameLevelManager::onDeleteFriendRequestCompleted>;
	t["onDeleteServerLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::onDeleteServerLevelCompleted), &GameLevelManager::onDeleteServerLevelCompleted>;
	t["onDeleteServerLevelListCompleted"] = sol::c_call<decltype(&GameLevelManager::onDeleteServerLevelListCompleted), &GameLevelManager::onDeleteServerLevelListCompleted>;
	t["onDeleteUserMessagesCompleted"] = sol::c_call<decltype(&GameLevelManager::onDeleteUserMessagesCompleted), &GameLevelManager::onDeleteUserMessagesCompleted>;
	t["onDownloadLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::onDownloadLevelCompleted), &GameLevelManager::onDownloadLevelCompleted>;
	t["onDownloadUserMessageCompleted"] = sol::c_call<decltype(&GameLevelManager::onDownloadUserMessageCompleted), &GameLevelManager::onDownloadUserMessageCompleted>;
	t["onGetAccountCommentsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetAccountCommentsCompleted), &GameLevelManager::onGetAccountCommentsCompleted>;
	t["onGetFriendRequestsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetFriendRequestsCompleted), &GameLevelManager::onGetFriendRequestsCompleted>;
	t["onGetGauntletsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetGauntletsCompleted), &GameLevelManager::onGetGauntletsCompleted>;
	t["onGetGJChallengesCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetGJChallengesCompleted), &GameLevelManager::onGetGJChallengesCompleted>;
	t["onGetGJDailyLevelStateCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetGJDailyLevelStateCompleted), &GameLevelManager::onGetGJDailyLevelStateCompleted>;
	t["onGetGJRewardsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetGJRewardsCompleted), &GameLevelManager::onGetGJRewardsCompleted>;
	t["onGetGJUserInfoCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetGJUserInfoCompleted), &GameLevelManager::onGetGJUserInfoCompleted>;
	t["onGetLeaderboardScoresCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetLeaderboardScoresCompleted), &GameLevelManager::onGetLeaderboardScoresCompleted>;
	t["onGetLevelCommentsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetLevelCommentsCompleted), &GameLevelManager::onGetLevelCommentsCompleted>;
	t["onGetLevelLeaderboardCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetLevelLeaderboardCompleted), &GameLevelManager::onGetLevelLeaderboardCompleted>;
	t["onGetLevelListsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetLevelListsCompleted), &GameLevelManager::onGetLevelListsCompleted>;
	t["onGetLevelSaveDataCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetLevelSaveDataCompleted), &GameLevelManager::onGetLevelSaveDataCompleted>;
	t["onGetMapPacksCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetMapPacksCompleted), &GameLevelManager::onGetMapPacksCompleted>;
	t["onGetNewsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetNewsCompleted), &GameLevelManager::onGetNewsCompleted>;
	t["onGetOnlineLevelsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetOnlineLevelsCompleted), &GameLevelManager::onGetOnlineLevelsCompleted>;
	t["onGetTopArtistsCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetTopArtistsCompleted), &GameLevelManager::onGetTopArtistsCompleted>;
	t["onGetUserListCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetUserListCompleted), &GameLevelManager::onGetUserListCompleted>;
	t["onGetUserMessagesCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetUserMessagesCompleted), &GameLevelManager::onGetUserMessagesCompleted>;
	t["onGetUsersCompleted"] = sol::c_call<decltype(&GameLevelManager::onGetUsersCompleted), &GameLevelManager::onGetUsersCompleted>;
	t["onLikeItemCompleted"] = sol::c_call<decltype(&GameLevelManager::onLikeItemCompleted), &GameLevelManager::onLikeItemCompleted>;
	t["onProcessHttpRequestCompleted"] = sol::c_call<decltype(&GameLevelManager::onProcessHttpRequestCompleted), &GameLevelManager::onProcessHttpRequestCompleted>;
	t["onRateDemonCompleted"] = sol::c_call<decltype(&GameLevelManager::onRateDemonCompleted), &GameLevelManager::onRateDemonCompleted>;
	t["onRateStarsCompleted"] = sol::c_call<decltype(&GameLevelManager::onRateStarsCompleted), &GameLevelManager::onRateStarsCompleted>;
	t["onReadFriendRequestCompleted"] = sol::c_call<decltype(&GameLevelManager::onReadFriendRequestCompleted), &GameLevelManager::onReadFriendRequestCompleted>;
	t["onRemoveFriendCompleted"] = sol::c_call<decltype(&GameLevelManager::onRemoveFriendCompleted), &GameLevelManager::onRemoveFriendCompleted>;
	t["onReportLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::onReportLevelCompleted), &GameLevelManager::onReportLevelCompleted>;
	t["onRequestUserAccessCompleted"] = sol::c_call<decltype(&GameLevelManager::onRequestUserAccessCompleted), &GameLevelManager::onRequestUserAccessCompleted>;
	t["onRestoreItemsCompleted"] = sol::c_call<decltype(&GameLevelManager::onRestoreItemsCompleted), &GameLevelManager::onRestoreItemsCompleted>;
	t["onSetLevelFeaturedCompleted"] = sol::c_call<decltype(&GameLevelManager::onSetLevelFeaturedCompleted), &GameLevelManager::onSetLevelFeaturedCompleted>;
	t["onSetLevelStarsCompleted"] = sol::c_call<decltype(&GameLevelManager::onSetLevelStarsCompleted), &GameLevelManager::onSetLevelStarsCompleted>;
	t["onSuggestLevelStarsCompleted"] = sol::c_call<decltype(&GameLevelManager::onSuggestLevelStarsCompleted), &GameLevelManager::onSuggestLevelStarsCompleted>;
	t["onUnblockUserCompleted"] = sol::c_call<decltype(&GameLevelManager::onUnblockUserCompleted), &GameLevelManager::onUnblockUserCompleted>;
	t["onUpdateDescriptionCompleted"] = sol::c_call<decltype(&GameLevelManager::onUpdateDescriptionCompleted), &GameLevelManager::onUpdateDescriptionCompleted>;
	t["onUpdateLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::onUpdateLevelCompleted), &GameLevelManager::onUpdateLevelCompleted>;
	t["onUpdateUserScoreCompleted"] = sol::c_call<decltype(&GameLevelManager::onUpdateUserScoreCompleted), &GameLevelManager::onUpdateUserScoreCompleted>;
	t["onUploadCommentCompleted"] = sol::c_call<decltype(&GameLevelManager::onUploadCommentCompleted), &GameLevelManager::onUploadCommentCompleted>;
	t["onUploadFriendRequestCompleted"] = sol::c_call<decltype(&GameLevelManager::onUploadFriendRequestCompleted), &GameLevelManager::onUploadFriendRequestCompleted>;
	t["onUploadLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::onUploadLevelCompleted), &GameLevelManager::onUploadLevelCompleted>;
	t["onUploadLevelListCompleted"] = sol::c_call<decltype(&GameLevelManager::onUploadLevelListCompleted), &GameLevelManager::onUploadLevelListCompleted>;
	t["onUploadUserMessageCompleted"] = sol::c_call<decltype(&GameLevelManager::onUploadUserMessageCompleted), &GameLevelManager::onUploadUserMessageCompleted>;
	t["performNetworkTest"] = sol::c_call<decltype(&GameLevelManager::performNetworkTest), &GameLevelManager::performNetworkTest>;
	t["ProcessHttpRequest"] = sol::c_call<decltype(&GameLevelManager::ProcessHttpRequest), &GameLevelManager::ProcessHttpRequest>;
	t["processOnDownloadLevelCompleted"] = sol::c_call<decltype(&GameLevelManager::processOnDownloadLevelCompleted), &GameLevelManager::processOnDownloadLevelCompleted>;
	t["rateDemon"] = sol::c_call<decltype(&GameLevelManager::rateDemon), &GameLevelManager::rateDemon>;
	t["rateStars"] = sol::c_call<decltype(&GameLevelManager::rateStars), &GameLevelManager::rateStars>;
	t["readFriendRequest"] = sol::c_call<decltype(&GameLevelManager::readFriendRequest), &GameLevelManager::readFriendRequest>;
	t["removeDLFromActive"] = sol::c_call<decltype(&GameLevelManager::removeDLFromActive), &GameLevelManager::removeDLFromActive>;
	t["removeFriend"] = sol::c_call<decltype(&GameLevelManager::removeFriend), &GameLevelManager::removeFriend>;
	t["reportLevel"] = sol::c_call<decltype(&GameLevelManager::reportLevel), &GameLevelManager::reportLevel>;
	t["requestUserAccess"] = sol::c_call<decltype(&GameLevelManager::requestUserAccess), &GameLevelManager::requestUserAccess>;
	t["resetAccountComments"] = sol::c_call<decltype(&GameLevelManager::resetAccountComments), &GameLevelManager::resetAccountComments>;
	t["resetCommentTimersForLevelID"] = sol::c_call<decltype(&GameLevelManager::resetCommentTimersForLevelID), &GameLevelManager::resetCommentTimersForLevelID>;
	t["resetDailyLevelState"] = sol::c_call<decltype(&GameLevelManager::resetDailyLevelState), &GameLevelManager::resetDailyLevelState>;
	t["resetTimerForKey"] = sol::c_call<decltype(&GameLevelManager::resetTimerForKey), &GameLevelManager::resetTimerForKey>;
	t["responseToDict"] = sol::c_call<decltype(&GameLevelManager::responseToDict), &GameLevelManager::responseToDict>;
	t["saveFetchedLevels"] = sol::c_call<decltype(&GameLevelManager::saveFetchedLevels), &GameLevelManager::saveFetchedLevels>;
	t["saveGauntlet"] = sol::c_call<decltype(&GameLevelManager::saveGauntlet), &GameLevelManager::saveGauntlet>;
	t["saveLevel"] = sol::c_call<decltype(&GameLevelManager::saveLevel), &GameLevelManager::saveLevel>;
	t["storeDailyLevelState"] = sol::c_call<decltype(&GameLevelManager::storeDailyLevelState), &GameLevelManager::storeDailyLevelState>;
	t["storeSearchResult"] = sol::c_call<decltype(&GameLevelManager::storeSearchResult), &GameLevelManager::storeSearchResult>;
	t["storeUserName"] = sol::c_call<decltype(&GameLevelManager::storeUserName), &GameLevelManager::storeUserName>;
	t["submitUserInfo"] = sol::c_call<decltype(&GameLevelManager::submitUserInfo), &GameLevelManager::submitUserInfo>;
	t["suggestLevelStars"] = sol::c_call<decltype(&GameLevelManager::suggestLevelStars), &GameLevelManager::suggestLevelStars>;
	t["tryGetUsername"] = sol::c_call<decltype(&GameLevelManager::tryGetUsername), &GameLevelManager::tryGetUsername>;
	t["unblockUser"] = sol::c_call<decltype(&GameLevelManager::unblockUser), &GameLevelManager::unblockUser>;
	t["unfollowUser"] = sol::c_call<decltype(&GameLevelManager::unfollowUser), &GameLevelManager::unfollowUser>;
	t["updateDescription"] = sol::c_call<decltype(&GameLevelManager::updateDescription), &GameLevelManager::updateDescription>;
	t["updateLevel"] = sol::c_call<decltype(&GameLevelManager::updateLevel), &GameLevelManager::updateLevel>;
	t["updateLevelOrders"] = sol::c_call<decltype(&GameLevelManager::updateLevelOrders), &GameLevelManager::updateLevelOrders>;
	t["updateLevelRewards"] = sol::c_call<decltype(&GameLevelManager::updateLevelRewards), &GameLevelManager::updateLevelRewards>;
	t["updateUserScore"] = sol::c_call<decltype(&GameLevelManager::updateUserScore), &GameLevelManager::updateUserScore>;
	t["uploadAccountComment"] = sol::c_call<decltype(&GameLevelManager::uploadAccountComment), &GameLevelManager::uploadAccountComment>;
	t["uploadComment"] = sol::c_call<decltype(&GameLevelManager::uploadComment), &GameLevelManager::uploadComment>;
	t["uploadFriendRequest"] = sol::c_call<decltype(&GameLevelManager::uploadFriendRequest), &GameLevelManager::uploadFriendRequest>;
	t["uploadLevel"] = sol::c_call<decltype(&GameLevelManager::uploadLevel), &GameLevelManager::uploadLevel>;
	t["uploadLevelComment"] = sol::c_call<decltype(&GameLevelManager::uploadLevelComment), &GameLevelManager::uploadLevelComment>;
	t["uploadLevelList"] = sol::c_call<decltype(&GameLevelManager::uploadLevelList), &GameLevelManager::uploadLevelList>;
	t["uploadUserMessage"] = sol::c_call<decltype(&GameLevelManager::uploadUserMessage), &GameLevelManager::uploadUserMessage>;
	t["userNameForUserID"] = sol::c_call<decltype(&GameLevelManager::userNameForUserID), &GameLevelManager::userNameForUserID>;
	t["verifyLevelState"] = sol::c_call<decltype(&GameLevelManager::verifyLevelState), &GameLevelManager::verifyLevelState>;
	t["writeSpecialFilters"] = sol::c_call<decltype(&GameLevelManager::writeSpecialFilters), &GameLevelManager::writeSpecialFilters>;
	t["init"] = sol::c_call<decltype(&GameLevelManager::init), &GameLevelManager::init>;
}
void register_GameLevelOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameLevelOptionsLayer");
	t["create"] = sol::c_call<decltype(&GameLevelOptionsLayer::create), &GameLevelOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&GameLevelOptionsLayer::init), &GameLevelOptionsLayer::init>;
	t["setupOptions"] = sol::c_call<decltype(&GameLevelOptionsLayer::setupOptions), &GameLevelOptionsLayer::setupOptions>;
	t["didToggle"] = sol::c_call<decltype(&GameLevelOptionsLayer::didToggle), &GameLevelOptionsLayer::didToggle>;
}
void register_GameManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameManager");
	t["sharedState"] = sol::c_call<decltype(&GameManager::sharedState), &GameManager::sharedState>;
	t["activeIconForType"] = sol::c_call<decltype(&GameManager::activeIconForType), &GameManager::activeIconForType>;
	t["colorForIdx"] = sol::c_call<decltype(&GameManager::colorForIdx), &GameManager::colorForIdx>;
	t["countForType"] = sol::c_call<decltype(&GameManager::countForType), &GameManager::countForType>;
	t["getGameVariable"] = sol::c_call<decltype(&GameManager::getGameVariable), &GameManager::getGameVariable>;
	t["getIntGameVariable"] = sol::c_call<decltype(&GameManager::getIntGameVariable), &GameManager::getIntGameVariable>;
	t["getUGV"] = sol::c_call<decltype(&GameManager::getUGV), &GameManager::getUGV>;
	t["iconTypeToUnlockType"] = sol::c_call<decltype(&GameManager::iconTypeToUnlockType), &GameManager::iconTypeToUnlockType>;
	t["isColorUnlocked"] = sol::c_call<decltype(&GameManager::isColorUnlocked), &GameManager::isColorUnlocked>;
	t["isIconUnlocked"] = sol::c_call<decltype(&GameManager::isIconUnlocked), &GameManager::isIconUnlocked>;
	t["loadBackground"] = sol::c_call<decltype(&GameManager::loadBackground), &GameManager::loadBackground>;
	t["loadGround"] = sol::c_call<decltype(&GameManager::loadGround), &GameManager::loadGround>;
	t["loadIcon"] = sol::c_call<decltype(&GameManager::loadIcon), &GameManager::loadIcon>;
	t["loadMiddleground"] = sol::c_call<decltype(&GameManager::loadMiddleground), &GameManager::loadMiddleground>;
	t["openEditorGuide"] = sol::c_call<decltype(&GameManager::openEditorGuide), &GameManager::openEditorGuide>;
	t["recountUserStats"] = sol::c_call<decltype(&GameManager::recountUserStats), &GameManager::recountUserStats>;
	t["reloadAllStep2"] = sol::c_call<decltype(&GameManager::reloadAllStep2), &GameManager::reloadAllStep2>;
	t["reloadAllStep3"] = sol::c_call<decltype(&GameManager::reloadAllStep3), &GameManager::reloadAllStep3>;
	t["reloadAllStep4"] = sol::c_call<decltype(&GameManager::reloadAllStep4), &GameManager::reloadAllStep4>;
	t["reloadAllStep5"] = sol::c_call<decltype(&GameManager::reloadAllStep5), &GameManager::reloadAllStep5>;
	t["returnToLastScene"] = sol::c_call<decltype(&GameManager::returnToLastScene), &GameManager::returnToLastScene>;
	t["safePopScene"] = sol::c_call<decltype(&GameManager::safePopScene), &GameManager::safePopScene>;
	t["setGameVariable"] = sol::c_call<decltype(&GameManager::setGameVariable), &GameManager::setGameVariable>;
	t["setIntGameVariable"] = sol::c_call<decltype(&GameManager::setIntGameVariable), &GameManager::setIntGameVariable>;
	t["setPlayerUserID"] = sol::c_call<decltype(&GameManager::setPlayerUserID), &GameManager::setPlayerUserID>;
	t["setUGV"] = sol::c_call<decltype(&GameManager::setUGV), &GameManager::setUGV>;
	t["sheetNameForIcon"] = sol::c_call<decltype(&GameManager::sheetNameForIcon), &GameManager::sheetNameForIcon>;
	t["update"] = sol::c_call<decltype(&GameManager::update), &GameManager::update>;
	t["init"] = sol::c_call<decltype(&GameManager::init), &GameManager::init>;
	t["encodeDataTo"] = sol::c_call<decltype(&GameManager::encodeDataTo), &GameManager::encodeDataTo>;
	t["dataLoaded"] = sol::c_call<decltype(&GameManager::dataLoaded), &GameManager::dataLoaded>;
	t["firstLoad"] = sol::c_call<decltype(&GameManager::firstLoad), &GameManager::firstLoad>;
}
void register_GameObjectCopy(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameObjectCopy");
	t["create"] = sol::c_call<decltype(&GameObjectCopy::create), &GameObjectCopy::create>;
	t["init"] = sol::c_call<decltype(&GameObjectCopy::init), &GameObjectCopy::init>;
}
void register_GameOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameOptionsLayer");
	t["create"] = sol::c_call<decltype(&GameOptionsLayer::create), &GameOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&GameOptionsLayer::init), &GameOptionsLayer::init>;
	t["onPracticeMusicSync"] = sol::c_call<decltype(&GameOptionsLayer::onPracticeMusicSync), &GameOptionsLayer::onPracticeMusicSync>;
	t["onUIOptions"] = sol::c_call<decltype(&GameOptionsLayer::onUIOptions), &GameOptionsLayer::onUIOptions>;
	t["showPracticeMusicSyncUnlockInfo"] = sol::c_call<decltype(&GameOptionsLayer::showPracticeMusicSyncUnlockInfo), &GameOptionsLayer::showPracticeMusicSyncUnlockInfo>;
	t["setupOptions"] = sol::c_call<decltype(&GameOptionsLayer::setupOptions), &GameOptionsLayer::setupOptions>;
	t["didToggle"] = sol::c_call<decltype(&GameOptionsLayer::didToggle), &GameOptionsLayer::didToggle>;
}
void register_GameOptionsTrigger(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameOptionsTrigger");
	t["create"] = sol::c_call<decltype(&GameOptionsTrigger::create), &GameOptionsTrigger::create>;
}
void register_GameStatsManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameStatsManager");
	t["sharedState"] = sol::c_call<decltype(&GameStatsManager::sharedState), &GameStatsManager::sharedState>;
	t["accountIDForIcon"] = sol::c_call<decltype(&GameStatsManager::accountIDForIcon), &GameStatsManager::accountIDForIcon>;
	t["awardCurrencyForLevel"] = sol::c_call<decltype(&GameStatsManager::awardCurrencyForLevel), &GameStatsManager::awardCurrencyForLevel>;
	t["checkCoinsForLevel"] = sol::c_call<decltype(&GameStatsManager::checkCoinsForLevel), &GameStatsManager::checkCoinsForLevel>;
	t["completedDemonLevel"] = sol::c_call<decltype(&GameStatsManager::completedDemonLevel), &GameStatsManager::completedDemonLevel>;
	t["completedStarLevel"] = sol::c_call<decltype(&GameStatsManager::completedStarLevel), &GameStatsManager::completedStarLevel>;
	t["dataLoaded"] = sol::c_call<decltype(&GameStatsManager::dataLoaded), &GameStatsManager::dataLoaded>;
	t["encodeDataTo"] = sol::c_call<decltype(&GameStatsManager::encodeDataTo), &GameStatsManager::encodeDataTo>;
	t["getAwardedCurrencyForLevel"] = sol::c_call<decltype(&GameStatsManager::getAwardedCurrencyForLevel), &GameStatsManager::getAwardedCurrencyForLevel>;
	t["getBaseCurrencyForLevel"] = sol::c_call<decltype(&GameStatsManager::getBaseCurrencyForLevel), &GameStatsManager::getBaseCurrencyForLevel>;
	t["getChallenge"] = sol::c_call<decltype(&GameStatsManager::getChallenge), &GameStatsManager::getChallenge>;
	t["getCollectedCoinsForLevel"] = sol::c_call<decltype(&GameStatsManager::getCollectedCoinsForLevel), &GameStatsManager::getCollectedCoinsForLevel>;
	t["getGauntletRewardKey"] = sol::c_call<decltype(&GameStatsManager::getGauntletRewardKey), &GameStatsManager::getGauntletRewardKey>;
	t["getItemUnlockState"] = sol::c_call<decltype(&GameStatsManager::getItemUnlockState), &GameStatsManager::getItemUnlockState>;
	t["getQueuedChallenge"] = sol::c_call<decltype(&GameStatsManager::getQueuedChallenge), &GameStatsManager::getQueuedChallenge>;
	t["getSecondaryQueuedChallenge"] = sol::c_call<decltype(&GameStatsManager::getSecondaryQueuedChallenge), &GameStatsManager::getSecondaryQueuedChallenge>;
	t["getStat"] = sol::c_call<decltype(&GameStatsManager::getStat), &GameStatsManager::getStat>;
	t["getTotalCollectedCurrency"] = sol::c_call<decltype(&GameStatsManager::getTotalCollectedCurrency), &GameStatsManager::getTotalCollectedCurrency>;
	t["hasClaimedListReward"] = sol::c_call<decltype(&GameStatsManager::hasClaimedListReward), &GameStatsManager::hasClaimedListReward>;
	t["hasCompletedChallenge"] = sol::c_call<decltype(&GameStatsManager::hasCompletedChallenge), &GameStatsManager::hasCompletedChallenge>;
	t["hasCompletedDailyLevel"] = sol::c_call<decltype(&GameStatsManager::hasCompletedDailyLevel), &GameStatsManager::hasCompletedDailyLevel>;
	t["hasCompletedDemonLevel"] = sol::c_call<decltype(&GameStatsManager::hasCompletedDemonLevel), &GameStatsManager::hasCompletedDemonLevel>;
	t["hasCompletedStarLevel"] = sol::c_call<decltype(&GameStatsManager::hasCompletedStarLevel), &GameStatsManager::hasCompletedStarLevel>;
	t["hasPendingUserCoin"] = sol::c_call<decltype(&GameStatsManager::hasPendingUserCoin), &GameStatsManager::hasPendingUserCoin>;
	t["hasSecretCoin"] = sol::c_call<decltype(&GameStatsManager::hasSecretCoin), &GameStatsManager::hasSecretCoin>;
	t["hasUserCoin"] = sol::c_call<decltype(&GameStatsManager::hasUserCoin), &GameStatsManager::hasUserCoin>;
	t["isItemEnabled"] = sol::c_call<decltype(&GameStatsManager::isItemEnabled), &GameStatsManager::isItemEnabled>;
	t["isItemUnlocked"] = sol::c_call<decltype(&GameStatsManager::isItemUnlocked), &GameStatsManager::isItemUnlocked>;
	t["isPathChestUnlocked"] = sol::c_call<decltype(&GameStatsManager::isPathChestUnlocked), &GameStatsManager::isPathChestUnlocked>;
	t["isSecretChestUnlocked"] = sol::c_call<decltype(&GameStatsManager::isSecretChestUnlocked), &GameStatsManager::isSecretChestUnlocked>;
	t["isSpecialChestUnlocked"] = sol::c_call<decltype(&GameStatsManager::isSpecialChestUnlocked), &GameStatsManager::isSpecialChestUnlocked>;
	t["isStoreItemUnlocked"] = sol::c_call<decltype(&GameStatsManager::isStoreItemUnlocked), &GameStatsManager::isStoreItemUnlocked>;
	t["setStat"] = sol::c_call<decltype(&GameStatsManager::setStat), &GameStatsManager::setStat>;
	t["storeUserCoin"] = sol::c_call<decltype(&GameStatsManager::storeUserCoin), &GameStatsManager::storeUserCoin>;
	t["usernameForAccountID"] = sol::c_call<decltype(&GameStatsManager::usernameForAccountID), &GameStatsManager::usernameForAccountID>;
	t["init"] = sol::c_call<decltype(&GameStatsManager::init), &GameStatsManager::init>;
}
void register_GameToolbox(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GameToolbox");
	t["addBackButton"] = sol::c_call<decltype(&GameToolbox::addBackButton), &GameToolbox::addBackButton>;
	t["addRThumbScrollButton"] = sol::c_call<decltype(&GameToolbox::addRThumbScrollButton), &GameToolbox::addRThumbScrollButton>;
	t["getTimeString"] = sol::c_call<decltype(&GameToolbox::getTimeString), &GameToolbox::getTimeString>;
	t["stringSetupToDict"] = sol::c_call<decltype(&GameToolbox::stringSetupToDict), &GameToolbox::stringSetupToDict>;
	t["timestampToHumanReadable"] = sol::c_call<decltype(&GameToolbox::timestampToHumanReadable), &GameToolbox::timestampToHumanReadable>;
}
void register_GauntletLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GauntletLayer");
	t["create"] = sol::c_call<decltype(&GauntletLayer::create), &GauntletLayer::create>;
	t["init"] = sol::c_call<decltype(&GauntletLayer::init), &GauntletLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GauntletLayer::keyBackClicked), &GauntletLayer::keyBackClicked>;
	t["loadLevelsFinished"] = sol::c_call<decltype(&GauntletLayer::loadLevelsFinished), &GauntletLayer::loadLevelsFinished>;
	t["loadLevelsFailed"] = sol::c_call<decltype(&GauntletLayer::loadLevelsFailed), &GauntletLayer::loadLevelsFailed>;
}
void register_GauntletNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GauntletNode");
	t["init"] = sol::c_call<decltype(&GauntletNode::init), &GauntletNode::init>;
	t["nameForType"] = sol::c_call<decltype(&GauntletNode::nameForType), &GauntletNode::nameForType>;
}
void register_GauntletSelectLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GauntletSelectLayer");
	t["create"] = sol::c_call<decltype(&GauntletSelectLayer::create), &GauntletSelectLayer::create>;
	t["init"] = sol::c_call<decltype(&GauntletSelectLayer::init), &GauntletSelectLayer::init>;
	t["onBack"] = sol::c_call<decltype(&GauntletSelectLayer::onBack), &GauntletSelectLayer::onBack>;
	t["onPlay"] = sol::c_call<decltype(&GauntletSelectLayer::onPlay), &GauntletSelectLayer::onPlay>;
	t["onRefresh"] = sol::c_call<decltype(&GauntletSelectLayer::onRefresh), &GauntletSelectLayer::onRefresh>;
	t["setupGauntlets"] = sol::c_call<decltype(&GauntletSelectLayer::setupGauntlets), &GauntletSelectLayer::setupGauntlets>;
	t["onExit"] = sol::c_call<decltype(&GauntletSelectLayer::onExit), &GauntletSelectLayer::onExit>;
	t["keyBackClicked"] = sol::c_call<decltype(&GauntletSelectLayer::keyBackClicked), &GauntletSelectLayer::keyBackClicked>;
	t["scrollLayerWillScrollToPage"] = sol::c_call<decltype(&GauntletSelectLayer::scrollLayerWillScrollToPage), &GauntletSelectLayer::scrollLayerWillScrollToPage>;
	t["loadLevelsFinished"] = sol::c_call<decltype(&GauntletSelectLayer::loadLevelsFinished), &GauntletSelectLayer::loadLevelsFinished>;
	t["loadLevelsFailed"] = sol::c_call<decltype(&GauntletSelectLayer::loadLevelsFailed), &GauntletSelectLayer::loadLevelsFailed>;
}
void register_GhostTrailEffect(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GhostTrailEffect");
	t["create"] = sol::c_call<decltype(&GhostTrailEffect::create), &GhostTrailEffect::create>;
	t["init"] = sol::c_call<decltype(&GhostTrailEffect::init), &GhostTrailEffect::init>;
}
void register_GJAccountManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJAccountManager");
	t["sharedState"] = sol::c_call<decltype(&GJAccountManager::sharedState), &GJAccountManager::sharedState>;
	t["getAccountBackupURL"] = sol::c_call<decltype(&GJAccountManager::getAccountBackupURL), &GJAccountManager::getAccountBackupURL>;
	t["getAccountSyncURL"] = sol::c_call<decltype(&GJAccountManager::getAccountSyncURL), &GJAccountManager::getAccountSyncURL>;
	t["handleIt"] = sol::c_call<decltype(&GJAccountManager::handleIt), &GJAccountManager::handleIt>;
	t["loginAccount"] = sol::c_call<decltype(&GJAccountManager::loginAccount), &GJAccountManager::loginAccount>;
	t["onBackupAccountCompleted"] = sol::c_call<decltype(&GJAccountManager::onBackupAccountCompleted), &GJAccountManager::onBackupAccountCompleted>;
	t["onGetAccountBackupURLCompleted"] = sol::c_call<decltype(&GJAccountManager::onGetAccountBackupURLCompleted), &GJAccountManager::onGetAccountBackupURLCompleted>;
	t["onGetAccountSyncURLCompleted"] = sol::c_call<decltype(&GJAccountManager::onGetAccountSyncURLCompleted), &GJAccountManager::onGetAccountSyncURLCompleted>;
	t["onLoginAccountCompleted"] = sol::c_call<decltype(&GJAccountManager::onLoginAccountCompleted), &GJAccountManager::onLoginAccountCompleted>;
	t["onRegisterAccountCompleted"] = sol::c_call<decltype(&GJAccountManager::onRegisterAccountCompleted), &GJAccountManager::onRegisterAccountCompleted>;
	t["onSyncAccountCompleted"] = sol::c_call<decltype(&GJAccountManager::onSyncAccountCompleted), &GJAccountManager::onSyncAccountCompleted>;
	t["onUpdateAccountSettingsCompleted"] = sol::c_call<decltype(&GJAccountManager::onUpdateAccountSettingsCompleted), &GJAccountManager::onUpdateAccountSettingsCompleted>;
	t["registerAccount"] = sol::c_call<decltype(&GJAccountManager::registerAccount), &GJAccountManager::registerAccount>;
	t["removeDLFromActive"] = sol::c_call<decltype(&GJAccountManager::removeDLFromActive), &GJAccountManager::removeDLFromActive>;
	t["updateAccountSettings"] = sol::c_call<decltype(&GJAccountManager::updateAccountSettings), &GJAccountManager::updateAccountSettings>;
	t["init"] = sol::c_call<decltype(&GJAccountManager::init), &GJAccountManager::init>;
}
void register_GJAccountSettingsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJAccountSettingsLayer");
	t["create"] = sol::c_call<decltype(&GJAccountSettingsLayer::create), &GJAccountSettingsLayer::create>;
	t["init"] = sol::c_call<decltype(&GJAccountSettingsLayer::init), &GJAccountSettingsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJAccountSettingsLayer::keyBackClicked), &GJAccountSettingsLayer::keyBackClicked>;
}
void register_GJActionManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJActionManager");
	t["create"] = sol::c_call<decltype(&GJActionManager::create), &GJActionManager::create>;
}
void register_GJGameState(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGameState");
	t["stopTweenAction"] = sol::c_call<decltype(&GJGameState::stopTweenAction), &GJGameState::stopTweenAction>;
}
void register_GJBaseGameLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJBaseGameLayer");
	t["activateCustomRing"] = sol::c_call<decltype(&GJBaseGameLayer::activateCustomRing), &GJBaseGameLayer::activateCustomRing>;
	t["addToGroupParents"] = sol::c_call<decltype(&GJBaseGameLayer::addToGroupParents), &GJBaseGameLayer::addToGroupParents>;
	t["addToGroups"] = sol::c_call<decltype(&GJBaseGameLayer::addToGroups), &GJBaseGameLayer::addToGroups>;
	t["animateInDualGroundNew"] = sol::c_call<decltype(&GJBaseGameLayer::animateInDualGroundNew), &GJBaseGameLayer::animateInDualGroundNew>;
	t["animateOutGroundNew"] = sol::c_call<decltype(&GJBaseGameLayer::animateOutGroundNew), &GJBaseGameLayer::animateOutGroundNew>;
	t["checkCollisions"] = sol::c_call<decltype(&GJBaseGameLayer::checkCollisions), &GJBaseGameLayer::checkCollisions>;
	t["createBackground"] = sol::c_call<decltype(&GJBaseGameLayer::createBackground), &GJBaseGameLayer::createBackground>;
	t["createGroundLayer"] = sol::c_call<decltype(&GJBaseGameLayer::createGroundLayer), &GJBaseGameLayer::createGroundLayer>;
	t["createMiddleground"] = sol::c_call<decltype(&GJBaseGameLayer::createMiddleground), &GJBaseGameLayer::createMiddleground>;
	t["destroyObject"] = sol::c_call<decltype(&GJBaseGameLayer::destroyObject), &GJBaseGameLayer::destroyObject>;
	t["gameEventTriggered"] = sol::c_call<decltype(&GJBaseGameLayer::gameEventTriggered), &GJBaseGameLayer::gameEventTriggered>;
	t["getGroundHeight"] = sol::c_call<decltype(&GJBaseGameLayer::getGroundHeight), &GJBaseGameLayer::getGroundHeight>;
	t["hasUniqueCoin"] = sol::c_call<decltype(&GJBaseGameLayer::hasUniqueCoin), &GJBaseGameLayer::hasUniqueCoin>;
	t["objectTypeToGameEvent"] = sol::c_call<decltype(&GJBaseGameLayer::objectTypeToGameEvent), &GJBaseGameLayer::objectTypeToGameEvent>;
	t["playerWillSwitchMode"] = sol::c_call<decltype(&GJBaseGameLayer::playerWillSwitchMode), &GJBaseGameLayer::playerWillSwitchMode>;
	t["removeFromGroupParents"] = sol::c_call<decltype(&GJBaseGameLayer::removeFromGroupParents), &GJBaseGameLayer::removeFromGroupParents>;
	t["removeFromGroups"] = sol::c_call<decltype(&GJBaseGameLayer::removeFromGroups), &GJBaseGameLayer::removeFromGroups>;
	t["resetSongTriggerValues"] = sol::c_call<decltype(&GJBaseGameLayer::resetSongTriggerValues), &GJBaseGameLayer::resetSongTriggerValues>;
	t["setGroupParent"] = sol::c_call<decltype(&GJBaseGameLayer::setGroupParent), &GJBaseGameLayer::setGroupParent>;
	t["setStartPosObject"] = sol::c_call<decltype(&GJBaseGameLayer::setStartPosObject), &GJBaseGameLayer::setStartPosObject>;
	t["switchToFlyMode"] = sol::c_call<decltype(&GJBaseGameLayer::switchToFlyMode), &GJBaseGameLayer::switchToFlyMode>;
	t["switchToRobotMode"] = sol::c_call<decltype(&GJBaseGameLayer::switchToRobotMode), &GJBaseGameLayer::switchToRobotMode>;
	t["switchToRollMode"] = sol::c_call<decltype(&GJBaseGameLayer::switchToRollMode), &GJBaseGameLayer::switchToRollMode>;
	t["switchToSpiderMode"] = sol::c_call<decltype(&GJBaseGameLayer::switchToSpiderMode), &GJBaseGameLayer::switchToSpiderMode>;
	t["toggleAudioVisualizer"] = sol::c_call<decltype(&GJBaseGameLayer::toggleAudioVisualizer), &GJBaseGameLayer::toggleAudioVisualizer>;
	t["triggerShaderCommand"] = sol::c_call<decltype(&GJBaseGameLayer::triggerShaderCommand), &GJBaseGameLayer::triggerShaderCommand>;
	t["updateCameraMode"] = sol::c_call<decltype(&GJBaseGameLayer::updateCameraMode), &GJBaseGameLayer::updateCameraMode>;
	t["updateDualGround"] = sol::c_call<decltype(&GJBaseGameLayer::updateDualGround), &GJBaseGameLayer::updateDualGround>;
	t["updateMGOffsetY"] = sol::c_call<decltype(&GJBaseGameLayer::updateMGOffsetY), &GJBaseGameLayer::updateMGOffsetY>;
	t["updateZoom"] = sol::c_call<decltype(&GJBaseGameLayer::updateZoom), &GJBaseGameLayer::updateZoom>;
	t["update"] = sol::c_call<decltype(&GJBaseGameLayer::update), &GJBaseGameLayer::update>;
	t["init"] = sol::c_call<decltype(&GJBaseGameLayer::init), &GJBaseGameLayer::init>;
	t["visit"] = sol::c_call<decltype(&GJBaseGameLayer::visit), &GJBaseGameLayer::visit>;
	t["addToGroup"] = sol::c_call<decltype(&GJBaseGameLayer::addToGroup), &GJBaseGameLayer::addToGroup>;
	t["removeFromGroup"] = sol::c_call<decltype(&GJBaseGameLayer::removeFromGroup), &GJBaseGameLayer::removeFromGroup>;
	t["checkpointActivated"] = sol::c_call<decltype(&GJBaseGameLayer::checkpointActivated), &GJBaseGameLayer::checkpointActivated>;
}
void register_GJChestSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJChestSprite");
	t["create"] = sol::c_call<decltype(&GJChestSprite::create), &GJChestSprite::create>;
	t["setOpacity"] = sol::c_call<decltype(&GJChestSprite::setOpacity), &GJChestSprite::setOpacity>;
	t["setColor"] = sol::c_call<decltype(&GJChestSprite::setColor), &GJChestSprite::setColor>;
}
void register_GJColorSetupLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJColorSetupLayer");
	t["create"] = sol::c_call<decltype(&GJColorSetupLayer::create), &GJColorSetupLayer::create>;
	t["init"] = sol::c_call<decltype(&GJColorSetupLayer::init), &GJColorSetupLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJColorSetupLayer::keyBackClicked), &GJColorSetupLayer::keyBackClicked>;
	t["colorSelectClosed"] = sol::c_call<decltype(&GJColorSetupLayer::colorSelectClosed), &GJColorSetupLayer::colorSelectClosed>;
}
void register_GJComment(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJComment");
	t["init"] = sol::c_call<decltype(&GJComment::init), &GJComment::init>;
}
void register_GJCommentListLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJCommentListLayer");
	t["create"] = sol::c_call<decltype(&GJCommentListLayer::create), &GJCommentListLayer::create>;
	t["init"] = sol::c_call<decltype(&GJCommentListLayer::init), &GJCommentListLayer::init>;
}
void register_GJDifficultySprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJDifficultySprite");
	t["create"] = sol::c_call<decltype(&GJDifficultySprite::create), &GJDifficultySprite::create>;
	t["init"] = sol::c_call<decltype(&GJDifficultySprite::init), &GJDifficultySprite::init>;
	t["updateDifficultyFrame"] = sol::c_call<decltype(&GJDifficultySprite::updateDifficultyFrame), &GJDifficultySprite::updateDifficultyFrame>;
	t["updateFeatureState"] = sol::c_call<decltype(&GJDifficultySprite::updateFeatureState), &GJDifficultySprite::updateFeatureState>;
	t["updateFeatureStateFromLevel"] = sol::c_call<decltype(&GJDifficultySprite::updateFeatureStateFromLevel), &GJDifficultySprite::updateFeatureStateFromLevel>;
}
void register_GJEffectManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJEffectManager");
	t["create"] = sol::c_call<decltype(&GJEffectManager::create), &GJEffectManager::create>;
	t["getColorAction"] = sol::c_call<decltype(&GJEffectManager::getColorAction), &GJEffectManager::getColorAction>;
	t["getColorSprite"] = sol::c_call<decltype(&GJEffectManager::getColorSprite), &GJEffectManager::getColorSprite>;
	t["init"] = sol::c_call<decltype(&GJEffectManager::init), &GJEffectManager::init>;
}
void register_GJGroundLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGroundLayer");
	t["create"] = sol::c_call<decltype(&GJGroundLayer::create), &GJGroundLayer::create>;
	t["init"] = sol::c_call<decltype(&GJGroundLayer::init), &GJGroundLayer::init>;
	t["showGround"] = sol::c_call<decltype(&GJGroundLayer::showGround), &GJGroundLayer::showGround>;
}
void register_GJFollowCommandLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJFollowCommandLayer");
	t["create"] = sol::c_call<decltype(&GJFollowCommandLayer::create), &GJFollowCommandLayer::create>;
	t["init"] = sol::c_call<decltype(&GJFollowCommandLayer::init), &GJFollowCommandLayer::init>;
	t["onClose"] = sol::c_call<decltype(&GJFollowCommandLayer::onClose), &GJFollowCommandLayer::onClose>;
	t["textChanged"] = sol::c_call<decltype(&GJFollowCommandLayer::textChanged), &GJFollowCommandLayer::textChanged>;
}
void register_GJGameLevel(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGameLevel");
	t["dataLoaded"] = sol::c_call<decltype(&GJGameLevel::dataLoaded), &GJGameLevel::dataLoaded>;
	t["getAudioFileName"] = sol::c_call<decltype(&GJGameLevel::getAudioFileName), &GJGameLevel::getAudioFileName>;
	t["getAverageDifficulty"] = sol::c_call<decltype(&GJGameLevel::getAverageDifficulty), &GJGameLevel::getAverageDifficulty>;
	t["getCoinKey"] = sol::c_call<decltype(&GJGameLevel::getCoinKey), &GJGameLevel::getCoinKey>;
	t["getUnpackedLevelDescription"] = sol::c_call<decltype(&GJGameLevel::getUnpackedLevelDescription), &GJGameLevel::getUnpackedLevelDescription>;
	t["saveNewScore"] = sol::c_call<decltype(&GJGameLevel::saveNewScore), &GJGameLevel::saveNewScore>;
	t["savePercentage"] = sol::c_call<decltype(&GJGameLevel::savePercentage), &GJGameLevel::savePercentage>;
	t["encodeWithCoder"] = sol::c_call<decltype(&GJGameLevel::encodeWithCoder), &GJGameLevel::encodeWithCoder>;
	t["init"] = sol::c_call<decltype(&GJGameLevel::init), &GJGameLevel::init>;
}
void register_GJGameLoadingLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGameLoadingLayer");
	t["create"] = sol::c_call<decltype(&GJGameLoadingLayer::create), &GJGameLoadingLayer::create>;
	t["init"] = sol::c_call<decltype(&GJGameLoadingLayer::init), &GJGameLoadingLayer::init>;
	t["loadLevel"] = sol::c_call<decltype(&GJGameLoadingLayer::loadLevel), &GJGameLoadingLayer::loadLevel>;
	t["transitionToLoadingLayer"] = sol::c_call<decltype(&GJGameLoadingLayer::transitionToLoadingLayer), &GJGameLoadingLayer::transitionToLoadingLayer>;
}
void register_GJGarageLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGarageLayer");
	t["descriptionForUnlock"] = sol::c_call<decltype(&GJGarageLayer::descriptionForUnlock), &GJGarageLayer::descriptionForUnlock>;
	t["node"] = sol::c_call<decltype(&GJGarageLayer::node), &GJGarageLayer::node>;
	t["onArrow"] = sol::c_call<decltype(&GJGarageLayer::onArrow), &GJGarageLayer::onArrow>;
	t["onBack"] = sol::c_call<decltype(&GJGarageLayer::onBack), &GJGarageLayer::onBack>;
	t["onInfo"] = sol::c_call<decltype(&GJGarageLayer::onInfo), &GJGarageLayer::onInfo>;
	t["onNavigate"] = sol::c_call<decltype(&GJGarageLayer::onNavigate), &GJGarageLayer::onNavigate>;
	t["onPaint"] = sol::c_call<decltype(&GJGarageLayer::onPaint), &GJGarageLayer::onPaint>;
	t["onSelect"] = sol::c_call<decltype(&GJGarageLayer::onSelect), &GJGarageLayer::onSelect>;
	t["onSelectTab"] = sol::c_call<decltype(&GJGarageLayer::onSelectTab), &GJGarageLayer::onSelectTab>;
	t["onShards"] = sol::c_call<decltype(&GJGarageLayer::onShards), &GJGarageLayer::onShards>;
	t["onShop"] = sol::c_call<decltype(&GJGarageLayer::onShop), &GJGarageLayer::onShop>;
	t["onSpecial"] = sol::c_call<decltype(&GJGarageLayer::onSpecial), &GJGarageLayer::onSpecial>;
	t["onToggleItem"] = sol::c_call<decltype(&GJGarageLayer::onToggleItem), &GJGarageLayer::onToggleItem>;
	t["playRainbowEffect"] = sol::c_call<decltype(&GJGarageLayer::playRainbowEffect), &GJGarageLayer::playRainbowEffect>;
	t["selectTab"] = sol::c_call<decltype(&GJGarageLayer::selectTab), &GJGarageLayer::selectTab>;
	t["setupIconSelect"] = sol::c_call<decltype(&GJGarageLayer::setupIconSelect), &GJGarageLayer::setupIconSelect>;
	t["setupPage"] = sol::c_call<decltype(&GJGarageLayer::setupPage), &GJGarageLayer::setupPage>;
	t["setupSpecialPage"] = sol::c_call<decltype(&GJGarageLayer::setupSpecialPage), &GJGarageLayer::setupSpecialPage>;
	t["titleForUnlock"] = sol::c_call<decltype(&GJGarageLayer::titleForUnlock), &GJGarageLayer::titleForUnlock>;
	t["updatePlayerColors"] = sol::c_call<decltype(&GJGarageLayer::updatePlayerColors), &GJGarageLayer::updatePlayerColors>;
	t["init"] = sol::c_call<decltype(&GJGarageLayer::init), &GJGarageLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJGarageLayer::keyBackClicked), &GJGarageLayer::keyBackClicked>;
	t["textInputOpened"] = sol::c_call<decltype(&GJGarageLayer::textInputOpened), &GJGarageLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&GJGarageLayer::textInputClosed), &GJGarageLayer::textInputClosed>;
	t["listButtonBarSwitchedPage"] = sol::c_call<decltype(&GJGarageLayer::listButtonBarSwitchedPage), &GJGarageLayer::listButtonBarSwitchedPage>;
	t["showUnlockPopup"] = sol::c_call<decltype(&GJGarageLayer::showUnlockPopup), &GJGarageLayer::showUnlockPopup>;
	t["updateRate"] = sol::c_call<decltype(&GJGarageLayer::updateRate), &GJGarageLayer::updateRate>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJGarageLayer::FLAlert_Clicked), &GJGarageLayer::FLAlert_Clicked>;
	t["dialogClosed"] = sol::c_call<decltype(&GJGarageLayer::dialogClosed), &GJGarageLayer::dialogClosed>;
	t["playerColorChanged"] = sol::c_call<decltype(&GJGarageLayer::playerColorChanged), &GJGarageLayer::playerColorChanged>;
}
void register_GJGradientLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJGradientLayer");
	t["create"] = sol::c_call<decltype(&GJGradientLayer::create), &GJGradientLayer::create>;
	t["init"] = sol::c_call<decltype(&GJGradientLayer::init), &GJGradientLayer::init>;
}
void register_GJItemIcon(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJItemIcon");
	t["create"] = sol::c_call<decltype(&GJItemIcon::create), &GJItemIcon::create>;
	t["changeToLockedState"] = sol::c_call<decltype(&GJItemIcon::changeToLockedState), &GJItemIcon::changeToLockedState>;
	t["init"] = sol::c_call<decltype(&GJItemIcon::init), &GJItemIcon::init>;
	t["scaleForType"] = sol::c_call<decltype(&GJItemIcon::scaleForType), &GJItemIcon::scaleForType>;
	t["setOpacity"] = sol::c_call<decltype(&GJItemIcon::setOpacity), &GJItemIcon::setOpacity>;
}
void register_GJLevelList(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJLevelList");
	t["dataLoaded"] = sol::c_call<decltype(&GJLevelList::dataLoaded), &GJLevelList::dataLoaded>;
	t["getListLevelsArray"] = sol::c_call<decltype(&GJLevelList::getListLevelsArray), &GJLevelList::getListLevelsArray>;
	t["getUnpackedDescription"] = sol::c_call<decltype(&GJLevelList::getUnpackedDescription), &GJLevelList::getUnpackedDescription>;
	t["showListInfo"] = sol::c_call<decltype(&GJLevelList::showListInfo), &GJLevelList::showListInfo>;
	t["encodeWithCoder"] = sol::c_call<decltype(&GJLevelList::encodeWithCoder), &GJLevelList::encodeWithCoder>;
	t["init"] = sol::c_call<decltype(&GJLevelList::init), &GJLevelList::init>;
}
void register_GJLevelScoreCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJLevelScoreCell");
	t["loadFromScore"] = sol::c_call<decltype(&GJLevelScoreCell::loadFromScore), &GJLevelScoreCell::loadFromScore>;
}
void register_GJListLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJListLayer");
	t["create"] = sol::c_call<decltype(&GJListLayer::create), &GJListLayer::create>;
	t["init"] = sol::c_call<decltype(&GJListLayer::init), &GJListLayer::init>;
}
void register_GJLocalLevelScoreCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJLocalLevelScoreCell");
	t["loadFromScore"] = sol::c_call<decltype(&GJLocalLevelScoreCell::loadFromScore), &GJLocalLevelScoreCell::loadFromScore>;
}
void register_GJMapPack(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJMapPack");
	t["completedMaps"] = sol::c_call<decltype(&GJMapPack::completedMaps), &GJMapPack::completedMaps>;
	t["hasCompletedMapPack"] = sol::c_call<decltype(&GJMapPack::hasCompletedMapPack), &GJMapPack::hasCompletedMapPack>;
	t["init"] = sol::c_call<decltype(&GJMapPack::init), &GJMapPack::init>;
}
void register_GJMessageCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJMessageCell");
	t["init"] = sol::c_call<decltype(&GJMessageCell::init), &GJMessageCell::init>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJMessageCell::FLAlert_Clicked), &GJMessageCell::FLAlert_Clicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&GJMessageCell::uploadActionFinished), &GJMessageCell::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&GJMessageCell::uploadActionFailed), &GJMessageCell::uploadActionFailed>;
}
void register_GJMessagePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJMessagePopup");
	t["create"] = sol::c_call<decltype(&GJMessagePopup::create), &GJMessagePopup::create>;
	t["init"] = sol::c_call<decltype(&GJMessagePopup::init), &GJMessagePopup::init>;
	t["uploadActionFinished"] = sol::c_call<decltype(&GJMessagePopup::uploadActionFinished), &GJMessagePopup::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&GJMessagePopup::uploadActionFailed), &GJMessagePopup::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&GJMessagePopup::onClosePopup), &GJMessagePopup::onClosePopup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJMessagePopup::FLAlert_Clicked), &GJMessagePopup::FLAlert_Clicked>;
}
void register_GJMoreGamesLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJMoreGamesLayer");
	t["create"] = sol::c_call<decltype(&GJMoreGamesLayer::create), &GJMoreGamesLayer::create>;
	t["customSetup"] = sol::c_call<decltype(&GJMoreGamesLayer::customSetup), &GJMoreGamesLayer::customSetup>;
}
void register_GJMultiplayerManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJMultiplayerManager");
	t["addComment"] = sol::c_call<decltype(&GJMultiplayerManager::addComment), &GJMultiplayerManager::addComment>;
	t["handleIt"] = sol::c_call<decltype(&GJMultiplayerManager::handleIt), &GJMultiplayerManager::handleIt>;
	t["onExitLobbyCompleted"] = sol::c_call<decltype(&GJMultiplayerManager::onExitLobbyCompleted), &GJMultiplayerManager::onExitLobbyCompleted>;
	t["onJoinLobbyCompleted"] = sol::c_call<decltype(&GJMultiplayerManager::onJoinLobbyCompleted), &GJMultiplayerManager::onJoinLobbyCompleted>;
	t["onProcessHttpRequestCompleted"] = sol::c_call<decltype(&GJMultiplayerManager::onProcessHttpRequestCompleted), &GJMultiplayerManager::onProcessHttpRequestCompleted>;
	t["onUploadCommentCompleted"] = sol::c_call<decltype(&GJMultiplayerManager::onUploadCommentCompleted), &GJMultiplayerManager::onUploadCommentCompleted>;
	t["ProcessHttpRequest"] = sol::c_call<decltype(&GJMultiplayerManager::ProcessHttpRequest), &GJMultiplayerManager::ProcessHttpRequest>;
	t["uploadComment"] = sol::c_call<decltype(&GJMultiplayerManager::uploadComment), &GJMultiplayerManager::uploadComment>;
	t["init"] = sol::c_call<decltype(&GJMultiplayerManager::init), &GJMultiplayerManager::init>;
}
void register_GJObjectDecoder(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJObjectDecoder");
	t["sharedDecoder"] = sol::c_call<decltype(&GJObjectDecoder::sharedDecoder), &GJObjectDecoder::sharedDecoder>;
}
void register_GJPathPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPathPage");
	t["create"] = sol::c_call<decltype(&GJPathPage::create), &GJPathPage::create>;
	t["init"] = sol::c_call<decltype(&GJPathPage::init), &GJPathPage::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJPathPage::keyBackClicked), &GJPathPage::keyBackClicked>;
}
void register_GJPathRewardPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPathRewardPopup");
	t["create"] = sol::c_call<decltype(&GJPathRewardPopup::create), &GJPathRewardPopup::create>;
	t["init"] = sol::c_call<decltype(&GJPathRewardPopup::init), &GJPathRewardPopup::init>;
}
void register_GJPathsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPathsLayer");
	t["create"] = sol::c_call<decltype(&GJPathsLayer::create), &GJPathsLayer::create>;
	t["nameForPath"] = sol::c_call<decltype(&GJPathsLayer::nameForPath), &GJPathsLayer::nameForPath>;
	t["onPath"] = sol::c_call<decltype(&GJPathsLayer::onPath), &GJPathsLayer::onPath>;
	t["init"] = sol::c_call<decltype(&GJPathsLayer::init), &GJPathsLayer::init>;
	t["onExit"] = sol::c_call<decltype(&GJPathsLayer::onExit), &GJPathsLayer::onExit>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJPathsLayer::keyBackClicked), &GJPathsLayer::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&GJPathsLayer::show), &GJPathsLayer::show>;
}
void register_GJPathSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPathSprite");
	t["create"] = sol::c_call<decltype(&GJPathSprite::create), &GJPathSprite::create>;
	t["init"] = sol::c_call<decltype(&GJPathSprite::init), &GJPathSprite::init>;
}
void register_GJPFollowCommandLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPFollowCommandLayer");
	t["create"] = sol::c_call<decltype(&GJPFollowCommandLayer::create), &GJPFollowCommandLayer::create>;
	t["init"] = sol::c_call<decltype(&GJPFollowCommandLayer::init), &GJPFollowCommandLayer::init>;
	t["onClose"] = sol::c_call<decltype(&GJPFollowCommandLayer::onClose), &GJPFollowCommandLayer::onClose>;
	t["textChanged"] = sol::c_call<decltype(&GJPFollowCommandLayer::textChanged), &GJPFollowCommandLayer::textChanged>;
}
void register_GJPromoPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJPromoPopup");
	t["create"] = sol::c_call<decltype(&GJPromoPopup::create), &GJPromoPopup::create>;
	t["init"] = sol::c_call<decltype(&GJPromoPopup::init), &GJPromoPopup::init>;
	t["onExit"] = sol::c_call<decltype(&GJPromoPopup::onExit), &GJPromoPopup::onExit>;
}
void register_GJRequestCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJRequestCell");
	t["loadFromScore"] = sol::c_call<decltype(&GJRequestCell::loadFromScore), &GJRequestCell::loadFromScore>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJRequestCell::FLAlert_Clicked), &GJRequestCell::FLAlert_Clicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&GJRequestCell::uploadActionFinished), &GJRequestCell::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&GJRequestCell::uploadActionFailed), &GJRequestCell::uploadActionFailed>;
}
void register_GJRewardObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJRewardObject");
	t["encodeWithCoder"] = sol::c_call<decltype(&GJRewardObject::encodeWithCoder), &GJRewardObject::encodeWithCoder>;
}
void register_GJRobotSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJRobotSprite");
	t["create"] = sol::c_call<decltype(&GJRobotSprite::create), &GJRobotSprite::create>;
	t["updateGlowColor"] = sol::c_call<decltype(&GJRobotSprite::updateGlowColor), &GJRobotSprite::updateGlowColor>;
	t["setOpacity"] = sol::c_call<decltype(&GJRobotSprite::setOpacity), &GJRobotSprite::setOpacity>;
}
void register_GJRotationControl(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJRotationControl");
	t["create"] = sol::c_call<decltype(&GJRotationControl::create), &GJRotationControl::create>;
	t["init"] = sol::c_call<decltype(&GJRotationControl::init), &GJRotationControl::init>;
	t["draw"] = sol::c_call<decltype(&GJRotationControl::draw), &GJRotationControl::draw>;
	t["ccTouchBegan"] = sol::c_call<decltype(&GJRotationControl::ccTouchBegan), &GJRotationControl::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&GJRotationControl::ccTouchMoved), &GJRotationControl::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&GJRotationControl::ccTouchEnded), &GJRotationControl::ccTouchEnded>;
}
void register_GJScaleControl(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJScaleControl");
	t["create"] = sol::c_call<decltype(&GJScaleControl::create), &GJScaleControl::create>;
	t["init"] = sol::c_call<decltype(&GJScaleControl::init), &GJScaleControl::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&GJScaleControl::ccTouchBegan), &GJScaleControl::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&GJScaleControl::ccTouchMoved), &GJScaleControl::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&GJScaleControl::ccTouchEnded), &GJScaleControl::ccTouchEnded>;
}
void register_GJScoreCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJScoreCell");
	t["loadFromScore"] = sol::c_call<decltype(&GJScoreCell::loadFromScore), &GJScoreCell::loadFromScore>;
	t["onViewProfile"] = sol::c_call<decltype(&GJScoreCell::onViewProfile), &GJScoreCell::onViewProfile>;
	t["init"] = sol::c_call<decltype(&GJScoreCell::init), &GJScoreCell::init>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJScoreCell::FLAlert_Clicked), &GJScoreCell::FLAlert_Clicked>;
}
void register_GJSearchObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSearchObject");
	t["createFromKey"] = sol::c_call<decltype(&GJSearchObject::createFromKey), &GJSearchObject::createFromKey>;
	t["getKey"] = sol::c_call<decltype(&GJSearchObject::getKey), &GJSearchObject::getKey>;
	t["getPageObject"] = sol::c_call<decltype(&GJSearchObject::getPageObject), &GJSearchObject::getPageObject>;
	t["init"] = sol::c_call<decltype(&GJSearchObject::init), &GJSearchObject::init>;
	t["isLevelSearchObject"] = sol::c_call<decltype(&GJSearchObject::isLevelSearchObject), &GJSearchObject::isLevelSearchObject>;
}
void register_GJShopLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJShopLayer");
	t["create"] = sol::c_call<decltype(&GJShopLayer::create), &GJShopLayer::create>;
	t["init"] = sol::c_call<decltype(&GJShopLayer::init), &GJShopLayer::init>;
	t["onSelectItem"] = sol::c_call<decltype(&GJShopLayer::onSelectItem), &GJShopLayer::onSelectItem>;
	t["showReactMessage"] = sol::c_call<decltype(&GJShopLayer::showReactMessage), &GJShopLayer::showReactMessage>;
	t["onExit"] = sol::c_call<decltype(&GJShopLayer::onExit), &GJShopLayer::onExit>;
	t["ccTouchBegan"] = sol::c_call<decltype(&GJShopLayer::ccTouchBegan), &GJShopLayer::ccTouchBegan>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJShopLayer::keyBackClicked), &GJShopLayer::keyBackClicked>;
	t["dialogClosed"] = sol::c_call<decltype(&GJShopLayer::dialogClosed), &GJShopLayer::dialogClosed>;
}
void register_GJSmartBlockPreview(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSmartBlockPreview");
	t["create"] = sol::c_call<decltype(&GJSmartBlockPreview::create), &GJSmartBlockPreview::create>;
	t["init"] = sol::c_call<decltype(&GJSmartBlockPreview::init), &GJSmartBlockPreview::init>;
}
void register_GJSmartPrefab(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSmartPrefab");
	t["create"] = sol::c_call<decltype(&GJSmartPrefab::create), &GJSmartPrefab::create>;
	t["dataLoaded"] = sol::c_call<decltype(&GJSmartPrefab::dataLoaded), &GJSmartPrefab::dataLoaded>;
	t["encodeWithCoder"] = sol::c_call<decltype(&GJSmartPrefab::encodeWithCoder), &GJSmartPrefab::encodeWithCoder>;
}
void register_GJSmartTemplate(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSmartTemplate");
	t["create"] = sol::c_call<decltype(&GJSmartTemplate::create), &GJSmartTemplate::create>;
	t["dataLoaded"] = sol::c_call<decltype(&GJSmartTemplate::dataLoaded), &GJSmartTemplate::dataLoaded>;
	t["init"] = sol::c_call<decltype(&GJSmartTemplate::init), &GJSmartTemplate::init>;
	t["encodeWithCoder"] = sol::c_call<decltype(&GJSmartTemplate::encodeWithCoder), &GJSmartTemplate::encodeWithCoder>;
}
void register_GJSongBrowser(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSongBrowser");
	t["create"] = sol::c_call<decltype(&GJSongBrowser::create), &GJSongBrowser::create>;
	t["loadPage"] = sol::c_call<decltype(&GJSongBrowser::loadPage), &GJSongBrowser::loadPage>;
	t["init"] = sol::c_call<decltype(&GJSongBrowser::init), &GJSongBrowser::init>;
	t["customSetup"] = sol::c_call<decltype(&GJSongBrowser::customSetup), &GJSongBrowser::customSetup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJSongBrowser::FLAlert_Clicked), &GJSongBrowser::FLAlert_Clicked>;
}
void register_GJSpecialColorSelect(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSpecialColorSelect");
	t["create"] = sol::c_call<decltype(&GJSpecialColorSelect::create), &GJSpecialColorSelect::create>;
	t["init"] = sol::c_call<decltype(&GJSpecialColorSelect::init), &GJSpecialColorSelect::init>;
	t["textForColorIdx"] = sol::c_call<decltype(&GJSpecialColorSelect::textForColorIdx), &GJSpecialColorSelect::textForColorIdx>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJSpecialColorSelect::keyBackClicked), &GJSpecialColorSelect::keyBackClicked>;
}
void register_GJSpiderSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJSpiderSprite");
	t["create"] = sol::c_call<decltype(&GJSpiderSprite::create), &GJSpiderSprite::create>;
}
void register_GJStoreItem(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJStoreItem");
	t["create"] = sol::c_call<decltype(&GJStoreItem::create), &GJStoreItem::create>;
	t["init"] = sol::c_call<decltype(&GJStoreItem::init), &GJStoreItem::init>;
}
void register_GJTransformControl(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJTransformControl");
	t["create"] = sol::c_call<decltype(&GJTransformControl::create), &GJTransformControl::create>;
	t["init"] = sol::c_call<decltype(&GJTransformControl::init), &GJTransformControl::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&GJTransformControl::ccTouchBegan), &GJTransformControl::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&GJTransformControl::ccTouchMoved), &GJTransformControl::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&GJTransformControl::ccTouchEnded), &GJTransformControl::ccTouchEnded>;
}
void register_GJUINode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJUINode");
	t["draw"] = sol::c_call<decltype(&GJUINode::draw), &GJUINode::draw>;
}
void register_GJUserCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJUserCell");
	t["loadFromScore"] = sol::c_call<decltype(&GJUserCell::loadFromScore), &GJUserCell::loadFromScore>;
	t["init"] = sol::c_call<decltype(&GJUserCell::init), &GJUserCell::init>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJUserCell::FLAlert_Clicked), &GJUserCell::FLAlert_Clicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&GJUserCell::uploadActionFinished), &GJUserCell::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&GJUserCell::uploadActionFailed), &GJUserCell::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&GJUserCell::onClosePopup), &GJUserCell::onClosePopup>;
}
void register_GJUserScore(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJUserScore");
	t["isCurrentUser"] = sol::c_call<decltype(&GJUserScore::isCurrentUser), &GJUserScore::isCurrentUser>;
	t["init"] = sol::c_call<decltype(&GJUserScore::init), &GJUserScore::init>;
}
void register_GJWriteMessagePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GJWriteMessagePopup");
	t["create"] = sol::c_call<decltype(&GJWriteMessagePopup::create), &GJWriteMessagePopup::create>;
	t["init"] = sol::c_call<decltype(&GJWriteMessagePopup::init), &GJWriteMessagePopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&GJWriteMessagePopup::keyBackClicked), &GJWriteMessagePopup::keyBackClicked>;
	t["textChanged"] = sol::c_call<decltype(&GJWriteMessagePopup::textChanged), &GJWriteMessagePopup::textChanged>;
	t["uploadMessageFinished"] = sol::c_call<decltype(&GJWriteMessagePopup::uploadMessageFinished), &GJWriteMessagePopup::uploadMessageFinished>;
	t["uploadMessageFailed"] = sol::c_call<decltype(&GJWriteMessagePopup::uploadMessageFailed), &GJWriteMessagePopup::uploadMessageFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&GJWriteMessagePopup::onClosePopup), &GJWriteMessagePopup::onClosePopup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&GJWriteMessagePopup::FLAlert_Clicked), &GJWriteMessagePopup::FLAlert_Clicked>;
}
void register_GooglePlayManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GooglePlayManager");
	t["sharedState"] = sol::c_call<decltype(&GooglePlayManager::sharedState), &GooglePlayManager::sharedState>;
}
void register_GradientTriggerObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GradientTriggerObject");
	t["create"] = sol::c_call<decltype(&GradientTriggerObject::create), &GradientTriggerObject::create>;
	t["init"] = sol::c_call<decltype(&GradientTriggerObject::init), &GradientTriggerObject::init>;
}
void register_GraphicsReloadLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GraphicsReloadLayer");
	t["create"] = sol::c_call<decltype(&GraphicsReloadLayer::create), &GraphicsReloadLayer::create>;
	t["init"] = sol::c_call<decltype(&GraphicsReloadLayer::init), &GraphicsReloadLayer::init>;
}
void register_GravityEffectSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("GravityEffectSprite");
	t["create"] = sol::c_call<decltype(&GravityEffectSprite::create), &GravityEffectSprite::create>;
	t["init"] = sol::c_call<decltype(&GravityEffectSprite::init), &GravityEffectSprite::init>;
}
void register_HardStreak(sol::state_view lua)
{
	sol::table t = lua.create_named_table("HardStreak");
	t["create"] = sol::c_call<decltype(&HardStreak::create), &HardStreak::create>;
	t["addPoint"] = sol::c_call<decltype(&HardStreak::addPoint), &HardStreak::addPoint>;
	t["firstSetup"] = sol::c_call<decltype(&HardStreak::firstSetup), &HardStreak::firstSetup>;
	t["updateStroke"] = sol::c_call<decltype(&HardStreak::updateStroke), &HardStreak::updateStroke>;
	t["init"] = sol::c_call<decltype(&HardStreak::init), &HardStreak::init>;
}
void register_HSVLiveOverlay(sol::state_view lua)
{
	sol::table t = lua.create_named_table("HSVLiveOverlay");
	t["create"] = sol::c_call<decltype(&HSVLiveOverlay::create), &HSVLiveOverlay::create>;
	t["init"] = sol::c_call<decltype(&HSVLiveOverlay::init), &HSVLiveOverlay::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&HSVLiveOverlay::keyBackClicked), &HSVLiveOverlay::keyBackClicked>;
	t["hsvChanged"] = sol::c_call<decltype(&HSVLiveOverlay::hsvChanged), &HSVLiveOverlay::hsvChanged>;
}
void register_HSVWidgetPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("HSVWidgetPopup");
	t["create"] = sol::c_call<decltype(&HSVWidgetPopup::create), &HSVWidgetPopup::create>;
	t["init"] = sol::c_call<decltype(&HSVWidgetPopup::init), &HSVWidgetPopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&HSVWidgetPopup::keyBackClicked), &HSVWidgetPopup::keyBackClicked>;
}
void register_InfoAlertButton(sol::state_view lua)
{
	sol::table t = lua.create_named_table("InfoAlertButton");
	t["create"] = sol::c_call<decltype(&InfoAlertButton::create), &InfoAlertButton::create>;
	t["init"] = sol::c_call<decltype(&InfoAlertButton::init), &InfoAlertButton::init>;
	t["activate"] = sol::c_call<decltype(&InfoAlertButton::activate), &InfoAlertButton::activate>;
}
void register_InfoLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("InfoLayer");
	t["create"] = sol::c_call<decltype(&InfoLayer::create), &InfoLayer::create>;
	t["init"] = sol::c_call<decltype(&InfoLayer::init), &InfoLayer::init>;
	t["loadPage"] = sol::c_call<decltype(&InfoLayer::loadPage), &InfoLayer::loadPage>;
	t["onClose"] = sol::c_call<decltype(&InfoLayer::onClose), &InfoLayer::onClose>;
	t["onComment"] = sol::c_call<decltype(&InfoLayer::onComment), &InfoLayer::onComment>;
	t["onCopyLevelID"] = sol::c_call<decltype(&InfoLayer::onCopyLevelID), &InfoLayer::onCopyLevelID>;
	t["onGetComments"] = sol::c_call<decltype(&InfoLayer::onGetComments), &InfoLayer::onGetComments>;
	t["onLevelInfo"] = sol::c_call<decltype(&InfoLayer::onLevelInfo), &InfoLayer::onLevelInfo>;
	t["onMore"] = sol::c_call<decltype(&InfoLayer::onMore), &InfoLayer::onMore>;
	t["onNextPage"] = sol::c_call<decltype(&InfoLayer::onNextPage), &InfoLayer::onNextPage>;
	t["onOriginal"] = sol::c_call<decltype(&InfoLayer::onOriginal), &InfoLayer::onOriginal>;
	t["onPrevPage"] = sol::c_call<decltype(&InfoLayer::onPrevPage), &InfoLayer::onPrevPage>;
	t["onRefreshComments"] = sol::c_call<decltype(&InfoLayer::onRefreshComments), &InfoLayer::onRefreshComments>;
	t["setupCommentsBrowser"] = sol::c_call<decltype(&InfoLayer::setupCommentsBrowser), &InfoLayer::setupCommentsBrowser>;
	t["keyBackClicked"] = sol::c_call<decltype(&InfoLayer::keyBackClicked), &InfoLayer::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&InfoLayer::show), &InfoLayer::show>;
	t["loadCommentsFinished"] = sol::c_call<decltype(&InfoLayer::loadCommentsFinished), &InfoLayer::loadCommentsFinished>;
	t["loadCommentsFailed"] = sol::c_call<decltype(&InfoLayer::loadCommentsFailed), &InfoLayer::loadCommentsFailed>;
	t["setupPageInfo"] = sol::c_call<decltype(&InfoLayer::setupPageInfo), &InfoLayer::setupPageInfo>;
	t["commentUploadFinished"] = sol::c_call<decltype(&InfoLayer::commentUploadFinished), &InfoLayer::commentUploadFinished>;
	t["commentUploadFailed"] = sol::c_call<decltype(&InfoLayer::commentUploadFailed), &InfoLayer::commentUploadFailed>;
	t["updateUserScoreFinished"] = sol::c_call<decltype(&InfoLayer::updateUserScoreFinished), &InfoLayer::updateUserScoreFinished>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&InfoLayer::FLAlert_Clicked), &InfoLayer::FLAlert_Clicked>;
}
void register_InheritanceNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("InheritanceNode");
	t["create"] = sol::c_call<decltype(&InheritanceNode::create), &InheritanceNode::create>;
}
void register_ItemInfoPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ItemInfoPopup");
	t["create"] = sol::c_call<decltype(&ItemInfoPopup::create), &ItemInfoPopup::create>;
	t["init"] = sol::c_call<decltype(&ItemInfoPopup::init), &ItemInfoPopup::init>;
}
void register_ItemTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ItemTriggerGameObject");
	t["create"] = sol::c_call<decltype(&ItemTriggerGameObject::create), &ItemTriggerGameObject::create>;
	t["customSetup"] = sol::c_call<decltype(&ItemTriggerGameObject::customSetup), &ItemTriggerGameObject::customSetup>;
}
void register_KeybindingsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("KeybindingsLayer");
	t["create"] = sol::c_call<decltype(&KeybindingsLayer::create), &KeybindingsLayer::create>;
	t["goToPage"] = sol::c_call<decltype(&KeybindingsLayer::goToPage), &KeybindingsLayer::goToPage>;
	t["init"] = sol::c_call<decltype(&KeybindingsLayer::init), &KeybindingsLayer::init>;
}
void register_KeybindingsManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("KeybindingsManager");
	t["sharedState"] = sol::c_call<decltype(&KeybindingsManager::sharedState), &KeybindingsManager::sharedState>;
	t["dataLoaded"] = sol::c_call<decltype(&KeybindingsManager::dataLoaded), &KeybindingsManager::dataLoaded>;
}
void register_KeyframeAnimTriggerObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("KeyframeAnimTriggerObject");
	t["create"] = sol::c_call<decltype(&KeyframeAnimTriggerObject::create), &KeyframeAnimTriggerObject::create>;
	t["init"] = sol::c_call<decltype(&KeyframeAnimTriggerObject::init), &KeyframeAnimTriggerObject::init>;
}
void register_KeyframeGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("KeyframeGameObject");
	t["create"] = sol::c_call<decltype(&KeyframeGameObject::create), &KeyframeGameObject::create>;
	t["init"] = sol::c_call<decltype(&KeyframeGameObject::init), &KeyframeGameObject::init>;
	t["setOpacity"] = sol::c_call<decltype(&KeyframeGameObject::setOpacity), &KeyframeGameObject::setOpacity>;
}
void register_LabelGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LabelGameObject");
	t["create"] = sol::c_call<decltype(&LabelGameObject::create), &LabelGameObject::create>;
	t["init"] = sol::c_call<decltype(&LabelGameObject::init), &LabelGameObject::init>;
	t["setOpacity"] = sol::c_call<decltype(&LabelGameObject::setOpacity), &LabelGameObject::setOpacity>;
	t["setupCustomSprites"] = sol::c_call<decltype(&LabelGameObject::setupCustomSprites), &LabelGameObject::setupCustomSprites>;
}
void register_LeaderboardsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LeaderboardsLayer");
	t["create"] = sol::c_call<decltype(&LeaderboardsLayer::create), &LeaderboardsLayer::create>;
	t["init"] = sol::c_call<decltype(&LeaderboardsLayer::init), &LeaderboardsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&LeaderboardsLayer::keyBackClicked), &LeaderboardsLayer::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LeaderboardsLayer::FLAlert_Clicked), &LeaderboardsLayer::FLAlert_Clicked>;
	t["updateUserScoreFinished"] = sol::c_call<decltype(&LeaderboardsLayer::updateUserScoreFinished), &LeaderboardsLayer::updateUserScoreFinished>;
	t["updateUserScoreFailed"] = sol::c_call<decltype(&LeaderboardsLayer::updateUserScoreFailed), &LeaderboardsLayer::updateUserScoreFailed>;
	t["loadLeaderboardFinished"] = sol::c_call<decltype(&LeaderboardsLayer::loadLeaderboardFinished), &LeaderboardsLayer::loadLeaderboardFinished>;
	t["loadLeaderboardFailed"] = sol::c_call<decltype(&LeaderboardsLayer::loadLeaderboardFailed), &LeaderboardsLayer::loadLeaderboardFailed>;
}
void register_LevelAreaInnerLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelAreaInnerLayer");
	t["create"] = sol::c_call<decltype(&LevelAreaInnerLayer::create), &LevelAreaInnerLayer::create>;
	t["init"] = sol::c_call<decltype(&LevelAreaInnerLayer::init), &LevelAreaInnerLayer::init>;
	t["onBack"] = sol::c_call<decltype(&LevelAreaInnerLayer::onBack), &LevelAreaInnerLayer::onBack>;
	t["onDoor"] = sol::c_call<decltype(&LevelAreaInnerLayer::onDoor), &LevelAreaInnerLayer::onDoor>;
	t["onInfo"] = sol::c_call<decltype(&LevelAreaInnerLayer::onInfo), &LevelAreaInnerLayer::onInfo>;
	t["onNextFloor"] = sol::c_call<decltype(&LevelAreaInnerLayer::onNextFloor), &LevelAreaInnerLayer::onNextFloor>;
	t["playStep1"] = sol::c_call<decltype(&LevelAreaInnerLayer::playStep1), &LevelAreaInnerLayer::playStep1>;
	t["showFloor1CompleteDialog"] = sol::c_call<decltype(&LevelAreaInnerLayer::showFloor1CompleteDialog), &LevelAreaInnerLayer::showFloor1CompleteDialog>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelAreaInnerLayer::keyBackClicked), &LevelAreaInnerLayer::keyBackClicked>;
	t["dialogClosed"] = sol::c_call<decltype(&LevelAreaInnerLayer::dialogClosed), &LevelAreaInnerLayer::dialogClosed>;
}
void register_LevelAreaLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelAreaLayer");
	t["create"] = sol::c_call<decltype(&LevelAreaLayer::create), &LevelAreaLayer::create>;
	t["addGodRay"] = sol::c_call<decltype(&LevelAreaLayer::addGodRay), &LevelAreaLayer::addGodRay>;
	t["addTorch"] = sol::c_call<decltype(&LevelAreaLayer::addTorch), &LevelAreaLayer::addTorch>;
	t["fadeInsideTower"] = sol::c_call<decltype(&LevelAreaLayer::fadeInsideTower), &LevelAreaLayer::fadeInsideTower>;
	t["onBack"] = sol::c_call<decltype(&LevelAreaLayer::onBack), &LevelAreaLayer::onBack>;
	t["onClickDoor"] = sol::c_call<decltype(&LevelAreaLayer::onClickDoor), &LevelAreaLayer::onClickDoor>;
	t["onEnterTower"] = sol::c_call<decltype(&LevelAreaLayer::onEnterTower), &LevelAreaLayer::onEnterTower>;
	t["showDialog"] = sol::c_call<decltype(&LevelAreaLayer::showDialog), &LevelAreaLayer::showDialog>;
	t["init"] = sol::c_call<decltype(&LevelAreaLayer::init), &LevelAreaLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelAreaLayer::keyBackClicked), &LevelAreaLayer::keyBackClicked>;
	t["dialogClosed"] = sol::c_call<decltype(&LevelAreaLayer::dialogClosed), &LevelAreaLayer::dialogClosed>;
}
void register_LevelBrowserLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelBrowserLayer");
	t["create"] = sol::c_call<decltype(&LevelBrowserLayer::create), &LevelBrowserLayer::create>;
	t["getSearchTitle"] = sol::c_call<decltype(&LevelBrowserLayer::getSearchTitle), &LevelBrowserLayer::getSearchTitle>;
	t["init"] = sol::c_call<decltype(&LevelBrowserLayer::init), &LevelBrowserLayer::init>;
	t["isCorrect"] = sol::c_call<decltype(&LevelBrowserLayer::isCorrect), &LevelBrowserLayer::isCorrect>;
	t["loadPage"] = sol::c_call<decltype(&LevelBrowserLayer::loadPage), &LevelBrowserLayer::loadPage>;
	t["onClearSearch"] = sol::c_call<decltype(&LevelBrowserLayer::onClearSearch), &LevelBrowserLayer::onClearSearch>;
	t["onDeleteAll"] = sol::c_call<decltype(&LevelBrowserLayer::onDeleteAll), &LevelBrowserLayer::onDeleteAll>;
	t["onDeleteSelected"] = sol::c_call<decltype(&LevelBrowserLayer::onDeleteSelected), &LevelBrowserLayer::onDeleteSelected>;
	t["onFavorites"] = sol::c_call<decltype(&LevelBrowserLayer::onFavorites), &LevelBrowserLayer::onFavorites>;
	t["onGoToFolder"] = sol::c_call<decltype(&LevelBrowserLayer::onGoToFolder), &LevelBrowserLayer::onGoToFolder>;
	t["onGoToLastPage"] = sol::c_call<decltype(&LevelBrowserLayer::onGoToLastPage), &LevelBrowserLayer::onGoToLastPage>;
	t["onGoToPage"] = sol::c_call<decltype(&LevelBrowserLayer::onGoToPage), &LevelBrowserLayer::onGoToPage>;
	t["onInfo"] = sol::c_call<decltype(&LevelBrowserLayer::onInfo), &LevelBrowserLayer::onInfo>;
	t["onLocalMode"] = sol::c_call<decltype(&LevelBrowserLayer::onLocalMode), &LevelBrowserLayer::onLocalMode>;
	t["onMyOnlineLevels"] = sol::c_call<decltype(&LevelBrowserLayer::onMyOnlineLevels), &LevelBrowserLayer::onMyOnlineLevels>;
	t["onNew"] = sol::c_call<decltype(&LevelBrowserLayer::onNew), &LevelBrowserLayer::onNew>;
	t["onNextPage"] = sol::c_call<decltype(&LevelBrowserLayer::onNextPage), &LevelBrowserLayer::onNextPage>;
	t["onPrevPage"] = sol::c_call<decltype(&LevelBrowserLayer::onPrevPage), &LevelBrowserLayer::onPrevPage>;
	t["onRefresh"] = sol::c_call<decltype(&LevelBrowserLayer::onRefresh), &LevelBrowserLayer::onRefresh>;
	t["onSaved"] = sol::c_call<decltype(&LevelBrowserLayer::onSaved), &LevelBrowserLayer::onSaved>;
	t["onSavedMode"] = sol::c_call<decltype(&LevelBrowserLayer::onSavedMode), &LevelBrowserLayer::onSavedMode>;
	t["onSearch"] = sol::c_call<decltype(&LevelBrowserLayer::onSearch), &LevelBrowserLayer::onSearch>;
	t["onToggleAllObjects"] = sol::c_call<decltype(&LevelBrowserLayer::onToggleAllObjects), &LevelBrowserLayer::onToggleAllObjects>;
	t["scene"] = sol::c_call<decltype(&LevelBrowserLayer::scene), &LevelBrowserLayer::scene>;
	t["setupLevelBrowser"] = sol::c_call<decltype(&LevelBrowserLayer::setupLevelBrowser), &LevelBrowserLayer::setupLevelBrowser>;
	t["show"] = sol::c_call<decltype(&LevelBrowserLayer::show), &LevelBrowserLayer::show>;
	t["updateLevelsLabel"] = sol::c_call<decltype(&LevelBrowserLayer::updateLevelsLabel), &LevelBrowserLayer::updateLevelsLabel>;
	t["updatePageLabel"] = sol::c_call<decltype(&LevelBrowserLayer::updatePageLabel), &LevelBrowserLayer::updatePageLabel>;
	t["onEnter"] = sol::c_call<decltype(&LevelBrowserLayer::onEnter), &LevelBrowserLayer::onEnter>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&LevelBrowserLayer::registerWithTouchDispatcher), &LevelBrowserLayer::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelBrowserLayer::keyBackClicked), &LevelBrowserLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&LevelBrowserLayer::keyDown), &LevelBrowserLayer::keyDown>;
	t["loadLevelsFinished"] = sol::c_call<decltype(&LevelBrowserLayer::loadLevelsFinished), &LevelBrowserLayer::loadLevelsFinished>;
	t["loadLevelsFailed"] = sol::c_call<decltype(&LevelBrowserLayer::loadLevelsFailed), &LevelBrowserLayer::loadLevelsFailed>;
	t["setupPageInfo"] = sol::c_call<decltype(&LevelBrowserLayer::setupPageInfo), &LevelBrowserLayer::setupPageInfo>;
	t["onBack"] = sol::c_call<decltype(&LevelBrowserLayer::onBack), &LevelBrowserLayer::onBack>;
	t["shareCommentClosed"] = sol::c_call<decltype(&LevelBrowserLayer::shareCommentClosed), &LevelBrowserLayer::shareCommentClosed>;
	t["setTextPopupClosed"] = sol::c_call<decltype(&LevelBrowserLayer::setTextPopupClosed), &LevelBrowserLayer::setTextPopupClosed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LevelBrowserLayer::FLAlert_Clicked), &LevelBrowserLayer::FLAlert_Clicked>;
	t["setIDPopupClosed"] = sol::c_call<decltype(&LevelBrowserLayer::setIDPopupClosed), &LevelBrowserLayer::setIDPopupClosed>;
}
void register_LevelCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelCell");
	t["create"] = sol::c_call<decltype(&LevelCell::create), &LevelCell::create>;
	t["loadCustomLevelCell"] = sol::c_call<decltype(&LevelCell::loadCustomLevelCell), &LevelCell::loadCustomLevelCell>;
	t["loadFromLevel"] = sol::c_call<decltype(&LevelCell::loadFromLevel), &LevelCell::loadFromLevel>;
	t["loadLocalLevelCell"] = sol::c_call<decltype(&LevelCell::loadLocalLevelCell), &LevelCell::loadLocalLevelCell>;
	t["onClick"] = sol::c_call<decltype(&LevelCell::onClick), &LevelCell::onClick>;
	t["onToggle"] = sol::c_call<decltype(&LevelCell::onToggle), &LevelCell::onToggle>;
	t["onViewProfile"] = sol::c_call<decltype(&LevelCell::onViewProfile), &LevelCell::onViewProfile>;
	t["init"] = sol::c_call<decltype(&LevelCell::init), &LevelCell::init>;
	t["draw"] = sol::c_call<decltype(&LevelCell::draw), &LevelCell::draw>;
}
void register_LevelEditorLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelEditorLayer");
	t["create"] = sol::c_call<decltype(&LevelEditorLayer::create), &LevelEditorLayer::create>;
	t["addSpecial"] = sol::c_call<decltype(&LevelEditorLayer::addSpecial), &LevelEditorLayer::addSpecial>;
	t["createObject"] = sol::c_call<decltype(&LevelEditorLayer::createObject), &LevelEditorLayer::createObject>;
	t["createObjectsFromString"] = sol::c_call<decltype(&LevelEditorLayer::createObjectsFromString), &LevelEditorLayer::createObjectsFromString>;
	t["getNextFreeGroupID"] = sol::c_call<decltype(&LevelEditorLayer::getNextFreeGroupID), &LevelEditorLayer::getNextFreeGroupID>;
	t["handleAction"] = sol::c_call<decltype(&LevelEditorLayer::handleAction), &LevelEditorLayer::handleAction>;
	t["init"] = sol::c_call<decltype(&LevelEditorLayer::init), &LevelEditorLayer::init>;
	t["scene"] = sol::c_call<decltype(&LevelEditorLayer::scene), &LevelEditorLayer::scene>;
	t["updateLevelFont"] = sol::c_call<decltype(&LevelEditorLayer::updateLevelFont), &LevelEditorLayer::updateLevelFont>;
	t["updateObjectLabel"] = sol::c_call<decltype(&LevelEditorLayer::updateObjectLabel), &LevelEditorLayer::updateObjectLabel>;
	t["updatePreviewParticle"] = sol::c_call<decltype(&LevelEditorLayer::updatePreviewParticle), &LevelEditorLayer::updatePreviewParticle>;
	t["postUpdate"] = sol::c_call<decltype(&LevelEditorLayer::postUpdate), &LevelEditorLayer::postUpdate>;
	t["timeForPos"] = sol::c_call<decltype(&LevelEditorLayer::timeForPos), &LevelEditorLayer::timeForPos>;
	t["posForTime"] = sol::c_call<decltype(&LevelEditorLayer::posForTime), &LevelEditorLayer::posForTime>;
	t["levelSettingsUpdated"] = sol::c_call<decltype(&LevelEditorLayer::levelSettingsUpdated), &LevelEditorLayer::levelSettingsUpdated>;
}
void register_LevelInfoLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelInfoLayer");
	t["create"] = sol::c_call<decltype(&LevelInfoLayer::create), &LevelInfoLayer::create>;
	t["downloadLevel"] = sol::c_call<decltype(&LevelInfoLayer::downloadLevel), &LevelInfoLayer::downloadLevel>;
	t["init"] = sol::c_call<decltype(&LevelInfoLayer::init), &LevelInfoLayer::init>;
	t["onAddToList"] = sol::c_call<decltype(&LevelInfoLayer::onAddToList), &LevelInfoLayer::onAddToList>;
	t["onBack"] = sol::c_call<decltype(&LevelInfoLayer::onBack), &LevelInfoLayer::onBack>;
	t["onDelete"] = sol::c_call<decltype(&LevelInfoLayer::onDelete), &LevelInfoLayer::onDelete>;
	t["onFavorite"] = sol::c_call<decltype(&LevelInfoLayer::onFavorite), &LevelInfoLayer::onFavorite>;
	t["onGarage"] = sol::c_call<decltype(&LevelInfoLayer::onGarage), &LevelInfoLayer::onGarage>;
	t["onInfo"] = sol::c_call<decltype(&LevelInfoLayer::onInfo), &LevelInfoLayer::onInfo>;
	t["onLevelInfo"] = sol::c_call<decltype(&LevelInfoLayer::onLevelInfo), &LevelInfoLayer::onLevelInfo>;
	t["onLevelLeaderboard"] = sol::c_call<decltype(&LevelInfoLayer::onLevelLeaderboard), &LevelInfoLayer::onLevelLeaderboard>;
	t["onLike"] = sol::c_call<decltype(&LevelInfoLayer::onLike), &LevelInfoLayer::onLike>;
	t["onOwnerDelete"] = sol::c_call<decltype(&LevelInfoLayer::onOwnerDelete), &LevelInfoLayer::onOwnerDelete>;
	t["onPlay"] = sol::c_call<decltype(&LevelInfoLayer::onPlay), &LevelInfoLayer::onPlay>;
	t["onRateDemon"] = sol::c_call<decltype(&LevelInfoLayer::onRateDemon), &LevelInfoLayer::onRateDemon>;
	t["onRateStars"] = sol::c_call<decltype(&LevelInfoLayer::onRateStars), &LevelInfoLayer::onRateStars>;
	t["onRateStarsMod"] = sol::c_call<decltype(&LevelInfoLayer::onRateStarsMod), &LevelInfoLayer::onRateStarsMod>;
	t["onSetFolder"] = sol::c_call<decltype(&LevelInfoLayer::onSetFolder), &LevelInfoLayer::onSetFolder>;
	t["onUpdate"] = sol::c_call<decltype(&LevelInfoLayer::onUpdate), &LevelInfoLayer::onUpdate>;
	t["onViewProfile"] = sol::c_call<decltype(&LevelInfoLayer::onViewProfile), &LevelInfoLayer::onViewProfile>;
	t["scene"] = sol::c_call<decltype(&LevelInfoLayer::scene), &LevelInfoLayer::scene>;
	t["shouldDownloadLevel"] = sol::c_call<decltype(&LevelInfoLayer::shouldDownloadLevel), &LevelInfoLayer::shouldDownloadLevel>;
	t["showSongWarning"] = sol::c_call<decltype(&LevelInfoLayer::showSongWarning), &LevelInfoLayer::showSongWarning>;
	t["showUpdateAlert"] = sol::c_call<decltype(&LevelInfoLayer::showUpdateAlert), &LevelInfoLayer::showUpdateAlert>;
	t["tryCloneLevel"] = sol::c_call<decltype(&LevelInfoLayer::tryCloneLevel), &LevelInfoLayer::tryCloneLevel>;
	t["updateLabelValues"] = sol::c_call<decltype(&LevelInfoLayer::updateLabelValues), &LevelInfoLayer::updateLabelValues>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelInfoLayer::keyBackClicked), &LevelInfoLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&LevelInfoLayer::keyDown), &LevelInfoLayer::keyDown>;
	t["numberInputClosed"] = sol::c_call<decltype(&LevelInfoLayer::numberInputClosed), &LevelInfoLayer::numberInputClosed>;
	t["levelDownloadFinished"] = sol::c_call<decltype(&LevelInfoLayer::levelDownloadFinished), &LevelInfoLayer::levelDownloadFinished>;
	t["levelDownloadFailed"] = sol::c_call<decltype(&LevelInfoLayer::levelDownloadFailed), &LevelInfoLayer::levelDownloadFailed>;
	t["levelUpdateFinished"] = sol::c_call<decltype(&LevelInfoLayer::levelUpdateFinished), &LevelInfoLayer::levelUpdateFinished>;
	t["levelUpdateFailed"] = sol::c_call<decltype(&LevelInfoLayer::levelUpdateFailed), &LevelInfoLayer::levelUpdateFailed>;
	t["levelDeleteFinished"] = sol::c_call<decltype(&LevelInfoLayer::levelDeleteFinished), &LevelInfoLayer::levelDeleteFinished>;
	t["levelDeleteFailed"] = sol::c_call<decltype(&LevelInfoLayer::levelDeleteFailed), &LevelInfoLayer::levelDeleteFailed>;
	t["rateLevelClosed"] = sol::c_call<decltype(&LevelInfoLayer::rateLevelClosed), &LevelInfoLayer::rateLevelClosed>;
	t["likedItem"] = sol::c_call<decltype(&LevelInfoLayer::likedItem), &LevelInfoLayer::likedItem>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LevelInfoLayer::FLAlert_Clicked), &LevelInfoLayer::FLAlert_Clicked>;
	t["setIDPopupClosed"] = sol::c_call<decltype(&LevelInfoLayer::setIDPopupClosed), &LevelInfoLayer::setIDPopupClosed>;
}
void register_LevelLeaderboard(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelLeaderboard");
	t["create"] = sol::c_call<decltype(&LevelLeaderboard::create), &LevelLeaderboard::create>;
	t["init"] = sol::c_call<decltype(&LevelLeaderboard::init), &LevelLeaderboard::init>;
	t["onChangeMode"] = sol::c_call<decltype(&LevelLeaderboard::onChangeMode), &LevelLeaderboard::onChangeMode>;
	t["onChangeType"] = sol::c_call<decltype(&LevelLeaderboard::onChangeType), &LevelLeaderboard::onChangeType>;
	t["onClose"] = sol::c_call<decltype(&LevelLeaderboard::onClose), &LevelLeaderboard::onClose>;
	t["onUpdate"] = sol::c_call<decltype(&LevelLeaderboard::onUpdate), &LevelLeaderboard::onUpdate>;
	t["show"] = sol::c_call<decltype(&LevelLeaderboard::show), &LevelLeaderboard::show>;
	t["loadLeaderboardFinished"] = sol::c_call<decltype(&LevelLeaderboard::loadLeaderboardFinished), &LevelLeaderboard::loadLeaderboardFinished>;
	t["loadLeaderboardFailed"] = sol::c_call<decltype(&LevelLeaderboard::loadLeaderboardFailed), &LevelLeaderboard::loadLeaderboardFailed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LevelLeaderboard::FLAlert_Clicked), &LevelLeaderboard::FLAlert_Clicked>;
	t["updateUserScoreFinished"] = sol::c_call<decltype(&LevelLeaderboard::updateUserScoreFinished), &LevelLeaderboard::updateUserScoreFinished>;
	t["updateUserScoreFailed"] = sol::c_call<decltype(&LevelLeaderboard::updateUserScoreFailed), &LevelLeaderboard::updateUserScoreFailed>;
}
void register_LevelListCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelListCell");
	t["loadFromList"] = sol::c_call<decltype(&LevelListCell::loadFromList), &LevelListCell::loadFromList>;
	t["onClick"] = sol::c_call<decltype(&LevelListCell::onClick), &LevelListCell::onClick>;
	t["onListInfo"] = sol::c_call<decltype(&LevelListCell::onListInfo), &LevelListCell::onListInfo>;
	t["onViewProfile"] = sol::c_call<decltype(&LevelListCell::onViewProfile), &LevelListCell::onViewProfile>;
}
void register_LevelListLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelListLayer");
	t["create"] = sol::c_call<decltype(&LevelListLayer::create), &LevelListLayer::create>;
	t["cloneList"] = sol::c_call<decltype(&LevelListLayer::cloneList), &LevelListLayer::cloneList>;
	t["init"] = sol::c_call<decltype(&LevelListLayer::init), &LevelListLayer::init>;
	t["onDelete"] = sol::c_call<decltype(&LevelListLayer::onDelete), &LevelListLayer::onDelete>;
	t["ownerDelete"] = sol::c_call<decltype(&LevelListLayer::ownerDelete), &LevelListLayer::ownerDelete>;
	t["onEnter"] = sol::c_call<decltype(&LevelListLayer::onEnter), &LevelListLayer::onEnter>;
	t["onExit"] = sol::c_call<decltype(&LevelListLayer::onExit), &LevelListLayer::onExit>;
	t["loadLevelsFinished"] = sol::c_call<decltype(&LevelListLayer::loadLevelsFinished), &LevelListLayer::loadLevelsFinished>;
	t["onBack"] = sol::c_call<decltype(&LevelListLayer::onBack), &LevelListLayer::onBack>;
	t["shareCommentClosed"] = sol::c_call<decltype(&LevelListLayer::shareCommentClosed), &LevelListLayer::shareCommentClosed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LevelListLayer::FLAlert_Clicked), &LevelListLayer::FLAlert_Clicked>;
	t["setIDPopupClosed"] = sol::c_call<decltype(&LevelListLayer::setIDPopupClosed), &LevelListLayer::setIDPopupClosed>;
	t["likedItem"] = sol::c_call<decltype(&LevelListLayer::likedItem), &LevelListLayer::likedItem>;
	t["levelListDeleteFinished"] = sol::c_call<decltype(&LevelListLayer::levelListDeleteFinished), &LevelListLayer::levelListDeleteFinished>;
	t["levelListDeleteFailed"] = sol::c_call<decltype(&LevelListLayer::levelListDeleteFailed), &LevelListLayer::levelListDeleteFailed>;
	t["textInputOpened"] = sol::c_call<decltype(&LevelListLayer::textInputOpened), &LevelListLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&LevelListLayer::textInputClosed), &LevelListLayer::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&LevelListLayer::textChanged), &LevelListLayer::textChanged>;
}
void register_LevelOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelOptionsLayer");
	t["valueDidChange"] = sol::c_call<decltype(&LevelOptionsLayer::valueDidChange), &LevelOptionsLayer::valueDidChange>;
	t["setupOptions"] = sol::c_call<decltype(&LevelOptionsLayer::setupOptions), &LevelOptionsLayer::setupOptions>;
	t["didToggle"] = sol::c_call<decltype(&LevelOptionsLayer::didToggle), &LevelOptionsLayer::didToggle>;
}
void register_LevelOptionsLayer2(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelOptionsLayer2");
	t["create"] = sol::c_call<decltype(&LevelOptionsLayer2::create), &LevelOptionsLayer2::create>;
	t["init"] = sol::c_call<decltype(&LevelOptionsLayer2::init), &LevelOptionsLayer2::init>;
	t["setupOptions"] = sol::c_call<decltype(&LevelOptionsLayer2::setupOptions), &LevelOptionsLayer2::setupOptions>;
}
void register_LevelPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelPage");
	t["create"] = sol::c_call<decltype(&LevelPage::create), &LevelPage::create>;
	t["init"] = sol::c_call<decltype(&LevelPage::init), &LevelPage::init>;
	t["onInfo"] = sol::c_call<decltype(&LevelPage::onInfo), &LevelPage::onInfo>;
	t["onPlay"] = sol::c_call<decltype(&LevelPage::onPlay), &LevelPage::onPlay>;
	t["onSecretDoor"] = sol::c_call<decltype(&LevelPage::onSecretDoor), &LevelPage::onSecretDoor>;
	t["updateDynamicPage"] = sol::c_call<decltype(&LevelPage::updateDynamicPage), &LevelPage::updateDynamicPage>;
	t["ccTouchBegan"] = sol::c_call<decltype(&LevelPage::ccTouchBegan), &LevelPage::ccTouchBegan>;
	t["dialogClosed"] = sol::c_call<decltype(&LevelPage::dialogClosed), &LevelPage::dialogClosed>;
}
void register_LevelSearchLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelSearchLayer");
	t["create"] = sol::c_call<decltype(&LevelSearchLayer::create), &LevelSearchLayer::create>;
	t["getSearchObject"] = sol::c_call<decltype(&LevelSearchLayer::getSearchObject), &LevelSearchLayer::getSearchObject>;
	t["init"] = sol::c_call<decltype(&LevelSearchLayer::init), &LevelSearchLayer::init>;
	t["onBack"] = sol::c_call<decltype(&LevelSearchLayer::onBack), &LevelSearchLayer::onBack>;
	t["onClearFreeSearch"] = sol::c_call<decltype(&LevelSearchLayer::onClearFreeSearch), &LevelSearchLayer::onClearFreeSearch>;
	t["onMoreOptions"] = sol::c_call<decltype(&LevelSearchLayer::onMoreOptions), &LevelSearchLayer::onMoreOptions>;
	t["onMostLikes"] = sol::c_call<decltype(&LevelSearchLayer::onMostLikes), &LevelSearchLayer::onMostLikes>;
	t["onSearch"] = sol::c_call<decltype(&LevelSearchLayer::onSearch), &LevelSearchLayer::onSearch>;
	t["onSearchUser"] = sol::c_call<decltype(&LevelSearchLayer::onSearchUser), &LevelSearchLayer::onSearchUser>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelSearchLayer::keyBackClicked), &LevelSearchLayer::keyBackClicked>;
	t["textInputOpened"] = sol::c_call<decltype(&LevelSearchLayer::textInputOpened), &LevelSearchLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&LevelSearchLayer::textInputClosed), &LevelSearchLayer::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&LevelSearchLayer::textChanged), &LevelSearchLayer::textChanged>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&LevelSearchLayer::FLAlert_Clicked), &LevelSearchLayer::FLAlert_Clicked>;
	t["demonFilterSelectClosed"] = sol::c_call<decltype(&LevelSearchLayer::demonFilterSelectClosed), &LevelSearchLayer::demonFilterSelectClosed>;
}
void register_LevelSelectLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelSelectLayer");
	t["create"] = sol::c_call<decltype(&LevelSelectLayer::create), &LevelSelectLayer::create>;
	t["colorForPage"] = sol::c_call<decltype(&LevelSelectLayer::colorForPage), &LevelSelectLayer::colorForPage>;
	t["init"] = sol::c_call<decltype(&LevelSelectLayer::init), &LevelSelectLayer::init>;
	t["onBack"] = sol::c_call<decltype(&LevelSelectLayer::onBack), &LevelSelectLayer::onBack>;
	t["onDownload"] = sol::c_call<decltype(&LevelSelectLayer::onDownload), &LevelSelectLayer::onDownload>;
	t["onInfo"] = sol::c_call<decltype(&LevelSelectLayer::onInfo), &LevelSelectLayer::onInfo>;
	t["onNext"] = sol::c_call<decltype(&LevelSelectLayer::onNext), &LevelSelectLayer::onNext>;
	t["onPrev"] = sol::c_call<decltype(&LevelSelectLayer::onPrev), &LevelSelectLayer::onPrev>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelSelectLayer::keyBackClicked), &LevelSelectLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&LevelSelectLayer::keyDown), &LevelSelectLayer::keyDown>;
	t["updatePageWithObject"] = sol::c_call<decltype(&LevelSelectLayer::updatePageWithObject), &LevelSelectLayer::updatePageWithObject>;
	t["scrollLayerMoved"] = sol::c_call<decltype(&LevelSelectLayer::scrollLayerMoved), &LevelSelectLayer::scrollLayerMoved>;
}
void register_LevelSettingsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelSettingsLayer");
	t["create"] = sol::c_call<decltype(&LevelSettingsLayer::create), &LevelSettingsLayer::create>;
	t["init"] = sol::c_call<decltype(&LevelSettingsLayer::init), &LevelSettingsLayer::init>;
	t["onClose"] = sol::c_call<decltype(&LevelSettingsLayer::onClose), &LevelSettingsLayer::onClose>;
	t["onCol"] = sol::c_call<decltype(&LevelSettingsLayer::onCol), &LevelSettingsLayer::onCol>;
	t["onFGArt"] = sol::c_call<decltype(&LevelSettingsLayer::onFGArt), &LevelSettingsLayer::onFGArt>;
	t["onGameplayMode"] = sol::c_call<decltype(&LevelSettingsLayer::onGameplayMode), &LevelSettingsLayer::onGameplayMode>;
	t["onGArt"] = sol::c_call<decltype(&LevelSettingsLayer::onGArt), &LevelSettingsLayer::onGArt>;
	t["onLiveEdit"] = sol::c_call<decltype(&LevelSettingsLayer::onLiveEdit), &LevelSettingsLayer::onLiveEdit>;
	t["onSelectFont"] = sol::c_call<decltype(&LevelSettingsLayer::onSelectFont), &LevelSettingsLayer::onSelectFont>;
	t["onShowPicker"] = sol::c_call<decltype(&LevelSettingsLayer::onShowPicker), &LevelSettingsLayer::onShowPicker>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&LevelSettingsLayer::registerWithTouchDispatcher), &LevelSettingsLayer::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&LevelSettingsLayer::keyBackClicked), &LevelSettingsLayer::keyBackClicked>;
	t["colorSelectClosed"] = sol::c_call<decltype(&LevelSettingsLayer::colorSelectClosed), &LevelSettingsLayer::colorSelectClosed>;
	t["selectArtClosed"] = sol::c_call<decltype(&LevelSettingsLayer::selectArtClosed), &LevelSettingsLayer::selectArtClosed>;
	t["textChanged"] = sol::c_call<decltype(&LevelSettingsLayer::textChanged), &LevelSettingsLayer::textChanged>;
}
void register_LevelSettingsObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelSettingsObject");
	t["create"] = sol::c_call<decltype(&LevelSettingsObject::create), &LevelSettingsObject::create>;
	t["getSaveString"] = sol::c_call<decltype(&LevelSettingsObject::getSaveString), &LevelSettingsObject::getSaveString>;
	t["objectFromDict"] = sol::c_call<decltype(&LevelSettingsObject::objectFromDict), &LevelSettingsObject::objectFromDict>;
	t["init"] = sol::c_call<decltype(&LevelSettingsObject::init), &LevelSettingsObject::init>;
}
void register_LevelTools(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LevelTools");
	t["artistForAudio"] = sol::c_call<decltype(&LevelTools::artistForAudio), &LevelTools::artistForAudio>;
	t["base64DecodeString"] = sol::c_call<decltype(&LevelTools::base64DecodeString), &LevelTools::base64DecodeString>;
	t["base64EncodeString"] = sol::c_call<decltype(&LevelTools::base64EncodeString), &LevelTools::base64EncodeString>;
	t["fbURLForArtist"] = sol::c_call<decltype(&LevelTools::fbURLForArtist), &LevelTools::fbURLForArtist>;
	t["getAudioFileName"] = sol::c_call<decltype(&LevelTools::getAudioFileName), &LevelTools::getAudioFileName>;
	t["getAudioString"] = sol::c_call<decltype(&LevelTools::getAudioString), &LevelTools::getAudioString>;
	t["getAudioTitle"] = sol::c_call<decltype(&LevelTools::getAudioTitle), &LevelTools::getAudioTitle>;
	t["getLevel"] = sol::c_call<decltype(&LevelTools::getLevel), &LevelTools::getLevel>;
	t["getSongObject"] = sol::c_call<decltype(&LevelTools::getSongObject), &LevelTools::getSongObject>;
	t["nameForArtist"] = sol::c_call<decltype(&LevelTools::nameForArtist), &LevelTools::nameForArtist>;
	t["ngURLForArtist"] = sol::c_call<decltype(&LevelTools::ngURLForArtist), &LevelTools::ngURLForArtist>;
	t["timeForPos"] = sol::c_call<decltype(&LevelTools::timeForPos), &LevelTools::timeForPos>;
	t["urlForAudio"] = sol::c_call<decltype(&LevelTools::urlForAudio), &LevelTools::urlForAudio>;
	t["verifyLevelIntegrity"] = sol::c_call<decltype(&LevelTools::verifyLevelIntegrity), &LevelTools::verifyLevelIntegrity>;
	t["ytURLForArtist"] = sol::c_call<decltype(&LevelTools::ytURLForArtist), &LevelTools::ytURLForArtist>;
}
void register_LikeItemLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LikeItemLayer");
	t["create"] = sol::c_call<decltype(&LikeItemLayer::create), &LikeItemLayer::create>;
	t["init"] = sol::c_call<decltype(&LikeItemLayer::init), &LikeItemLayer::init>;
	t["onClose"] = sol::c_call<decltype(&LikeItemLayer::onClose), &LikeItemLayer::onClose>;
	t["onDislike"] = sol::c_call<decltype(&LikeItemLayer::onDislike), &LikeItemLayer::onDislike>;
	t["onLike"] = sol::c_call<decltype(&LikeItemLayer::onLike), &LikeItemLayer::onLike>;
	t["triggerLike"] = sol::c_call<decltype(&LikeItemLayer::triggerLike), &LikeItemLayer::triggerLike>;
}
void register_ListCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ListCell");
	t["draw"] = sol::c_call<decltype(&ListCell::draw), &ListCell::draw>;
}
void register_LoadingCircle(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LoadingCircle");
	t["create"] = sol::c_call<decltype(&LoadingCircle::create), &LoadingCircle::create>;
	t["fadeAndRemove"] = sol::c_call<decltype(&LoadingCircle::fadeAndRemove), &LoadingCircle::fadeAndRemove>;
	t["show"] = sol::c_call<decltype(&LoadingCircle::show), &LoadingCircle::show>;
	t["init"] = sol::c_call<decltype(&LoadingCircle::init), &LoadingCircle::init>;
	t["draw"] = sol::c_call<decltype(&LoadingCircle::draw), &LoadingCircle::draw>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&LoadingCircle::registerWithTouchDispatcher), &LoadingCircle::registerWithTouchDispatcher>;
}
void register_LoadingLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LoadingLayer");
	t["create"] = sol::c_call<decltype(&LoadingLayer::create), &LoadingLayer::create>;
	t["init"] = sol::c_call<decltype(&LoadingLayer::init), &LoadingLayer::init>;
	t["loadAssets"] = sol::c_call<decltype(&LoadingLayer::loadAssets), &LoadingLayer::loadAssets>;
	t["loadingFinished"] = sol::c_call<decltype(&LoadingLayer::loadingFinished), &LoadingLayer::loadingFinished>;
}
void register_LocalLevelManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("LocalLevelManager");
	t["sharedState"] = sol::c_call<decltype(&LocalLevelManager::sharedState), &LocalLevelManager::sharedState>;
	t["getAllLevelsInDict"] = sol::c_call<decltype(&LocalLevelManager::getAllLevelsInDict), &LocalLevelManager::getAllLevelsInDict>;
	t["init"] = sol::c_call<decltype(&LocalLevelManager::init), &LocalLevelManager::init>;
	t["encodeDataTo"] = sol::c_call<decltype(&LocalLevelManager::encodeDataTo), &LocalLevelManager::encodeDataTo>;
	t["dataLoaded"] = sol::c_call<decltype(&LocalLevelManager::dataLoaded), &LocalLevelManager::dataLoaded>;
	t["firstLoad"] = sol::c_call<decltype(&LocalLevelManager::firstLoad), &LocalLevelManager::firstLoad>;
}
void register_MapPackCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MapPackCell");
	t["onClick"] = sol::c_call<decltype(&MapPackCell::onClick), &MapPackCell::onClick>;
	t["init"] = sol::c_call<decltype(&MapPackCell::init), &MapPackCell::init>;
}
void register_MenuGameLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MenuGameLayer");
	t["create"] = sol::c_call<decltype(&MenuGameLayer::create), &MenuGameLayer::create>;
	t["destroyPlayer"] = sol::c_call<decltype(&MenuGameLayer::destroyPlayer), &MenuGameLayer::destroyPlayer>;
	t["update"] = sol::c_call<decltype(&MenuGameLayer::update), &MenuGameLayer::update>;
	t["init"] = sol::c_call<decltype(&MenuGameLayer::init), &MenuGameLayer::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&MenuGameLayer::ccTouchBegan), &MenuGameLayer::ccTouchBegan>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&MenuGameLayer::registerWithTouchDispatcher), &MenuGameLayer::registerWithTouchDispatcher>;
}
void register_MenuLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MenuLayer");
	t["scene"] = sol::c_call<decltype(&MenuLayer::scene), &MenuLayer::scene>;
	t["onAchievements"] = sol::c_call<decltype(&MenuLayer::onAchievements), &MenuLayer::onAchievements>;
	t["onCreator"] = sol::c_call<decltype(&MenuLayer::onCreator), &MenuLayer::onCreator>;
	t["onDaily"] = sol::c_call<decltype(&MenuLayer::onDaily), &MenuLayer::onDaily>;
	t["onDiscord"] = sol::c_call<decltype(&MenuLayer::onDiscord), &MenuLayer::onDiscord>;
	t["onFacebook"] = sol::c_call<decltype(&MenuLayer::onFacebook), &MenuLayer::onFacebook>;
	t["onGarage"] = sol::c_call<decltype(&MenuLayer::onGarage), &MenuLayer::onGarage>;
	t["onMoreGames"] = sol::c_call<decltype(&MenuLayer::onMoreGames), &MenuLayer::onMoreGames>;
	t["onMyProfile"] = sol::c_call<decltype(&MenuLayer::onMyProfile), &MenuLayer::onMyProfile>;
	t["onNewgrounds"] = sol::c_call<decltype(&MenuLayer::onNewgrounds), &MenuLayer::onNewgrounds>;
	t["onOptions"] = sol::c_call<decltype(&MenuLayer::onOptions), &MenuLayer::onOptions>;
	t["onPlay"] = sol::c_call<decltype(&MenuLayer::onPlay), &MenuLayer::onPlay>;
	t["onQuit"] = sol::c_call<decltype(&MenuLayer::onQuit), &MenuLayer::onQuit>;
	t["onRobTop"] = sol::c_call<decltype(&MenuLayer::onRobTop), &MenuLayer::onRobTop>;
	t["onStats"] = sol::c_call<decltype(&MenuLayer::onStats), &MenuLayer::onStats>;
	t["onTwitch"] = sol::c_call<decltype(&MenuLayer::onTwitch), &MenuLayer::onTwitch>;
	t["onTwitter"] = sol::c_call<decltype(&MenuLayer::onTwitter), &MenuLayer::onTwitter>;
	t["onYouTube"] = sol::c_call<decltype(&MenuLayer::onYouTube), &MenuLayer::onYouTube>;
	t["showTOS"] = sol::c_call<decltype(&MenuLayer::showTOS), &MenuLayer::showTOS>;
	t["init"] = sol::c_call<decltype(&MenuLayer::init), &MenuLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&MenuLayer::keyBackClicked), &MenuLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&MenuLayer::keyDown), &MenuLayer::keyDown>;
	t["googlePlaySignedIn"] = sol::c_call<decltype(&MenuLayer::googlePlaySignedIn), &MenuLayer::googlePlaySignedIn>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&MenuLayer::FLAlert_Clicked), &MenuLayer::FLAlert_Clicked>;
}
void register_MessagesProfilePage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MessagesProfilePage");
	t["create"] = sol::c_call<decltype(&MessagesProfilePage::create), &MessagesProfilePage::create>;
	t["init"] = sol::c_call<decltype(&MessagesProfilePage::init), &MessagesProfilePage::init>;
	t["loadPage"] = sol::c_call<decltype(&MessagesProfilePage::loadPage), &MessagesProfilePage::loadPage>;
	t["setupCommentsBrowser"] = sol::c_call<decltype(&MessagesProfilePage::setupCommentsBrowser), &MessagesProfilePage::setupCommentsBrowser>;
	t["keyBackClicked"] = sol::c_call<decltype(&MessagesProfilePage::keyBackClicked), &MessagesProfilePage::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&MessagesProfilePage::FLAlert_Clicked), &MessagesProfilePage::FLAlert_Clicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&MessagesProfilePage::uploadActionFinished), &MessagesProfilePage::uploadActionFinished>;
	t["loadMessagesFinished"] = sol::c_call<decltype(&MessagesProfilePage::loadMessagesFinished), &MessagesProfilePage::loadMessagesFinished>;
	t["forceReloadMessages"] = sol::c_call<decltype(&MessagesProfilePage::forceReloadMessages), &MessagesProfilePage::forceReloadMessages>;
	t["setupPageInfo"] = sol::c_call<decltype(&MessagesProfilePage::setupPageInfo), &MessagesProfilePage::setupPageInfo>;
}
void register_MoreOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MoreOptionsLayer");
	t["create"] = sol::c_call<decltype(&MoreOptionsLayer::create), &MoreOptionsLayer::create>;
	t["goToPage"] = sol::c_call<decltype(&MoreOptionsLayer::goToPage), &MoreOptionsLayer::goToPage>;
	t["onClose"] = sol::c_call<decltype(&MoreOptionsLayer::onClose), &MoreOptionsLayer::onClose>;
	t["onKeybindings"] = sol::c_call<decltype(&MoreOptionsLayer::onKeybindings), &MoreOptionsLayer::onKeybindings>;
	t["onSongBrowser"] = sol::c_call<decltype(&MoreOptionsLayer::onSongBrowser), &MoreOptionsLayer::onSongBrowser>;
	t["init"] = sol::c_call<decltype(&MoreOptionsLayer::init), &MoreOptionsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&MoreOptionsLayer::keyBackClicked), &MoreOptionsLayer::keyBackClicked>;
	t["googlePlaySignedIn"] = sol::c_call<decltype(&MoreOptionsLayer::googlePlaySignedIn), &MoreOptionsLayer::googlePlaySignedIn>;
	t["dropDownLayerWillClose"] = sol::c_call<decltype(&MoreOptionsLayer::dropDownLayerWillClose), &MoreOptionsLayer::dropDownLayerWillClose>;
}
void register_MoreSearchLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MoreSearchLayer");
	t["create"] = sol::c_call<decltype(&MoreSearchLayer::create), &MoreSearchLayer::create>;
	t["onClose"] = sol::c_call<decltype(&MoreSearchLayer::onClose), &MoreSearchLayer::onClose>;
	t["onSongFilter"] = sol::c_call<decltype(&MoreSearchLayer::onSongFilter), &MoreSearchLayer::onSongFilter>;
	t["onSongMode"] = sol::c_call<decltype(&MoreSearchLayer::onSongMode), &MoreSearchLayer::onSongMode>;
	t["init"] = sol::c_call<decltype(&MoreSearchLayer::init), &MoreSearchLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&MoreSearchLayer::keyBackClicked), &MoreSearchLayer::keyBackClicked>;
}
void register_MoreVideoOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MoreVideoOptionsLayer");
	t["create"] = sol::c_call<decltype(&MoreVideoOptionsLayer::create), &MoreVideoOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&MoreVideoOptionsLayer::init), &MoreVideoOptionsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&MoreVideoOptionsLayer::keyBackClicked), &MoreVideoOptionsLayer::keyBackClicked>;
}
void register_MultilineBitmapFont(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MultilineBitmapFont");
	t["setOpacity"] = sol::c_call<decltype(&MultilineBitmapFont::setOpacity), &MultilineBitmapFont::setOpacity>;
}
void register_MultiTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MultiTriggerPopup");
	t["create"] = sol::c_call<decltype(&MultiTriggerPopup::create), &MultiTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&MultiTriggerPopup::init), &MultiTriggerPopup::init>;
}
void register_MusicArtistObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MusicArtistObject");
	t["create"] = sol::c_call<decltype(&MusicArtistObject::create), &MusicArtistObject::create>;
	t["init"] = sol::c_call<decltype(&MusicArtistObject::init), &MusicArtistObject::init>;
}
void register_MusicBrowser(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MusicBrowser");
	t["create"] = sol::c_call<decltype(&MusicBrowser::create), &MusicBrowser::create>;
	t["init"] = sol::c_call<decltype(&MusicBrowser::init), &MusicBrowser::init>;
	t["setupList"] = sol::c_call<decltype(&MusicBrowser::setupList), &MusicBrowser::setupList>;
	t["update"] = sol::c_call<decltype(&MusicBrowser::update), &MusicBrowser::update>;
	t["keyBackClicked"] = sol::c_call<decltype(&MusicBrowser::keyBackClicked), &MusicBrowser::keyBackClicked>;
	t["musicActionFinished"] = sol::c_call<decltype(&MusicBrowser::musicActionFinished), &MusicBrowser::musicActionFinished>;
	t["musicActionFailed"] = sol::c_call<decltype(&MusicBrowser::musicActionFailed), &MusicBrowser::musicActionFailed>;
	t["setTextPopupClosed"] = sol::c_call<decltype(&MusicBrowser::setTextPopupClosed), &MusicBrowser::setTextPopupClosed>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&MusicBrowser::FLAlert_Clicked), &MusicBrowser::FLAlert_Clicked>;
}
void register_MusicDownloadManager(sol::state_view lua)
{
	sol::table t = lua.create_named_table("MusicDownloadManager");
	t["sharedState"] = sol::c_call<decltype(&MusicDownloadManager::sharedState), &MusicDownloadManager::sharedState>;
	t["createSongsInfo"] = sol::c_call<decltype(&MusicDownloadManager::createSongsInfo), &MusicDownloadManager::createSongsInfo>;
	t["dataLoaded"] = sol::c_call<decltype(&MusicDownloadManager::dataLoaded), &MusicDownloadManager::dataLoaded>;
	t["downloadCustomSong"] = sol::c_call<decltype(&MusicDownloadManager::downloadCustomSong), &MusicDownloadManager::downloadCustomSong>;
	t["downloadMusicLibrary"] = sol::c_call<decltype(&MusicDownloadManager::downloadMusicLibrary), &MusicDownloadManager::downloadMusicLibrary>;
	t["downloadSFX"] = sol::c_call<decltype(&MusicDownloadManager::downloadSFX), &MusicDownloadManager::downloadSFX>;
	t["downloadSFXLibrary"] = sol::c_call<decltype(&MusicDownloadManager::downloadSFXLibrary), &MusicDownloadManager::downloadSFXLibrary>;
	t["downloadSong"] = sol::c_call<decltype(&MusicDownloadManager::downloadSong), &MusicDownloadManager::downloadSong>;
	t["downloadSongFailed"] = sol::c_call<decltype(&MusicDownloadManager::downloadSongFailed), &MusicDownloadManager::downloadSongFailed>;
	t["downloadSongFinished"] = sol::c_call<decltype(&MusicDownloadManager::downloadSongFinished), &MusicDownloadManager::downloadSongFinished>;
	t["getCustomContentURL"] = sol::c_call<decltype(&MusicDownloadManager::getCustomContentURL), &MusicDownloadManager::getCustomContentURL>;
	t["getSongInfo"] = sol::c_call<decltype(&MusicDownloadManager::getSongInfo), &MusicDownloadManager::getSongInfo>;
	t["getSongInfoObject"] = sol::c_call<decltype(&MusicDownloadManager::getSongInfoObject), &MusicDownloadManager::getSongInfoObject>;
	t["handleIt"] = sol::c_call<decltype(&MusicDownloadManager::handleIt), &MusicDownloadManager::handleIt>;
	t["isRunningActionForSongID"] = sol::c_call<decltype(&MusicDownloadManager::isRunningActionForSongID), &MusicDownloadManager::isRunningActionForSongID>;
	t["isSFXDownloaded"] = sol::c_call<decltype(&MusicDownloadManager::isSFXDownloaded), &MusicDownloadManager::isSFXDownloaded>;
	t["isSongDownloaded"] = sol::c_call<decltype(&MusicDownloadManager::isSongDownloaded), &MusicDownloadManager::isSongDownloaded>;
	t["limitDownloadedSongs"] = sol::c_call<decltype(&MusicDownloadManager::limitDownloadedSongs), &MusicDownloadManager::limitDownloadedSongs>;
	t["loadSongInfoFailed"] = sol::c_call<decltype(&MusicDownloadManager::loadSongInfoFailed), &MusicDownloadManager::loadSongInfoFailed>;
	t["loadSongInfoFinished"] = sol::c_call<decltype(&MusicDownloadManager::loadSongInfoFinished), &MusicDownloadManager::loadSongInfoFinished>;
	t["musicActionFailed"] = sol::c_call<decltype(&MusicDownloadManager::musicActionFailed), &MusicDownloadManager::musicActionFailed>;
	t["musicActionFinished"] = sol::c_call<decltype(&MusicDownloadManager::musicActionFinished), &MusicDownloadManager::musicActionFinished>;
	t["onDownloadSongCompleted"] = sol::c_call<decltype(&MusicDownloadManager::onDownloadSongCompleted), &MusicDownloadManager::onDownloadSongCompleted>;
	t["onGetCustomContentURLCompleted"] = sol::c_call<decltype(&MusicDownloadManager::onGetCustomContentURLCompleted), &MusicDownloadManager::onGetCustomContentURLCompleted>;
	t["onGetSongInfoCompleted"] = sol::c_call<decltype(&MusicDownloadManager::onGetSongInfoCompleted), &MusicDownloadManager::onGetSongInfoCompleted>;
	t["onProcessHttpRequestCompleted"] = sol::c_call<decltype(&MusicDownloadManager::onProcessHttpRequestCompleted), &MusicDownloadManager::onProcessHttpRequestCompleted>;
	t["parseMusicLibrary"] = sol::c_call<decltype(&MusicDownloadManager::parseMusicLibrary), &MusicDownloadManager::parseMusicLibrary>;
	t["parseSFXLibrary"] = sol::c_call<decltype(&MusicDownloadManager::parseSFXLibrary), &MusicDownloadManager::parseSFXLibrary>;
	t["pathForSFX"] = sol::c_call<decltype(&MusicDownloadManager::pathForSFX), &MusicDownloadManager::pathForSFX>;
	t["pathForSong"] = sol::c_call<decltype(&MusicDownloadManager::pathForSong), &MusicDownloadManager::pathForSong>;
	t["ProcessHttpGetRequest"] = sol::c_call<decltype(&MusicDownloadManager::ProcessHttpGetRequest), &MusicDownloadManager::ProcessHttpGetRequest>;
	t["ProcessHttpRequest"] = sol::c_call<decltype(&MusicDownloadManager::ProcessHttpRequest), &MusicDownloadManager::ProcessHttpRequest>;
	t["removeDLFromActive"] = sol::c_call<decltype(&MusicDownloadManager::removeDLFromActive), &MusicDownloadManager::removeDLFromActive>;
	t["responseToDict"] = sol::c_call<decltype(&MusicDownloadManager::responseToDict), &MusicDownloadManager::responseToDict>;
	t["showTOS"] = sol::c_call<decltype(&MusicDownloadManager::showTOS), &MusicDownloadManager::showTOS>;
	t["songStateChanged"] = sol::c_call<decltype(&MusicDownloadManager::songStateChanged), &MusicDownloadManager::songStateChanged>;
	t["init"] = sol::c_call<decltype(&MusicDownloadManager::init), &MusicDownloadManager::init>;
}
void register_NewgroundsInfoLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("NewgroundsInfoLayer");
	t["create"] = sol::c_call<decltype(&NewgroundsInfoLayer::create), &NewgroundsInfoLayer::create>;
	t["init"] = sol::c_call<decltype(&NewgroundsInfoLayer::init), &NewgroundsInfoLayer::init>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&NewgroundsInfoLayer::FLAlert_Clicked), &NewgroundsInfoLayer::FLAlert_Clicked>;
}
void register_NumberInputLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("NumberInputLayer");
	t["create"] = sol::c_call<decltype(&NumberInputLayer::create), &NumberInputLayer::create>;
	t["init"] = sol::c_call<decltype(&NumberInputLayer::init), &NumberInputLayer::init>;
}
void register_OBB2D(sol::state_view lua)
{
	sol::table t = lua.create_named_table("OBB2D");
	t["create"] = sol::c_call<decltype(&OBB2D::create), &OBB2D::create>;
}
void register_ObjectToolbox(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ObjectToolbox");
	t["sharedState"] = sol::c_call<decltype(&ObjectToolbox::sharedState), &ObjectToolbox::sharedState>;
	t["gridNodeSizeForKey"] = sol::c_call<decltype(&ObjectToolbox::gridNodeSizeForKey), &ObjectToolbox::gridNodeSizeForKey>;
}
void register_OptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("OptionsLayer");
	t["create"] = sol::c_call<decltype(&OptionsLayer::create), &OptionsLayer::create>;
	t["onAccount"] = sol::c_call<decltype(&OptionsLayer::onAccount), &OptionsLayer::onAccount>;
	t["onHelp"] = sol::c_call<decltype(&OptionsLayer::onHelp), &OptionsLayer::onHelp>;
	t["onMenuMusic"] = sol::c_call<decltype(&OptionsLayer::onMenuMusic), &OptionsLayer::onMenuMusic>;
	t["onOptions"] = sol::c_call<decltype(&OptionsLayer::onOptions), &OptionsLayer::onOptions>;
	t["onRate"] = sol::c_call<decltype(&OptionsLayer::onRate), &OptionsLayer::onRate>;
	t["onSecretVault"] = sol::c_call<decltype(&OptionsLayer::onSecretVault), &OptionsLayer::onSecretVault>;
	t["onSoundtracks"] = sol::c_call<decltype(&OptionsLayer::onSoundtracks), &OptionsLayer::onSoundtracks>;
	t["onSupport"] = sol::c_call<decltype(&OptionsLayer::onSupport), &OptionsLayer::onSupport>;
	t["onVideo"] = sol::c_call<decltype(&OptionsLayer::onVideo), &OptionsLayer::onVideo>;
	t["customSetup"] = sol::c_call<decltype(&OptionsLayer::customSetup), &OptionsLayer::customSetup>;
	t["layerHidden"] = sol::c_call<decltype(&OptionsLayer::layerHidden), &OptionsLayer::layerHidden>;
}
void register_OptionsScrollLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("OptionsScrollLayer");
	t["create"] = sol::c_call<decltype(&OptionsScrollLayer::create), &OptionsScrollLayer::create>;
	t["init"] = sol::c_call<decltype(&OptionsScrollLayer::init), &OptionsScrollLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&OptionsScrollLayer::keyBackClicked), &OptionsScrollLayer::keyBackClicked>;
}
void register_ParentalOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ParentalOptionsLayer");
	t["create"] = sol::c_call<decltype(&ParentalOptionsLayer::create), &ParentalOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&ParentalOptionsLayer::init), &ParentalOptionsLayer::init>;
}
void register_ParticleGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ParticleGameObject");
	t["create"] = sol::c_call<decltype(&ParticleGameObject::create), &ParticleGameObject::create>;
	t["setParticleString"] = sol::c_call<decltype(&ParticleGameObject::setParticleString), &ParticleGameObject::setParticleString>;
	t["updateParticle"] = sol::c_call<decltype(&ParticleGameObject::updateParticle), &ParticleGameObject::updateParticle>;
	t["init"] = sol::c_call<decltype(&ParticleGameObject::init), &ParticleGameObject::init>;
	t["customSetup"] = sol::c_call<decltype(&ParticleGameObject::customSetup), &ParticleGameObject::customSetup>;
	t["getSaveString"] = sol::c_call<decltype(&ParticleGameObject::getSaveString), &ParticleGameObject::getSaveString>;
}
void register_ParticlePreviewLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ParticlePreviewLayer");
	t["create"] = sol::c_call<decltype(&ParticlePreviewLayer::create), &ParticlePreviewLayer::create>;
	t["draw"] = sol::c_call<decltype(&ParticlePreviewLayer::draw), &ParticlePreviewLayer::draw>;
	t["visit"] = sol::c_call<decltype(&ParticlePreviewLayer::visit), &ParticlePreviewLayer::visit>;
}
void register_PauseLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PauseLayer");
	t["create"] = sol::c_call<decltype(&PauseLayer::create), &PauseLayer::create>;
	t["goEdit"] = sol::c_call<decltype(&PauseLayer::goEdit), &PauseLayer::goEdit>;
	t["musicSliderChanged"] = sol::c_call<decltype(&PauseLayer::musicSliderChanged), &PauseLayer::musicSliderChanged>;
	t["onEdit"] = sol::c_call<decltype(&PauseLayer::onEdit), &PauseLayer::onEdit>;
	t["onNormalMode"] = sol::c_call<decltype(&PauseLayer::onNormalMode), &PauseLayer::onNormalMode>;
	t["onPracticeMode"] = sol::c_call<decltype(&PauseLayer::onPracticeMode), &PauseLayer::onPracticeMode>;
	t["onQuit"] = sol::c_call<decltype(&PauseLayer::onQuit), &PauseLayer::onQuit>;
	t["onRestart"] = sol::c_call<decltype(&PauseLayer::onRestart), &PauseLayer::onRestart>;
	t["onRestartFull"] = sol::c_call<decltype(&PauseLayer::onRestartFull), &PauseLayer::onRestartFull>;
	t["onResume"] = sol::c_call<decltype(&PauseLayer::onResume), &PauseLayer::onResume>;
	t["onSettings"] = sol::c_call<decltype(&PauseLayer::onSettings), &PauseLayer::onSettings>;
	t["setupProgressBars"] = sol::c_call<decltype(&PauseLayer::setupProgressBars), &PauseLayer::setupProgressBars>;
	t["sfxSliderChanged"] = sol::c_call<decltype(&PauseLayer::sfxSliderChanged), &PauseLayer::sfxSliderChanged>;
	t["tryQuit"] = sol::c_call<decltype(&PauseLayer::tryQuit), &PauseLayer::tryQuit>;
	t["keyBackClicked"] = sol::c_call<decltype(&PauseLayer::keyBackClicked), &PauseLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&PauseLayer::keyDown), &PauseLayer::keyDown>;
	t["customSetup"] = sol::c_call<decltype(&PauseLayer::customSetup), &PauseLayer::customSetup>;
}
void register_PlayerCheckpoint(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PlayerCheckpoint");
	t["create"] = sol::c_call<decltype(&PlayerCheckpoint::create), &PlayerCheckpoint::create>;
	t["init"] = sol::c_call<decltype(&PlayerCheckpoint::init), &PlayerCheckpoint::init>;
}
void register_PlayerFireBoostSprite(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PlayerFireBoostSprite");
	t["create"] = sol::c_call<decltype(&PlayerFireBoostSprite::create), &PlayerFireBoostSprite::create>;
	t["animateFireIn"] = sol::c_call<decltype(&PlayerFireBoostSprite::animateFireIn), &PlayerFireBoostSprite::animateFireIn>;
	t["init"] = sol::c_call<decltype(&PlayerFireBoostSprite::init), &PlayerFireBoostSprite::init>;
}
void register_PlayerObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PlayerObject");
	t["create"] = sol::c_call<decltype(&PlayerObject::create), &PlayerObject::create>;
	t["animatePlatformerJump"] = sol::c_call<decltype(&PlayerObject::animatePlatformerJump), &PlayerObject::animatePlatformerJump>;
	t["collidedWithObjectInternal"] = sol::c_call<decltype(&PlayerObject::collidedWithObjectInternal), &PlayerObject::collidedWithObjectInternal>;
	t["createFadeOutDartStreak"] = sol::c_call<decltype(&PlayerObject::createFadeOutDartStreak), &PlayerObject::createFadeOutDartStreak>;
	t["disableSwingFire"] = sol::c_call<decltype(&PlayerObject::disableSwingFire), &PlayerObject::disableSwingFire>;
	t["doReversePlayer"] = sol::c_call<decltype(&PlayerObject::doReversePlayer), &PlayerObject::doReversePlayer>;
	t["flashPlayer"] = sol::c_call<decltype(&PlayerObject::flashPlayer), &PlayerObject::flashPlayer>;
	t["getActiveMode"] = sol::c_call<decltype(&PlayerObject::getActiveMode), &PlayerObject::getActiveMode>;
	t["getSecondColor"] = sol::c_call<decltype(&PlayerObject::getSecondColor), &PlayerObject::getSecondColor>;
	t["incrementJumps"] = sol::c_call<decltype(&PlayerObject::incrementJumps), &PlayerObject::incrementJumps>;
	t["init"] = sol::c_call<decltype(&PlayerObject::init), &PlayerObject::init>;
	t["isBoostValid"] = sol::c_call<decltype(&PlayerObject::isBoostValid), &PlayerObject::isBoostValid>;
	t["isFlying"] = sol::c_call<decltype(&PlayerObject::isFlying), &PlayerObject::isFlying>;
	t["isInBasicMode"] = sol::c_call<decltype(&PlayerObject::isInBasicMode), &PlayerObject::isInBasicMode>;
	t["isInNormalMode"] = sol::c_call<decltype(&PlayerObject::isInNormalMode), &PlayerObject::isInNormalMode>;
	t["levelFlipping"] = sol::c_call<decltype(&PlayerObject::levelFlipping), &PlayerObject::levelFlipping>;
	t["loadFromCheckpoint"] = sol::c_call<decltype(&PlayerObject::loadFromCheckpoint), &PlayerObject::loadFromCheckpoint>;
	t["playDeathEffect"] = sol::c_call<decltype(&PlayerObject::playDeathEffect), &PlayerObject::playDeathEffect>;
	t["playDynamicSpiderRun"] = sol::c_call<decltype(&PlayerObject::playDynamicSpiderRun), &PlayerObject::playDynamicSpiderRun>;
	t["playerDestroyed"] = sol::c_call<decltype(&PlayerObject::playerDestroyed), &PlayerObject::playerDestroyed>;
	t["playerIsFalling"] = sol::c_call<decltype(&PlayerObject::playerIsFalling), &PlayerObject::playerIsFalling>;
	t["playSpiderDashEffect"] = sol::c_call<decltype(&PlayerObject::playSpiderDashEffect), &PlayerObject::playSpiderDashEffect>;
	t["propellPlayer"] = sol::c_call<decltype(&PlayerObject::propellPlayer), &PlayerObject::propellPlayer>;
	t["pushButton"] = sol::c_call<decltype(&PlayerObject::pushButton), &PlayerObject::pushButton>;
	t["resetPlayerIcon"] = sol::c_call<decltype(&PlayerObject::resetPlayerIcon), &PlayerObject::resetPlayerIcon>;
	t["ringJump"] = sol::c_call<decltype(&PlayerObject::ringJump), &PlayerObject::ringJump>;
	t["runRotateAction"] = sol::c_call<decltype(&PlayerObject::runRotateAction), &PlayerObject::runRotateAction>;
	t["setSecondColor"] = sol::c_call<decltype(&PlayerObject::setSecondColor), &PlayerObject::setSecondColor>;
	t["setupStreak"] = sol::c_call<decltype(&PlayerObject::setupStreak), &PlayerObject::setupStreak>;
	t["setYVelocity"] = sol::c_call<decltype(&PlayerObject::setYVelocity), &PlayerObject::setYVelocity>;
	t["spiderTestJump"] = sol::c_call<decltype(&PlayerObject::spiderTestJump), &PlayerObject::spiderTestJump>;
	t["spiderTestJumpInternal"] = sol::c_call<decltype(&PlayerObject::spiderTestJumpInternal), &PlayerObject::spiderTestJumpInternal>;
	t["startDashing"] = sol::c_call<decltype(&PlayerObject::startDashing), &PlayerObject::startDashing>;
	t["stopDashing"] = sol::c_call<decltype(&PlayerObject::stopDashing), &PlayerObject::stopDashing>;
	t["stopPlatformerJumpAnimation"] = sol::c_call<decltype(&PlayerObject::stopPlatformerJumpAnimation), &PlayerObject::stopPlatformerJumpAnimation>;
	t["switchedToMode"] = sol::c_call<decltype(&PlayerObject::switchedToMode), &PlayerObject::switchedToMode>;
	t["toggleBirdMode"] = sol::c_call<decltype(&PlayerObject::toggleBirdMode), &PlayerObject::toggleBirdMode>;
	t["toggleDartMode"] = sol::c_call<decltype(&PlayerObject::toggleDartMode), &PlayerObject::toggleDartMode>;
	t["toggleFlyMode"] = sol::c_call<decltype(&PlayerObject::toggleFlyMode), &PlayerObject::toggleFlyMode>;
	t["togglePlayerScale"] = sol::c_call<decltype(&PlayerObject::togglePlayerScale), &PlayerObject::togglePlayerScale>;
	t["toggleRobotMode"] = sol::c_call<decltype(&PlayerObject::toggleRobotMode), &PlayerObject::toggleRobotMode>;
	t["toggleRollMode"] = sol::c_call<decltype(&PlayerObject::toggleRollMode), &PlayerObject::toggleRollMode>;
	t["toggleSpiderMode"] = sol::c_call<decltype(&PlayerObject::toggleSpiderMode), &PlayerObject::toggleSpiderMode>;
	t["toggleSwingMode"] = sol::c_call<decltype(&PlayerObject::toggleSwingMode), &PlayerObject::toggleSwingMode>;
	t["updateDashAnimation"] = sol::c_call<decltype(&PlayerObject::updateDashAnimation), &PlayerObject::updateDashAnimation>;
	t["updateDashArt"] = sol::c_call<decltype(&PlayerObject::updateDashArt), &PlayerObject::updateDashArt>;
	t["updateGlowColor"] = sol::c_call<decltype(&PlayerObject::updateGlowColor), &PlayerObject::updateGlowColor>;
	t["updatePlayerArt"] = sol::c_call<decltype(&PlayerObject::updatePlayerArt), &PlayerObject::updatePlayerArt>;
	t["updatePlayerBirdFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerBirdFrame), &PlayerObject::updatePlayerBirdFrame>;
	t["updatePlayerDartFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerDartFrame), &PlayerObject::updatePlayerDartFrame>;
	t["updatePlayerFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerFrame), &PlayerObject::updatePlayerFrame>;
	t["updatePlayerGlow"] = sol::c_call<decltype(&PlayerObject::updatePlayerGlow), &PlayerObject::updatePlayerGlow>;
	t["updatePlayerJetpackFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerJetpackFrame), &PlayerObject::updatePlayerJetpackFrame>;
	t["updatePlayerRollFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerRollFrame), &PlayerObject::updatePlayerRollFrame>;
	t["updatePlayerScale"] = sol::c_call<decltype(&PlayerObject::updatePlayerScale), &PlayerObject::updatePlayerScale>;
	t["updatePlayerShipFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerShipFrame), &PlayerObject::updatePlayerShipFrame>;
	t["updatePlayerSpriteExtra"] = sol::c_call<decltype(&PlayerObject::updatePlayerSpriteExtra), &PlayerObject::updatePlayerSpriteExtra>;
	t["updatePlayerSwingFrame"] = sol::c_call<decltype(&PlayerObject::updatePlayerSwingFrame), &PlayerObject::updatePlayerSwingFrame>;
	t["updateShipSpriteExtra"] = sol::c_call<decltype(&PlayerObject::updateShipSpriteExtra), &PlayerObject::updateShipSpriteExtra>;
	t["updateStreakBlend"] = sol::c_call<decltype(&PlayerObject::updateStreakBlend), &PlayerObject::updateStreakBlend>;
	t["update"] = sol::c_call<decltype(&PlayerObject::update), &PlayerObject::update>;
	t["setScaleX"] = sol::c_call<decltype(&PlayerObject::setScaleX), &PlayerObject::setScaleX>;
	t["setScaleY"] = sol::c_call<decltype(&PlayerObject::setScaleY), &PlayerObject::setScaleY>;
	t["setScale"] = sol::c_call<decltype(&PlayerObject::setScale), &PlayerObject::setScale>;
	t["setPosition"] = sol::c_call<decltype(&PlayerObject::setPosition), &PlayerObject::setPosition>;
	t["setVisible"] = sol::c_call<decltype(&PlayerObject::setVisible), &PlayerObject::setVisible>;
	t["setRotation"] = sol::c_call<decltype(&PlayerObject::setRotation), &PlayerObject::setRotation>;
	t["setOpacity"] = sol::c_call<decltype(&PlayerObject::setOpacity), &PlayerObject::setOpacity>;
	t["setColor"] = sol::c_call<decltype(&PlayerObject::setColor), &PlayerObject::setColor>;
	t["setFlipX"] = sol::c_call<decltype(&PlayerObject::setFlipX), &PlayerObject::setFlipX>;
	t["resetObject"] = sol::c_call<decltype(&PlayerObject::resetObject), &PlayerObject::resetObject>;
	t["getRealPosition"] = sol::c_call<decltype(&PlayerObject::getRealPosition), &PlayerObject::getRealPosition>;
}
void register_PlayLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PlayLayer");
	t["create"] = sol::c_call<decltype(&PlayLayer::create), &PlayLayer::create>;
	t["canPauseGame"] = sol::c_call<decltype(&PlayLayer::canPauseGame), &PlayLayer::canPauseGame>;
	t["fullReset"] = sol::c_call<decltype(&PlayLayer::fullReset), &PlayLayer::fullReset>;
	t["getCurrentPercentInt"] = sol::c_call<decltype(&PlayLayer::getCurrentPercentInt), &PlayLayer::getCurrentPercentInt>;
	t["incrementJumps"] = sol::c_call<decltype(&PlayLayer::incrementJumps), &PlayLayer::incrementJumps>;
	t["init"] = sol::c_call<decltype(&PlayLayer::init), &PlayLayer::init>;
	t["levelComplete"] = sol::c_call<decltype(&PlayLayer::levelComplete), &PlayLayer::levelComplete>;
	t["onQuit"] = sol::c_call<decltype(&PlayLayer::onQuit), &PlayLayer::onQuit>;
	t["resetLevel"] = sol::c_call<decltype(&PlayLayer::resetLevel), &PlayLayer::resetLevel>;
	t["scene"] = sol::c_call<decltype(&PlayLayer::scene), &PlayLayer::scene>;
	t["setDamageVerifiedIdx"] = sol::c_call<decltype(&PlayLayer::setDamageVerifiedIdx), &PlayLayer::setDamageVerifiedIdx>;
	t["setupHasCompleted"] = sol::c_call<decltype(&PlayLayer::setupHasCompleted), &PlayLayer::setupHasCompleted>;
	t["showCompleteEffect"] = sol::c_call<decltype(&PlayLayer::showCompleteEffect), &PlayLayer::showCompleteEffect>;
	t["showCompleteText"] = sol::c_call<decltype(&PlayLayer::showCompleteText), &PlayLayer::showCompleteText>;
	t["showEndLayer"] = sol::c_call<decltype(&PlayLayer::showEndLayer), &PlayLayer::showEndLayer>;
	t["showHint"] = sol::c_call<decltype(&PlayLayer::showHint), &PlayLayer::showHint>;
	t["showNewBest"] = sol::c_call<decltype(&PlayLayer::showNewBest), &PlayLayer::showNewBest>;
	t["showRetryLayer"] = sol::c_call<decltype(&PlayLayer::showRetryLayer), &PlayLayer::showRetryLayer>;
	t["togglePracticeMode"] = sol::c_call<decltype(&PlayLayer::togglePracticeMode), &PlayLayer::togglePracticeMode>;
	t["updateProgressbar"] = sol::c_call<decltype(&PlayLayer::updateProgressbar), &PlayLayer::updateProgressbar>;
	t["onEnterTransitionDidFinish"] = sol::c_call<decltype(&PlayLayer::onEnterTransitionDidFinish), &PlayLayer::onEnterTransitionDidFinish>;
	t["onExit"] = sol::c_call<decltype(&PlayLayer::onExit), &PlayLayer::onExit>;
	t["postUpdate"] = sol::c_call<decltype(&PlayLayer::postUpdate), &PlayLayer::postUpdate>;
	t["activatePlatformerEndTrigger"] = sol::c_call<decltype(&PlayLayer::activatePlatformerEndTrigger), &PlayLayer::activatePlatformerEndTrigger>;
	t["destroyPlayer"] = sol::c_call<decltype(&PlayLayer::destroyPlayer), &PlayLayer::destroyPlayer>;
	t["timeForPos"] = sol::c_call<decltype(&PlayLayer::timeForPos), &PlayLayer::timeForPos>;
	t["posForTime"] = sol::c_call<decltype(&PlayLayer::posForTime), &PlayLayer::posForTime>;
	t["resetSPTriggered"] = sol::c_call<decltype(&PlayLayer::resetSPTriggered), &PlayLayer::resetSPTriggered>;
	t["checkpointActivated"] = sol::c_call<decltype(&PlayLayer::checkpointActivated), &PlayLayer::checkpointActivated>;
	t["updateTimeLabel"] = sol::c_call<decltype(&PlayLayer::updateTimeLabel), &PlayLayer::updateTimeLabel>;
	t["dialogClosed"] = sol::c_call<decltype(&PlayLayer::dialogClosed), &PlayLayer::dialogClosed>;
}
void register_PointNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PointNode");
	t["create"] = sol::c_call<decltype(&PointNode::create), &PointNode::create>;
}
void register_ProfilePage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ProfilePage");
	t["create"] = sol::c_call<decltype(&ProfilePage::create), &ProfilePage::create>;
	t["init"] = sol::c_call<decltype(&ProfilePage::init), &ProfilePage::init>;
	t["isCorrect"] = sol::c_call<decltype(&ProfilePage::isCorrect), &ProfilePage::isCorrect>;
	t["loadPage"] = sol::c_call<decltype(&ProfilePage::loadPage), &ProfilePage::loadPage>;
	t["loadPageFromUserInfo"] = sol::c_call<decltype(&ProfilePage::loadPageFromUserInfo), &ProfilePage::loadPageFromUserInfo>;
	t["onBlockUser"] = sol::c_call<decltype(&ProfilePage::onBlockUser), &ProfilePage::onBlockUser>;
	t["onClose"] = sol::c_call<decltype(&ProfilePage::onClose), &ProfilePage::onClose>;
	t["onComment"] = sol::c_call<decltype(&ProfilePage::onComment), &ProfilePage::onComment>;
	t["onCommentHistory"] = sol::c_call<decltype(&ProfilePage::onCommentHistory), &ProfilePage::onCommentHistory>;
	t["onFollow"] = sol::c_call<decltype(&ProfilePage::onFollow), &ProfilePage::onFollow>;
	t["onFriend"] = sol::c_call<decltype(&ProfilePage::onFriend), &ProfilePage::onFriend>;
	t["onFriends"] = sol::c_call<decltype(&ProfilePage::onFriends), &ProfilePage::onFriends>;
	t["onMessages"] = sol::c_call<decltype(&ProfilePage::onMessages), &ProfilePage::onMessages>;
	t["onMyLevels"] = sol::c_call<decltype(&ProfilePage::onMyLevels), &ProfilePage::onMyLevels>;
	t["onMyLists"] = sol::c_call<decltype(&ProfilePage::onMyLists), &ProfilePage::onMyLists>;
	t["onNextPage"] = sol::c_call<decltype(&ProfilePage::onNextPage), &ProfilePage::onNextPage>;
	t["onPrevPage"] = sol::c_call<decltype(&ProfilePage::onPrevPage), &ProfilePage::onPrevPage>;
	t["onRequests"] = sol::c_call<decltype(&ProfilePage::onRequests), &ProfilePage::onRequests>;
	t["onSendMessage"] = sol::c_call<decltype(&ProfilePage::onSendMessage), &ProfilePage::onSendMessage>;
	t["onSettings"] = sol::c_call<decltype(&ProfilePage::onSettings), &ProfilePage::onSettings>;
	t["onTwitch"] = sol::c_call<decltype(&ProfilePage::onTwitch), &ProfilePage::onTwitch>;
	t["onTwitter"] = sol::c_call<decltype(&ProfilePage::onTwitter), &ProfilePage::onTwitter>;
	t["onUpdate"] = sol::c_call<decltype(&ProfilePage::onUpdate), &ProfilePage::onUpdate>;
	t["onYouTube"] = sol::c_call<decltype(&ProfilePage::onYouTube), &ProfilePage::onYouTube>;
	t["setupCommentsBrowser"] = sol::c_call<decltype(&ProfilePage::setupCommentsBrowser), &ProfilePage::setupCommentsBrowser>;
	t["showNoAccountError"] = sol::c_call<decltype(&ProfilePage::showNoAccountError), &ProfilePage::showNoAccountError>;
	t["registerWithTouchDispatcher"] = sol::c_call<decltype(&ProfilePage::registerWithTouchDispatcher), &ProfilePage::registerWithTouchDispatcher>;
	t["keyBackClicked"] = sol::c_call<decltype(&ProfilePage::keyBackClicked), &ProfilePage::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&ProfilePage::show), &ProfilePage::show>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&ProfilePage::FLAlert_Clicked), &ProfilePage::FLAlert_Clicked>;
	t["updateUserScoreFinished"] = sol::c_call<decltype(&ProfilePage::updateUserScoreFinished), &ProfilePage::updateUserScoreFinished>;
	t["updateUserScoreFailed"] = sol::c_call<decltype(&ProfilePage::updateUserScoreFailed), &ProfilePage::updateUserScoreFailed>;
	t["getUserInfoFinished"] = sol::c_call<decltype(&ProfilePage::getUserInfoFinished), &ProfilePage::getUserInfoFinished>;
	t["getUserInfoFailed"] = sol::c_call<decltype(&ProfilePage::getUserInfoFailed), &ProfilePage::getUserInfoFailed>;
	t["userInfoChanged"] = sol::c_call<decltype(&ProfilePage::userInfoChanged), &ProfilePage::userInfoChanged>;
	t["loadCommentsFinished"] = sol::c_call<decltype(&ProfilePage::loadCommentsFinished), &ProfilePage::loadCommentsFinished>;
	t["loadCommentsFailed"] = sol::c_call<decltype(&ProfilePage::loadCommentsFailed), &ProfilePage::loadCommentsFailed>;
	t["setupPageInfo"] = sol::c_call<decltype(&ProfilePage::setupPageInfo), &ProfilePage::setupPageInfo>;
	t["commentUploadFinished"] = sol::c_call<decltype(&ProfilePage::commentUploadFinished), &ProfilePage::commentUploadFinished>;
	t["commentUploadFailed"] = sol::c_call<decltype(&ProfilePage::commentUploadFailed), &ProfilePage::commentUploadFailed>;
	t["commentDeleteFailed"] = sol::c_call<decltype(&ProfilePage::commentDeleteFailed), &ProfilePage::commentDeleteFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&ProfilePage::onClosePopup), &ProfilePage::onClosePopup>;
	t["uploadActionFinished"] = sol::c_call<decltype(&ProfilePage::uploadActionFinished), &ProfilePage::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&ProfilePage::uploadActionFailed), &ProfilePage::uploadActionFailed>;
}
void register_PurchaseItemPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("PurchaseItemPopup");
	t["create"] = sol::c_call<decltype(&PurchaseItemPopup::create), &PurchaseItemPopup::create>;
	t["init"] = sol::c_call<decltype(&PurchaseItemPopup::init), &PurchaseItemPopup::init>;
	t["onClose"] = sol::c_call<decltype(&PurchaseItemPopup::onClose), &PurchaseItemPopup::onClose>;
	t["onPurchase"] = sol::c_call<decltype(&PurchaseItemPopup::onPurchase), &PurchaseItemPopup::onPurchase>;
}
void register_RandTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RandTriggerGameObject");
	t["create"] = sol::c_call<decltype(&RandTriggerGameObject::create), &RandTriggerGameObject::create>;
	t["getRandomGroupID"] = sol::c_call<decltype(&RandTriggerGameObject::getRandomGroupID), &RandTriggerGameObject::getRandomGroupID>;
	t["init"] = sol::c_call<decltype(&RandTriggerGameObject::init), &RandTriggerGameObject::init>;
	t["triggerObject"] = sol::c_call<decltype(&RandTriggerGameObject::triggerObject), &RandTriggerGameObject::triggerObject>;
	t["getSaveString"] = sol::c_call<decltype(&RandTriggerGameObject::getSaveString), &RandTriggerGameObject::getSaveString>;
}
void register_RateDemonLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RateDemonLayer");
	t["create"] = sol::c_call<decltype(&RateDemonLayer::create), &RateDemonLayer::create>;
	t["init"] = sol::c_call<decltype(&RateDemonLayer::init), &RateDemonLayer::init>;
	t["onRate"] = sol::c_call<decltype(&RateDemonLayer::onRate), &RateDemonLayer::onRate>;
	t["selectRating"] = sol::c_call<decltype(&RateDemonLayer::selectRating), &RateDemonLayer::selectRating>;
	t["keyBackClicked"] = sol::c_call<decltype(&RateDemonLayer::keyBackClicked), &RateDemonLayer::keyBackClicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&RateDemonLayer::uploadActionFinished), &RateDemonLayer::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&RateDemonLayer::uploadActionFailed), &RateDemonLayer::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&RateDemonLayer::onClosePopup), &RateDemonLayer::onClosePopup>;
}
void register_RateLevelLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RateLevelLayer");
	t["create"] = sol::c_call<decltype(&RateLevelLayer::create), &RateLevelLayer::create>;
	t["init"] = sol::c_call<decltype(&RateLevelLayer::init), &RateLevelLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&RateLevelLayer::keyBackClicked), &RateLevelLayer::keyBackClicked>;
}
void register_RateStarsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RateStarsLayer");
	t["create"] = sol::c_call<decltype(&RateStarsLayer::create), &RateStarsLayer::create>;
	t["init"] = sol::c_call<decltype(&RateStarsLayer::init), &RateStarsLayer::init>;
	t["onClose"] = sol::c_call<decltype(&RateStarsLayer::onClose), &RateStarsLayer::onClose>;
	t["onFeature"] = sol::c_call<decltype(&RateStarsLayer::onFeature), &RateStarsLayer::onFeature>;
	t["onRate"] = sol::c_call<decltype(&RateStarsLayer::onRate), &RateStarsLayer::onRate>;
	t["keyBackClicked"] = sol::c_call<decltype(&RateStarsLayer::keyBackClicked), &RateStarsLayer::keyBackClicked>;
	t["uploadActionFinished"] = sol::c_call<decltype(&RateStarsLayer::uploadActionFinished), &RateStarsLayer::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&RateStarsLayer::uploadActionFailed), &RateStarsLayer::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&RateStarsLayer::onClosePopup), &RateStarsLayer::onClosePopup>;
}
void register_RetryLevelLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RetryLevelLayer");
	t["create"] = sol::c_call<decltype(&RetryLevelLayer::create), &RetryLevelLayer::create>;
	t["onMenu"] = sol::c_call<decltype(&RetryLevelLayer::onMenu), &RetryLevelLayer::onMenu>;
	t["onReplay"] = sol::c_call<decltype(&RetryLevelLayer::onReplay), &RetryLevelLayer::onReplay>;
	t["keyBackClicked"] = sol::c_call<decltype(&RetryLevelLayer::keyBackClicked), &RetryLevelLayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&RetryLevelLayer::keyDown), &RetryLevelLayer::keyDown>;
	t["customSetup"] = sol::c_call<decltype(&RetryLevelLayer::customSetup), &RetryLevelLayer::customSetup>;
	t["showLayer"] = sol::c_call<decltype(&RetryLevelLayer::showLayer), &RetryLevelLayer::showLayer>;
	t["enterAnimFinished"] = sol::c_call<decltype(&RetryLevelLayer::enterAnimFinished), &RetryLevelLayer::enterAnimFinished>;
}
void register_RewardsPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RewardsPage");
	t["create"] = sol::c_call<decltype(&RewardsPage::create), &RewardsPage::create>;
	t["onClose"] = sol::c_call<decltype(&RewardsPage::onClose), &RewardsPage::onClose>;
	t["onFreeStuff"] = sol::c_call<decltype(&RewardsPage::onFreeStuff), &RewardsPage::onFreeStuff>;
	t["onReward"] = sol::c_call<decltype(&RewardsPage::onReward), &RewardsPage::onReward>;
	t["init"] = sol::c_call<decltype(&RewardsPage::init), &RewardsPage::init>;
	t["show"] = sol::c_call<decltype(&RewardsPage::show), &RewardsPage::show>;
}
void register_RewardUnlockLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RewardUnlockLayer");
	t["create"] = sol::c_call<decltype(&RewardUnlockLayer::create), &RewardUnlockLayer::create>;
	t["init"] = sol::c_call<decltype(&RewardUnlockLayer::init), &RewardUnlockLayer::init>;
	t["showCollectReward"] = sol::c_call<decltype(&RewardUnlockLayer::showCollectReward), &RewardUnlockLayer::showCollectReward>;
	t["currencyWillExit"] = sol::c_call<decltype(&RewardUnlockLayer::currencyWillExit), &RewardUnlockLayer::currencyWillExit>;
}
void register_RotateGameplayGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("RotateGameplayGameObject");
	t["create"] = sol::c_call<decltype(&RotateGameplayGameObject::create), &RotateGameplayGameObject::create>;
	t["init"] = sol::c_call<decltype(&RotateGameplayGameObject::init), &RotateGameplayGameObject::init>;
}
void register_ScrollingLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ScrollingLayer");
	t["create"] = sol::c_call<decltype(&ScrollingLayer::create), &ScrollingLayer::create>;
	t["init"] = sol::c_call<decltype(&ScrollingLayer::init), &ScrollingLayer::init>;
	t["draw"] = sol::c_call<decltype(&ScrollingLayer::draw), &ScrollingLayer::draw>;
	t["visit"] = sol::c_call<decltype(&ScrollingLayer::visit), &ScrollingLayer::visit>;
	t["ccTouchBegan"] = sol::c_call<decltype(&ScrollingLayer::ccTouchBegan), &ScrollingLayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&ScrollingLayer::ccTouchMoved), &ScrollingLayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&ScrollingLayer::ccTouchEnded), &ScrollingLayer::ccTouchEnded>;
}
void register_SearchButton(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SearchButton");
	t["create"] = sol::c_call<decltype(&SearchButton::create), &SearchButton::create>;
	t["init"] = sol::c_call<decltype(&SearchButton::init), &SearchButton::init>;
}
void register_SetTextPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetTextPopup");
	t["create"] = sol::c_call<decltype(&SetTextPopup::create), &SetTextPopup::create>;
	t["init"] = sol::c_call<decltype(&SetTextPopup::init), &SetTextPopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SetTextPopup::keyBackClicked), &SetTextPopup::keyBackClicked>;
	t["show"] = sol::c_call<decltype(&SetTextPopup::show), &SetTextPopup::show>;
	t["textChanged"] = sol::c_call<decltype(&SetTextPopup::textChanged), &SetTextPopup::textChanged>;
}
void register_SearchSFXPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SearchSFXPopup");
	t["create"] = sol::c_call<decltype(&SearchSFXPopup::create), &SearchSFXPopup::create>;
	t["init"] = sol::c_call<decltype(&SearchSFXPopup::init), &SearchSFXPopup::init>;
	t["onSearchFolders"] = sol::c_call<decltype(&SearchSFXPopup::onSearchFolders), &SearchSFXPopup::onSearchFolders>;
}
void register_SecretLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SecretLayer");
	t["init"] = sol::c_call<decltype(&SecretLayer::init), &SecretLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SecretLayer::keyBackClicked), &SecretLayer::keyBackClicked>;
	t["textInputOpened"] = sol::c_call<decltype(&SecretLayer::textInputOpened), &SecretLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&SecretLayer::textInputClosed), &SecretLayer::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&SecretLayer::textChanged), &SecretLayer::textChanged>;
}
void register_SecretLayer2(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SecretLayer2");
	t["create"] = sol::c_call<decltype(&SecretLayer2::create), &SecretLayer2::create>;
	t["getBasicMessage"] = sol::c_call<decltype(&SecretLayer2::getBasicMessage), &SecretLayer2::getBasicMessage>;
	t["getErrorMessage"] = sol::c_call<decltype(&SecretLayer2::getErrorMessage), &SecretLayer2::getErrorMessage>;
	t["getMessage"] = sol::c_call<decltype(&SecretLayer2::getMessage), &SecretLayer2::getMessage>;
	t["getThreadMessage"] = sol::c_call<decltype(&SecretLayer2::getThreadMessage), &SecretLayer2::getThreadMessage>;
	t["onBack"] = sol::c_call<decltype(&SecretLayer2::onBack), &SecretLayer2::onBack>;
	t["onDoor"] = sol::c_call<decltype(&SecretLayer2::onDoor), &SecretLayer2::onDoor>;
	t["onSecretLevel"] = sol::c_call<decltype(&SecretLayer2::onSecretLevel), &SecretLayer2::onSecretLevel>;
	t["onSubmit"] = sol::c_call<decltype(&SecretLayer2::onSubmit), &SecretLayer2::onSubmit>;
	t["playCoinEffect"] = sol::c_call<decltype(&SecretLayer2::playCoinEffect), &SecretLayer2::playCoinEffect>;
	t["selectAThread"] = sol::c_call<decltype(&SecretLayer2::selectAThread), &SecretLayer2::selectAThread>;
	t["showCompletedLevel"] = sol::c_call<decltype(&SecretLayer2::showCompletedLevel), &SecretLayer2::showCompletedLevel>;
	t["showSecretLevel"] = sol::c_call<decltype(&SecretLayer2::showSecretLevel), &SecretLayer2::showSecretLevel>;
	t["updateMessageLabel"] = sol::c_call<decltype(&SecretLayer2::updateMessageLabel), &SecretLayer2::updateMessageLabel>;
	t["updateSearchLabel"] = sol::c_call<decltype(&SecretLayer2::updateSearchLabel), &SecretLayer2::updateSearchLabel>;
	t["init"] = sol::c_call<decltype(&SecretLayer2::init), &SecretLayer2::init>;
	t["onExit"] = sol::c_call<decltype(&SecretLayer2::onExit), &SecretLayer2::onExit>;
	t["keyBackClicked"] = sol::c_call<decltype(&SecretLayer2::keyBackClicked), &SecretLayer2::keyBackClicked>;
	t["textInputOpened"] = sol::c_call<decltype(&SecretLayer2::textInputOpened), &SecretLayer2::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&SecretLayer2::textInputClosed), &SecretLayer2::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&SecretLayer2::textChanged), &SecretLayer2::textChanged>;
	t["dialogClosed"] = sol::c_call<decltype(&SecretLayer2::dialogClosed), &SecretLayer2::dialogClosed>;
}
void register_SecretLayer3(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SecretLayer3");
	t["init"] = sol::c_call<decltype(&SecretLayer3::init), &SecretLayer3::init>;
	t["onExit"] = sol::c_call<decltype(&SecretLayer3::onExit), &SecretLayer3::onExit>;
	t["keyBackClicked"] = sol::c_call<decltype(&SecretLayer3::keyBackClicked), &SecretLayer3::keyBackClicked>;
	t["dialogClosed"] = sol::c_call<decltype(&SecretLayer3::dialogClosed), &SecretLayer3::dialogClosed>;
}
void register_SecretLayer4(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SecretLayer4");
	t["create"] = sol::c_call<decltype(&SecretLayer4::create), &SecretLayer4::create>;
	t["updateSearchLabel"] = sol::c_call<decltype(&SecretLayer4::updateSearchLabel), &SecretLayer4::updateSearchLabel>;
	t["init"] = sol::c_call<decltype(&SecretLayer4::init), &SecretLayer4::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SecretLayer4::keyBackClicked), &SecretLayer4::keyBackClicked>;
}
void register_SecretRewardsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SecretRewardsLayer");
	t["create"] = sol::c_call<decltype(&SecretRewardsLayer::create), &SecretRewardsLayer::create>;
	t["init"] = sol::c_call<decltype(&SecretRewardsLayer::init), &SecretRewardsLayer::init>;
	t["onSelectItem"] = sol::c_call<decltype(&SecretRewardsLayer::onSelectItem), &SecretRewardsLayer::onSelectItem>;
	t["onShop"] = sol::c_call<decltype(&SecretRewardsLayer::onShop), &SecretRewardsLayer::onShop>;
	t["onSpecialItem"] = sol::c_call<decltype(&SecretRewardsLayer::onSpecialItem), &SecretRewardsLayer::onSpecialItem>;
	t["showDialog01"] = sol::c_call<decltype(&SecretRewardsLayer::showDialog01), &SecretRewardsLayer::showDialog01>;
	t["showDialog03"] = sol::c_call<decltype(&SecretRewardsLayer::showDialog03), &SecretRewardsLayer::showDialog03>;
	t["showDialogDiamond"] = sol::c_call<decltype(&SecretRewardsLayer::showDialogDiamond), &SecretRewardsLayer::showDialogDiamond>;
	t["showDialogMechanic"] = sol::c_call<decltype(&SecretRewardsLayer::showDialogMechanic), &SecretRewardsLayer::showDialogMechanic>;
	t["onExit"] = sol::c_call<decltype(&SecretRewardsLayer::onExit), &SecretRewardsLayer::onExit>;
	t["keyBackClicked"] = sol::c_call<decltype(&SecretRewardsLayer::keyBackClicked), &SecretRewardsLayer::keyBackClicked>;
	t["dialogClosed"] = sol::c_call<decltype(&SecretRewardsLayer::dialogClosed), &SecretRewardsLayer::dialogClosed>;
	t["scrollLayerMoved"] = sol::c_call<decltype(&SecretRewardsLayer::scrollLayerMoved), &SecretRewardsLayer::scrollLayerMoved>;
}
void register_SelectArtLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectArtLayer");
	t["create"] = sol::c_call<decltype(&SelectArtLayer::create), &SelectArtLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectArtLayer::init), &SelectArtLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SelectArtLayer::keyBackClicked), &SelectArtLayer::keyBackClicked>;
}
void register_SelectEventLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectEventLayer");
	t["onClose"] = sol::c_call<decltype(&SelectEventLayer::onClose), &SelectEventLayer::onClose>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SelectEventLayer::onCustomToggleTriggerValue), &SelectEventLayer::onCustomToggleTriggerValue>;
}
void register_SelectFontLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectFontLayer");
	t["create"] = sol::c_call<decltype(&SelectFontLayer::create), &SelectFontLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectFontLayer::init), &SelectFontLayer::init>;
	t["onChangeFont"] = sol::c_call<decltype(&SelectFontLayer::onChangeFont), &SelectFontLayer::onChangeFont>;
}
void register_SelectListIconLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectListIconLayer");
	t["create"] = sol::c_call<decltype(&SelectListIconLayer::create), &SelectListIconLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectListIconLayer::init), &SelectListIconLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SelectListIconLayer::keyBackClicked), &SelectListIconLayer::keyBackClicked>;
}
void register_SelectPremadeLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectPremadeLayer");
	t["create"] = sol::c_call<decltype(&SelectPremadeLayer::create), &SelectPremadeLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectPremadeLayer::init), &SelectPremadeLayer::init>;
}
void register_SelectSettingLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectSettingLayer");
	t["create"] = sol::c_call<decltype(&SelectSettingLayer::create), &SelectSettingLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectSettingLayer::init), &SelectSettingLayer::init>;
	t["onSelect"] = sol::c_call<decltype(&SelectSettingLayer::onSelect), &SelectSettingLayer::onSelect>;
	t["keyBackClicked"] = sol::c_call<decltype(&SelectSettingLayer::keyBackClicked), &SelectSettingLayer::keyBackClicked>;
}
void register_SelectSFXSortLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SelectSFXSortLayer");
	t["create"] = sol::c_call<decltype(&SelectSFXSortLayer::create), &SelectSFXSortLayer::create>;
	t["init"] = sol::c_call<decltype(&SelectSFXSortLayer::init), &SelectSFXSortLayer::init>;
}
void register_SequenceTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SequenceTriggerGameObject");
	t["create"] = sol::c_call<decltype(&SequenceTriggerGameObject::create), &SequenceTriggerGameObject::create>;
	t["addCount"] = sol::c_call<decltype(&SequenceTriggerGameObject::addCount), &SequenceTriggerGameObject::addCount>;
	t["addTarget"] = sol::c_call<decltype(&SequenceTriggerGameObject::addTarget), &SequenceTriggerGameObject::addTarget>;
	t["reorderTarget"] = sol::c_call<decltype(&SequenceTriggerGameObject::reorderTarget), &SequenceTriggerGameObject::reorderTarget>;
	t["init"] = sol::c_call<decltype(&SequenceTriggerGameObject::init), &SequenceTriggerGameObject::init>;
	t["resetObject"] = sol::c_call<decltype(&SequenceTriggerGameObject::resetObject), &SequenceTriggerGameObject::resetObject>;
	t["triggerObject"] = sol::c_call<decltype(&SequenceTriggerGameObject::triggerObject), &SequenceTriggerGameObject::triggerObject>;
	t["getSaveString"] = sol::c_call<decltype(&SequenceTriggerGameObject::getSaveString), &SequenceTriggerGameObject::getSaveString>;
}
void register_SetColorIDPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetColorIDPopup");
	t["create"] = sol::c_call<decltype(&SetColorIDPopup::create), &SetColorIDPopup::create>;
	t["init"] = sol::c_call<decltype(&SetColorIDPopup::init), &SetColorIDPopup::init>;
	t["colorSelectClosed"] = sol::c_call<decltype(&SetColorIDPopup::colorSelectClosed), &SetColorIDPopup::colorSelectClosed>;
}
void register_SetFolderPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetFolderPopup");
	t["create"] = sol::c_call<decltype(&SetFolderPopup::create), &SetFolderPopup::create>;
	t["init"] = sol::c_call<decltype(&SetFolderPopup::init), &SetFolderPopup::init>;
	t["valueChanged"] = sol::c_call<decltype(&SetFolderPopup::valueChanged), &SetFolderPopup::valueChanged>;
	t["setTextPopupClosed"] = sol::c_call<decltype(&SetFolderPopup::setTextPopupClosed), &SetFolderPopup::setTextPopupClosed>;
}
void register_SetGroupIDLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetGroupIDLayer");
	t["create"] = sol::c_call<decltype(&SetGroupIDLayer::create), &SetGroupIDLayer::create>;
	t["callRemoveFromGroup"] = sol::c_call<decltype(&SetGroupIDLayer::callRemoveFromGroup), &SetGroupIDLayer::callRemoveFromGroup>;
	t["init"] = sol::c_call<decltype(&SetGroupIDLayer::init), &SetGroupIDLayer::init>;
	t["onAddGroup"] = sol::c_call<decltype(&SetGroupIDLayer::onAddGroup), &SetGroupIDLayer::onAddGroup>;
	t["onAddGroupParent"] = sol::c_call<decltype(&SetGroupIDLayer::onAddGroupParent), &SetGroupIDLayer::onAddGroupParent>;
	t["onAnim"] = sol::c_call<decltype(&SetGroupIDLayer::onAnim), &SetGroupIDLayer::onAnim>;
	t["onArrowLeft"] = sol::c_call<decltype(&SetGroupIDLayer::onArrowLeft), &SetGroupIDLayer::onArrowLeft>;
	t["onArrowRight"] = sol::c_call<decltype(&SetGroupIDLayer::onArrowRight), &SetGroupIDLayer::onArrowRight>;
	t["onClose"] = sol::c_call<decltype(&SetGroupIDLayer::onClose), &SetGroupIDLayer::onClose>;
	t["onCopy"] = sol::c_call<decltype(&SetGroupIDLayer::onCopy), &SetGroupIDLayer::onCopy>;
	t["onExtra"] = sol::c_call<decltype(&SetGroupIDLayer::onExtra), &SetGroupIDLayer::onExtra>;
	t["onExtra2"] = sol::c_call<decltype(&SetGroupIDLayer::onExtra2), &SetGroupIDLayer::onExtra2>;
	t["onNextFreeEditorLayer1"] = sol::c_call<decltype(&SetGroupIDLayer::onNextFreeEditorLayer1), &SetGroupIDLayer::onNextFreeEditorLayer1>;
	t["onNextFreeEditorLayer2"] = sol::c_call<decltype(&SetGroupIDLayer::onNextFreeEditorLayer2), &SetGroupIDLayer::onNextFreeEditorLayer2>;
	t["onNextFreeOrderChannel"] = sol::c_call<decltype(&SetGroupIDLayer::onNextFreeOrderChannel), &SetGroupIDLayer::onNextFreeOrderChannel>;
	t["onNextGroupID1"] = sol::c_call<decltype(&SetGroupIDLayer::onNextGroupID1), &SetGroupIDLayer::onNextGroupID1>;
	t["onPaste"] = sol::c_call<decltype(&SetGroupIDLayer::onPaste), &SetGroupIDLayer::onPaste>;
	t["onRemoveFromGroup"] = sol::c_call<decltype(&SetGroupIDLayer::onRemoveFromGroup), &SetGroupIDLayer::onRemoveFromGroup>;
	t["onToggleGuide"] = sol::c_call<decltype(&SetGroupIDLayer::onToggleGuide), &SetGroupIDLayer::onToggleGuide>;
	t["onToggleSelectedOrder"] = sol::c_call<decltype(&SetGroupIDLayer::onToggleSelectedOrder), &SetGroupIDLayer::onToggleSelectedOrder>;
	t["onZLayer"] = sol::c_call<decltype(&SetGroupIDLayer::onZLayer), &SetGroupIDLayer::onZLayer>;
	t["onZLayerShift"] = sol::c_call<decltype(&SetGroupIDLayer::onZLayerShift), &SetGroupIDLayer::onZLayerShift>;
	t["keyBackClicked"] = sol::c_call<decltype(&SetGroupIDLayer::keyBackClicked), &SetGroupIDLayer::keyBackClicked>;
	t["textChanged"] = sol::c_call<decltype(&SetGroupIDLayer::textChanged), &SetGroupIDLayer::textChanged>;
}
void register_SetItemIDLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetItemIDLayer");
	t["create"] = sol::c_call<decltype(&SetItemIDLayer::create), &SetItemIDLayer::create>;
	t["init"] = sol::c_call<decltype(&SetItemIDLayer::init), &SetItemIDLayer::init>;
	t["onClose"] = sol::c_call<decltype(&SetItemIDLayer::onClose), &SetItemIDLayer::onClose>;
	t["valueDidChange"] = sol::c_call<decltype(&SetItemIDLayer::valueDidChange), &SetItemIDLayer::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetItemIDLayer::onCustomToggleTriggerValue), &SetItemIDLayer::onCustomToggleTriggerValue>;
}
void register_SetLevelOrderPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetLevelOrderPopup");
	t["create"] = sol::c_call<decltype(&SetLevelOrderPopup::create), &SetLevelOrderPopup::create>;
	t["init"] = sol::c_call<decltype(&SetLevelOrderPopup::init), &SetLevelOrderPopup::init>;
}
void register_SetTargetIDLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetTargetIDLayer");
	t["create"] = sol::c_call<decltype(&SetTargetIDLayer::create), &SetTargetIDLayer::create>;
	t["init"] = sol::c_call<decltype(&SetTargetIDLayer::init), &SetTargetIDLayer::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetTargetIDLayer::valueDidChange), &SetTargetIDLayer::valueDidChange>;
}
void register_SetupAdvFollowEditPhysicsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAdvFollowEditPhysicsPopup");
	t["create"] = sol::c_call<decltype(&SetupAdvFollowEditPhysicsPopup::create), &SetupAdvFollowEditPhysicsPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAdvFollowEditPhysicsPopup::init), &SetupAdvFollowEditPhysicsPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAdvFollowEditPhysicsPopup::valueDidChange), &SetupAdvFollowEditPhysicsPopup::valueDidChange>;
}
void register_SetupAdvFollowPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAdvFollowPopup");
	t["create"] = sol::c_call<decltype(&SetupAdvFollowPopup::create), &SetupAdvFollowPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAdvFollowPopup::init), &SetupAdvFollowPopup::init>;
	t["onMode"] = sol::c_call<decltype(&SetupAdvFollowPopup::onMode), &SetupAdvFollowPopup::onMode>;
	t["onPremade"] = sol::c_call<decltype(&SetupAdvFollowPopup::onPremade), &SetupAdvFollowPopup::onPremade>;
	t["updateMode"] = sol::c_call<decltype(&SetupAdvFollowPopup::updateMode), &SetupAdvFollowPopup::updateMode>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupAdvFollowPopup::updateDefaultTriggerValues), &SetupAdvFollowPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAdvFollowPopup::valueDidChange), &SetupAdvFollowPopup::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupAdvFollowPopup::onCustomToggleTriggerValue), &SetupAdvFollowPopup::onCustomToggleTriggerValue>;
	t["selectPremadeClosed"] = sol::c_call<decltype(&SetupAdvFollowPopup::selectPremadeClosed), &SetupAdvFollowPopup::selectPremadeClosed>;
}
void register_SetupAdvFollowRetargetPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAdvFollowRetargetPopup");
	t["create"] = sol::c_call<decltype(&SetupAdvFollowRetargetPopup::create), &SetupAdvFollowRetargetPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAdvFollowRetargetPopup::init), &SetupAdvFollowRetargetPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupAdvFollowRetargetPopup::updateDefaultTriggerValues), &SetupAdvFollowRetargetPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAdvFollowRetargetPopup::valueDidChange), &SetupAdvFollowRetargetPopup::valueDidChange>;
}
void register_SetupAnimationPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAnimationPopup");
	t["create"] = sol::c_call<decltype(&SetupAnimationPopup::create), &SetupAnimationPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAnimationPopup::init), &SetupAnimationPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupAnimationPopup::onClose), &SetupAnimationPopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupAnimationPopup::textChanged), &SetupAnimationPopup::textChanged>;
}
void register_SetupAnimSettingsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAnimSettingsPopup");
	t["create"] = sol::c_call<decltype(&SetupAnimSettingsPopup::create), &SetupAnimSettingsPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAnimSettingsPopup::init), &SetupAnimSettingsPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupAnimSettingsPopup::onClose), &SetupAnimSettingsPopup::onClose>;
}
void register_SetupAreaMoveTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaMoveTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaMoveTriggerPopup::create), &SetupAreaMoveTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaMoveTriggerPopup::init), &SetupAreaMoveTriggerPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupAreaMoveTriggerPopup::updateDefaultTriggerValues), &SetupAreaMoveTriggerPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAreaMoveTriggerPopup::valueDidChange), &SetupAreaMoveTriggerPopup::valueDidChange>;
}
void register_SetupAreaTintTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaTintTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaTintTriggerPopup::create), &SetupAreaTintTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaTintTriggerPopup::init), &SetupAreaTintTriggerPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupAreaTintTriggerPopup::onClose), &SetupAreaTintTriggerPopup::onClose>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAreaTintTriggerPopup::valueDidChange), &SetupAreaTintTriggerPopup::valueDidChange>;
	t["hsvPopupClosed"] = sol::c_call<decltype(&SetupAreaTintTriggerPopup::hsvPopupClosed), &SetupAreaTintTriggerPopup::hsvPopupClosed>;
}
void register_SetupAreaAnimTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaAnimTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaAnimTriggerPopup::create), &SetupAreaAnimTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaAnimTriggerPopup::init), &SetupAreaAnimTriggerPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupAreaAnimTriggerPopup::updateDefaultTriggerValues), &SetupAreaAnimTriggerPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupAreaAnimTriggerPopup::valueDidChange), &SetupAreaAnimTriggerPopup::valueDidChange>;
}
void register_SetupAreaFadeTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaFadeTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaFadeTriggerPopup::create), &SetupAreaFadeTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaFadeTriggerPopup::init), &SetupAreaFadeTriggerPopup::init>;
}
void register_SetupAreaRotateTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaRotateTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaRotateTriggerPopup::create), &SetupAreaRotateTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaRotateTriggerPopup::init), &SetupAreaRotateTriggerPopup::init>;
}
void register_SetupAreaTransformTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaTransformTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaTransformTriggerPopup::create), &SetupAreaTransformTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaTransformTriggerPopup::init), &SetupAreaTransformTriggerPopup::init>;
}
void register_SetupAreaTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAreaTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupAreaTriggerPopup::create), &SetupAreaTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAreaTriggerPopup::init), &SetupAreaTriggerPopup::init>;
}
void register_SetupArtSwitchPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupArtSwitchPopup");
	t["create"] = sol::c_call<decltype(&SetupArtSwitchPopup::create), &SetupArtSwitchPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupArtSwitchPopup::init), &SetupArtSwitchPopup::init>;
	t["selectArtClosed"] = sol::c_call<decltype(&SetupArtSwitchPopup::selectArtClosed), &SetupArtSwitchPopup::selectArtClosed>;
}
void register_SetupAudioLineGuidePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAudioLineGuidePopup");
	t["create"] = sol::c_call<decltype(&SetupAudioLineGuidePopup::create), &SetupAudioLineGuidePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupAudioLineGuidePopup::init), &SetupAudioLineGuidePopup::init>;
}
void register_SetupAudioTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupAudioTriggerPopup");
	t["valueDidChange"] = sol::c_call<decltype(&SetupAudioTriggerPopup::valueDidChange), &SetupAudioTriggerPopup::valueDidChange>;
}
void register_SetupBGSpeedTrigger(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupBGSpeedTrigger");
	t["create"] = sol::c_call<decltype(&SetupBGSpeedTrigger::create), &SetupBGSpeedTrigger::create>;
	t["init"] = sol::c_call<decltype(&SetupBGSpeedTrigger::init), &SetupBGSpeedTrigger::init>;
}
void register_SetupCameraEdgePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCameraEdgePopup");
	t["create"] = sol::c_call<decltype(&SetupCameraEdgePopup::create), &SetupCameraEdgePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCameraEdgePopup::init), &SetupCameraEdgePopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupCameraEdgePopup::onClose), &SetupCameraEdgePopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupCameraEdgePopup::textChanged), &SetupCameraEdgePopup::textChanged>;
}
void register_SetupCameraGuidePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCameraGuidePopup");
	t["create"] = sol::c_call<decltype(&SetupCameraGuidePopup::create), &SetupCameraGuidePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCameraGuidePopup::init), &SetupCameraGuidePopup::init>;
}
void register_SetupCameraModePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCameraModePopup");
	t["create"] = sol::c_call<decltype(&SetupCameraModePopup::create), &SetupCameraModePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCameraModePopup::init), &SetupCameraModePopup::init>;
}
void register_SetupCameraOffsetTrigger(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCameraOffsetTrigger");
	t["create"] = sol::c_call<decltype(&SetupCameraOffsetTrigger::create), &SetupCameraOffsetTrigger::create>;
	t["init"] = sol::c_call<decltype(&SetupCameraOffsetTrigger::init), &SetupCameraOffsetTrigger::init>;
	t["onClose"] = sol::c_call<decltype(&SetupCameraOffsetTrigger::onClose), &SetupCameraOffsetTrigger::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupCameraOffsetTrigger::textChanged), &SetupCameraOffsetTrigger::textChanged>;
}
void register_SetupCameraRotatePopup2(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCameraRotatePopup2");
	t["create"] = sol::c_call<decltype(&SetupCameraRotatePopup2::create), &SetupCameraRotatePopup2::create>;
	t["init"] = sol::c_call<decltype(&SetupCameraRotatePopup2::init), &SetupCameraRotatePopup2::init>;
}
void register_SetupCheckpointPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCheckpointPopup");
	t["create"] = sol::c_call<decltype(&SetupCheckpointPopup::create), &SetupCheckpointPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCheckpointPopup::init), &SetupCheckpointPopup::init>;
}
void register_SetupCoinLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCoinLayer");
	t["create"] = sol::c_call<decltype(&SetupCoinLayer::create), &SetupCoinLayer::create>;
	t["init"] = sol::c_call<decltype(&SetupCoinLayer::init), &SetupCoinLayer::init>;
}
void register_SetupInstantCollisionTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupInstantCollisionTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupInstantCollisionTriggerPopup::create), &SetupInstantCollisionTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupInstantCollisionTriggerPopup::init), &SetupInstantCollisionTriggerPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues), &SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupInstantCollisionTriggerPopup::valueDidChange), &SetupInstantCollisionTriggerPopup::valueDidChange>;
}
void register_SetupCollisionStateTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCollisionStateTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupCollisionStateTriggerPopup::create), &SetupCollisionStateTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCollisionStateTriggerPopup::init), &SetupCollisionStateTriggerPopup::init>;
}
void register_SetupCollisionTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCollisionTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupCollisionTriggerPopup::create), &SetupCollisionTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCollisionTriggerPopup::init), &SetupCollisionTriggerPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupCollisionTriggerPopup::onClose), &SetupCollisionTriggerPopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupCollisionTriggerPopup::textChanged), &SetupCollisionTriggerPopup::textChanged>;
}
void register_SetupCountTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupCountTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupCountTriggerPopup::create), &SetupCountTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupCountTriggerPopup::init), &SetupCountTriggerPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupCountTriggerPopup::onClose), &SetupCountTriggerPopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupCountTriggerPopup::textChanged), &SetupCountTriggerPopup::textChanged>;
}
void register_SetupDashRingPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupDashRingPopup");
	t["create"] = sol::c_call<decltype(&SetupDashRingPopup::create), &SetupDashRingPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupDashRingPopup::init), &SetupDashRingPopup::init>;
}
void register_SetupEndPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupEndPopup");
	t["create"] = sol::c_call<decltype(&SetupEndPopup::create), &SetupEndPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupEndPopup::init), &SetupEndPopup::init>;
	t["textChanged"] = sol::c_call<decltype(&SetupEndPopup::textChanged), &SetupEndPopup::textChanged>;
}
void register_SetupEnterEffectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupEnterEffectPopup");
	t["create"] = sol::c_call<decltype(&SetupEnterEffectPopup::create), &SetupEnterEffectPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupEnterEffectPopup::init), &SetupEnterEffectPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupEnterEffectPopup::onClose), &SetupEnterEffectPopup::onClose>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupEnterEffectPopup::valueDidChange), &SetupEnterEffectPopup::valueDidChange>;
	t["hsvPopupClosed"] = sol::c_call<decltype(&SetupEnterEffectPopup::hsvPopupClosed), &SetupEnterEffectPopup::hsvPopupClosed>;
}
void register_SetupEnterTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupEnterTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupEnterTriggerPopup::create), &SetupEnterTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupEnterTriggerPopup::init), &SetupEnterTriggerPopup::init>;
}
void register_SetupEventLinkPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupEventLinkPopup");
	t["create"] = sol::c_call<decltype(&SetupEventLinkPopup::create), &SetupEventLinkPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupEventLinkPopup::init), &SetupEventLinkPopup::init>;
}
void register_SetupForceBlockPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupForceBlockPopup");
	t["create"] = sol::c_call<decltype(&SetupForceBlockPopup::create), &SetupForceBlockPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupForceBlockPopup::init), &SetupForceBlockPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupForceBlockPopup::valueDidChange), &SetupForceBlockPopup::valueDidChange>;
}
void register_SetupGameplayOffsetPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupGameplayOffsetPopup");
	t["create"] = sol::c_call<decltype(&SetupGameplayOffsetPopup::create), &SetupGameplayOffsetPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupGameplayOffsetPopup::init), &SetupGameplayOffsetPopup::init>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupGameplayOffsetPopup::onCustomToggleTriggerValue), &SetupGameplayOffsetPopup::onCustomToggleTriggerValue>;
}
void register_SetupGradientPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupGradientPopup");
	t["create"] = sol::c_call<decltype(&SetupGradientPopup::create), &SetupGradientPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupGradientPopup::init), &SetupGradientPopup::init>;
	t["onPlusButton"] = sol::c_call<decltype(&SetupGradientPopup::onPlusButton), &SetupGradientPopup::onPlusButton>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupGradientPopup::valueDidChange), &SetupGradientPopup::valueDidChange>;
}
void register_SetupGravityTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupGravityTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupGravityTriggerPopup::create), &SetupGravityTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupGravityTriggerPopup::init), &SetupGravityTriggerPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupGravityTriggerPopup::valueDidChange), &SetupGravityTriggerPopup::valueDidChange>;
}
void register_SetupInstantCountPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupInstantCountPopup");
	t["create"] = sol::c_call<decltype(&SetupInstantCountPopup::create), &SetupInstantCountPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupInstantCountPopup::init), &SetupInstantCountPopup::init>;
	t["textChanged"] = sol::c_call<decltype(&SetupInstantCountPopup::textChanged), &SetupInstantCountPopup::textChanged>;
}
void register_SetupInteractObjectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupInteractObjectPopup");
	t["create"] = sol::c_call<decltype(&SetupInteractObjectPopup::create), &SetupInteractObjectPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupInteractObjectPopup::init), &SetupInteractObjectPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupInteractObjectPopup::onClose), &SetupInteractObjectPopup::onClose>;
	t["onPlusButton"] = sol::c_call<decltype(&SetupInteractObjectPopup::onPlusButton), &SetupInteractObjectPopup::onPlusButton>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupInteractObjectPopup::valueDidChange), &SetupInteractObjectPopup::valueDidChange>;
}
void register_SetupItemCompareTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupItemCompareTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupItemCompareTriggerPopup::create), &SetupItemCompareTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupItemCompareTriggerPopup::init), &SetupItemCompareTriggerPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupItemCompareTriggerPopup::valueDidChange), &SetupItemCompareTriggerPopup::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupItemCompareTriggerPopup::onCustomToggleTriggerValue), &SetupItemCompareTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupItemEditTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupItemEditTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupItemEditTriggerPopup::create), &SetupItemEditTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupItemEditTriggerPopup::init), &SetupItemEditTriggerPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupItemEditTriggerPopup::valueDidChange), &SetupItemEditTriggerPopup::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupItemEditTriggerPopup::onCustomToggleTriggerValue), &SetupItemEditTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupKeyframeAnimPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupKeyframeAnimPopup");
	t["create"] = sol::c_call<decltype(&SetupKeyframeAnimPopup::create), &SetupKeyframeAnimPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupKeyframeAnimPopup::init), &SetupKeyframeAnimPopup::init>;
}
void register_SetupKeyframePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupKeyframePopup");
	t["create"] = sol::c_call<decltype(&SetupKeyframePopup::create), &SetupKeyframePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupKeyframePopup::init), &SetupKeyframePopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupKeyframePopup::onClose), &SetupKeyframePopup::onClose>;
	t["onCustomButton"] = sol::c_call<decltype(&SetupKeyframePopup::onCustomButton), &SetupKeyframePopup::onCustomButton>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupKeyframePopup::valueDidChange), &SetupKeyframePopup::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupKeyframePopup::onCustomToggleTriggerValue), &SetupKeyframePopup::onCustomToggleTriggerValue>;
}
void register_SetupMGTrigger(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupMGTrigger");
	t["create"] = sol::c_call<decltype(&SetupMGTrigger::create), &SetupMGTrigger::create>;
	t["init"] = sol::c_call<decltype(&SetupMGTrigger::init), &SetupMGTrigger::init>;
	t["onClose"] = sol::c_call<decltype(&SetupMGTrigger::onClose), &SetupMGTrigger::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupMGTrigger::textChanged), &SetupMGTrigger::textChanged>;
}
void register_SetupMoveCommandPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupMoveCommandPopup");
	t["create"] = sol::c_call<decltype(&SetupMoveCommandPopup::create), &SetupMoveCommandPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupMoveCommandPopup::init), &SetupMoveCommandPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupMoveCommandPopup::valueDidChange), &SetupMoveCommandPopup::valueDidChange>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupMoveCommandPopup::onCustomToggleTriggerValue), &SetupMoveCommandPopup::onCustomToggleTriggerValue>;
}
void register_SetupObjectControlPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupObjectControlPopup");
	t["create"] = sol::c_call<decltype(&SetupObjectControlPopup::create), &SetupObjectControlPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupObjectControlPopup::init), &SetupObjectControlPopup::init>;
}
void register_SetupObjectOptions2Popup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupObjectOptions2Popup");
	t["create"] = sol::c_call<decltype(&SetupObjectOptions2Popup::create), &SetupObjectOptions2Popup::create>;
	t["init"] = sol::c_call<decltype(&SetupObjectOptions2Popup::init), &SetupObjectOptions2Popup::init>;
	t["onPlusButton"] = sol::c_call<decltype(&SetupObjectOptions2Popup::onPlusButton), &SetupObjectOptions2Popup::onPlusButton>;
}
void register_SetupObjectOptionsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupObjectOptionsPopup");
	t["create"] = sol::c_call<decltype(&SetupObjectOptionsPopup::create), &SetupObjectOptionsPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupObjectOptionsPopup::init), &SetupObjectOptionsPopup::init>;
}
void register_SetupObjectTogglePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupObjectTogglePopup");
	t["create"] = sol::c_call<decltype(&SetupObjectTogglePopup::create), &SetupObjectTogglePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupObjectTogglePopup::init), &SetupObjectTogglePopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupObjectTogglePopup::valueDidChange), &SetupObjectTogglePopup::valueDidChange>;
}
void register_SetupOpacityPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupOpacityPopup");
	t["create"] = sol::c_call<decltype(&SetupOpacityPopup::create), &SetupOpacityPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupOpacityPopup::init), &SetupOpacityPopup::init>;
	t["textChanged"] = sol::c_call<decltype(&SetupOpacityPopup::textChanged), &SetupOpacityPopup::textChanged>;
}
void register_SetupOptionsTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupOptionsTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupOptionsTriggerPopup::create), &SetupOptionsTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupOptionsTriggerPopup::init), &SetupOptionsTriggerPopup::init>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupOptionsTriggerPopup::onCustomToggleTriggerValue), &SetupOptionsTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupPersistentItemTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupPersistentItemTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupPersistentItemTriggerPopup::create), &SetupPersistentItemTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupPersistentItemTriggerPopup::init), &SetupPersistentItemTriggerPopup::init>;
}
void register_SetupPickupTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupPickupTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupPickupTriggerPopup::create), &SetupPickupTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupPickupTriggerPopup::init), &SetupPickupTriggerPopup::init>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupPickupTriggerPopup::onCustomToggleTriggerValue), &SetupPickupTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupPlatformerEndPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupPlatformerEndPopup");
	t["create"] = sol::c_call<decltype(&SetupPlatformerEndPopup::create), &SetupPlatformerEndPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupPlatformerEndPopup::init), &SetupPlatformerEndPopup::init>;
}
void register_SetupPlayerControlPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupPlayerControlPopup");
	t["create"] = sol::c_call<decltype(&SetupPlayerControlPopup::create), &SetupPlayerControlPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupPlayerControlPopup::init), &SetupPlayerControlPopup::init>;
}
void register_SetupPulsePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupPulsePopup");
	t["create"] = sol::c_call<decltype(&SetupPulsePopup::create), &SetupPulsePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupPulsePopup::init), &SetupPulsePopup::init>;
	t["show"] = sol::c_call<decltype(&SetupPulsePopup::show), &SetupPulsePopup::show>;
	t["onClose"] = sol::c_call<decltype(&SetupPulsePopup::onClose), &SetupPulsePopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupPulsePopup::textChanged), &SetupPulsePopup::textChanged>;
	t["colorValueChanged"] = sol::c_call<decltype(&SetupPulsePopup::colorValueChanged), &SetupPulsePopup::colorValueChanged>;
	t["colorSelectClosed"] = sol::c_call<decltype(&SetupPulsePopup::colorSelectClosed), &SetupPulsePopup::colorSelectClosed>;
}
void register_SetupRandAdvTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupRandAdvTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::create), &SetupRandAdvTriggerPopup::create>;
	t["addChance"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::addChance), &SetupRandAdvTriggerPopup::addChance>;
	t["addChanceToObject"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::addChanceToObject), &SetupRandAdvTriggerPopup::addChanceToObject>;
	t["init"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::init), &SetupRandAdvTriggerPopup::init>;
	t["onAddChance"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::onAddChance), &SetupRandAdvTriggerPopup::onAddChance>;
	t["onRemoveFromGroup"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::onRemoveFromGroup), &SetupRandAdvTriggerPopup::onRemoveFromGroup>;
	t["removeGroupID"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::removeGroupID), &SetupRandAdvTriggerPopup::removeGroupID>;
	t["removeGroupIDFromObject"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::removeGroupIDFromObject), &SetupRandAdvTriggerPopup::removeGroupIDFromObject>;
	t["updateGroupIDButtons"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::updateGroupIDButtons), &SetupRandAdvTriggerPopup::updateGroupIDButtons>;
	t["onClose"] = sol::c_call<decltype(&SetupRandAdvTriggerPopup::onClose), &SetupRandAdvTriggerPopup::onClose>;
}
void register_SetupRandTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupRandTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupRandTriggerPopup::create), &SetupRandTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupRandTriggerPopup::init), &SetupRandTriggerPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupRandTriggerPopup::onClose), &SetupRandTriggerPopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupRandTriggerPopup::textChanged), &SetupRandTriggerPopup::textChanged>;
}
void register_SetupResetTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupResetTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupResetTriggerPopup::create), &SetupResetTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupResetTriggerPopup::init), &SetupResetTriggerPopup::init>;
}
void register_SetupReverbPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupReverbPopup");
	t["create"] = sol::c_call<decltype(&SetupReverbPopup::create), &SetupReverbPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupReverbPopup::init), &SetupReverbPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupReverbPopup::onClose), &SetupReverbPopup::onClose>;
}
void register_SetupRotateCommandPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupRotateCommandPopup");
	t["create"] = sol::c_call<decltype(&SetupRotateCommandPopup::create), &SetupRotateCommandPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupRotateCommandPopup::init), &SetupRotateCommandPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupRotateCommandPopup::valueDidChange), &SetupRotateCommandPopup::valueDidChange>;
}
void register_SetupRotateGameplayPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupRotateGameplayPopup");
	t["create"] = sol::c_call<decltype(&SetupRotateGameplayPopup::create), &SetupRotateGameplayPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupRotateGameplayPopup::init), &SetupRotateGameplayPopup::init>;
	t["onPlusButton"] = sol::c_call<decltype(&SetupRotateGameplayPopup::onPlusButton), &SetupRotateGameplayPopup::onPlusButton>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupRotateGameplayPopup::valueDidChange), &SetupRotateGameplayPopup::valueDidChange>;
}
void register_SetupRotatePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupRotatePopup");
	t["create"] = sol::c_call<decltype(&SetupRotatePopup::create), &SetupRotatePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupRotatePopup::init), &SetupRotatePopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupRotatePopup::onClose), &SetupRotatePopup::onClose>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupRotatePopup::onCustomToggleTriggerValue), &SetupRotatePopup::onCustomToggleTriggerValue>;
}
void register_SetupSequenceTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSequenceTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::create), &SetupSequenceTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::init), &SetupSequenceTriggerPopup::init>;
	t["onAddChance"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::onAddChance), &SetupSequenceTriggerPopup::onAddChance>;
	t["onChangeOrder"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::onChangeOrder), &SetupSequenceTriggerPopup::onChangeOrder>;
	t["onDeleteSelected"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::onDeleteSelected), &SetupSequenceTriggerPopup::onDeleteSelected>;
	t["onSelect"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::onSelect), &SetupSequenceTriggerPopup::onSelect>;
	t["updateGroupIDButtons"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::updateGroupIDButtons), &SetupSequenceTriggerPopup::updateGroupIDButtons>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupSequenceTriggerPopup::onCustomToggleTriggerValue), &SetupSequenceTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupSFXEditPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSFXEditPopup");
	t["create"] = sol::c_call<decltype(&SetupSFXEditPopup::create), &SetupSFXEditPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSFXEditPopup::init), &SetupSFXEditPopup::init>;
}
void register_SetupSFXPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSFXPopup");
	t["create"] = sol::c_call<decltype(&SetupSFXPopup::create), &SetupSFXPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSFXPopup::init), &SetupSFXPopup::init>;
	t["pageChanged"] = sol::c_call<decltype(&SetupSFXPopup::pageChanged), &SetupSFXPopup::pageChanged>;
	t["onClose"] = sol::c_call<decltype(&SetupSFXPopup::onClose), &SetupSFXPopup::onClose>;
	t["onPlusButton"] = sol::c_call<decltype(&SetupSFXPopup::onPlusButton), &SetupSFXPopup::onPlusButton>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupSFXPopup::valueDidChange), &SetupSFXPopup::valueDidChange>;
}
void register_SetupShaderEffectPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupShaderEffectPopup");
	t["create"] = sol::c_call<decltype(&SetupShaderEffectPopup::create), &SetupShaderEffectPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupShaderEffectPopup::init), &SetupShaderEffectPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupShaderEffectPopup::updateDefaultTriggerValues), &SetupShaderEffectPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupShaderEffectPopup::valueDidChange), &SetupShaderEffectPopup::valueDidChange>;
}
void register_SetupShakePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupShakePopup");
	t["create"] = sol::c_call<decltype(&SetupShakePopup::create), &SetupShakePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupShakePopup::init), &SetupShakePopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupShakePopup::onClose), &SetupShakePopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupShakePopup::textChanged), &SetupShakePopup::textChanged>;
}
void register_SetupSmartBlockLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSmartBlockLayer");
	t["keyBackClicked"] = sol::c_call<decltype(&SetupSmartBlockLayer::keyBackClicked), &SetupSmartBlockLayer::keyBackClicked>;
	t["selectArtClosed"] = sol::c_call<decltype(&SetupSmartBlockLayer::selectArtClosed), &SetupSmartBlockLayer::selectArtClosed>;
}
void register_SetupSmartTemplateLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSmartTemplateLayer");
	t["create"] = sol::c_call<decltype(&SetupSmartTemplateLayer::create), &SetupSmartTemplateLayer::create>;
	t["init"] = sol::c_call<decltype(&SetupSmartTemplateLayer::init), &SetupSmartTemplateLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SetupSmartTemplateLayer::keyBackClicked), &SetupSmartTemplateLayer::keyBackClicked>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&SetupSmartTemplateLayer::FLAlert_Clicked), &SetupSmartTemplateLayer::FLAlert_Clicked>;
	t["textInputOpened"] = sol::c_call<decltype(&SetupSmartTemplateLayer::textInputOpened), &SetupSmartTemplateLayer::textInputOpened>;
	t["textInputClosed"] = sol::c_call<decltype(&SetupSmartTemplateLayer::textInputClosed), &SetupSmartTemplateLayer::textInputClosed>;
}
void register_SetupSongTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSongTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupSongTriggerPopup::create), &SetupSongTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSongTriggerPopup::init), &SetupSongTriggerPopup::init>;
	t["pageChanged"] = sol::c_call<decltype(&SetupSongTriggerPopup::pageChanged), &SetupSongTriggerPopup::pageChanged>;
	t["onClose"] = sol::c_call<decltype(&SetupSongTriggerPopup::onClose), &SetupSongTriggerPopup::onClose>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupSongTriggerPopup::valueDidChange), &SetupSongTriggerPopup::valueDidChange>;
}
void register_SetupSpawnParticlePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSpawnParticlePopup");
	t["create"] = sol::c_call<decltype(&SetupSpawnParticlePopup::create), &SetupSpawnParticlePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSpawnParticlePopup::init), &SetupSpawnParticlePopup::init>;
}
void register_SetupSpawnPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupSpawnPopup");
	t["create"] = sol::c_call<decltype(&SetupSpawnPopup::create), &SetupSpawnPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupSpawnPopup::init), &SetupSpawnPopup::init>;
}
void register_SetupStaticCameraPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupStaticCameraPopup");
	t["create"] = sol::c_call<decltype(&SetupStaticCameraPopup::create), &SetupStaticCameraPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupStaticCameraPopup::init), &SetupStaticCameraPopup::init>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupStaticCameraPopup::valueDidChange), &SetupStaticCameraPopup::valueDidChange>;
}
void register_SetupStopTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupStopTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupStopTriggerPopup::create), &SetupStopTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupStopTriggerPopup::init), &SetupStopTriggerPopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupStopTriggerPopup::onClose), &SetupStopTriggerPopup::onClose>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupStopTriggerPopup::onCustomToggleTriggerValue), &SetupStopTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupTeleportPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTeleportPopup");
	t["create"] = sol::c_call<decltype(&SetupTeleportPopup::create), &SetupTeleportPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTeleportPopup::init), &SetupTeleportPopup::init>;
	t["updateDefaultTriggerValues"] = sol::c_call<decltype(&SetupTeleportPopup::updateDefaultTriggerValues), &SetupTeleportPopup::updateDefaultTriggerValues>;
	t["valueDidChange"] = sol::c_call<decltype(&SetupTeleportPopup::valueDidChange), &SetupTeleportPopup::valueDidChange>;
}
void register_SetupTimerControlTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTimerControlTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupTimerControlTriggerPopup::create), &SetupTimerControlTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTimerControlTriggerPopup::init), &SetupTimerControlTriggerPopup::init>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&SetupTimerControlTriggerPopup::onCustomToggleTriggerValue), &SetupTimerControlTriggerPopup::onCustomToggleTriggerValue>;
}
void register_SetupTimerEventTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTimerEventTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupTimerEventTriggerPopup::create), &SetupTimerEventTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTimerEventTriggerPopup::init), &SetupTimerEventTriggerPopup::init>;
}
void register_SetupTimerTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTimerTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupTimerTriggerPopup::create), &SetupTimerTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTimerTriggerPopup::init), &SetupTimerTriggerPopup::init>;
}
void register_SetupTimeWarpPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTimeWarpPopup");
	t["create"] = sol::c_call<decltype(&SetupTimeWarpPopup::create), &SetupTimeWarpPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTimeWarpPopup::init), &SetupTimeWarpPopup::init>;
}
void register_SetupTouchTogglePopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTouchTogglePopup");
	t["create"] = sol::c_call<decltype(&SetupTouchTogglePopup::create), &SetupTouchTogglePopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTouchTogglePopup::init), &SetupTouchTogglePopup::init>;
	t["onClose"] = sol::c_call<decltype(&SetupTouchTogglePopup::onClose), &SetupTouchTogglePopup::onClose>;
	t["textChanged"] = sol::c_call<decltype(&SetupTouchTogglePopup::textChanged), &SetupTouchTogglePopup::textChanged>;
}
void register_SetupTransformPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupTransformPopup");
	t["create"] = sol::c_call<decltype(&SetupTransformPopup::create), &SetupTransformPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupTransformPopup::init), &SetupTransformPopup::init>;
}
void register_SetupZoomTriggerPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SetupZoomTriggerPopup");
	t["create"] = sol::c_call<decltype(&SetupZoomTriggerPopup::create), &SetupZoomTriggerPopup::create>;
	t["init"] = sol::c_call<decltype(&SetupZoomTriggerPopup::init), &SetupZoomTriggerPopup::init>;
}
void register_SFXBrowser(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SFXBrowser");
	t["create"] = sol::c_call<decltype(&SFXBrowser::create), &SFXBrowser::create>;
	t["init"] = sol::c_call<decltype(&SFXBrowser::init), &SFXBrowser::init>;
	t["setupList"] = sol::c_call<decltype(&SFXBrowser::setupList), &SFXBrowser::setupList>;
	t["keyBackClicked"] = sol::c_call<decltype(&SFXBrowser::keyBackClicked), &SFXBrowser::keyBackClicked>;
	t["musicActionFinished"] = sol::c_call<decltype(&SFXBrowser::musicActionFinished), &SFXBrowser::musicActionFinished>;
	t["musicActionFailed"] = sol::c_call<decltype(&SFXBrowser::musicActionFailed), &SFXBrowser::musicActionFailed>;
	t["setTextPopupClosed"] = sol::c_call<decltype(&SFXBrowser::setTextPopupClosed), &SFXBrowser::setTextPopupClosed>;
}
void register_SFXInfoObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SFXInfoObject");
	t["create"] = sol::c_call<decltype(&SFXInfoObject::create), &SFXInfoObject::create>;
}
void register_SFXFolderObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SFXFolderObject");
	t["create"] = sol::c_call<decltype(&SFXFolderObject::create), &SFXFolderObject::create>;
	t["init"] = sol::c_call<decltype(&SFXFolderObject::init), &SFXFolderObject::init>;
}
void register_SFXSearchResult(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SFXSearchResult");
	t["create"] = sol::c_call<decltype(&SFXSearchResult::create), &SFXSearchResult::create>;
}
void register_ShaderGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShaderGameObject");
	t["create"] = sol::c_call<decltype(&ShaderGameObject::create), &ShaderGameObject::create>;
	t["customSetup"] = sol::c_call<decltype(&ShaderGameObject::customSetup), &ShaderGameObject::customSetup>;
}
void register_ShaderLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShaderLayer");
	t["create"] = sol::c_call<decltype(&ShaderLayer::create), &ShaderLayer::create>;
	t["resetAllShaders"] = sol::c_call<decltype(&ShaderLayer::resetAllShaders), &ShaderLayer::resetAllShaders>;
	t["triggerShockLine"] = sol::c_call<decltype(&ShaderLayer::triggerShockLine), &ShaderLayer::triggerShockLine>;
	t["triggerShockWave"] = sol::c_call<decltype(&ShaderLayer::triggerShockWave), &ShaderLayer::triggerShockWave>;
	t["updateZLayer"] = sol::c_call<decltype(&ShaderLayer::updateZLayer), &ShaderLayer::updateZLayer>;
	t["update"] = sol::c_call<decltype(&ShaderLayer::update), &ShaderLayer::update>;
	t["init"] = sol::c_call<decltype(&ShaderLayer::init), &ShaderLayer::init>;
	t["visit"] = sol::c_call<decltype(&ShaderLayer::visit), &ShaderLayer::visit>;
}
void register_ShardsPage(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShardsPage");
	t["create"] = sol::c_call<decltype(&ShardsPage::create), &ShardsPage::create>;
	t["init"] = sol::c_call<decltype(&ShardsPage::init), &ShardsPage::init>;
}
void register_ShareCommentLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShareCommentLayer");
	t["create"] = sol::c_call<decltype(&ShareCommentLayer::create), &ShareCommentLayer::create>;
	t["init"] = sol::c_call<decltype(&ShareCommentLayer::init), &ShareCommentLayer::init>;
	t["onClear"] = sol::c_call<decltype(&ShareCommentLayer::onClear), &ShareCommentLayer::onClear>;
	t["onClose"] = sol::c_call<decltype(&ShareCommentLayer::onClose), &ShareCommentLayer::onClose>;
	t["onShare"] = sol::c_call<decltype(&ShareCommentLayer::onShare), &ShareCommentLayer::onShare>;
	t["updateCharCountLabel"] = sol::c_call<decltype(&ShareCommentLayer::updateCharCountLabel), &ShareCommentLayer::updateCharCountLabel>;
	t["updatePercentLabel"] = sol::c_call<decltype(&ShareCommentLayer::updatePercentLabel), &ShareCommentLayer::updatePercentLabel>;
	t["keyBackClicked"] = sol::c_call<decltype(&ShareCommentLayer::keyBackClicked), &ShareCommentLayer::keyBackClicked>;
	t["textInputClosed"] = sol::c_call<decltype(&ShareCommentLayer::textInputClosed), &ShareCommentLayer::textInputClosed>;
	t["textChanged"] = sol::c_call<decltype(&ShareCommentLayer::textChanged), &ShareCommentLayer::textChanged>;
	t["uploadActionFinished"] = sol::c_call<decltype(&ShareCommentLayer::uploadActionFinished), &ShareCommentLayer::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&ShareCommentLayer::uploadActionFailed), &ShareCommentLayer::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&ShareCommentLayer::onClosePopup), &ShareCommentLayer::onClosePopup>;
}
void register_ShareLevelLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShareLevelLayer");
	t["create"] = sol::c_call<decltype(&ShareLevelLayer::create), &ShareLevelLayer::create>;
	t["init"] = sol::c_call<decltype(&ShareLevelLayer::init), &ShareLevelLayer::init>;
	t["onShare"] = sol::c_call<decltype(&ShareLevelLayer::onShare), &ShareLevelLayer::onShare>;
}
void register_ShareLevelSettingsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShareLevelSettingsLayer");
	t["create"] = sol::c_call<decltype(&ShareLevelSettingsLayer::create), &ShareLevelSettingsLayer::create>;
	t["init"] = sol::c_call<decltype(&ShareLevelSettingsLayer::init), &ShareLevelSettingsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&ShareLevelSettingsLayer::keyBackClicked), &ShareLevelSettingsLayer::keyBackClicked>;
}
void register_ShareListLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("ShareListLayer");
	t["create"] = sol::c_call<decltype(&ShareListLayer::create), &ShareListLayer::create>;
	t["init"] = sol::c_call<decltype(&ShareListLayer::init), &ShareListLayer::init>;
}
void register_SimplePlayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SimplePlayer");
	t["create"] = sol::c_call<decltype(&SimplePlayer::create), &SimplePlayer::create>;
	t["init"] = sol::c_call<decltype(&SimplePlayer::init), &SimplePlayer::init>;
	t["setFrames"] = sol::c_call<decltype(&SimplePlayer::setFrames), &SimplePlayer::setFrames>;
	t["updateColors"] = sol::c_call<decltype(&SimplePlayer::updateColors), &SimplePlayer::updateColors>;
	t["updatePlayerFrame"] = sol::c_call<decltype(&SimplePlayer::updatePlayerFrame), &SimplePlayer::updatePlayerFrame>;
	t["setOpacity"] = sol::c_call<decltype(&SimplePlayer::setOpacity), &SimplePlayer::setOpacity>;
	t["setColor"] = sol::c_call<decltype(&SimplePlayer::setColor), &SimplePlayer::setColor>;
}
void register_Slider(sol::state_view lua)
{
	sol::table t = lua.create_named_table("Slider");
	t["getValue"] = sol::c_call<decltype(&Slider::getValue), &Slider::getValue>;
	t["init"] = sol::c_call<decltype(&Slider::init), &Slider::init>;
	t["updateBar"] = sol::c_call<decltype(&Slider::updateBar), &Slider::updateBar>;
	t["ccTouchBegan"] = sol::c_call<decltype(&Slider::ccTouchBegan), &Slider::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&Slider::ccTouchMoved), &Slider::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&Slider::ccTouchEnded), &Slider::ccTouchEnded>;
}
void register_SliderThumb(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SliderThumb");
	t["create"] = sol::c_call<decltype(&SliderThumb::create), &SliderThumb::create>;
	t["setMaxOffset"] = sol::c_call<decltype(&SliderThumb::setMaxOffset), &SliderThumb::setMaxOffset>;
	t["setValue"] = sol::c_call<decltype(&SliderThumb::setValue), &SliderThumb::setValue>;
}
void register_SliderTouchLogic(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SliderTouchLogic");
	t["create"] = sol::c_call<decltype(&SliderTouchLogic::create), &SliderTouchLogic::create>;
	t["init"] = sol::c_call<decltype(&SliderTouchLogic::init), &SliderTouchLogic::init>;
}
void register_SmartGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SmartGameObject");
	t["create"] = sol::c_call<decltype(&SmartGameObject::create), &SmartGameObject::create>;
	t["init"] = sol::c_call<decltype(&SmartGameObject::init), &SmartGameObject::init>;
}
void register_SongCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongCell");
	t["loadFromObject"] = sol::c_call<decltype(&SongCell::loadFromObject), &SongCell::loadFromObject>;
	t["init"] = sol::c_call<decltype(&SongCell::init), &SongCell::init>;
}
void register_SongInfoLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongInfoLayer");
	t["init"] = sol::c_call<decltype(&SongInfoLayer::init), &SongInfoLayer::init>;
	t["onMenuMusic"] = sol::c_call<decltype(&SongInfoLayer::onMenuMusic), &SongInfoLayer::onMenuMusic>;
	t["onPracticeMusic"] = sol::c_call<decltype(&SongInfoLayer::onPracticeMusic), &SongInfoLayer::onPracticeMusic>;
	t["showCustomMusicUnlockInfo"] = sol::c_call<decltype(&SongInfoLayer::showCustomMusicUnlockInfo), &SongInfoLayer::showCustomMusicUnlockInfo>;
}
void register_SongInfoObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongInfoObject");
	t["init"] = sol::c_call<decltype(&SongInfoObject::init), &SongInfoObject::init>;
	t["encodeWithCoder"] = sol::c_call<decltype(&SongInfoObject::encodeWithCoder), &SongInfoObject::encodeWithCoder>;
}
void register_SongOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongOptionsLayer");
	t["create"] = sol::c_call<decltype(&SongOptionsLayer::create), &SongOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&SongOptionsLayer::init), &SongOptionsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&SongOptionsLayer::keyBackClicked), &SongOptionsLayer::keyBackClicked>;
}
void register_SongSelectNode(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongSelectNode");
	t["audioNext"] = sol::c_call<decltype(&SongSelectNode::audioNext), &SongSelectNode::audioNext>;
	t["audioPrevious"] = sol::c_call<decltype(&SongSelectNode::audioPrevious), &SongSelectNode::audioPrevious>;
	t["init"] = sol::c_call<decltype(&SongSelectNode::init), &SongSelectNode::init>;
	t["onOpenCustomSong"] = sol::c_call<decltype(&SongSelectNode::onOpenCustomSong), &SongSelectNode::onOpenCustomSong>;
	t["updateAudioLabel"] = sol::c_call<decltype(&SongSelectNode::updateAudioLabel), &SongSelectNode::updateAudioLabel>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&SongSelectNode::FLAlert_Clicked), &SongSelectNode::FLAlert_Clicked>;
	t["customSongLayerClosed"] = sol::c_call<decltype(&SongSelectNode::customSongLayerClosed), &SongSelectNode::customSongLayerClosed>;
}
void register_SongsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SongsLayer");
	t["create"] = sol::c_call<decltype(&SongsLayer::create), &SongsLayer::create>;
	t["customSetup"] = sol::c_call<decltype(&SongsLayer::customSetup), &SongsLayer::customSetup>;
}
void register_SpawnParticleGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SpawnParticleGameObject");
	t["create"] = sol::c_call<decltype(&SpawnParticleGameObject::create), &SpawnParticleGameObject::create>;
	t["init"] = sol::c_call<decltype(&SpawnParticleGameObject::init), &SpawnParticleGameObject::init>;
}
void register_SpawnTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SpawnTriggerGameObject");
	t["create"] = sol::c_call<decltype(&SpawnTriggerGameObject::create), &SpawnTriggerGameObject::create>;
	t["init"] = sol::c_call<decltype(&SpawnTriggerGameObject::init), &SpawnTriggerGameObject::init>;
}
void register_StartPosObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("StartPosObject");
	t["create"] = sol::c_call<decltype(&StartPosObject::create), &StartPosObject::create>;
	t["init"] = sol::c_call<decltype(&StartPosObject::init), &StartPosObject::init>;
}
void register_StatsCell(sol::state_view lua)
{
	sol::table t = lua.create_named_table("StatsCell");
	t["draw"] = sol::c_call<decltype(&StatsCell::draw), &StatsCell::draw>;
}
void register_StatsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("StatsLayer");
	t["create"] = sol::c_call<decltype(&StatsLayer::create), &StatsLayer::create>;
	t["customSetup"] = sol::c_call<decltype(&StatsLayer::customSetup), &StatsLayer::customSetup>;
}
void register_StatsObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("StatsObject");
	t["create"] = sol::c_call<decltype(&StatsObject::create), &StatsObject::create>;
	t["init"] = sol::c_call<decltype(&StatsObject::init), &StatsObject::init>;
}
void register_SupportLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("SupportLayer");
	t["create"] = sol::c_call<decltype(&SupportLayer::create), &SupportLayer::create>;
	t["onLinks"] = sol::c_call<decltype(&SupportLayer::onLinks), &SupportLayer::onLinks>;
	t["onLowDetail"] = sol::c_call<decltype(&SupportLayer::onLowDetail), &SupportLayer::onLowDetail>;
	t["onRequestAccess"] = sol::c_call<decltype(&SupportLayer::onRequestAccess), &SupportLayer::onRequestAccess>;
	t["customSetup"] = sol::c_call<decltype(&SupportLayer::customSetup), &SupportLayer::customSetup>;
	t["uploadActionFinished"] = sol::c_call<decltype(&SupportLayer::uploadActionFinished), &SupportLayer::uploadActionFinished>;
	t["uploadActionFailed"] = sol::c_call<decltype(&SupportLayer::uploadActionFailed), &SupportLayer::uploadActionFailed>;
	t["onClosePopup"] = sol::c_call<decltype(&SupportLayer::onClosePopup), &SupportLayer::onClosePopup>;
	t["FLAlert_Clicked"] = sol::c_call<decltype(&SupportLayer::FLAlert_Clicked), &SupportLayer::FLAlert_Clicked>;
}
void register_TableView(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TableView");
	t["create"] = sol::c_call<decltype(&TableView::create), &TableView::create>;
	t["reloadData"] = sol::c_call<decltype(&TableView::reloadData), &TableView::reloadData>;
	t["ccTouchBegan"] = sol::c_call<decltype(&TableView::ccTouchBegan), &TableView::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&TableView::ccTouchMoved), &TableView::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&TableView::ccTouchEnded), &TableView::ccTouchEnded>;
	t["ccTouchCancelled"] = sol::c_call<decltype(&TableView::ccTouchCancelled), &TableView::ccTouchCancelled>;
	t["scrollWheel"] = sol::c_call<decltype(&TableView::scrollWheel), &TableView::scrollWheel>;
}
void register_TeleportPortalObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TeleportPortalObject");
	t["create"] = sol::c_call<decltype(&TeleportPortalObject::create), &TeleportPortalObject::create>;
}
void register_TextAlertPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TextAlertPopup");
	t["create"] = sol::c_call<decltype(&TextAlertPopup::create), &TextAlertPopup::create>;
	t["init"] = sol::c_call<decltype(&TextAlertPopup::init), &TextAlertPopup::init>;
	t["setAlertPosition"] = sol::c_call<decltype(&TextAlertPopup::setAlertPosition), &TextAlertPopup::setAlertPosition>;
}
void register_TextArea(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TextArea");
	t["create"] = sol::c_call<decltype(&TextArea::create), &TextArea::create>;
	t["init"] = sol::c_call<decltype(&TextArea::init), &TextArea::init>;
	t["setString"] = sol::c_call<decltype(&TextArea::setString), &TextArea::setString>;
	t["update"] = sol::c_call<decltype(&TextArea::update), &TextArea::update>;
	t["setOpacity"] = sol::c_call<decltype(&TextArea::setOpacity), &TextArea::setOpacity>;
}
void register_TextGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TextGameObject");
	t["create"] = sol::c_call<decltype(&TextGameObject::create), &TextGameObject::create>;
}
void register_TimerTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TimerTriggerGameObject");
	t["create"] = sol::c_call<decltype(&TimerTriggerGameObject::create), &TimerTriggerGameObject::create>;
}
void register_TopArtistsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TopArtistsLayer");
	t["create"] = sol::c_call<decltype(&TopArtistsLayer::create), &TopArtistsLayer::create>;
	t["loadPage"] = sol::c_call<decltype(&TopArtistsLayer::loadPage), &TopArtistsLayer::loadPage>;
	t["init"] = sol::c_call<decltype(&TopArtistsLayer::init), &TopArtistsLayer::init>;
	t["loadListFinished"] = sol::c_call<decltype(&TopArtistsLayer::loadListFinished), &TopArtistsLayer::loadListFinished>;
	t["loadListFailed"] = sol::c_call<decltype(&TopArtistsLayer::loadListFailed), &TopArtistsLayer::loadListFailed>;
	t["setupPageInfo"] = sol::c_call<decltype(&TopArtistsLayer::setupPageInfo), &TopArtistsLayer::setupPageInfo>;
}
void register_TOSPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TOSPopup");
	t["create"] = sol::c_call<decltype(&TOSPopup::create), &TOSPopup::create>;
	t["init"] = sol::c_call<decltype(&TOSPopup::init), &TOSPopup::init>;
}
void register_TransformTriggerGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TransformTriggerGameObject");
	t["create"] = sol::c_call<decltype(&TransformTriggerGameObject::create), &TransformTriggerGameObject::create>;
}
void register_TriggerControlGameObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TriggerControlGameObject");
	t["create"] = sol::c_call<decltype(&TriggerControlGameObject::create), &TriggerControlGameObject::create>;
}
void register_TutorialLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("TutorialLayer");
	t["create"] = sol::c_call<decltype(&TutorialLayer::create), &TutorialLayer::create>;
	t["init"] = sol::c_call<decltype(&TutorialLayer::init), &TutorialLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&TutorialLayer::keyBackClicked), &TutorialLayer::keyBackClicked>;
}
void register_UILayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UILayer");
	t["init"] = sol::c_call<decltype(&UILayer::init), &UILayer::init>;
	t["onCheck"] = sol::c_call<decltype(&UILayer::onCheck), &UILayer::onCheck>;
	t["onDeleteCheck"] = sol::c_call<decltype(&UILayer::onDeleteCheck), &UILayer::onDeleteCheck>;
	t["onPause"] = sol::c_call<decltype(&UILayer::onPause), &UILayer::onPause>;
	t["ccTouchBegan"] = sol::c_call<decltype(&UILayer::ccTouchBegan), &UILayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&UILayer::ccTouchMoved), &UILayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&UILayer::ccTouchEnded), &UILayer::ccTouchEnded>;
	t["keyBackClicked"] = sol::c_call<decltype(&UILayer::keyBackClicked), &UILayer::keyBackClicked>;
	t["keyDown"] = sol::c_call<decltype(&UILayer::keyDown), &UILayer::keyDown>;
	t["keyUp"] = sol::c_call<decltype(&UILayer::keyUp), &UILayer::keyUp>;
}
void register_UIObjectSettingsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UIObjectSettingsPopup");
	t["create"] = sol::c_call<decltype(&UIObjectSettingsPopup::create), &UIObjectSettingsPopup::create>;
	t["init"] = sol::c_call<decltype(&UIObjectSettingsPopup::init), &UIObjectSettingsPopup::init>;
	t["onCustomToggleTriggerValue"] = sol::c_call<decltype(&UIObjectSettingsPopup::onCustomToggleTriggerValue), &UIObjectSettingsPopup::onCustomToggleTriggerValue>;
}
void register_UIOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UIOptionsLayer");
	t["create"] = sol::c_call<decltype(&UIOptionsLayer::create), &UIOptionsLayer::create>;
	t["init"] = sol::c_call<decltype(&UIOptionsLayer::init), &UIOptionsLayer::init>;
	t["ccTouchBegan"] = sol::c_call<decltype(&UIOptionsLayer::ccTouchBegan), &UIOptionsLayer::ccTouchBegan>;
	t["ccTouchMoved"] = sol::c_call<decltype(&UIOptionsLayer::ccTouchMoved), &UIOptionsLayer::ccTouchMoved>;
	t["ccTouchEnded"] = sol::c_call<decltype(&UIOptionsLayer::ccTouchEnded), &UIOptionsLayer::ccTouchEnded>;
	t["onClose"] = sol::c_call<decltype(&UIOptionsLayer::onClose), &UIOptionsLayer::onClose>;
	t["valueDidChange"] = sol::c_call<decltype(&UIOptionsLayer::valueDidChange), &UIOptionsLayer::valueDidChange>;
}
void register_UISaveLoadLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UISaveLoadLayer");
	t["create"] = sol::c_call<decltype(&UISaveLoadLayer::create), &UISaveLoadLayer::create>;
	t["init"] = sol::c_call<decltype(&UISaveLoadLayer::init), &UISaveLoadLayer::init>;
}
void register_UndoObject(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UndoObject");
	t["create"] = sol::c_call<decltype(&UndoObject::create), &UndoObject::create>;
	t["createWithArray"] = sol::c_call<decltype(&UndoObject::createWithArray), &UndoObject::createWithArray>;
	t["createWithTransformObjects"] = sol::c_call<decltype(&UndoObject::createWithTransformObjects), &UndoObject::createWithTransformObjects>;
}
void register_UpdateAccountSettingsPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UpdateAccountSettingsPopup");
	t["create"] = sol::c_call<decltype(&UpdateAccountSettingsPopup::create), &UpdateAccountSettingsPopup::create>;
	t["init"] = sol::c_call<decltype(&UpdateAccountSettingsPopup::init), &UpdateAccountSettingsPopup::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&UpdateAccountSettingsPopup::keyBackClicked), &UpdateAccountSettingsPopup::keyBackClicked>;
}
void register_UploadActionPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UploadActionPopup");
	t["create"] = sol::c_call<decltype(&UploadActionPopup::create), &UploadActionPopup::create>;
	t["init"] = sol::c_call<decltype(&UploadActionPopup::init), &UploadActionPopup::init>;
	t["showFailMessage"] = sol::c_call<decltype(&UploadActionPopup::showFailMessage), &UploadActionPopup::showFailMessage>;
	t["showSuccessMessage"] = sol::c_call<decltype(&UploadActionPopup::showSuccessMessage), &UploadActionPopup::showSuccessMessage>;
	t["keyBackClicked"] = sol::c_call<decltype(&UploadActionPopup::keyBackClicked), &UploadActionPopup::keyBackClicked>;
}
void register_UploadListPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UploadListPopup");
	t["create"] = sol::c_call<decltype(&UploadListPopup::create), &UploadListPopup::create>;
	t["init"] = sol::c_call<decltype(&UploadListPopup::init), &UploadListPopup::init>;
	t["show"] = sol::c_call<decltype(&UploadListPopup::show), &UploadListPopup::show>;
}
void register_UploadPopup(sol::state_view lua)
{
	sol::table t = lua.create_named_table("UploadPopup");
	t["create"] = sol::c_call<decltype(&UploadPopup::create), &UploadPopup::create>;
	t["init"] = sol::c_call<decltype(&UploadPopup::init), &UploadPopup::init>;
	t["levelUploadFinished"] = sol::c_call<decltype(&UploadPopup::levelUploadFinished), &UploadPopup::levelUploadFinished>;
	t["levelUploadFailed"] = sol::c_call<decltype(&UploadPopup::levelUploadFailed), &UploadPopup::levelUploadFailed>;
}
void register_URLViewLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("URLViewLayer");
	t["create"] = sol::c_call<decltype(&URLViewLayer::create), &URLViewLayer::create>;
	t["init"] = sol::c_call<decltype(&URLViewLayer::init), &URLViewLayer::init>;
}
void register_VideoOptionsLayer(sol::state_view lua)
{
	sol::table t = lua.create_named_table("VideoOptionsLayer");
	t["create"] = sol::c_call<decltype(&VideoOptionsLayer::create), &VideoOptionsLayer::create>;
	t["onApply"] = sol::c_call<decltype(&VideoOptionsLayer::onApply), &VideoOptionsLayer::onApply>;
	t["init"] = sol::c_call<decltype(&VideoOptionsLayer::init), &VideoOptionsLayer::init>;
	t["keyBackClicked"] = sol::c_call<decltype(&VideoOptionsLayer::keyBackClicked), &VideoOptionsLayer::keyBackClicked>;
}




void includeClass(std::string_view cl, sol::this_state lua)
{
	if(cl == "CCEGLViewProtocol") return register_cocos2d_CCEGLViewProtocol(lua);
	if(cl == "CCMotionStreak") return register_cocos2d_CCMotionStreak(lua);
	if(cl == "CCScene") return register_cocos2d_CCScene(lua);
	if(cl == "CCParticleSystem") return register_cocos2d_CCParticleSystem(lua);
	if(cl == "CCParticleSystemQuad") return register_cocos2d_CCParticleSystemQuad(lua);
	if(cl == "CCFileUtils") return register_cocos2d_CCFileUtils(lua);
	if(cl == "CCNode") return register_cocos2d_CCNode(lua);
	if(cl == "CCScheduler") return register_cocos2d_CCScheduler(lua);
	if(cl == "CCLayer") return register_cocos2d_CCLayer(lua);
	if(cl == "CCObject") return register_cocos2d_CCObject(lua);
	if(cl == "CCOrbitCamera") return register_cocos2d_CCOrbitCamera(lua);
	if(cl == "CCLayerColor") return register_cocos2d_CCLayerColor(lua);
	if(cl == "CCLayerRGBA") return register_cocos2d_CCLayerRGBA(lua);
	if(cl == "CCMouseDispatcher") return register_cocos2d_CCMouseDispatcher(lua);
	if(cl == "CCTouchDispatcher") return register_cocos2d_CCTouchDispatcher(lua);
	if(cl == "CCEGLView") return register_cocos2d_CCEGLView(lua);
	if(cl == "CCIMEDispatcher") return register_cocos2d_CCIMEDispatcher(lua);
	if(cl == "CCKeyboardDispatcher") return register_cocos2d_CCKeyboardDispatcher(lua);
	if(cl == "CCDirector") return register_cocos2d_CCDirector(lua);
	if(cl == "CCNodeRGBA") return register_cocos2d_CCNodeRGBA(lua);
	if(cl == "CCSprite") return register_cocos2d_CCSprite(lua);
	if(cl == "CCLabelBMFont") return register_cocos2d_CCLabelBMFont(lua);
	if(cl == "CCApplication") return register_cocos2d_CCApplication(lua);
	if(cl == "CCArray") return register_cocos2d_CCArray(lua);
	if(cl == "CCDictionary") return register_cocos2d_CCDictionary(lua);
	if(cl == "CCTransitionFade") return register_cocos2d_CCTransitionFade(lua);
	if(cl == "CCDrawNode") return register_cocos2d_CCDrawNode(lua);
	if(cl == "CCSpriteBatchNode") return register_cocos2d_CCSpriteBatchNode(lua);
	if(cl == "CCMenuItem") return register_cocos2d_CCMenuItem(lua);
	if(cl == "CCMenu") return register_cocos2d_CCMenu(lua);
	if(cl == "CCDelayTime") return register_cocos2d_CCDelayTime(lua);

	if(cl == "GJDropDownLayer") return register_GJDropDownLayer(lua);
	if(cl == "AccountHelpLayer") return register_AccountHelpLayer(lua);
	if(cl == "AccountLayer") return register_AccountLayer(lua);
	if(cl == "FLAlertLayer") return register_FLAlertLayer(lua);
	if(cl == "AccountLoginLayer") return register_AccountLoginLayer(lua);
	if(cl == "AccountRegisterLayer") return register_AccountRegisterLayer(lua);
	if(cl == "AchievementBar") return register_AchievementBar(lua);
	if(cl == "AchievementManager") return register_AchievementManager(lua);
	if(cl == "AchievementNotifier") return register_AchievementNotifier(lua);
	if(cl == "AchievementsLayer") return register_AchievementsLayer(lua);
	if(cl == "CCSpritePlus") return register_CCSpritePlus(lua);
	if(cl == "GameObject") return register_GameObject(lua);
	if(cl == "EnhancedGameObject") return register_EnhancedGameObject(lua);
	if(cl == "EffectGameObject") return register_EffectGameObject(lua);
	if(cl == "AdvancedFollowTriggerObject") return register_AdvancedFollowTriggerObject(lua);
	if(cl == "AdvancedFollowEditObject") return register_AdvancedFollowEditObject(lua);
	if(cl == "AnimatedGameObject") return register_AnimatedGameObject(lua);
	if(cl == "CCAnimatedSprite") return register_CCAnimatedSprite(lua);
	if(cl == "AnimatedShopKeeper") return register_AnimatedShopKeeper(lua);
	if(cl == "AppDelegate") return register_AppDelegate(lua);
	if(cl == "AudioEffectsLayer") return register_AudioEffectsLayer(lua);
	if(cl == "AudioLineGuideGameObject") return register_AudioLineGuideGameObject(lua);
	if(cl == "BoomListView") return register_BoomListView(lua);
	if(cl == "BoomScrollLayer") return register_BoomScrollLayer(lua);
	if(cl == "BrowseSmartTemplateLayer") return register_BrowseSmartTemplateLayer(lua);
	if(cl == "BrowseSmartKeyLayer") return register_BrowseSmartKeyLayer(lua);
	if(cl == "ButtonSprite") return register_ButtonSprite(lua);
	if(cl == "CameraTriggerGameObject") return register_CameraTriggerGameObject(lua);
	if(cl == "CCBlockLayer") return register_CCBlockLayer(lua);
	if(cl == "CCCircleWave") return register_CCCircleWave(lua);
	if(cl == "CCContentLayer") return register_CCContentLayer(lua);
	if(cl == "CCCounterLabel") return register_CCCounterLabel(lua);
	if(cl == "CCMenuItemSpriteExtra") return register_CCMenuItemSpriteExtra(lua);
	if(cl == "CCMenuItemToggler") return register_CCMenuItemToggler(lua);
	if(cl == "CCMoveCNode") return register_CCMoveCNode(lua);
	if(cl == "CCPartAnimSprite") return register_CCPartAnimSprite(lua);
	if(cl == "CCScrollLayerExt") return register_CCScrollLayerExt(lua);
	if(cl == "CCSpriteGrayscale") return register_CCSpriteGrayscale(lua);
	if(cl == "CCSpritePart") return register_CCSpritePart(lua);
	if(cl == "CCTextInputNode") return register_CCTextInputNode(lua);
	if(cl == "ChallengesPage") return register_ChallengesPage(lua);
	if(cl == "GJChallengeItem") return register_GJChallengeItem(lua);
	if(cl == "ChallengeNode") return register_ChallengeNode(lua);
	if(cl == "CharacterColorPage") return register_CharacterColorPage(lua);
	if(cl == "CheckpointObject") return register_CheckpointObject(lua);
	if(cl == "CollisionBlockPopup") return register_CollisionBlockPopup(lua);
	if(cl == "ColorAction") return register_ColorAction(lua);
	if(cl == "ColorActionSprite") return register_ColorActionSprite(lua);
	if(cl == "ColorChannelSprite") return register_ColorChannelSprite(lua);
	if(cl == "ColorSelectLiveOverlay") return register_ColorSelectLiveOverlay(lua);
	if(cl == "SetupTriggerPopup") return register_SetupTriggerPopup(lua);
	if(cl == "ColorSelectPopup") return register_ColorSelectPopup(lua);
	if(cl == "CommentCell") return register_CommentCell(lua);
	if(cl == "CommunityCreditNode") return register_CommunityCreditNode(lua);
	if(cl == "CommunityCreditsPage") return register_CommunityCreditsPage(lua);
	if(cl == "ConfigureHSVWidget") return register_ConfigureHSVWidget(lua);
	if(cl == "ConfigureValuePopup") return register_ConfigureValuePopup(lua);
	if(cl == "CountTriggerGameObject") return register_CountTriggerGameObject(lua);
	if(cl == "CreateGuidelinesLayer") return register_CreateGuidelinesLayer(lua);
	if(cl == "CreateMenuItem") return register_CreateMenuItem(lua);
	if(cl == "CreateParticlePopup") return register_CreateParticlePopup(lua);
	if(cl == "CreatorLayer") return register_CreatorLayer(lua);
	if(cl == "CurrencyRewardLayer") return register_CurrencyRewardLayer(lua);
	if(cl == "CustomizeObjectLayer") return register_CustomizeObjectLayer(lua);
	if(cl == "CustomizeObjectSettingsPopup") return register_CustomizeObjectSettingsPopup(lua);
	if(cl == "CustomListView") return register_CustomListView(lua);
	if(cl == "CustomSongCell") return register_CustomSongCell(lua);
	if(cl == "CustomSFXCell") return register_CustomSFXCell(lua);
	if(cl == "CustomSFXWidget") return register_CustomSFXWidget(lua);
	if(cl == "CustomSongLayer") return register_CustomSongLayer(lua);
	if(cl == "CustomSongWidget") return register_CustomSongWidget(lua);
	if(cl == "DailyLevelNode") return register_DailyLevelNode(lua);
	if(cl == "DailyLevelPage") return register_DailyLevelPage(lua);
	if(cl == "RingObject") return register_RingObject(lua);
	if(cl == "DashRingObject") return register_DashRingObject(lua);
	if(cl == "DemonFilterSelectLayer") return register_DemonFilterSelectLayer(lua);
	if(cl == "DialogLayer") return register_DialogLayer(lua);
	if(cl == "DialogObject") return register_DialogObject(lua);
	if(cl == "DrawGridLayer") return register_DrawGridLayer(lua);
	if(cl == "EditButtonBar") return register_EditButtonBar(lua);
	if(cl == "EditGameObjectPopup") return register_EditGameObjectPopup(lua);
	if(cl == "EditLevelLayer") return register_EditLevelLayer(lua);
	if(cl == "GJOptionsLayer") return register_GJOptionsLayer(lua);
	if(cl == "EditorOptionsLayer") return register_EditorOptionsLayer(lua);
	if(cl == "EditorPauseLayer") return register_EditorPauseLayer(lua);
	if(cl == "EditorUI") return register_EditorUI(lua);
	if(cl == "EditTriggersPopup") return register_EditTriggersPopup(lua);
	if(cl == "EndLevelLayer") return register_EndLevelLayer(lua);
	if(cl == "EndPortalObject") return register_EndPortalObject(lua);
	if(cl == "EnhancedTriggerObject") return register_EnhancedTriggerObject(lua);
	if(cl == "EnterEffectObject") return register_EnterEffectObject(lua);
	if(cl == "EventLinkTrigger") return register_EventLinkTrigger(lua);
	if(cl == "ExtendedLayer") return register_ExtendedLayer(lua);
	if(cl == "GManager") return register_GManager(lua);
	if(cl == "FindBPMLayer") return register_FindBPMLayer(lua);
	if(cl == "SetIDPopup") return register_SetIDPopup(lua);
	if(cl == "FindObjectPopup") return register_FindObjectPopup(lua);
	if(cl == "FMODAudioEngine") return register_FMODAudioEngine(lua);
	if(cl == "FMODLevelVisualizer") return register_FMODLevelVisualizer(lua);
	if(cl == "FollowRewardPage") return register_FollowRewardPage(lua);
	if(cl == "ForceBlockGameObject") return register_ForceBlockGameObject(lua);
	if(cl == "FRequestProfilePage") return register_FRequestProfilePage(lua);
	if(cl == "FriendRequestPopup") return register_FriendRequestPopup(lua);
	if(cl == "FriendsProfilePage") return register_FriendsProfilePage(lua);
	if(cl == "GameCell") return register_GameCell(lua);
	if(cl == "GameLevelManager") return register_GameLevelManager(lua);
	if(cl == "GameLevelOptionsLayer") return register_GameLevelOptionsLayer(lua);
	if(cl == "GameManager") return register_GameManager(lua);
	if(cl == "GameObjectCopy") return register_GameObjectCopy(lua);
	if(cl == "GameOptionsLayer") return register_GameOptionsLayer(lua);
	if(cl == "GameOptionsTrigger") return register_GameOptionsTrigger(lua);
	if(cl == "GameStatsManager") return register_GameStatsManager(lua);
	if(cl == "GameToolbox") return register_GameToolbox(lua);
	if(cl == "GauntletLayer") return register_GauntletLayer(lua);
	if(cl == "GauntletNode") return register_GauntletNode(lua);
	if(cl == "GauntletSelectLayer") return register_GauntletSelectLayer(lua);
	if(cl == "GhostTrailEffect") return register_GhostTrailEffect(lua);
	if(cl == "GJAccountManager") return register_GJAccountManager(lua);
	if(cl == "GJAccountSettingsLayer") return register_GJAccountSettingsLayer(lua);
	if(cl == "GJActionManager") return register_GJActionManager(lua);
	if(cl == "GJGameState") return register_GJGameState(lua);
	if(cl == "GJBaseGameLayer") return register_GJBaseGameLayer(lua);
	if(cl == "GJChestSprite") return register_GJChestSprite(lua);
	if(cl == "GJColorSetupLayer") return register_GJColorSetupLayer(lua);
	if(cl == "GJComment") return register_GJComment(lua);
	if(cl == "GJCommentListLayer") return register_GJCommentListLayer(lua);
	if(cl == "GJDifficultySprite") return register_GJDifficultySprite(lua);
	if(cl == "GJEffectManager") return register_GJEffectManager(lua);
	if(cl == "GJGroundLayer") return register_GJGroundLayer(lua);
	if(cl == "GJFollowCommandLayer") return register_GJFollowCommandLayer(lua);
	if(cl == "GJGameLevel") return register_GJGameLevel(lua);
	if(cl == "GJGameLoadingLayer") return register_GJGameLoadingLayer(lua);
	if(cl == "GJGarageLayer") return register_GJGarageLayer(lua);
	if(cl == "GJGradientLayer") return register_GJGradientLayer(lua);
	if(cl == "GJItemIcon") return register_GJItemIcon(lua);
	if(cl == "GJLevelList") return register_GJLevelList(lua);
	if(cl == "GJLevelScoreCell") return register_GJLevelScoreCell(lua);
	if(cl == "GJListLayer") return register_GJListLayer(lua);
	if(cl == "GJLocalLevelScoreCell") return register_GJLocalLevelScoreCell(lua);
	if(cl == "GJMapPack") return register_GJMapPack(lua);
	if(cl == "GJMessageCell") return register_GJMessageCell(lua);
	if(cl == "GJMessagePopup") return register_GJMessagePopup(lua);
	if(cl == "GJMoreGamesLayer") return register_GJMoreGamesLayer(lua);
	if(cl == "GJMultiplayerManager") return register_GJMultiplayerManager(lua);
	if(cl == "GJObjectDecoder") return register_GJObjectDecoder(lua);
	if(cl == "GJPathPage") return register_GJPathPage(lua);
	if(cl == "GJPathRewardPopup") return register_GJPathRewardPopup(lua);
	if(cl == "GJPathsLayer") return register_GJPathsLayer(lua);
	if(cl == "GJPathSprite") return register_GJPathSprite(lua);
	if(cl == "GJPFollowCommandLayer") return register_GJPFollowCommandLayer(lua);
	if(cl == "GJPromoPopup") return register_GJPromoPopup(lua);
	if(cl == "GJRequestCell") return register_GJRequestCell(lua);
	if(cl == "GJRewardObject") return register_GJRewardObject(lua);
	if(cl == "GJRobotSprite") return register_GJRobotSprite(lua);
	if(cl == "GJRotationControl") return register_GJRotationControl(lua);
	if(cl == "GJScaleControl") return register_GJScaleControl(lua);
	if(cl == "GJScoreCell") return register_GJScoreCell(lua);
	if(cl == "GJSearchObject") return register_GJSearchObject(lua);
	if(cl == "GJShopLayer") return register_GJShopLayer(lua);
	if(cl == "GJSmartBlockPreview") return register_GJSmartBlockPreview(lua);
	if(cl == "GJSmartPrefab") return register_GJSmartPrefab(lua);
	if(cl == "GJSmartTemplate") return register_GJSmartTemplate(lua);
	if(cl == "GJSongBrowser") return register_GJSongBrowser(lua);
	if(cl == "GJSpecialColorSelect") return register_GJSpecialColorSelect(lua);
	if(cl == "GJSpiderSprite") return register_GJSpiderSprite(lua);
	if(cl == "GJStoreItem") return register_GJStoreItem(lua);
	if(cl == "GJTransformControl") return register_GJTransformControl(lua);
	if(cl == "GJUINode") return register_GJUINode(lua);
	if(cl == "GJUserCell") return register_GJUserCell(lua);
	if(cl == "GJUserScore") return register_GJUserScore(lua);
	if(cl == "GJWriteMessagePopup") return register_GJWriteMessagePopup(lua);
	if(cl == "GooglePlayManager") return register_GooglePlayManager(lua);
	if(cl == "GradientTriggerObject") return register_GradientTriggerObject(lua);
	if(cl == "GraphicsReloadLayer") return register_GraphicsReloadLayer(lua);
	if(cl == "GravityEffectSprite") return register_GravityEffectSprite(lua);
	if(cl == "HardStreak") return register_HardStreak(lua);
	if(cl == "HSVLiveOverlay") return register_HSVLiveOverlay(lua);
	if(cl == "HSVWidgetPopup") return register_HSVWidgetPopup(lua);
	if(cl == "InfoAlertButton") return register_InfoAlertButton(lua);
	if(cl == "InfoLayer") return register_InfoLayer(lua);
	if(cl == "InheritanceNode") return register_InheritanceNode(lua);
	if(cl == "ItemInfoPopup") return register_ItemInfoPopup(lua);
	if(cl == "ItemTriggerGameObject") return register_ItemTriggerGameObject(lua);
	if(cl == "KeybindingsLayer") return register_KeybindingsLayer(lua);
	if(cl == "KeybindingsManager") return register_KeybindingsManager(lua);
	if(cl == "KeyframeAnimTriggerObject") return register_KeyframeAnimTriggerObject(lua);
	if(cl == "KeyframeGameObject") return register_KeyframeGameObject(lua);
	if(cl == "LabelGameObject") return register_LabelGameObject(lua);
	if(cl == "LeaderboardsLayer") return register_LeaderboardsLayer(lua);
	if(cl == "LevelAreaInnerLayer") return register_LevelAreaInnerLayer(lua);
	if(cl == "LevelAreaLayer") return register_LevelAreaLayer(lua);
	if(cl == "LevelBrowserLayer") return register_LevelBrowserLayer(lua);
	if(cl == "LevelCell") return register_LevelCell(lua);
	if(cl == "LevelEditorLayer") return register_LevelEditorLayer(lua);
	if(cl == "LevelInfoLayer") return register_LevelInfoLayer(lua);
	if(cl == "LevelLeaderboard") return register_LevelLeaderboard(lua);
	if(cl == "LevelListCell") return register_LevelListCell(lua);
	if(cl == "LevelListLayer") return register_LevelListLayer(lua);
	if(cl == "LevelOptionsLayer") return register_LevelOptionsLayer(lua);
	if(cl == "LevelOptionsLayer2") return register_LevelOptionsLayer2(lua);
	if(cl == "LevelPage") return register_LevelPage(lua);
	if(cl == "LevelSearchLayer") return register_LevelSearchLayer(lua);
	if(cl == "LevelSelectLayer") return register_LevelSelectLayer(lua);
	if(cl == "LevelSettingsLayer") return register_LevelSettingsLayer(lua);
	if(cl == "LevelSettingsObject") return register_LevelSettingsObject(lua);
	if(cl == "LevelTools") return register_LevelTools(lua);
	if(cl == "LikeItemLayer") return register_LikeItemLayer(lua);
	if(cl == "ListCell") return register_ListCell(lua);
	if(cl == "LoadingCircle") return register_LoadingCircle(lua);
	if(cl == "LoadingLayer") return register_LoadingLayer(lua);
	if(cl == "LocalLevelManager") return register_LocalLevelManager(lua);
	if(cl == "MapPackCell") return register_MapPackCell(lua);
	if(cl == "MenuGameLayer") return register_MenuGameLayer(lua);
	if(cl == "MenuLayer") return register_MenuLayer(lua);
	if(cl == "MessagesProfilePage") return register_MessagesProfilePage(lua);
	if(cl == "MoreOptionsLayer") return register_MoreOptionsLayer(lua);
	if(cl == "MoreSearchLayer") return register_MoreSearchLayer(lua);
	if(cl == "MoreVideoOptionsLayer") return register_MoreVideoOptionsLayer(lua);
	if(cl == "MultilineBitmapFont") return register_MultilineBitmapFont(lua);
	if(cl == "MultiTriggerPopup") return register_MultiTriggerPopup(lua);
	if(cl == "MusicArtistObject") return register_MusicArtistObject(lua);
	if(cl == "MusicBrowser") return register_MusicBrowser(lua);
	if(cl == "MusicDownloadManager") return register_MusicDownloadManager(lua);
	if(cl == "NewgroundsInfoLayer") return register_NewgroundsInfoLayer(lua);
	if(cl == "NumberInputLayer") return register_NumberInputLayer(lua);
	if(cl == "OBB2D") return register_OBB2D(lua);
	if(cl == "ObjectToolbox") return register_ObjectToolbox(lua);
	if(cl == "OptionsLayer") return register_OptionsLayer(lua);
	if(cl == "OptionsScrollLayer") return register_OptionsScrollLayer(lua);
	if(cl == "ParentalOptionsLayer") return register_ParentalOptionsLayer(lua);
	if(cl == "ParticleGameObject") return register_ParticleGameObject(lua);
	if(cl == "ParticlePreviewLayer") return register_ParticlePreviewLayer(lua);
	if(cl == "PauseLayer") return register_PauseLayer(lua);
	if(cl == "PlayerCheckpoint") return register_PlayerCheckpoint(lua);
	if(cl == "PlayerFireBoostSprite") return register_PlayerFireBoostSprite(lua);
	if(cl == "PlayerObject") return register_PlayerObject(lua);
	if(cl == "PlayLayer") return register_PlayLayer(lua);
	if(cl == "PointNode") return register_PointNode(lua);
	if(cl == "ProfilePage") return register_ProfilePage(lua);
	if(cl == "PurchaseItemPopup") return register_PurchaseItemPopup(lua);
	if(cl == "RandTriggerGameObject") return register_RandTriggerGameObject(lua);
	if(cl == "RateDemonLayer") return register_RateDemonLayer(lua);
	if(cl == "RateLevelLayer") return register_RateLevelLayer(lua);
	if(cl == "RateStarsLayer") return register_RateStarsLayer(lua);
	if(cl == "RetryLevelLayer") return register_RetryLevelLayer(lua);
	if(cl == "RewardsPage") return register_RewardsPage(lua);
	if(cl == "RewardUnlockLayer") return register_RewardUnlockLayer(lua);
	if(cl == "RotateGameplayGameObject") return register_RotateGameplayGameObject(lua);
	if(cl == "ScrollingLayer") return register_ScrollingLayer(lua);
	if(cl == "SearchButton") return register_SearchButton(lua);
	if(cl == "SetTextPopup") return register_SetTextPopup(lua);
	if(cl == "SearchSFXPopup") return register_SearchSFXPopup(lua);
	if(cl == "SecretLayer") return register_SecretLayer(lua);
	if(cl == "SecretLayer2") return register_SecretLayer2(lua);
	if(cl == "SecretLayer3") return register_SecretLayer3(lua);
	if(cl == "SecretLayer4") return register_SecretLayer4(lua);
	if(cl == "SecretRewardsLayer") return register_SecretRewardsLayer(lua);
	if(cl == "SelectArtLayer") return register_SelectArtLayer(lua);
	if(cl == "SelectEventLayer") return register_SelectEventLayer(lua);
	if(cl == "SelectFontLayer") return register_SelectFontLayer(lua);
	if(cl == "SelectListIconLayer") return register_SelectListIconLayer(lua);
	if(cl == "SelectPremadeLayer") return register_SelectPremadeLayer(lua);
	if(cl == "SelectSettingLayer") return register_SelectSettingLayer(lua);
	if(cl == "SelectSFXSortLayer") return register_SelectSFXSortLayer(lua);
	if(cl == "SequenceTriggerGameObject") return register_SequenceTriggerGameObject(lua);
	if(cl == "SetColorIDPopup") return register_SetColorIDPopup(lua);
	if(cl == "SetFolderPopup") return register_SetFolderPopup(lua);
	if(cl == "SetGroupIDLayer") return register_SetGroupIDLayer(lua);
	if(cl == "SetItemIDLayer") return register_SetItemIDLayer(lua);
	if(cl == "SetLevelOrderPopup") return register_SetLevelOrderPopup(lua);
	if(cl == "SetTargetIDLayer") return register_SetTargetIDLayer(lua);
	if(cl == "SetupAdvFollowEditPhysicsPopup") return register_SetupAdvFollowEditPhysicsPopup(lua);
	if(cl == "SetupAdvFollowPopup") return register_SetupAdvFollowPopup(lua);
	if(cl == "SetupAdvFollowRetargetPopup") return register_SetupAdvFollowRetargetPopup(lua);
	if(cl == "SetupAnimationPopup") return register_SetupAnimationPopup(lua);
	if(cl == "SetupAnimSettingsPopup") return register_SetupAnimSettingsPopup(lua);
	if(cl == "SetupAreaMoveTriggerPopup") return register_SetupAreaMoveTriggerPopup(lua);
	if(cl == "SetupAreaTintTriggerPopup") return register_SetupAreaTintTriggerPopup(lua);
	if(cl == "SetupAreaAnimTriggerPopup") return register_SetupAreaAnimTriggerPopup(lua);
	if(cl == "SetupAreaFadeTriggerPopup") return register_SetupAreaFadeTriggerPopup(lua);
	if(cl == "SetupAreaRotateTriggerPopup") return register_SetupAreaRotateTriggerPopup(lua);
	if(cl == "SetupAreaTransformTriggerPopup") return register_SetupAreaTransformTriggerPopup(lua);
	if(cl == "SetupAreaTriggerPopup") return register_SetupAreaTriggerPopup(lua);
	if(cl == "SetupArtSwitchPopup") return register_SetupArtSwitchPopup(lua);
	if(cl == "SetupAudioLineGuidePopup") return register_SetupAudioLineGuidePopup(lua);
	if(cl == "SetupAudioTriggerPopup") return register_SetupAudioTriggerPopup(lua);
	if(cl == "SetupBGSpeedTrigger") return register_SetupBGSpeedTrigger(lua);
	if(cl == "SetupCameraEdgePopup") return register_SetupCameraEdgePopup(lua);
	if(cl == "SetupCameraGuidePopup") return register_SetupCameraGuidePopup(lua);
	if(cl == "SetupCameraModePopup") return register_SetupCameraModePopup(lua);
	if(cl == "SetupCameraOffsetTrigger") return register_SetupCameraOffsetTrigger(lua);
	if(cl == "SetupCameraRotatePopup2") return register_SetupCameraRotatePopup2(lua);
	if(cl == "SetupCheckpointPopup") return register_SetupCheckpointPopup(lua);
	if(cl == "SetupCoinLayer") return register_SetupCoinLayer(lua);
	if(cl == "SetupInstantCollisionTriggerPopup") return register_SetupInstantCollisionTriggerPopup(lua);
	if(cl == "SetupCollisionStateTriggerPopup") return register_SetupCollisionStateTriggerPopup(lua);
	if(cl == "SetupCollisionTriggerPopup") return register_SetupCollisionTriggerPopup(lua);
	if(cl == "SetupCountTriggerPopup") return register_SetupCountTriggerPopup(lua);
	if(cl == "SetupDashRingPopup") return register_SetupDashRingPopup(lua);
	if(cl == "SetupEndPopup") return register_SetupEndPopup(lua);
	if(cl == "SetupEnterEffectPopup") return register_SetupEnterEffectPopup(lua);
	if(cl == "SetupEnterTriggerPopup") return register_SetupEnterTriggerPopup(lua);
	if(cl == "SetupEventLinkPopup") return register_SetupEventLinkPopup(lua);
	if(cl == "SetupForceBlockPopup") return register_SetupForceBlockPopup(lua);
	if(cl == "SetupGameplayOffsetPopup") return register_SetupGameplayOffsetPopup(lua);
	if(cl == "SetupGradientPopup") return register_SetupGradientPopup(lua);
	if(cl == "SetupGravityTriggerPopup") return register_SetupGravityTriggerPopup(lua);
	if(cl == "SetupInstantCountPopup") return register_SetupInstantCountPopup(lua);
	if(cl == "SetupInteractObjectPopup") return register_SetupInteractObjectPopup(lua);
	if(cl == "SetupItemCompareTriggerPopup") return register_SetupItemCompareTriggerPopup(lua);
	if(cl == "SetupItemEditTriggerPopup") return register_SetupItemEditTriggerPopup(lua);
	if(cl == "SetupKeyframeAnimPopup") return register_SetupKeyframeAnimPopup(lua);
	if(cl == "SetupKeyframePopup") return register_SetupKeyframePopup(lua);
	if(cl == "SetupMGTrigger") return register_SetupMGTrigger(lua);
	if(cl == "SetupMoveCommandPopup") return register_SetupMoveCommandPopup(lua);
	if(cl == "SetupObjectControlPopup") return register_SetupObjectControlPopup(lua);
	if(cl == "SetupObjectOptions2Popup") return register_SetupObjectOptions2Popup(lua);
	if(cl == "SetupObjectOptionsPopup") return register_SetupObjectOptionsPopup(lua);
	if(cl == "SetupObjectTogglePopup") return register_SetupObjectTogglePopup(lua);
	if(cl == "SetupOpacityPopup") return register_SetupOpacityPopup(lua);
	if(cl == "SetupOptionsTriggerPopup") return register_SetupOptionsTriggerPopup(lua);
	if(cl == "SetupPersistentItemTriggerPopup") return register_SetupPersistentItemTriggerPopup(lua);
	if(cl == "SetupPickupTriggerPopup") return register_SetupPickupTriggerPopup(lua);
	if(cl == "SetupPlatformerEndPopup") return register_SetupPlatformerEndPopup(lua);
	if(cl == "SetupPlayerControlPopup") return register_SetupPlayerControlPopup(lua);
	if(cl == "SetupPulsePopup") return register_SetupPulsePopup(lua);
	if(cl == "SetupRandAdvTriggerPopup") return register_SetupRandAdvTriggerPopup(lua);
	if(cl == "SetupRandTriggerPopup") return register_SetupRandTriggerPopup(lua);
	if(cl == "SetupResetTriggerPopup") return register_SetupResetTriggerPopup(lua);
	if(cl == "SetupReverbPopup") return register_SetupReverbPopup(lua);
	if(cl == "SetupRotateCommandPopup") return register_SetupRotateCommandPopup(lua);
	if(cl == "SetupRotateGameplayPopup") return register_SetupRotateGameplayPopup(lua);
	if(cl == "SetupRotatePopup") return register_SetupRotatePopup(lua);
	if(cl == "SetupSequenceTriggerPopup") return register_SetupSequenceTriggerPopup(lua);
	if(cl == "SetupSFXEditPopup") return register_SetupSFXEditPopup(lua);
	if(cl == "SetupSFXPopup") return register_SetupSFXPopup(lua);
	if(cl == "SetupShaderEffectPopup") return register_SetupShaderEffectPopup(lua);
	if(cl == "SetupShakePopup") return register_SetupShakePopup(lua);
	if(cl == "SetupSmartBlockLayer") return register_SetupSmartBlockLayer(lua);
	if(cl == "SetupSmartTemplateLayer") return register_SetupSmartTemplateLayer(lua);
	if(cl == "SetupSongTriggerPopup") return register_SetupSongTriggerPopup(lua);
	if(cl == "SetupSpawnParticlePopup") return register_SetupSpawnParticlePopup(lua);
	if(cl == "SetupSpawnPopup") return register_SetupSpawnPopup(lua);
	if(cl == "SetupStaticCameraPopup") return register_SetupStaticCameraPopup(lua);
	if(cl == "SetupStopTriggerPopup") return register_SetupStopTriggerPopup(lua);
	if(cl == "SetupTeleportPopup") return register_SetupTeleportPopup(lua);
	if(cl == "SetupTimerControlTriggerPopup") return register_SetupTimerControlTriggerPopup(lua);
	if(cl == "SetupTimerEventTriggerPopup") return register_SetupTimerEventTriggerPopup(lua);
	if(cl == "SetupTimerTriggerPopup") return register_SetupTimerTriggerPopup(lua);
	if(cl == "SetupTimeWarpPopup") return register_SetupTimeWarpPopup(lua);
	if(cl == "SetupTouchTogglePopup") return register_SetupTouchTogglePopup(lua);
	if(cl == "SetupTransformPopup") return register_SetupTransformPopup(lua);
	if(cl == "SetupZoomTriggerPopup") return register_SetupZoomTriggerPopup(lua);
	if(cl == "SFXBrowser") return register_SFXBrowser(lua);
	if(cl == "SFXInfoObject") return register_SFXInfoObject(lua);
	if(cl == "SFXFolderObject") return register_SFXFolderObject(lua);
	if(cl == "SFXSearchResult") return register_SFXSearchResult(lua);
	if(cl == "ShaderGameObject") return register_ShaderGameObject(lua);
	if(cl == "ShaderLayer") return register_ShaderLayer(lua);
	if(cl == "ShardsPage") return register_ShardsPage(lua);
	if(cl == "ShareCommentLayer") return register_ShareCommentLayer(lua);
	if(cl == "ShareLevelLayer") return register_ShareLevelLayer(lua);
	if(cl == "ShareLevelSettingsLayer") return register_ShareLevelSettingsLayer(lua);
	if(cl == "ShareListLayer") return register_ShareListLayer(lua);
	if(cl == "SimplePlayer") return register_SimplePlayer(lua);
	if(cl == "Slider") return register_Slider(lua);
	if(cl == "SliderThumb") return register_SliderThumb(lua);
	if(cl == "SliderTouchLogic") return register_SliderTouchLogic(lua);
	if(cl == "SmartGameObject") return register_SmartGameObject(lua);
	if(cl == "SongCell") return register_SongCell(lua);
	if(cl == "SongInfoLayer") return register_SongInfoLayer(lua);
	if(cl == "SongInfoObject") return register_SongInfoObject(lua);
	if(cl == "SongOptionsLayer") return register_SongOptionsLayer(lua);
	if(cl == "SongSelectNode") return register_SongSelectNode(lua);
	if(cl == "SongsLayer") return register_SongsLayer(lua);
	if(cl == "SpawnParticleGameObject") return register_SpawnParticleGameObject(lua);
	if(cl == "SpawnTriggerGameObject") return register_SpawnTriggerGameObject(lua);
	if(cl == "StartPosObject") return register_StartPosObject(lua);
	if(cl == "StatsCell") return register_StatsCell(lua);
	if(cl == "StatsLayer") return register_StatsLayer(lua);
	if(cl == "StatsObject") return register_StatsObject(lua);
	if(cl == "SupportLayer") return register_SupportLayer(lua);
	if(cl == "TableView") return register_TableView(lua);
	if(cl == "TeleportPortalObject") return register_TeleportPortalObject(lua);
	if(cl == "TextAlertPopup") return register_TextAlertPopup(lua);
	if(cl == "TextArea") return register_TextArea(lua);
	if(cl == "TextGameObject") return register_TextGameObject(lua);
	if(cl == "TimerTriggerGameObject") return register_TimerTriggerGameObject(lua);
	if(cl == "TopArtistsLayer") return register_TopArtistsLayer(lua);
	if(cl == "TOSPopup") return register_TOSPopup(lua);
	if(cl == "TransformTriggerGameObject") return register_TransformTriggerGameObject(lua);
	if(cl == "TriggerControlGameObject") return register_TriggerControlGameObject(lua);
	if(cl == "TutorialLayer") return register_TutorialLayer(lua);
	if(cl == "UILayer") return register_UILayer(lua);
	if(cl == "UIObjectSettingsPopup") return register_UIObjectSettingsPopup(lua);
	if(cl == "UIOptionsLayer") return register_UIOptionsLayer(lua);
	if(cl == "UISaveLoadLayer") return register_UISaveLoadLayer(lua);
	if(cl == "UndoObject") return register_UndoObject(lua);
	if(cl == "UpdateAccountSettingsPopup") return register_UpdateAccountSettingsPopup(lua);
	if(cl == "UploadActionPopup") return register_UploadActionPopup(lua);
	if(cl == "UploadListPopup") return register_UploadListPopup(lua);
	if(cl == "UploadPopup") return register_UploadPopup(lua);
	if(cl == "URLViewLayer") return register_URLViewLayer(lua);
	if(cl == "VideoOptionsLayer") return register_VideoOptionsLayer(lua);
}