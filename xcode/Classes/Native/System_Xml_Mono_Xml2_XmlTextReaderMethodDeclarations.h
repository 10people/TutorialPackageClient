#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t7022;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.IO.TextReader
struct TextReader_t1019;
// System.IO.Stream
struct Stream_t1038;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Xml.XmlException
struct XmlException_t6940;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t7026;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"

// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48586 (XmlTextReader_t6941 * __this, String_t* ___url, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48587 (XmlTextReader_t6941 * __this, TextReader_t1019 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
 void XmlTextReader__ctor_m48588 (XmlTextReader_t6941 * __this, Stream_t1038 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t6684 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48589 (XmlTextReader_t6941 * __this, String_t* ___url, Stream_t1038 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48590 (XmlTextReader_t6941 * __this, String_t* ___url, TextReader_t1019 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
 void XmlTextReader__ctor_m48591 (XmlTextReader_t6941 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t6684 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
 void XmlTextReader__ctor_m48592 (XmlTextReader_t6941 * __this, String_t* ___url, TextReader_t1019 * ___fragment, int32_t ___fragType, XmlParserContext_t6684 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
 XmlParserContext_t6684 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m48593 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Xml2.XmlTextReader::GetStreamFromUrl(System.String,System.String&)
 Stream_t1038 * XmlTextReader_GetStreamFromUrl_m48594 (XmlTextReader_t6941 * __this, String_t* ___url, String_t** ___absoluteUriString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
 int32_t XmlTextReader_get_AttributeCount_m48595 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
 String_t* XmlTextReader_get_BaseURI_m48596 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
 bool XmlTextReader_get_CharacterChecking_m48597 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
 void XmlTextReader_set_CharacterChecking_m48598 (XmlTextReader_t6941 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
 bool XmlTextReader_get_CloseInput_m48599 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
 void XmlTextReader_set_CloseInput_m48600 (XmlTextReader_t6941 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
 int32_t XmlTextReader_get_Depth_m48601 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
 int32_t XmlTextReader_get_EntityHandling_m48602 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
 bool XmlTextReader_get_EOF_m48603 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
 bool XmlTextReader_get_IsDefault_m48604 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
 bool XmlTextReader_get_IsEmptyElement_m48605 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
 int32_t XmlTextReader_get_LineNumber_m48606 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
 int32_t XmlTextReader_get_LinePosition_m48607 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
 String_t* XmlTextReader_get_LocalName_m48608 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
 String_t* XmlTextReader_get_Name_m48609 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
 bool XmlTextReader_get_Namespaces_m48610 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
 String_t* XmlTextReader_get_NamespaceURI_m48611 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
 XmlNameTable_t6650 * XmlTextReader_get_NameTable_m48612 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
 int32_t XmlTextReader_get_NodeType_m48613 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
 bool XmlTextReader_get_Normalization_m48614 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
 void XmlTextReader_set_Normalization_m48615 (XmlTextReader_t6941 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
 String_t* XmlTextReader_get_Prefix_m48616 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
 int32_t XmlTextReader_get_ReadState_m48617 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
 XmlReaderSettings_t7022 * XmlTextReader_get_Settings_m48618 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
 String_t* XmlTextReader_get_Value_m48619 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
 int32_t XmlTextReader_get_WhitespaceHandling_m48620 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
 void XmlTextReader_set_WhitespaceHandling_m48621 (XmlTextReader_t6941 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
 void XmlTextReader_set_XmlResolver_m48622 (XmlTextReader_t6941 * __this, XmlResolver_t6678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
 int32_t XmlTextReader_get_XmlSpace_m48623 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
 void XmlTextReader_Close_m48624 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
 String_t* XmlTextReader_GetAttribute_m48625 (XmlTextReader_t6941 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
 int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m48626 (XmlTextReader_t6941 * __this, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
 String_t* XmlTextReader_GetAttribute_m48627 (XmlTextReader_t6941 * __this, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
 TextReader_t1019 * XmlTextReader_GetRemainder_m48628 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::HasLineInfo()
 bool XmlTextReader_HasLineInfo_m48629 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
 String_t* XmlTextReader_LookupNamespace_m48630 (XmlTextReader_t6941 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
 String_t* XmlTextReader_LookupNamespace_m48631 (XmlTextReader_t6941 * __this, String_t* ___prefix, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
 void XmlTextReader_MoveToAttribute_m48632 (XmlTextReader_t6941 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String)
 bool XmlTextReader_MoveToAttribute_m48633 (XmlTextReader_t6941 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
 bool XmlTextReader_MoveToAttribute_m48634 (XmlTextReader_t6941 * __this, String_t* ___localName, String_t* ___namespaceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
 bool XmlTextReader_MoveToElement_m48635 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
 bool XmlTextReader_MoveToFirstAttribute_m48636 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
 bool XmlTextReader_MoveToNextAttribute_m48637 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
 bool XmlTextReader_Read_m48638 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
 bool XmlTextReader_ReadAttributeValue_m48639 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
 int32_t XmlTextReader_ReadChars_m48640 (XmlTextReader_t6941 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
 void XmlTextReader_ResolveEntity_m48641 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
 void XmlTextReader_Skip_m48642 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
 DTDObjectModel_t6924 * XmlTextReader_get_DTD_m48643 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
 XmlResolver_t6678 * XmlTextReader_get_Resolver_m48644 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
 XmlException_t6940 * XmlTextReader_NotWFError_m48645 (XmlTextReader_t6941 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
 void XmlTextReader_Init_m48646 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
 void XmlTextReader_Clear_m48647 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
 void XmlTextReader_InitializeContext_m48648 (XmlTextReader_t6941 * __this, String_t* ___url, XmlParserContext_t6684 * ___context, TextReader_t1019 * ___fragment, int32_t ___fragType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
 int32_t XmlTextReader_get_Conformance_m48649 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
 void XmlTextReader_set_Conformance_m48650 (XmlTextReader_t6941 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
 void XmlTextReader_SetProperties_m48651 (XmlTextReader_t6941 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
 void XmlTextReader_SetTokenProperties_m48652 (XmlTextReader_t6941 * __this, XmlTokenInfo_t7026 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
 void XmlTextReader_ClearAttributes_m48653 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
 int32_t XmlTextReader_PeekSurrogate_m48654 (XmlTextReader_t6941 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
 int32_t XmlTextReader_PeekChar_m48655 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
 int32_t XmlTextReader_ReadChar_m48656 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
 void XmlTextReader_Advance_m48657 (XmlTextReader_t6941 * __this, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
 bool XmlTextReader_ReadTextReader_m48658 (XmlTextReader_t6941 * __this, int32_t ___remained, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
 bool XmlTextReader_ReadContent_m48659 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
 void XmlTextReader_SetEntityReferenceProperties_m48660 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
 void XmlTextReader_ReadStartTag_m48661 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
 void XmlTextReader_PushElementName_m48662 (XmlTextReader_t6941 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
 void XmlTextReader_ReadEndTag_m48663 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
 void XmlTextReader_CheckCurrentStateUpdate_m48664 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
 void XmlTextReader_AppendValueChar_m48665 (XmlTextReader_t6941 * __this, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
 void XmlTextReader_AppendSurrogatePairValueChar_m48666 (XmlTextReader_t6941 * __this, int32_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
 String_t* XmlTextReader_CreateValueString_m48667 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
 void XmlTextReader_ClearValueBuffer_m48668 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
 void XmlTextReader_ReadText_m48669 (XmlTextReader_t6941 * __this, bool ___notWhitespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
 int32_t XmlTextReader_ReadReference_m48670 (XmlTextReader_t6941 * __this, bool ___ignoreEntityReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
 int32_t XmlTextReader_ReadCharacterReference_m48671 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
 int32_t XmlTextReader_ReadEntityReference_m48672 (XmlTextReader_t6941 * __this, bool ___ignoreEntityReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
 void XmlTextReader_ReadAttributes_m48673 (XmlTextReader_t6941 * __this, bool ___isXmlDecl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
 void XmlTextReader_AddAttributeWithValue_m48674 (XmlTextReader_t6941 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
 void XmlTextReader_IncrementAttributeToken_m48675 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
 void XmlTextReader_IncrementAttributeValueToken_m48676 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
 void XmlTextReader_ReadAttributeValueTokens_m48677 (XmlTextReader_t6941 * __this, int32_t ___dummyQuoteChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
 void XmlTextReader_CheckAttributeEntityReferenceWFC_m48678 (XmlTextReader_t6941 * __this, String_t* ___entName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
 void XmlTextReader_ReadProcessingInstruction_m48679 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
 void XmlTextReader_VerifyXmlDeclaration_m48680 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
 bool XmlTextReader_SkipWhitespaceInString_m48681 (XmlTextReader_t6941 * __this, String_t* ___text, int32_t* ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
 void XmlTextReader_ParseAttributeFromString_m48682 (XmlTextReader_t6941 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
 void XmlTextReader_SkipTextDeclaration_m48683 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
 void XmlTextReader_ReadDeclaration_m48684 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
 void XmlTextReader_ReadComment_m48685 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
 void XmlTextReader_ReadCDATA_m48686 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
 void XmlTextReader_ReadDoctypeDecl_m48687 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
 DTDObjectModel_t6924 * XmlTextReader_GenerateDTDObjectModel_m48688 (XmlTextReader_t6941 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
 DTDObjectModel_t6924 * XmlTextReader_GenerateDTDObjectModel_m48689 (XmlTextReader_t6941 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
 int32_t XmlTextReader_get_State_m48690 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
 int32_t XmlTextReader_ReadValueChar_m48691 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
 void XmlTextReader_ExpectAndAppend_m48692 (XmlTextReader_t6941 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
 void XmlTextReader_ReadInternalSubset_m48693 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
 String_t* XmlTextReader_ReadSystemLiteral_m48694 (XmlTextReader_t6941 * __this, bool ___expectSYSTEM, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
 String_t* XmlTextReader_ReadPubidLiteral_m48695 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
 String_t* XmlTextReader_ReadName_m48696 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
 String_t* XmlTextReader_ReadName_m48697 (XmlTextReader_t6941 * __this, String_t** ___prefix, String_t** ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
 void XmlTextReader_Expect_m48698 (XmlTextReader_t6941 * __this, int32_t ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
 void XmlTextReader_Expect_m48699 (XmlTextReader_t6941 * __this, String_t* ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
 void XmlTextReader_ExpectAfterWhitespace_m48700 (XmlTextReader_t6941 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
 bool XmlTextReader_SkipWhitespace_m48701 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
 bool XmlTextReader_ReadWhitespace_m48702 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
 int32_t XmlTextReader_ReadCharsInternal_m48703 (XmlTextReader_t6941 * __this, CharU5BU5D_t1016* ___buffer, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
 bool XmlTextReader_ReadUntilEndTag_m48704 (XmlTextReader_t6941 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
