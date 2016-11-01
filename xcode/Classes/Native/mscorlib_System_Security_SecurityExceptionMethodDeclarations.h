#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t5718;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t8154;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
 void SecurityException__ctor_m56119 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
 void SecurityException__ctor_m51258 (SecurityException_t5718 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException__ctor_m56120 (SecurityException_t5718 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
 Object_t * SecurityException_get_Demanded_m56121 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
 Object_t * SecurityException_get_FirstPermissionThatFailed_m56122 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
 String_t* SecurityException_get_PermissionState_m56123 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
 Type_t * SecurityException_get_PermissionType_m56124 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
 String_t* SecurityException_get_GrantedSet_m56125 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
 String_t* SecurityException_get_RefusedSet_m56126 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException_GetObjectData_m56127 (SecurityException_t5718 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
 String_t* SecurityException_ToString_m40467 (SecurityException_t5718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
