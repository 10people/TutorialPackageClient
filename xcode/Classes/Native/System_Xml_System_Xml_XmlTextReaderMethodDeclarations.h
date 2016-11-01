#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t6967;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t7022;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.IO.TextReader
struct TextReader_t1019;
// System.IO.Stream
struct Stream_t1038;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
 void XmlTextReader__ctor_m48705 (XmlTextReader_t6967 * __this, TextReader_t1019 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48706 (XmlTextReader_t6967 * __this, String_t* ___url, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48707 (XmlTextReader_t6967 * __this, TextReader_t1019 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48708 (XmlTextReader_t6967 * __this, String_t* ___url, Stream_t1038 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
 void XmlTextReader__ctor_m48709 (XmlTextReader_t6967 * __this, String_t* ___url, TextReader_t1019 * ___input, XmlNameTable_t6650 * ___nt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
 void XmlTextReader__ctor_m48710 (XmlTextReader_t6967 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t6684 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
 void XmlTextReader__ctor_m48711 (XmlTextReader_t6967 * __this, XmlTextReader_t6941 * ___entityContainer, bool ___insideAttribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
 XmlParserContext_t6684 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m48712 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
 XmlReader_t6677 * XmlTextReader_get_Current_m48713 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
 int32_t XmlTextReader_get_AttributeCount_m48714 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
 String_t* XmlTextReader_get_BaseURI_m48715 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
 bool XmlTextReader_get_CanResolveEntity_m48716 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
 int32_t XmlTextReader_get_Depth_m48717 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
 bool XmlTextReader_get_EOF_m48718 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
 bool XmlTextReader_get_IsDefault_m48719 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
 bool XmlTextReader_get_IsEmptyElement_m48720 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
 String_t* XmlTextReader_get_LocalName_m48721 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
 String_t* XmlTextReader_get_Name_m48722 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
 String_t* XmlTextReader_get_NamespaceURI_m48723 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
 XmlNameTable_t6650 * XmlTextReader_get_NameTable_m48724 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
 int32_t XmlTextReader_get_NodeType_m48725 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
 XmlParserContext_t6684 * XmlTextReader_get_ParserContext_m48726 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
 String_t* XmlTextReader_get_Prefix_m48727 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
 int32_t XmlTextReader_get_ReadState_m48728 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
 XmlReaderSettings_t7022 * XmlTextReader_get_Settings_m48729 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
 String_t* XmlTextReader_get_Value_m48730 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
 int32_t XmlTextReader_get_XmlSpace_m48731 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
 bool XmlTextReader_get_CharacterChecking_m48732 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
 void XmlTextReader_set_CharacterChecking_m48733 (XmlTextReader_t6967 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
 bool XmlTextReader_get_CloseInput_m48734 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
 void XmlTextReader_set_CloseInput_m48735 (XmlTextReader_t6967 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
 void XmlTextReader_set_Conformance_m48736 (XmlTextReader_t6967 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
 XmlResolver_t6678 * XmlTextReader_get_Resolver_m48737 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
 void XmlTextReader_CopyProperties_m48738 (XmlTextReader_t6967 * __this, XmlTextReader_t6967 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
 int32_t XmlTextReader_get_EntityHandling_m48739 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
 int32_t XmlTextReader_get_LineNumber_m48740 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
 int32_t XmlTextReader_get_LinePosition_m48741 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
 bool XmlTextReader_get_Namespaces_m48742 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
 bool XmlTextReader_get_Normalization_m48743 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
 void XmlTextReader_set_Normalization_m48744 (XmlTextReader_t6967 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
 int32_t XmlTextReader_get_WhitespaceHandling_m48745 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
 void XmlTextReader_set_WhitespaceHandling_m48746 (XmlTextReader_t6967 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
 void XmlTextReader_set_XmlResolver_m48747 (XmlTextReader_t6967 * __this, XmlResolver_t6678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
 void XmlTextReader_SkipTextDeclaration_m48748 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
 void XmlTextReader_Close_m48749 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
 String_t* XmlTextReader_GetAttribute_m48750 (XmlTextReader_t6967 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
 String_t* XmlTextReader_GetAttribute_m48751 (XmlTextReader_t6967 * __this, String_t* ___localName, String_t* ___namespaceURI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
 String_t* XmlTextReader_LookupNamespace_m48752 (XmlTextReader_t6967 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
 void XmlTextReader_MoveToAttribute_m48753 (XmlTextReader_t6967 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
 bool XmlTextReader_MoveToAttribute_m48754 (XmlTextReader_t6967 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
 bool XmlTextReader_MoveToAttribute_m48755 (XmlTextReader_t6967 * __this, String_t* ___localName, String_t* ___namespaceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
 bool XmlTextReader_MoveToElement_m48756 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
 bool XmlTextReader_MoveToFirstAttribute_m48757 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
 bool XmlTextReader_MoveToNextAttribute_m48758 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
 bool XmlTextReader_Read_m48759 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
 bool XmlTextReader_ReadAttributeValue_m48760 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::ReadString()
 String_t* XmlTextReader_ReadString_m48761 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
 void XmlTextReader_ResolveEntity_m48762 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
 void XmlTextReader_CloseEntity_m48763 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
 void XmlTextReader_Skip_m48764 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
 TextReader_t1019 * XmlTextReader_GetRemainder_m48765 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
 bool XmlTextReader_HasLineInfo_m48766 (XmlTextReader_t6967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
