#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t6817;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t6688;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t6696;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t6818;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t6786;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t6796;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t6799;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t6802;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t6651;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
 void XmlSchemaSimpleTypeRestriction__ctor_m46999 (XmlSchemaSimpleTypeRestriction_t6817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
 void XmlSchemaSimpleTypeRestriction__cctor_m47000 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
 XmlQualifiedName_t6656 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m47001 (XmlSchemaSimpleTypeRestriction_t6817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
 XmlSchemaSimpleType_t6688 * XmlSchemaSimpleTypeRestriction_get_BaseType_m47002 (XmlSchemaSimpleTypeRestriction_t6817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
 XmlSchemaObjectCollection_t6755 * XmlSchemaSimpleTypeRestriction_get_Facets_m47003 (XmlSchemaSimpleTypeRestriction_t6817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaSimpleTypeRestriction_SetParent_m47004 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleTypeRestriction_Compile_m47005 (XmlSchemaSimpleTypeRestriction_t6817 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
 bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m47006 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaFacet_t6696 * ___xsf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaSimpleTypeRestriction_Validate_m47007 (XmlSchemaSimpleTypeRestriction_t6817 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaSimpleTypeRestriction_ValidateActualType_m47008 (XmlSchemaSimpleTypeRestriction_t6817 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 Object_t * XmlSchemaSimpleTypeRestriction_GetActualType_m47009 (XmlSchemaSimpleTypeRestriction_t6817 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___validate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m47010 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaTotalDigitsFacet_t6818 * ___totf, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m47011 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaFractionDigitsFacet_t6786 * ___fracf, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m47012 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaFacet_t6696 * ___facet, Object_t ** ___baseFacet, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m47013 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaLengthFacet_t6796 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m47014 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaMaxLengthFacet_t6799 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
 void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m47015 (XmlSchemaSimpleTypeRestriction_t6817 * __this, XmlSchemaMinLengthFacet_t6802 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
 XsdAnySimpleType_t6647 * XmlSchemaSimpleTypeRestriction_getDatatype_m47016 (XmlSchemaSimpleTypeRestriction_t6817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
 Object_t * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m47017 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m47018 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, XmlNameTable_t6650 * ___nt, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m47019 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, XmlNameTable_t6650 * ___nt, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m47020 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, XmlNameTable_t6650 * ___nt, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m47021 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, XmlNameTable_t6650 * ___nt, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
 bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m47022 (XmlSchemaSimpleTypeRestriction_t6817 * __this, String_t* ___value, XmlNameTable_t6650 * ___nt, Object_t * ___nsmgr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaSimpleTypeRestriction_t6817 * XmlSchemaSimpleTypeRestriction_Read_m47023 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
