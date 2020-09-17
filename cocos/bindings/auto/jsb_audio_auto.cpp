#include "cocos/bindings/auto/jsb_audio_auto.h"
#if (USE_AUDIO > 0) && (CC_PLATFORM == CC_PLATFORM_ANDROID || CC_PLATFORM == CC_PLATFORM_MAC_IOS || CC_PLATFORM == CC_PLATFORM_MAC_OSX || CC_PLATFORM == CC_PLATFORM_WINDOWS)
#include "cocos/bindings/manual/jsb_conversions.h"
#include "cocos/bindings/manual/jsb_global.h"
#include "audio/include/AudioEngine.h"

#ifndef JSB_ALLOC
#define JSB_ALLOC(kls, ...) new (std::nothrow) kls(__VA_ARGS__)
#endif

#ifndef JSB_FREE
#define JSB_FREE(ptr) delete ptr
#endif
se::Object* __jsb_cc_AudioProfile_proto = nullptr;
se::Class* __jsb_cc_AudioProfile_class = nullptr;

static bool js_audio_AudioProfile_get_name(se::State& s)
{
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_get_name : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= std_string_to_seval(cobj->name, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_audio_AudioProfile_get_name)

static bool js_audio_AudioProfile_set_name(se::State& s)
{
    const auto& args = s.args();
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_set_name : Invalid Native Object");

    CC_UNUSED bool ok = true;
    std::string arg0;
    ok &= seval_to_std_string(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_audio_AudioProfile_set_name : Error processing new value");
    cobj->name = arg0;
    return true;
}
SE_BIND_PROP_SET(js_audio_AudioProfile_set_name)

static bool js_audio_AudioProfile_get_maxInstances(se::State& s)
{
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_get_maxInstances : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= uint32_to_seval((unsigned int)cobj->maxInstances, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_audio_AudioProfile_get_maxInstances)

static bool js_audio_AudioProfile_set_maxInstances(se::State& s)
{
    const auto& args = s.args();
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_set_maxInstances : Invalid Native Object");

    CC_UNUSED bool ok = true;
    unsigned int arg0 = 0;
    ok &= seval_to_uint32(args[0], (uint32_t*)&arg0);
    SE_PRECONDITION2(ok, false, "js_audio_AudioProfile_set_maxInstances : Error processing new value");
    cobj->maxInstances = arg0;
    return true;
}
SE_BIND_PROP_SET(js_audio_AudioProfile_set_maxInstances)

static bool js_audio_AudioProfile_get_minDelay(se::State& s)
{
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_get_minDelay : Invalid Native Object");

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= double_to_seval(cobj->minDelay, &jsret);
    s.rval() = jsret;
    return true;
}
SE_BIND_PROP_GET(js_audio_AudioProfile_get_minDelay)

static bool js_audio_AudioProfile_set_minDelay(se::State& s)
{
    const auto& args = s.args();
    cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "js_audio_AudioProfile_set_minDelay : Invalid Native Object");

    CC_UNUSED bool ok = true;
    double arg0 = 0;
    ok &= seval_to_double(args[0], &arg0);
    SE_PRECONDITION2(ok, false, "js_audio_AudioProfile_set_minDelay : Error processing new value");
    cobj->minDelay = arg0;
    return true;
}
SE_BIND_PROP_SET(js_audio_AudioProfile_set_minDelay)

SE_DECLARE_FINALIZE_FUNC(js_cc_AudioProfile_finalize)

static bool js_audio_AudioProfile_constructor(se::State& s)
{
    cc::AudioProfile* cobj = JSB_ALLOC(cc::AudioProfile);
    s.thisObject()->setPrivateData(cobj);
    se::NonRefNativePtrCreatedByCtorMap::emplace(cobj);
    return true;
}
SE_BIND_CTOR(js_audio_AudioProfile_constructor, __jsb_cc_AudioProfile_class, js_cc_AudioProfile_finalize)




static bool js_cc_AudioProfile_finalize(se::State& s)
{
    auto iter = se::NonRefNativePtrCreatedByCtorMap::find(s.nativeThisObject());
    if (iter != se::NonRefNativePtrCreatedByCtorMap::end())
    {
        se::NonRefNativePtrCreatedByCtorMap::erase(iter);
        cc::AudioProfile* cobj = (cc::AudioProfile*)s.nativeThisObject();
        JSB_FREE(cobj);
    }
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_AudioProfile_finalize)

bool js_register_audio_AudioProfile(se::Object* obj)
{
    auto cls = se::Class::create("AudioProfile", obj, nullptr, _SE(js_audio_AudioProfile_constructor));

    cls->defineProperty("name", _SE(js_audio_AudioProfile_get_name), _SE(js_audio_AudioProfile_set_name));
    cls->defineProperty("maxInstances", _SE(js_audio_AudioProfile_get_maxInstances), _SE(js_audio_AudioProfile_set_maxInstances));
    cls->defineProperty("minDelay", _SE(js_audio_AudioProfile_get_minDelay), _SE(js_audio_AudioProfile_set_minDelay));
    cls->defineFinalizeFunction(_SE(js_cc_AudioProfile_finalize));
    cls->install();
    JSBClassType::registerClass<cc::AudioProfile>(cls);

    __jsb_cc_AudioProfile_proto = cls->getProto();
    __jsb_cc_AudioProfile_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_cc_AudioEngine_proto = nullptr;
se::Class* __jsb_cc_AudioEngine_class = nullptr;

static bool js_audio_AudioEngine_lazyInit(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cc::AudioEngine::lazyInit();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_lazyInit : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_lazyInit)

static bool js_audio_AudioEngine_setCurrentTime(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        float arg1 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setCurrentTime : Error processing arguments");
        bool result = cc::AudioEngine::setCurrentTime(arg0, arg1);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setCurrentTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setCurrentTime)

static bool js_audio_AudioEngine_getVolume(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getVolume : Error processing arguments");
        float result = cc::AudioEngine::getVolume(arg0);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getVolume : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getVolume)

static bool js_audio_AudioEngine_uncache(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_uncache : Error processing arguments");
        cc::AudioEngine::uncache(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_uncache)

static bool js_audio_AudioEngine_resumeAll(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::AudioEngine::resumeAll();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_resumeAll)

static bool js_audio_AudioEngine_stopAll(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::AudioEngine::stopAll();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_stopAll)

static bool js_audio_AudioEngine_pause(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_pause : Error processing arguments");
        cc::AudioEngine::pause(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_pause)

static bool js_audio_AudioEngine_end(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::AudioEngine::end();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_end)

static bool js_audio_AudioEngine_getMaxAudioInstance(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cc::AudioEngine::getMaxAudioInstance();
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getMaxAudioInstance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getMaxAudioInstance)

static bool js_audio_AudioEngine_isEnabled(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cc::AudioEngine::isEnabled();
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_isEnabled : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_isEnabled)

static bool js_audio_AudioEngine_getDurationFromFile(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getDurationFromFile : Error processing arguments");
        float result = cc::AudioEngine::getDurationFromFile(arg0);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getDurationFromFile : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getDurationFromFile)

static bool js_audio_AudioEngine_getCurrentTime(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getCurrentTime : Error processing arguments");
        float result = cc::AudioEngine::getCurrentTime(arg0);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getCurrentTime : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getCurrentTime)

static bool js_audio_AudioEngine_setMaxAudioInstance(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setMaxAudioInstance : Error processing arguments");
        bool result = cc::AudioEngine::setMaxAudioInstance(arg0);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setMaxAudioInstance : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setMaxAudioInstance)

static bool js_audio_AudioEngine_isLoop(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_isLoop : Error processing arguments");
        bool result = cc::AudioEngine::isLoop(arg0);
        ok &= boolean_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_isLoop : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_isLoop)

static bool js_audio_AudioEngine_pauseAll(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::AudioEngine::pauseAll();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_pauseAll)

static bool js_audio_AudioEngine_uncacheAll(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::AudioEngine::uncacheAll();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_uncacheAll)

static bool js_audio_AudioEngine_setVolume(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        float arg1 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_float(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setVolume : Error processing arguments");
        cc::AudioEngine::setVolume(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setVolume)

static bool js_audio_AudioEngine_preload(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            std::function<void (bool)> arg1;
            do {
                if (args[1].isObject() && args[1].toObject()->isFunction())
                {
                    se::Value jsThis(s.thisObject());
                    se::Value jsFunc(args[1]);
                    jsFunc.toObject()->root();
                    auto lambda = [=](bool larg0) -> void {
                        se::ScriptEngine::getInstance()->clearException();
                        se::AutoHandleScope hs;
            
                        CC_UNUSED bool ok = true;
                        se::ValueArray args;
                        args.resize(1);
                        ok &= boolean_to_seval(larg0, &args[0]);
                        se::Value rval;
                        se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                        se::Object* funcObj = jsFunc.toObject();
                        bool succeed = funcObj->call(args, thisObj, &rval);
                        if (!succeed) {
                            se::ScriptEngine::getInstance()->clearException();
                        }
                    };
                    arg1 = lambda;
                }
                else
                {
                    arg1 = nullptr;
                }
            } while(false)
            ;
            if (!ok) { ok = true; break; }
            cc::AudioEngine::preload(arg0, arg1);
            return true;
        }
    } while (false);
    do {
        if (argc == 1) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cc::AudioEngine::preload(arg0);
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_preload)

static bool js_audio_AudioEngine_setEnabled(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setEnabled : Error processing arguments");
        cc::AudioEngine::setEnabled(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setEnabled)

static bool js_audio_AudioEngine_play2d(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= seval_to_std_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        int result = cc::AudioEngine::play2d(arg0);
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        return true;
    }
    if (argc == 2) {
        std::string arg0;
        bool arg1;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        int result = cc::AudioEngine::play2d(arg0, arg1);
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        return true;
    }
    if (argc == 3) {
        std::string arg0;
        bool arg1;
        float arg2 = 0;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        int result = cc::AudioEngine::play2d(arg0, arg1, arg2);
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        return true;
    }
    if (argc == 4) {
        std::string arg0;
        bool arg1;
        float arg2 = 0;
        const cc::AudioProfile* arg3 = nullptr;
        ok &= seval_to_std_string(args[0], &arg0);
        ok &= seval_to_boolean(args[1], &arg1);
        ok &= seval_to_float(args[2], &arg2);
        ok &= seval_to_native_ptr(args[3], &arg3);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        int result = cc::AudioEngine::play2d(arg0, arg1, arg2, arg3);
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_play2d : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_play2d)

static bool js_audio_AudioEngine_getState(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getState : Error processing arguments");
        int result = (int)cc::AudioEngine::getState(arg0);
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getState : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getState)

static bool js_audio_AudioEngine_resume(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_resume : Error processing arguments");
        cc::AudioEngine::resume(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_resume)

static bool js_audio_AudioEngine_stop(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_stop : Error processing arguments");
        cc::AudioEngine::stop(arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_stop)

static bool js_audio_AudioEngine_getDuration(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getDuration : Error processing arguments");
        float result = cc::AudioEngine::getDuration(arg0);
        ok &= float_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getDuration : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getDuration)

static bool js_audio_AudioEngine_setLoop(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        bool arg1;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        ok &= seval_to_boolean(args[1], &arg1);
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setLoop : Error processing arguments");
        cc::AudioEngine::setLoop(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setLoop)

static bool js_audio_AudioEngine_getDefaultProfile(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::AudioProfile* result = cc::AudioEngine::getDefaultProfile();
        ok &= native_ptr_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getDefaultProfile : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getDefaultProfile)

static bool js_audio_AudioEngine_setFinishCallback(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        int arg0 = 0;
        std::function<void (int, const std::string&)> arg1;
        do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
        do {
            if (args[1].isObject() && args[1].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[1]);
                jsFunc.toObject()->root();
                auto lambda = [=](int larg0, const std::string& larg1) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(2);
                    ok &= int32_to_seval((int)larg0, &args[0]);
                    ok &= std_string_to_seval(larg1, &args[1]);
                    se::Value rval;
                    se::Object* thisObj = jsThis.isObject() ? jsThis.toObject() : nullptr;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg1 = lambda;
            }
            else
            {
                arg1 = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_setFinishCallback : Error processing arguments");
        cc::AudioEngine::setFinishCallback(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_setFinishCallback)

static bool js_audio_AudioEngine_getProfile(se::State& s)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            std::string arg0;
            ok &= seval_to_std_string(args[0], &arg0);
            if (!ok) { ok = true; break; }
            cc::AudioProfile* result = cc::AudioEngine::getProfile(arg0);
            ok &= native_ptr_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getProfile : Error processing arguments");
            return true;
        }
    } while (false);
    do {
        if (argc == 1) {
            int arg0 = 0;
            do { int32_t tmp = 0; ok &= seval_to_int32(args[0], &tmp); arg0 = (int)tmp; } while(false);
            if (!ok) { ok = true; break; }
            cc::AudioProfile* result = cc::AudioEngine::getProfile(arg0);
            ok &= native_ptr_to_seval(result, &s.rval());
            SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getProfile : Error processing arguments");
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getProfile)

static bool js_audio_AudioEngine_getPlayingAudioCount(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cc::AudioEngine::getPlayingAudioCount();
        ok &= int32_to_seval((int)result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_audio_AudioEngine_getPlayingAudioCount : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_audio_AudioEngine_getPlayingAudioCount)




bool js_register_audio_AudioEngine(se::Object* obj)
{
    auto cls = se::Class::create("AudioEngine", obj, nullptr, nullptr);

    cls->defineStaticFunction("lazyInit", _SE(js_audio_AudioEngine_lazyInit));
    cls->defineStaticFunction("setCurrentTime", _SE(js_audio_AudioEngine_setCurrentTime));
    cls->defineStaticFunction("getVolume", _SE(js_audio_AudioEngine_getVolume));
    cls->defineStaticFunction("uncache", _SE(js_audio_AudioEngine_uncache));
    cls->defineStaticFunction("resumeAll", _SE(js_audio_AudioEngine_resumeAll));
    cls->defineStaticFunction("stopAll", _SE(js_audio_AudioEngine_stopAll));
    cls->defineStaticFunction("pause", _SE(js_audio_AudioEngine_pause));
    cls->defineStaticFunction("end", _SE(js_audio_AudioEngine_end));
    cls->defineStaticFunction("getMaxAudioInstance", _SE(js_audio_AudioEngine_getMaxAudioInstance));
    cls->defineStaticFunction("isEnabled", _SE(js_audio_AudioEngine_isEnabled));
    cls->defineStaticFunction("getDurationFromFile", _SE(js_audio_AudioEngine_getDurationFromFile));
    cls->defineStaticFunction("getCurrentTime", _SE(js_audio_AudioEngine_getCurrentTime));
    cls->defineStaticFunction("setMaxAudioInstance", _SE(js_audio_AudioEngine_setMaxAudioInstance));
    cls->defineStaticFunction("isLoop", _SE(js_audio_AudioEngine_isLoop));
    cls->defineStaticFunction("pauseAll", _SE(js_audio_AudioEngine_pauseAll));
    cls->defineStaticFunction("uncacheAll", _SE(js_audio_AudioEngine_uncacheAll));
    cls->defineStaticFunction("setVolume", _SE(js_audio_AudioEngine_setVolume));
    cls->defineStaticFunction("preload", _SE(js_audio_AudioEngine_preload));
    cls->defineStaticFunction("setEnabled", _SE(js_audio_AudioEngine_setEnabled));
    cls->defineStaticFunction("play2d", _SE(js_audio_AudioEngine_play2d));
    cls->defineStaticFunction("getState", _SE(js_audio_AudioEngine_getState));
    cls->defineStaticFunction("resume", _SE(js_audio_AudioEngine_resume));
    cls->defineStaticFunction("stop", _SE(js_audio_AudioEngine_stop));
    cls->defineStaticFunction("getDuration", _SE(js_audio_AudioEngine_getDuration));
    cls->defineStaticFunction("setLoop", _SE(js_audio_AudioEngine_setLoop));
    cls->defineStaticFunction("getDefaultProfile", _SE(js_audio_AudioEngine_getDefaultProfile));
    cls->defineStaticFunction("setFinishCallback", _SE(js_audio_AudioEngine_setFinishCallback));
    cls->defineStaticFunction("getProfile", _SE(js_audio_AudioEngine_getProfile));
    cls->defineStaticFunction("getPlayingAudioCount", _SE(js_audio_AudioEngine_getPlayingAudioCount));
    cls->install();
    JSBClassType::registerClass<cc::AudioEngine>(cls);

    __jsb_cc_AudioEngine_proto = cls->getProto();
    __jsb_cc_AudioEngine_class = cls;

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

bool register_all_audio(se::Object* obj)
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("jsb", &nsVal))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("jsb", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_audio_AudioProfile(ns);
    js_register_audio_AudioEngine(ns);
    return true;
}

#endif //#if (USE_AUDIO > 0) && (CC_PLATFORM == CC_PLATFORM_ANDROID || CC_PLATFORM == CC_PLATFORM_MAC_IOS || CC_PLATFORM == CC_PLATFORM_MAC_OSX || CC_PLATFORM == CC_PLATFORM_WINDOWS)