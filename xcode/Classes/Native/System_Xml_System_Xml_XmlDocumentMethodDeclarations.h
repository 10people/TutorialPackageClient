#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t6995;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t6993;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Text.Encoding
struct Encoding_t1037;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlImplementation
struct XmlImplementation_t6992;
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t6986;
// System.Xml.XmlComment
struct XmlComment_t5525;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t6996;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t6997;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t6998;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t6999;
// System.Xml.XmlText
struct XmlText_t5528;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t7000;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t6991;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.XmlWriter
struct XmlWriter_t5910;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
 void XmlDocument__ctor_m38993 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
 void XmlDocument__ctor_m48152 (XmlDocument_t5524 * __this, XmlImplementation_t6992 * ___imp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlNameTable)
 void XmlDocument__ctor_m48153 (XmlDocument_t5524 * __this, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
 void XmlDocument__ctor_m48154 (XmlDocument_t5524 * __this, XmlImplementation_t6992 * ___impl, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
 void XmlDocument__cctor_m48155 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
 XmlLinkedNode_t6983 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m48156 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
 void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m48157 (XmlDocument_t5524 * __this, XmlLinkedNode_t6983 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
 String_t* XmlDocument_get_BaseURI_m48158 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
 XmlElement_t5531 * XmlDocument_get_DocumentElement_m48159 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
 XmlDocumentType_t6995 * XmlDocument_get_DocumentType_m48160 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
 bool XmlDocument_get_IsReadOnly_m48161 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
 String_t* XmlDocument_get_LocalName_m48162 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
 String_t* XmlDocument_get_Name_m48163 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
 XmlNameEntryCache_t6993 * XmlDocument_get_NameCache_m48164 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
 XmlNameTable_t6650 * XmlDocument_get_NameTable_m48165 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
 int32_t XmlDocument_get_NodeType_m48166 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
 XmlDocument_t5524 * XmlDocument_get_OwnerDocument_m48167 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
 bool XmlDocument_get_PreserveWhitespace_m48168 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
 XmlResolver_t6678 * XmlDocument_get_Resolver_m48169 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
 String_t* XmlDocument_get_XmlLang_m48170 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
 int32_t XmlDocument_get_XmlSpace_m48171 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlDocument::get_TextEncoding()
 Encoding_t1037 * XmlDocument_get_TextEncoding_m48172 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
 XmlNode_t5526 * XmlDocument_get_ParentNode_m48173 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
 void XmlDocument_set_SchemaInfo_m48174 (XmlDocument_t5524 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
 void XmlDocument_AddIdenticalAttribute_m48175 (XmlDocument_t5524 * __this, XmlAttribute_t6763 * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
 XmlNode_t5526 * XmlDocument_CloneNode_m48176 (XmlDocument_t5524 * __this, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
 XmlAttribute_t6763 * XmlDocument_CreateAttribute_m48177 (XmlDocument_t5524 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
 XmlAttribute_t6763 * XmlDocument_CreateAttribute_m48178 (XmlDocument_t5524 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
 XmlAttribute_t6763 * XmlDocument_CreateAttribute_m48179 (XmlDocument_t5524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
 XmlAttribute_t6763 * XmlDocument_CreateAttribute_m48180 (XmlDocument_t5524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
 XmlCDataSection_t6986 * XmlDocument_CreateCDataSection_m48181 (XmlDocument_t5524 * __this, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
 XmlComment_t5525 * XmlDocument_CreateComment_m38994 (XmlDocument_t5524 * __this, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
 XmlDocumentFragment_t6996 * XmlDocument_CreateDocumentFragment_m48182 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
 XmlDocumentType_t6995 * XmlDocument_CreateDocumentType_m48183 (XmlDocument_t5524 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
 XmlDocumentType_t6995 * XmlDocument_CreateDocumentType_m48184 (XmlDocument_t5524 * __this, DTDObjectModel_t6924 * ___dtd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
 XmlElement_t5531 * XmlDocument_CreateElement_m38996 (XmlDocument_t5524 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
 XmlElement_t5531 * XmlDocument_CreateElement_m48185 (XmlDocument_t5524 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
 XmlElement_t5531 * XmlDocument_CreateElement_m48186 (XmlDocument_t5524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
 XmlElement_t5531 * XmlDocument_CreateElement_m48187 (XmlDocument_t5524 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
 XmlEntityReference_t6997 * XmlDocument_CreateEntityReference_m48188 (XmlDocument_t5524 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
 XmlProcessingInstruction_t6998 * XmlDocument_CreateProcessingInstruction_m48189 (XmlDocument_t5524 * __this, String_t* ___target, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
 XmlSignificantWhitespace_t6999 * XmlDocument_CreateSignificantWhitespace_m48190 (XmlDocument_t5524 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
 XmlText_t5528 * XmlDocument_CreateTextNode_m39000 (XmlDocument_t5524 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
 XmlWhitespace_t7000 * XmlDocument_CreateWhitespace_m48191 (XmlDocument_t5524 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
 XmlDeclaration_t6991 * XmlDocument_CreateXmlDeclaration_m48192 (XmlDocument_t5524 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
 XmlAttribute_t6763 * XmlDocument_GetIdenticalAttribute_m48193 (XmlDocument_t5524 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
 XmlNode_t5526 * XmlDocument_ImportNode_m48194 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, bool ___deep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.String)
 void XmlDocument_Load_m40738 (XmlDocument_t5524 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.Xml.XmlReader)
 void XmlDocument_Load_m48195 (XmlDocument_t5524 * __this, XmlReader_t6677 * ___xmlReader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
 void XmlDocument_onNodeChanged_m48196 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___parent, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
 void XmlDocument_onNodeChanging_m48197 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___parent, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
 void XmlDocument_onNodeInserted_m48198 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___newParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
 void XmlDocument_onNodeInserting_m48199 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___newParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
 void XmlDocument_onNodeRemoved_m48200 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___oldParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
 void XmlDocument_onNodeRemoving_m48201 (XmlDocument_t5524 * __this, XmlNode_t5526 * ___node, XmlNode_t5526 * ___oldParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
 void XmlDocument_ParseName_m48202 (XmlDocument_t5524 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
 XmlAttribute_t6763 * XmlDocument_ReadAttributeNode_m48203 (XmlDocument_t5524 * __this, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
 void XmlDocument_ReadAttributeNodeValue_m48204 (XmlDocument_t5524 * __this, XmlReader_t6677 * ___reader, XmlAttribute_t6763 * ___attribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
 XmlNode_t5526 * XmlDocument_ReadNode_m48205 (XmlDocument_t5524 * __this, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
 XmlNode_t5526 * XmlDocument_ReadNodeCore_m48206 (XmlDocument_t5524 * __this, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
 String_t* XmlDocument_MakeReaderErrorMessage_m48207 (XmlDocument_t5524 * __this, String_t* ___message, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
 void XmlDocument_RemoveIdenticalAttribute_m48208 (XmlDocument_t5524 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Save(System.String)
 void XmlDocument_Save_m39003 (XmlDocument_t5524 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteContentTo(System.Xml.XmlWriter)
 void XmlDocument_WriteContentTo_m48209 (XmlDocument_t5524 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteTo(System.Xml.XmlWriter)
 void XmlDocument_WriteTo_m48210 (XmlDocument_t5524 * __this, XmlWriter_t5910 * ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
 void XmlDocument_AddDefaultNameTableKeys_m48211 (XmlDocument_t5524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
 void XmlDocument_CheckIdTableUpdate_m48212 (XmlDocument_t5524 * __this, XmlAttribute_t6763 * ___attr, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
