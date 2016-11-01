#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MailData/UserMail,MailData/UserMail>
struct Transform_1_t17435;
// System.Object
struct Object_t;
// MailData/UserMail
struct UserMail_t1901;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MailData/UserMail,MailData/UserMail>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m129648 (Transform_1_t17435 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MailData/UserMail,MailData/UserMail>::Invoke(TKey,TValue)
 UserMail_t1901 * Transform_1_Invoke_m129649 (Transform_1_t17435 * __this, uint64_t ___key, UserMail_t1901 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MailData/UserMail,MailData/UserMail>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m129650 (Transform_1_t17435 * __this, uint64_t ___key, UserMail_t1901 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MailData/UserMail,MailData/UserMail>::EndInvoke(System.IAsyncResult)
 UserMail_t1901 * Transform_1_EndInvoke_m129651 (Transform_1_t17435 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
