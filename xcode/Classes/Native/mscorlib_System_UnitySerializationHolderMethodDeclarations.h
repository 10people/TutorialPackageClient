#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t8278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t7064;
// System.Reflection.Module
struct Module_t7743;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m57155 (UnitySerializationHolder_t8278 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m57156 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m57157 (Object_t * __this/* static, unused */, DBNull_t7064 * ___instance, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m57158 (Object_t * __this/* static, unused */, Module_t7743 * ___instance, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m57159 (UnitySerializationHolder_t8278 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m57160 (UnitySerializationHolder_t8278 * __this, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
