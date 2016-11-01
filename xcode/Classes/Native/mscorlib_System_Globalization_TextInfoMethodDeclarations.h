#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.TextInfo
struct TextInfo_t7786;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Object
struct Object_t;
// System.Void
#include "mscorlib_System_Void.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
 void TextInfo__ctor_m54505 (TextInfo_t7786 * __this, CultureInfo_t6595 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m54506 (TextInfo_t7786 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
 String_t* TextInfo_get_CultureName_m54507 (TextInfo_t7786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
 bool TextInfo_Equals_m54508 (TextInfo_t7786 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
 int32_t TextInfo_GetHashCode_m54509 (TextInfo_t7786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
 String_t* TextInfo_ToString_m54510 (TextInfo_t7786 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
 uint16_t TextInfo_ToLower_m54511 (TextInfo_t7786 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
 uint16_t TextInfo_ToUpper_m54512 (TextInfo_t7786 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
 String_t* TextInfo_ToLower_m54513 (TextInfo_t7786 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToUpper(System.String)
 String_t* TextInfo_ToUpper_m54514 (TextInfo_t7786 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
