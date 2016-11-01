#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDeclaration
struct XmlDeclaration_t6991;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
 void XmlDeclaration__ctor_m48134 (XmlDeclaration_t6991 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
 String_t* XmlDeclaration_get_Encoding_m48135 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
 void XmlDeclaration_set_Encoding_m48136 (XmlDeclaration_t6991 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
 String_t* XmlDeclaration_get_InnerText_m48137 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_InnerText(System.String)
 void XmlDeclaration_set_InnerText_m48138 (XmlDeclaration_t6991 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
 String_t* XmlDeclaration_get_LocalName_m48139 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
 String_t* XmlDeclaration_get_Name_m48140 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
 int32_t XmlDeclaration_get_NodeType_m48141 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
 String_t* XmlDeclaration_get_Standalone_m48142 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
 void XmlDeclaration_set_Standalone_m48143 (XmlDeclaration_t6991 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
 String_t* XmlDeclaration_get_Value_m48144 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
 void XmlDeclaration_set_Value_m48145 (XmlDeclaration_t6991 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
 String_t* XmlDeclaration_get_Version_m48146 (XmlDeclaration_t6991 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlDeclaration_CloneNode_m48147 (XmlDeclaration_t6991 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteContentTo(System.Xml.XmlWriter)
 void XmlDeclaration_WriteContentTo_m48148 (XmlDeclaration_t6991 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteTo(System.Xml.XmlWriter)
 void XmlDeclaration_WriteTo_m48149 (XmlDeclaration_t6991 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
 int32_t XmlDeclaration_SkipWhitespace_m48150 (XmlDeclaration_t6991 * __this, String_t* ___input, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
 void XmlDeclaration_ParseInput_m48151 (XmlDeclaration_t6991 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
