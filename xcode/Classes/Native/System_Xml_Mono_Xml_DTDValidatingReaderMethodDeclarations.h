#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t6970;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t6966;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Object
struct Object_t;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t6968;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t6751;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t6952;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t6965;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
 void DTDValidatingReader__ctor_m47901 (DTDValidatingReader_t6970 * __this, XmlReader_t6677 * ___reader, XmlValidatingReader_t6968 * ___validatingReader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
 bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m47902 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
 EntityResolvingXmlReader_t6966 * DTDValidatingReader_get_Source_m47903 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
 DTDObjectModel_t6924 * DTDValidatingReader_get_DTD_m47904 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
 int32_t DTDValidatingReader_get_EntityHandling_m47905 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
 void DTDValidatingReader_set_EntityHandling_m47906 (DTDValidatingReader_t6970 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
 void DTDValidatingReader_Close_m47907 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
 int32_t DTDValidatingReader_GetAttributeIndex_m47908 (DTDValidatingReader_t6970 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
 int32_t DTDValidatingReader_GetAttributeIndex_m47909 (DTDValidatingReader_t6970 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
 String_t* DTDValidatingReader_GetAttribute_m47910 (DTDValidatingReader_t6970 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
 String_t* DTDValidatingReader_GetAttribute_m47911 (DTDValidatingReader_t6970 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
 String_t* DTDValidatingReader_LookupNamespace_m47912 (DTDValidatingReader_t6970 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
 void DTDValidatingReader_MoveToAttribute_m47913 (DTDValidatingReader_t6970 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
 bool DTDValidatingReader_MoveToAttribute_m47914 (DTDValidatingReader_t6970 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
 bool DTDValidatingReader_MoveToAttribute_m47915 (DTDValidatingReader_t6970 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
 bool DTDValidatingReader_MoveToElement_m47916 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
 bool DTDValidatingReader_MoveToFirstAttribute_m47917 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
 bool DTDValidatingReader_MoveToNextAttribute_m47918 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
 bool DTDValidatingReader_Read_m47919 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
 bool DTDValidatingReader_ReadContent_m47920 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
 bool DTDValidatingReader_ProcessContent_m47921 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
 void DTDValidatingReader_FillAttributes_m47922 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
 void DTDValidatingReader_ValidateText_m47923 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
 void DTDValidatingReader_ValidateWhitespaceNode_m47924 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
 void DTDValidatingReader_HandleError_m47925 (DTDValidatingReader_t6970 * __this, String_t* ___message, int32_t ___severity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
 void DTDValidatingReader_HandleError_m47926 (DTDValidatingReader_t6970 * __this, XmlSchemaException_t6751 * ___ex, int32_t ___severity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
 void DTDValidatingReader_ValidateAttributes_m47927 (DTDValidatingReader_t6970 * __this, DTDAttListDeclaration_t6952 * ___decl, bool ___validate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
 AttributeSlot_t6965 * DTDValidatingReader_GetAttributeSlot_m47928 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
 void DTDValidatingReader_DtdValidateAttributes_m47929 (DTDValidatingReader_t6970 * __this, DTDAttListDeclaration_t6952 * ___decl, bool ___validate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
 void DTDValidatingReader_ReadDoctype_m47930 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
 void DTDValidatingReader_ProcessStartElement_m47931 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
 void DTDValidatingReader_ProcessEndElement_m47932 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
 void DTDValidatingReader_VerifyDeclaredAttributes_m47933 (DTDValidatingReader_t6970 * __this, DTDAttListDeclaration_t6952 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
 bool DTDValidatingReader_ReadAttributeValue_m47934 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
 void DTDValidatingReader_ResolveEntity_m47935 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
 int32_t DTDValidatingReader_get_AttributeCount_m47936 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
 String_t* DTDValidatingReader_get_BaseURI_m47937 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
 bool DTDValidatingReader_get_CanResolveEntity_m47938 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
 int32_t DTDValidatingReader_get_Depth_m47939 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
 bool DTDValidatingReader_get_EOF_m47940 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
 bool DTDValidatingReader_get_IsDefault_m47941 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
 bool DTDValidatingReader_get_IsEmptyElement_m47942 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
 String_t* DTDValidatingReader_get_Item_m47943 (DTDValidatingReader_t6970 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
 String_t* DTDValidatingReader_get_Item_m47944 (DTDValidatingReader_t6970 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
 int32_t DTDValidatingReader_get_LineNumber_m47945 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
 int32_t DTDValidatingReader_get_LinePosition_m47946 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
 String_t* DTDValidatingReader_get_LocalName_m47947 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
 String_t* DTDValidatingReader_get_Name_m47948 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
 String_t* DTDValidatingReader_get_NamespaceURI_m47949 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
 XmlNameTable_t6650 * DTDValidatingReader_get_NameTable_m47950 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
 int32_t DTDValidatingReader_get_NodeType_m47951 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
 XmlParserContext_t6684 * DTDValidatingReader_get_ParserContext_m47952 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
 String_t* DTDValidatingReader_get_Prefix_m47953 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
 int32_t DTDValidatingReader_get_ReadState_m47954 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
 Object_t * DTDValidatingReader_get_SchemaType_m47955 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
 String_t* DTDValidatingReader_FilterNormalization_m47956 (DTDValidatingReader_t6970 * __this, String_t* ___attrName, String_t* ___rawValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
 String_t* DTDValidatingReader_get_Value_m47957 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
 void DTDValidatingReader_set_XmlResolver_m47958 (DTDValidatingReader_t6970 * __this, XmlResolver_t6678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
 int32_t DTDValidatingReader_get_XmlSpace_m47959 (DTDValidatingReader_t6970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
