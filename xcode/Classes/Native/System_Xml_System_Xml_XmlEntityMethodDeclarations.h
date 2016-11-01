#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntity
struct XmlEntity_t7001;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
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

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
 void XmlEntity__ctor_m48260 (XmlEntity_t7001 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
 XmlLinkedNode_t6983 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m48261 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
 void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m48262 (XmlEntity_t7001 * __this, XmlLinkedNode_t6983 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
 String_t* XmlEntity_get_BaseURI_m48263 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
 String_t* XmlEntity_get_InnerText_m48264 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::set_InnerText(System.String)
 void XmlEntity_set_InnerText_m48265 (XmlEntity_t7001 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
 bool XmlEntity_get_IsReadOnly_m48266 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
 String_t* XmlEntity_get_LocalName_m48267 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
 String_t* XmlEntity_get_Name_m48268 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
 int32_t XmlEntity_get_NodeType_m48269 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
 String_t* XmlEntity_get_SystemId_m48270 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlEntity_CloneNode_m48271 (XmlEntity_t7001 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteContentTo(System.Xml.XmlWriter)
 void XmlEntity_WriteContentTo_m48272 (XmlEntity_t7001 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteTo(System.Xml.XmlWriter)
 void XmlEntity_WriteTo_m48273 (XmlEntity_t7001 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
 void XmlEntity_SetEntityContent_m48274 (XmlEntity_t7001 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
