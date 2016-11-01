#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t6651;
// System.Xml.XmlReader
struct XmlReader_t6677;

// System.Void System.Xml.XmlQualifiedName::.ctor()
 void XmlQualifiedName__ctor_m48500 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
 void XmlQualifiedName__ctor_m48501 (XmlQualifiedName_t6656 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
 void XmlQualifiedName__ctor_m48502 (XmlQualifiedName_t6656 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
 void XmlQualifiedName__cctor_m48503 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
 bool XmlQualifiedName_get_IsEmpty_m48504 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
 String_t* XmlQualifiedName_get_Name_m48505 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
 String_t* XmlQualifiedName_get_Namespace_m48506 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
 bool XmlQualifiedName_Equals_m48507 (XmlQualifiedName_t6656 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
 int32_t XmlQualifiedName_GetHashCode_m48508 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
 String_t* XmlQualifiedName_ToString_m48509 (XmlQualifiedName_t6656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
 XmlQualifiedName_t6656 * XmlQualifiedName_Parse_m48510 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___resolver, bool ___considerDefaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
 XmlQualifiedName_t6656 * XmlQualifiedName_Parse_m48511 (Object_t * __this/* static, unused */, String_t* ___name, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
 bool XmlQualifiedName_op_Equality_m48512 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___a, XmlQualifiedName_t6656 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
 bool XmlQualifiedName_op_Inequality_m48513 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___a, XmlQualifiedName_t6656 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
