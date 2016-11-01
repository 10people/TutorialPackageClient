#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlCDataSection
struct XmlCDataSection_t6986;
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

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
 void XmlCDataSection__ctor_m48049 (XmlCDataSection_t6986 * __this, String_t* ___data, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
 String_t* XmlCDataSection_get_LocalName_m48050 (XmlCDataSection_t6986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
 String_t* XmlCDataSection_get_Name_m48051 (XmlCDataSection_t6986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
 int32_t XmlCDataSection_get_NodeType_m48052 (XmlCDataSection_t6986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
 XmlNode_t5526 * XmlCDataSection_get_ParentNode_m48053 (XmlCDataSection_t6986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlCDataSection_CloneNode_m48054 (XmlCDataSection_t6986 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteContentTo(System.Xml.XmlWriter)
 void XmlCDataSection_WriteContentTo_m48055 (XmlCDataSection_t6986 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteTo(System.Xml.XmlWriter)
 void XmlCDataSection_WriteTo_m48056 (XmlCDataSection_t6986 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
