#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlatformListener
struct PlatformListener_t4504;
// System.String
struct String_t;

// System.Void PlatformListener::.ctor()
 void PlatformListener__ctor_m32315 (PlatformListener_t4504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::.cctor()
 void PlatformListener__cctor_m32316 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlatformListener PlatformListener::Instance()
 PlatformListener_t4504 * PlatformListener_Instance_m32317 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::Awake()
 void PlatformListener_Awake_m32318 (PlatformListener_t4504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnCYUserLogin(System.String)
 void PlatformListener_OnCYUserLogin_m32319 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::SendLoginInfo()
 void PlatformListener_SendLoginInfo_m32320 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnCYUserLogout(System.String)
 void PlatformListener_OnCYUserLogout_m32321 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnCYPayResult(System.String)
 void PlatformListener_OnCYPayResult_m32322 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnLoginTimeOut()
 void PlatformListener_OnLoginTimeOut_m32323 (PlatformListener_t4504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::SendCYPay(System.Int32)
 void PlatformListener_SendCYPay_m32324 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnReqCYPayGoodListSuccess(System.String)
 void PlatformListener_OnReqCYPayGoodListSuccess_m32325 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnReqCYPayGoodListFail(System.String)
 void PlatformListener_OnReqCYPayGoodListFail_m32326 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformListener::OnUMengSNSSuccess(System.String)
 void PlatformListener_OnUMengSNSSuccess_m32327 (PlatformListener_t4504 * __this, String_t* ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
