#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t6968;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t6769;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t7022;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t6752;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
 void XmlValidatingReader__ctor_m48824 (XmlValidatingReader_t6968 * __this, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
 XmlParserContext_t6684 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m48825 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
 int32_t XmlValidatingReader_get_AttributeCount_m48826 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
 String_t* XmlValidatingReader_get_BaseURI_m48827 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
 bool XmlValidatingReader_get_CanResolveEntity_m48828 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
 int32_t XmlValidatingReader_get_Depth_m48829 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
 int32_t XmlValidatingReader_get_EntityHandling_m48830 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
 void XmlValidatingReader_set_EntityHandling_m48831 (XmlValidatingReader_t6968 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
 bool XmlValidatingReader_get_EOF_m48832 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
 bool XmlValidatingReader_get_IsDefault_m48833 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
 bool XmlValidatingReader_get_IsEmptyElement_m48834 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
 int32_t XmlValidatingReader_get_LineNumber_m48835 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
 int32_t XmlValidatingReader_get_LinePosition_m48836 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_LocalName()
 String_t* XmlValidatingReader_get_LocalName_m48837 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Name()
 String_t* XmlValidatingReader_get_Name_m48838 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
 bool XmlValidatingReader_get_Namespaces_m48839 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
 String_t* XmlValidatingReader_get_NamespaceURI_m48840 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
 XmlNameTable_t6650 * XmlValidatingReader_get_NameTable_m48841 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
 int32_t XmlValidatingReader_get_NodeType_m48842 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Prefix()
 String_t* XmlValidatingReader_get_Prefix_m48843 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
 int32_t XmlValidatingReader_get_ReadState_m48844 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
 XmlResolver_t6678 * XmlValidatingReader_get_Resolver_m48845 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
 XmlSchemaCollection_t6769 * XmlValidatingReader_get_Schemas_m48846 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
 XmlReaderSettings_t7022 * XmlValidatingReader_get_Settings_m48847 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
 int32_t XmlValidatingReader_get_ValidationType_m48848 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
 void XmlValidatingReader_set_ValidationType_m48849 (XmlValidatingReader_t6968 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Value()
 String_t* XmlValidatingReader_get_Value_m48850 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
 int32_t XmlValidatingReader_get_XmlSpace_m48851 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::Close()
 void XmlValidatingReader_Close_m48852 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
 String_t* XmlValidatingReader_GetAttribute_m48853 (XmlValidatingReader_t6968 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
 String_t* XmlValidatingReader_GetAttribute_m48854 (XmlValidatingReader_t6968 * __this, String_t* ___localName, String_t* ___namespaceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
 bool XmlValidatingReader_HasLineInfo_m48855 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
 String_t* XmlValidatingReader_LookupNamespace_m48856 (XmlValidatingReader_t6968 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
 void XmlValidatingReader_MoveToAttribute_m48857 (XmlValidatingReader_t6968 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
 bool XmlValidatingReader_MoveToAttribute_m48858 (XmlValidatingReader_t6968 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
 bool XmlValidatingReader_MoveToAttribute_m48859 (XmlValidatingReader_t6968 * __this, String_t* ___localName, String_t* ___namespaceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
 bool XmlValidatingReader_MoveToElement_m48860 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
 bool XmlValidatingReader_MoveToFirstAttribute_m48861 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
 bool XmlValidatingReader_MoveToNextAttribute_m48862 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::Read()
 bool XmlValidatingReader_Read_m48863 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
 bool XmlValidatingReader_ReadAttributeValue_m48864 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::ReadString()
 String_t* XmlValidatingReader_ReadString_m48865 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
 void XmlValidatingReader_ResolveEntity_m48866 (XmlValidatingReader_t6968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
 void XmlValidatingReader_OnValidationEvent_m48867 (XmlValidatingReader_t6968 * __this, Object_t * ___o, ValidationEventArgs_t6752 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
