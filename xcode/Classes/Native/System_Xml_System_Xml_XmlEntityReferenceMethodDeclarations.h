#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t6997;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t7001;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
 void XmlEntityReference__ctor_m48275 (XmlEntityReference_t6997 * __this, String_t* ___name, XmlDocument_t5524 * ___doc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
 XmlLinkedNode_t6983 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m48276 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
 void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m48277 (XmlEntityReference_t6997 * __this, XmlLinkedNode_t6983 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
 String_t* XmlEntityReference_get_BaseURI_m48278 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
 XmlEntity_t7001 * XmlEntityReference_get_Entity_m48279 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
 String_t* XmlEntityReference_get_ChildrenBaseURI_m48280 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
 bool XmlEntityReference_get_IsReadOnly_m48281 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
 String_t* XmlEntityReference_get_LocalName_m48282 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
 String_t* XmlEntityReference_get_Name_m48283 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
 int32_t XmlEntityReference_get_NodeType_m48284 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
 String_t* XmlEntityReference_get_Value_m48285 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
 void XmlEntityReference_set_Value_m48286 (XmlEntityReference_t6997 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlEntityReference_CloneNode_m48287 (XmlEntityReference_t6997 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteContentTo(System.Xml.XmlWriter)
 void XmlEntityReference_WriteContentTo_m48288 (XmlEntityReference_t6997 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteTo(System.Xml.XmlWriter)
 void XmlEntityReference_WriteTo_m48289 (XmlEntityReference_t6997 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
 void XmlEntityReference_SetReferencedEntityContent_m48290 (XmlEntityReference_t6997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
