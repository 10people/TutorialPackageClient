#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidCallback
struct AndroidCallback_t1051;
// System.String
struct String_t;

// System.Void AndroidCallback::.ctor()
 void AndroidCallback__ctor_m6626 (AndroidCallback_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::.cctor()
 void AndroidCallback__cctor_m6627 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AndroidCallback AndroidCallback::Instance()
 AndroidCallback_t1051 * AndroidCallback_Instance_m6628 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::Awake()
 void AndroidCallback_Awake_m6629 (AndroidCallback_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::OnCallResult(System.String)
 void AndroidCallback_OnCallResult_m6630 (AndroidCallback_t1051 * __this, String_t* ___jsonstr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onLogin(System.String)
 void AndroidCallback_onLogin_m6631 (AndroidCallback_t1051 * __this, String_t* ___jsonLoginInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onPay(System.String)
 void AndroidCallback_onPay_m6632 (AndroidCallback_t1051 * __this, String_t* ___jsonOrder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onLogout(System.String)
 void AndroidCallback_onLogout_m6633 (AndroidCallback_t1051 * __this, String_t* ___jsonLogoutMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onChangeAccount(System.String)
 void AndroidCallback_onChangeAccount_m6634 (AndroidCallback_t1051 * __this, String_t* ___jsonLogoutMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onShare(System.String)
 void AndroidCallback_onShare_m6635 (AndroidCallback_t1051 * __this, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidCallback::onPaymentGoodInfoList(System.String)
 void AndroidCallback_onPaymentGoodInfoList_m6636 (AndroidCallback_t1051 * __this, String_t* ___goods, MethodInfo* method) IL2CPP_METHOD_ATTR;
