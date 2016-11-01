#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t6683;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t6659;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Exception
struct Exception_t972;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t6686;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6689;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t6690;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t6646;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t6655;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
 void XsdValidatingReader__ctor_m45946 (XsdValidatingReader_t6683 * __this, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
 void XsdValidatingReader__cctor_m45947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
 XsdValidationContext_t6659 * XsdValidatingReader_get_Context_m45948 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
 ArrayList_t5157 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m45949 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
 int32_t XsdValidatingReader_get_XsiNilDepth_m45950 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
 void XsdValidatingReader_set_XmlResolver_m45951 (XsdValidatingReader_t6683 * __this, XmlResolver_t6678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
 void XsdValidatingReader_set_Schemas_m45952 (XsdValidatingReader_t6683 * __this, XmlSchemaSet_t6680 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
 Object_t * XsdValidatingReader_get_SchemaType_m45953 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
 Object_t * XsdValidatingReader_get_SourceReaderSchemaType_m45954 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
 int32_t XsdValidatingReader_get_ValidationType_m45955 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
 void XsdValidatingReader_set_ValidationType_m45956 (XsdValidatingReader_t6683 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
 int32_t XsdValidatingReader_get_AttributeCount_m45957 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
 String_t* XsdValidatingReader_get_BaseURI_m45958 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
 bool XsdValidatingReader_get_CanResolveEntity_m45959 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
 int32_t XsdValidatingReader_get_Depth_m45960 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
 bool XsdValidatingReader_get_EOF_m45961 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
 bool XsdValidatingReader_get_IsDefault_m45962 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
 bool XsdValidatingReader_get_IsEmptyElement_m45963 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
 String_t* XsdValidatingReader_get_Item_m45964 (XsdValidatingReader_t6683 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
 String_t* XsdValidatingReader_get_Item_m45965 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
 int32_t XsdValidatingReader_get_LineNumber_m45966 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
 int32_t XsdValidatingReader_get_LinePosition_m45967 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
 String_t* XsdValidatingReader_get_LocalName_m45968 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
 String_t* XsdValidatingReader_get_Name_m45969 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
 String_t* XsdValidatingReader_get_NamespaceURI_m45970 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
 XmlNameTable_t6650 * XsdValidatingReader_get_NameTable_m45971 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
 int32_t XsdValidatingReader_get_NodeType_m45972 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
 XmlParserContext_t6684 * XsdValidatingReader_get_ParserContext_m45973 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
 XmlNamespaceManager_t6685 * XsdValidatingReader_get_NamespaceManager_m45974 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
 String_t* XsdValidatingReader_get_Prefix_m45975 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
 int32_t XsdValidatingReader_get_ReadState_m45976 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
 String_t* XsdValidatingReader_get_Value_m45977 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
 int32_t XsdValidatingReader_get_XmlSpace_m45978 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
 void XsdValidatingReader_HandleError_m45979 (XsdValidatingReader_t6683 * __this, String_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
 void XsdValidatingReader_HandleError_m45980 (XsdValidatingReader_t6683 * __this, String_t* ___error, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
 void XsdValidatingReader_HandleError_m45981 (XsdValidatingReader_t6683 * __this, String_t* ___error, Exception_t972 * ___innerException, bool ___isWarning, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
 void XsdValidatingReader_HandleError_m45982 (XsdValidatingReader_t6683 * __this, XmlSchemaValidationException_t6686 * ___schemaException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
 void XsdValidatingReader_HandleError_m45983 (XsdValidatingReader_t6683 * __this, XmlSchemaValidationException_t6686 * ___schemaException, bool ___isWarning, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
 XmlSchemaElement_t6657 * XsdValidatingReader_FindElement_m45984 (XsdValidatingReader_t6683 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
 XmlSchemaType_t6687 * XsdValidatingReader_FindType_m45985 (XsdValidatingReader_t6683 * __this, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
 void XsdValidatingReader_ValidateStartElementParticle_m45986 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
 void XsdValidatingReader_ValidateEndElementParticle_m45987 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
 void XsdValidatingReader_ValidateCharacters_m45988 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
 void XsdValidatingReader_ValidateEndSimpleContent_m45989 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
 void XsdValidatingReader_ValidateEndSimpleContentCore_m45990 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
 void XsdValidatingReader_AssessStringValid_m45991 (XsdValidatingReader_t6683 * __this, XmlSchemaSimpleType_t6688 * ___st, XmlSchemaDatatype_t6689 * ___dt, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
 void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m45992 (XsdValidatingReader_t6683 * __this, XmlSchemaSimpleType_t6688 * ___st, XmlSchemaDatatype_t6689 ** ___dt, String_t* ___normalized, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
 Object_t * XsdValidatingReader_GetXsiType_m45993 (XsdValidatingReader_t6683 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
 void XsdValidatingReader_AssessLocalTypeDerivationOK_m45994 (XsdValidatingReader_t6683 * __this, Object_t * ___xsiType, Object_t * ___baseType, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
 void XsdValidatingReader_AssessStartElementSchemaValidity_m45995 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
 void XsdValidatingReader_AssessElementLocallyValidElement_m45996 (XsdValidatingReader_t6683 * __this, String_t* ___xsiNilValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
 void XsdValidatingReader_AssessStartElementLocallyValidType_m45997 (XsdValidatingReader_t6683 * __this, Object_t * ___schemaType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
 void XsdValidatingReader_AssessElementLocallyValidComplexType_m45998 (XsdValidatingReader_t6683 * __this, XmlSchemaComplexType_t6690 * ___cType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
 void XsdValidatingReader_AssessAttributeLocallyValid_m45999 (XsdValidatingReader_t6683 * __this, XmlSchemaAttribute_t6676 * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
 void XsdValidatingReader_AssessAttributeLocallyValidUse_m46000 (XsdValidatingReader_t6683 * __this, XmlSchemaAttribute_t6676 * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
 void XsdValidatingReader_AssessEndElementSchemaValidity_m46001 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
 void XsdValidatingReader_ValidateEndElementKeyConstraints_m46002 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
 void XsdValidatingReader_ValidateKeySelectors_m46003 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
 void XsdValidatingReader_ValidateKeyFields_m46004 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
 void XsdValidatingReader_ProcessKeyEntry_m46005 (XsdValidatingReader_t6683 * __this, XsdKeyEntry_t6646 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
 XsdKeyTable_t6653 * XsdValidatingReader_CreateNewKeyTable_m46006 (XsdValidatingReader_t6683 * __this, XmlSchemaIdentityConstraint_t6655 * ___ident, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
 void XsdValidatingReader_ValidateSimpleContentIdentity_m46007 (XsdValidatingReader_t6683 * __this, XmlSchemaDatatype_t6689 * ___dt, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
 void XsdValidatingReader_EndIdentityValidation_m46008 (XsdValidatingReader_t6683 * __this, XsdKeyTable_t6653 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
 void XsdValidatingReader_EndKeyrefValidation_m46009 (XsdValidatingReader_t6683 * __this, XsdKeyTable_t6653 * ___seq, XmlSchemaIdentityConstraint_t6655 * ___targetIdent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
 void XsdValidatingReader_Close_m46010 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
 String_t* XsdValidatingReader_GetAttribute_m46011 (XsdValidatingReader_t6683 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
 XmlQualifiedName_t6656 * XsdValidatingReader_SplitQName_m46012 (XsdValidatingReader_t6683 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
 String_t* XsdValidatingReader_GetAttribute_m46013 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
 String_t* XsdValidatingReader_GetDefaultAttribute_m46014 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
 int32_t XsdValidatingReader_FindDefaultAttribute_m46015 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
 bool XsdValidatingReader_HasLineInfo_m46016 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
 String_t* XsdValidatingReader_LookupNamespace_m46017 (XsdValidatingReader_t6683 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
 void XsdValidatingReader_MoveToAttribute_m46018 (XsdValidatingReader_t6683 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
 bool XsdValidatingReader_MoveToAttribute_m46019 (XsdValidatingReader_t6683 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
 bool XsdValidatingReader_MoveToAttribute_m46020 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
 bool XsdValidatingReader_MoveToDefaultAttribute_m46021 (XsdValidatingReader_t6683 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
 bool XsdValidatingReader_MoveToElement_m46022 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
 bool XsdValidatingReader_MoveToFirstAttribute_m46023 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
 bool XsdValidatingReader_MoveToNextAttribute_m46024 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
 XmlSchema_t6691 * XsdValidatingReader_ReadExternalSchema_m46025 (XsdValidatingReader_t6683 * __this, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
 void XsdValidatingReader_ExamineAdditionalSchema_m46026 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
 bool XsdValidatingReader_Read_m46027 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
 bool XsdValidatingReader_ReadAttributeValue_m46028 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::ReadString()
 String_t* XsdValidatingReader_ReadString_m46029 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
 void XsdValidatingReader_ResolveEntity_m46030 (XsdValidatingReader_t6683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
