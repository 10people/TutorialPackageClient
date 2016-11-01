#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t7114;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.String[]
struct StringU5BU5D_t333;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
 void NameValueCollection__ctor_m49420 (NameValueCollection_t7114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameValueCollection__ctor_m49421 (NameValueCollection_t7114 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
 String_t* NameValueCollection_get_Item_m49422 (NameValueCollection_t7114 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
 void NameValueCollection_set_Item_m49423 (NameValueCollection_t7114 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
 void NameValueCollection_Add_m49424 (NameValueCollection_t7114 * __this, String_t* ___name, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
 String_t* NameValueCollection_Get_m49425 (NameValueCollection_t7114 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
 String_t* NameValueCollection_Get_m49426 (NameValueCollection_t7114 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
 String_t* NameValueCollection_AsSingleString_m49427 (Object_t * __this/* static, unused */, ArrayList_t5157 * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
 String_t* NameValueCollection_GetKey_m49428 (NameValueCollection_t7114 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
 StringU5BU5D_t333* NameValueCollection_GetValues_m49429 (NameValueCollection_t7114 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
 StringU5BU5D_t333* NameValueCollection_AsStringArray_m49430 (Object_t * __this/* static, unused */, ArrayList_t5157 * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
 void NameValueCollection_Remove_m49431 (NameValueCollection_t7114 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
 void NameValueCollection_Set_m49432 (NameValueCollection_t7114 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
 void NameValueCollection_InvalidateCachedArrays_m49433 (NameValueCollection_t7114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
