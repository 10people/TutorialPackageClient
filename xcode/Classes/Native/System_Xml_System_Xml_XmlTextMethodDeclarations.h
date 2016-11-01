#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlText
struct XmlText_t5528;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
 void XmlText__ctor_m48561 (XmlText_t5528 * __this, String_t* ___strData, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_LocalName()
 String_t* XmlText_get_LocalName_m48562 (XmlText_t5528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Name()
 String_t* XmlText_get_Name_m48563 (XmlText_t5528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
 int32_t XmlText_get_NodeType_m48564 (XmlText_t5528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Value()
 String_t* XmlText_get_Value_m48565 (XmlText_t5528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::set_Value(System.String)
 void XmlText_set_Value_m48566 (XmlText_t5528 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
 XmlNode_t5526 * XmlText_get_ParentNode_m48567 (XmlText_t5528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlText_CloneNode_m48568 (XmlText_t5528 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
 void XmlText_WriteContentTo_m48569 (XmlText_t5528 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
 void XmlText_WriteTo_m48570 (XmlText_t5528 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
