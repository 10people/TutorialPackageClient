#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t6984;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
 void XmlElement__ctor_m48239 (XmlElement_t5531 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t5524 * ___doc, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
 XmlLinkedNode_t6983 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m48240 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
 void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m48241 (XmlElement_t5531 * __this, XmlLinkedNode_t6983 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
 XmlAttributeCollection_t6984 * XmlElement_get_Attributes_m48242 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_HasAttributes()
 bool XmlElement_get_HasAttributes_m48243 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
 String_t* XmlElement_get_InnerText_m41216 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_InnerText(System.String)
 void XmlElement_set_InnerText_m41210 (XmlElement_t5531 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
 bool XmlElement_get_IsEmpty_m48244 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
 void XmlElement_set_IsEmpty_m48245 (XmlElement_t5531 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
 String_t* XmlElement_get_LocalName_m48246 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
 String_t* XmlElement_get_Name_m41214 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
 String_t* XmlElement_get_NamespaceURI_m48247 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
 XmlNode_t5526 * XmlElement_get_NextSibling_m48248 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
 int32_t XmlElement_get_NodeType_m48249 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
 XmlDocument_t5524 * XmlElement_get_OwnerDocument_m48250 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
 String_t* XmlElement_get_Prefix_m48251 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
 XmlNode_t5526 * XmlElement_get_ParentNode_m48252 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
 void XmlElement_set_SchemaInfo_m48253 (XmlElement_t5531 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlElement_CloneNode_m48254 (XmlElement_t5531 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
 void XmlElement_RemoveAll_m48255 (XmlElement_t5531 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
 void XmlElement_SetAttribute_m48256 (XmlElement_t5531 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
 XmlAttribute_t6763 * XmlElement_SetAttributeNode_m48257 (XmlElement_t5531 * __this, XmlAttribute_t6763 * ___newAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteContentTo(System.Xml.XmlWriter)
 void XmlElement_WriteContentTo_m48258 (XmlElement_t5531 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteTo(System.Xml.XmlWriter)
 void XmlElement_WriteTo_m48259 (XmlElement_t5531 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
