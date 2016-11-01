#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t23;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1029;
// System.Delegate
struct Delegate_t959;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m4101 (MulticastDelegate_t23 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m4099 (MulticastDelegate_t23 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m4100 (MulticastDelegate_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t1029* MulticastDelegate_GetInvocationList_m4103 (MulticastDelegate_t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t959 * MulticastDelegate_CombineImpl_m4104 (MulticastDelegate_t23 * __this, Delegate_t959 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m53353 (MulticastDelegate_t23 * __this, MulticastDelegate_t23 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t23 * MulticastDelegate_KPM_m53354 (Object_t * __this/* static, unused */, MulticastDelegate_t23 * ___needle, MulticastDelegate_t23 * ___haystack, MulticastDelegate_t23 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t959 * MulticastDelegate_RemoveImpl_m4105 (MulticastDelegate_t23 * __this, Delegate_t959 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::op_Equality(System.MulticastDelegate,System.MulticastDelegate)
 bool MulticastDelegate_op_Equality_m41965 (Object_t * __this/* static, unused */, MulticastDelegate_t23 * ___d1, MulticastDelegate_t23 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
