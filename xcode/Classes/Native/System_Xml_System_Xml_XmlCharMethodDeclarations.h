#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlChar
struct XmlChar_t6988;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1016;

// System.Void System.Xml.XmlChar::.cctor()
 void XmlChar__cctor_m48057 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.Int32)
 bool XmlChar_IsWhitespace_m48058 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
 bool XmlChar_IsWhitespace_m48059 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
 int32_t XmlChar_IndexOfNonWhitespace_m48060 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsFirstNameChar(System.Int32)
 bool XmlChar_IsFirstNameChar_m48061 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsInvalid(System.Int32)
 bool XmlChar_IsInvalid_m48062 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
 int32_t XmlChar_IndexOfInvalid_m48063 (Object_t * __this/* static, unused */, String_t* ___s, bool ___allowSurrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
 int32_t XmlChar_IndexOfInvalid_m48064 (Object_t * __this/* static, unused */, CharU5BU5D_t1016* ___s, int32_t ___start, int32_t ___length, bool ___allowSurrogate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNameChar(System.Int32)
 bool XmlChar_IsNameChar_m48065 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCNameChar(System.Int32)
 bool XmlChar_IsNCNameChar_m48066 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
 bool XmlChar_IsName_m48067 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
 bool XmlChar_IsNCName_m48068 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNmToken(System.String)
 bool XmlChar_IsNmToken_m48069 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsPubidChar(System.Int32)
 bool XmlChar_IsPubidChar_m48070 (Object_t * __this/* static, unused */, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsValidIANAEncoding(System.String)
 bool XmlChar_IsValidIANAEncoding_m48071 (Object_t * __this/* static, unused */, String_t* ___ianaEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::GetPredefinedEntity(System.String)
 int32_t XmlChar_GetPredefinedEntity_m48072 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
