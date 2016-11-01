#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t6957;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
 void XmlAttribute__ctor_m48010 (XmlAttribute_t6763 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t5524 * ___doc, bool ___atomizedNames, bool ___checkNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
 XmlLinkedNode_t6983 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m48011 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
 void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m48012 (XmlAttribute_t6763 * __this, XmlLinkedNode_t6983 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
 String_t* XmlAttribute_get_BaseURI_m48013 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_InnerText(System.String)
 void XmlAttribute_set_InnerText_m48014 (XmlAttribute_t6763 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
 String_t* XmlAttribute_get_LocalName_m48015 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
 String_t* XmlAttribute_get_Name_m48016 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
 String_t* XmlAttribute_get_NamespaceURI_m48017 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
 int32_t XmlAttribute_get_NodeType_m48018 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
 XmlDocument_t5524 * XmlAttribute_get_OwnerDocument_m48019 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
 XmlElement_t5531 * XmlAttribute_get_OwnerElement_m48020 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
 XmlNode_t5526 * XmlAttribute_get_ParentNode_m48021 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
 String_t* XmlAttribute_get_Prefix_m48022 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
 void XmlAttribute_set_SchemaInfo_m48023 (XmlAttribute_t6763 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
 bool XmlAttribute_get_Specified_m48024 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
 String_t* XmlAttribute_get_Value_m48025 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
 void XmlAttribute_set_Value_m48026 (XmlAttribute_t6763 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
 String_t* XmlAttribute_get_XmlLang_m48027 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
 int32_t XmlAttribute_get_XmlSpace_m48028 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
 XmlNode_t5526 * XmlAttribute_AppendChild_m48029 (XmlAttribute_t6763 * __this, XmlNode_t5526 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
 XmlNode_t5526 * XmlAttribute_InsertBefore_m48030 (XmlAttribute_t6763 * __this, XmlNode_t5526 * ___newChild, XmlNode_t5526 * ___refChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
 XmlNode_t5526 * XmlAttribute_RemoveChild_m48031 (XmlAttribute_t6763 * __this, XmlNode_t5526 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlAttribute_CloneNode_m48032 (XmlAttribute_t6763 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
 void XmlAttribute_SetDefault_m48033 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteContentTo(System.Xml.XmlWriter)
 void XmlAttribute_WriteContentTo_m48034 (XmlAttribute_t6763 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
 void XmlAttribute_WriteTo_m48035 (XmlAttribute_t6763 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
 DTDAttributeDefinition_t6957 * XmlAttribute_GetAttributeDefinition_m48036 (XmlAttribute_t6763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
