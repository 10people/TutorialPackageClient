#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlComment
struct XmlComment_t5525;
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

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
 void XmlComment__ctor_m48080 (XmlComment_t5525 * __this, String_t* ___comment, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
 String_t* XmlComment_get_LocalName_m48081 (XmlComment_t5525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
 String_t* XmlComment_get_Name_m48082 (XmlComment_t5525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
 int32_t XmlComment_get_NodeType_m48083 (XmlComment_t5525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlComment_CloneNode_m48084 (XmlComment_t5525 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteContentTo(System.Xml.XmlWriter)
 void XmlComment_WriteContentTo_m48085 (XmlComment_t5525 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteTo(System.Xml.XmlWriter)
 void XmlComment_WriteTo_m48086 (XmlComment_t5525 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
