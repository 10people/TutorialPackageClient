#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t7621;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t2007;
struct AsyncOperation_t2007_marshaled;
// UnityEngine.Application/LogCallback
struct LogCallback_t5895;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.NetworkReachability
#include "UnityEngine_UnityEngine_NetworkReachability.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.UserAuthorization
#include "UnityEngine_UnityEngine_UserAuthorization.h"

// System.Void UnityEngine.Application::Quit()
 void Application_Quit_m38678 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
 void Application_LoadLevel_m39976 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.Int32)
 AsyncOperation_t2007 * Application_LoadLevelAsync_m39973 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String)
 AsyncOperation_t2007 * Application_LoadLevelAsync_m39978 (Object_t * __this/* static, unused */, String_t* ___levelName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
 AsyncOperation_t2007 * Application_LoadLevelAsync_m52522 (Object_t * __this/* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
 bool Application_get_isPlaying_m41841 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
 bool Application_get_isEditor_m38920 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
 int32_t Application_get_platform_m4254 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CaptureScreenshot(System.String,System.Int32)
 void Application_CaptureScreenshot_m52523 (Object_t * __this/* static, unused */, String_t* ___filename, int32_t ___superSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CaptureScreenshot(System.String)
 void Application_CaptureScreenshot_m6498 (Object_t * __this/* static, unused */, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasProLicense()
 bool Application_HasProLicense_m52524 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasAdvancedLicense()
 bool Application_HasAdvancedLicense_m52525 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
 String_t* Application_get_dataPath_m38974 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_streamingAssetsPath()
 String_t* Application_get_streamingAssetsPath_m4760 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
 String_t* Application_get_persistentDataPath_m4757 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_temporaryCachePath()
 String_t* Application_get_temporaryCachePath_m40729 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
 void Application_OpenURL_m39065 (Object_t * __this/* static, unused */, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
 void Application_set_targetFrameRate_m39458 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
 void Application_RegisterLogCallback_m41827 (Object_t * __this/* static, unused */, LogCallback_t5895 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType)
 void Application_CallLogCallback_m52526 (Object_t * __this/* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
 void Application_SetLogCallbackDefined_m52527 (Object_t * __this/* static, unused */, bool ___defined, bool ___threaded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
 int32_t Application_get_internetReachability_m40680 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean,System.Boolean)
 void Application_ReplyToUserAuthorizationRequest_m52528 (Object_t * __this/* static, unused */, bool ___reply, bool ___remember, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean)
 void Application_ReplyToUserAuthorizationRequest_m52529 (Object_t * __this/* static, unused */, bool ___reply, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::GetUserAuthorizationRequestMode_Internal()
 int32_t Application_GetUserAuthorizationRequestMode_Internal_m52530 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UserAuthorization UnityEngine.Application::GetUserAuthorizationRequestMode()
 int32_t Application_GetUserAuthorizationRequestMode_m52531 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
