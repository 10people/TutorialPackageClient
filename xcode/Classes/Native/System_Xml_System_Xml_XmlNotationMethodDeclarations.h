#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNotation
struct XmlNotation_t7017;
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

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
 void XmlNotation__ctor_m48439 (XmlNotation_t7017 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
 bool XmlNotation_get_IsReadOnly_m48440 (XmlNotation_t7017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
 String_t* XmlNotation_get_LocalName_m48441 (XmlNotation_t7017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
 String_t* XmlNotation_get_Name_m48442 (XmlNotation_t7017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
 int32_t XmlNotation_get_NodeType_m48443 (XmlNotation_t7017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlNotation_CloneNode_m48444 (XmlNotation_t7017 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
 void XmlNotation_WriteContentTo_m48445 (XmlNotation_t7017 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
 void XmlNotation_WriteTo_m48446 (XmlNotation_t7017 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
