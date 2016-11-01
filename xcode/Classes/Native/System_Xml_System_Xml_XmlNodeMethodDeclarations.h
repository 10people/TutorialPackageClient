#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t6984;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t5747;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
 void XmlNode__ctor_m48394 (XmlNode_t5526 * __this, XmlDocument_t5524 * ___ownerDocument, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
 void XmlNode__cctor_m48395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
 Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m48396 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
 XmlAttributeCollection_t6984 * XmlNode_get_Attributes_m48397 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
 String_t* XmlNode_get_BaseURI_m48398 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
 String_t* XmlNode_get_ChildrenBaseURI_m48399 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
 XmlNodeList_t5747 * XmlNode_get_ChildNodes_m40739 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
 XmlNode_t5526 * XmlNode_get_FirstChild_m41213 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
 bool XmlNode_get_HasChildNodes_m48400 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
 String_t* XmlNode_get_InnerText_m40742 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_InnerText(System.String)
 void XmlNode_set_InnerText_m48401 (XmlNode_t5526 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
 void XmlNode_AppendChildValues_m48402 (XmlNode_t5526 * __this, StringBuilder_t1097 ** ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
 bool XmlNode_get_IsReadOnly_m48403 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
 XmlNode_t5526 * XmlNode_get_LastChild_m48404 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
 String_t* XmlNode_get_NamespaceURI_m48405 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
 XmlNode_t5526 * XmlNode_get_NextSibling_m48406 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
 XmlDocument_t5524 * XmlNode_get_OwnerDocument_m48407 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
 XmlNode_t5526 * XmlNode_get_ParentNode_m48408 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
 String_t* XmlNode_get_Prefix_m48409 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
 XmlNode_t5526 * XmlNode_get_PreviousSibling_m48410 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
 String_t* XmlNode_get_Value_m48411 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
 void XmlNode_set_Value_m48412 (XmlNode_t5526 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
 String_t* XmlNode_get_XmlLang_m48413 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
 int32_t XmlNode_get_XmlSpace_m48414 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
 void XmlNode_set_SchemaInfo_m48415 (XmlNode_t5526 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
 XmlNode_t5526 * XmlNode_AppendChild_m38995 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
 XmlNode_t5526 * XmlNode_AppendChild_m48416 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, bool ___checkNodeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
 Object_t * XmlNode_GetEnumerator_m41215 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
 XmlNode_t5526 * XmlNode_InsertBefore_m48417 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, XmlNode_t5526 * ___refChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
 bool XmlNode_IsAncestor_m48418 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
 XmlNode_t5526 * XmlNode_InsertBefore_m48419 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, XmlNode_t5526 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
 void XmlNode_CheckNodeInsertion_m48420 (XmlNode_t5526 * __this, XmlNode_t5526 * ___newChild, XmlNode_t5526 * ___refChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
 void XmlNode_RemoveAll_m48421 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
 XmlNode_t5526 * XmlNode_RemoveChild_m48422 (XmlNode_t5526 * __this, XmlNode_t5526 * ___oldChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
 void XmlNode_CheckNodeRemoval_m48423 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
 XmlNode_t5526 * XmlNode_RemoveChild_m48424 (XmlNode_t5526 * __this, XmlNode_t5526 * ___oldChild, bool ___checkNodeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
 XmlElement_t5531 * XmlNode_get_AttributeOwnerElement_m48425 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
 void XmlNode_set_AttributeOwnerElement_m48426 (XmlNode_t5526 * __this, XmlElement_t5531 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::WriteContentTo(System.Xml.XmlWriter)
// System.Void System.Xml.XmlNode::WriteTo(System.Xml.XmlWriter)
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
 XmlNamespaceManager_t6685 * XmlNode_ConstructNamespaceManager_m48427 (XmlNode_t5526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
