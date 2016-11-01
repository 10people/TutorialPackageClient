#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t6995;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t6985;
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

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
 void XmlDocumentType__ctor_m48224 (XmlDocumentType_t6995 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
 void XmlDocumentType__ctor_m48225 (XmlDocumentType_t6995 * __this, DTDObjectModel_t6924 * ___dtd, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
 void XmlDocumentType_ImportFromDTD_m48226 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
 DTDObjectModel_t6924 * XmlDocumentType_get_DTD_m48227 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
 XmlNamedNodeMap_t6985 * XmlDocumentType_get_Entities_m48228 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
 String_t* XmlDocumentType_get_InternalSubset_m48229 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
 bool XmlDocumentType_get_IsReadOnly_m48230 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
 String_t* XmlDocumentType_get_LocalName_m48231 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
 String_t* XmlDocumentType_get_Name_m48232 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
 int32_t XmlDocumentType_get_NodeType_m48233 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
 String_t* XmlDocumentType_get_PublicId_m48234 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
 String_t* XmlDocumentType_get_SystemId_m48235 (XmlDocumentType_t6995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlDocumentType_CloneNode_m48236 (XmlDocumentType_t6995 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
 void XmlDocumentType_WriteContentTo_m48237 (XmlDocumentType_t6995 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
 void XmlDocumentType_WriteTo_m48238 (XmlDocumentType_t6995 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
