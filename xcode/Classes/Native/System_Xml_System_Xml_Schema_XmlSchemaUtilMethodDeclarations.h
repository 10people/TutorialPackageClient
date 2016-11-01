#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaUtil
struct XmlSchemaUtil_t6824;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Xml.XmlReader
struct XmlReader_t6677;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Xml.XmlAttribute
struct XmlAttribute_t6763;
// System.Exception
struct Exception_t972;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t6765;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t6757;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t6690;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
 void XmlSchemaUtil__cctor_m47054 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaUtil_AddToTable_m47055 (Object_t * __this/* static, unused */, XmlSchemaObjectTable_t6754 * ___table, XmlSchemaObject_t6662 * ___obj, XmlQualifiedName_t6656 * ___qname, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaUtil_CompileID_m47056 (Object_t * __this/* static, unused */, String_t* ___id, XmlSchemaObject_t6662 * ___xso, Hashtable_t4372 * ___idCollection, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
 bool XmlSchemaUtil_CheckAnyUri_m47057 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
 bool XmlSchemaUtil_CheckNormalizedString_m47058 (Object_t * __this/* static, unused */, String_t* ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
 bool XmlSchemaUtil_CheckNCName_m47059 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
 bool XmlSchemaUtil_CheckQName_m47060 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
 XmlParserContext_t6684 * XmlSchemaUtil_GetParserContext_m47061 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
 bool XmlSchemaUtil_IsBuiltInDatatypeName_m47062 (Object_t * __this/* static, unused */, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
 bool XmlSchemaUtil_AreSchemaDatatypeEqual_m47063 (Object_t * __this/* static, unused */, XsdAnySimpleType_t6647 * ___st1, Object_t * ___v1, XsdAnySimpleType_t6647 * ___st2, Object_t * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
 bool XmlSchemaUtil_IsValidQName_m47064 (Object_t * __this/* static, unused */, String_t* ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
 StringU5BU5D_t333* XmlSchemaUtil_SplitList_m47065 (Object_t * __this/* static, unused */, String_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaUtil_ReadUnhandledAttribute_m47066 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, XmlSchemaObject_t6662 * ___xso, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
 void XmlSchemaUtil_ParseWsdlArrayType_m47067 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, XmlAttribute_t6763 * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
 bool XmlSchemaUtil_ReadBoolAttribute_m47068 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerExcpetion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
 int32_t XmlSchemaUtil_ReadDerivationAttribute_m47069 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
 int32_t XmlSchemaUtil_AddFlag_m47070 (Object_t * __this/* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
 int32_t XmlSchemaUtil_ReadFormAttribute_m47071 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerExcpetion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
 int32_t XmlSchemaUtil_ReadProcessingAttribute_m47072 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerExcpetion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
 int32_t XmlSchemaUtil_ReadUseAttribute_m47073 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerExcpetion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
 XmlQualifiedName_t6656 * XmlSchemaUtil_ReadQNameAttribute_m47074 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, Exception_t972 ** ___innerEx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
 XmlQualifiedName_t6656 * XmlSchemaUtil_ToQName_m47075 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___reader, String_t* ___qnamestr, Exception_t972 ** ___innerEx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
 int32_t XmlSchemaUtil_ValidateAttributesResolved_m47076 (Object_t * __this/* static, unused */, XmlSchemaObjectTable_t6754 * ___attributesResolved, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, XmlSchemaObjectCollection_t6755 * ___attributes, XmlSchemaAnyAttribute_t6765 * ___anyAttribute, XmlSchemaAnyAttribute_t6765 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t6757 * ___redefined, bool ___skipEquivalent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
 bool XmlSchemaUtil_AreAttributesEqual_m47077 (Object_t * __this/* static, unused */, XmlSchemaAttribute_t6676 * ___one, XmlSchemaAttribute_t6676 * ___another, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
 XmlSchemaObject_t6662 * XmlSchemaUtil_FindAttributeDeclaration_m47078 (Object_t * __this/* static, unused */, String_t* ___ns, XmlSchemaSet_t6680 * ___schemas, XmlSchemaComplexType_t6690 * ___cType, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
 bool XmlSchemaUtil_AttributeWildcardItemValid_m47079 (Object_t * __this/* static, unused */, XmlSchemaAnyAttribute_t6765 * ___anyAttr, XmlQualifiedName_t6656 * ___qname, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
