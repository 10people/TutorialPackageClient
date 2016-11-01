#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t6680;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t6756;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t6676;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t6757;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
 void XmlSchema__ctor_m46342 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
 int32_t XmlSchema_get_AttributeFormDefault_m46343 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
 int32_t XmlSchema_get_BlockDefault_m46344 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
 int32_t XmlSchema_get_FinalDefault_m46345 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
 int32_t XmlSchema_get_ElementFormDefault_m46346 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
 String_t* XmlSchema_get_TargetNamespace_m46347 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
 void XmlSchema_set_TargetNamespace_m46348 (XmlSchema_t6691 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
 String_t* XmlSchema_get_Version_m46349 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
 XmlSchemaObjectCollection_t6755 * XmlSchema_get_Includes_m46350 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
 XmlSchemaObjectCollection_t6755 * XmlSchema_get_Items_m46351 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
 bool XmlSchema_get_IsCompiled_m46352 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_Attributes_m46353 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_AttributeGroups_m46354 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_SchemaTypes_m46355 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_Elements_m46356 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
 String_t* XmlSchema_get_Id_m46357 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_Groups_m46358 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_Notations_m46359 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
 XmlSchemaObjectTable_t6754 * XmlSchema_get_NamedIdentities_m46360 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
 XmlSchemaSet_t6680 * XmlSchema_get_Schemas_m46361 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
 Hashtable_t4372 * XmlSchema_get_IDCollection_m46362 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
 void XmlSchema_CompileSubset_m46363 (XmlSchema_t6691 * __this, ValidationEventHandler_t6682 * ___handler, XmlSchemaSet_t6680 * ___col, XmlResolver_t6678 * ___resolver, Hashtable_t4372 * ___handledUris, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
 void XmlSchema_SetParent_m46364 (XmlSchema_t6691 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
 void XmlSchema_DoCompile_m46365 (XmlSchema_t6691 * __this, ValidationEventHandler_t6682 * ___handler, Hashtable_t4372 * ___handledUris, XmlSchemaSet_t6680 * ___col, XmlResolver_t6678 * ___resolver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
 String_t* XmlSchema_GetResolvedUri_m46366 (XmlSchema_t6691 * __this, XmlResolver_t6678 * ___resolver, String_t* ___relativeUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
 void XmlSchema_ProcessExternal_m46367 (XmlSchema_t6691 * __this, ValidationEventHandler_t6682 * ___handler, Hashtable_t4372 * ___handledUris, XmlResolver_t6678 * ___resolver, XmlSchemaExternal_t6756 * ___ext, XmlSchemaSet_t6680 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
 void XmlSchema_AddExternalComponentsTo_m46368 (XmlSchema_t6691 * __this, XmlSchema_t6691 * ___s, XmlSchemaObjectCollection_t6755 * ___items, ValidationEventHandler_t6682 * ___handler, Hashtable_t4372 * ___handledUris, XmlResolver_t6678 * ___resolver, XmlSchemaSet_t6680 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
 bool XmlSchema_IsNamespaceAbsent_m46369 (XmlSchema_t6691 * __this, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
 XmlSchemaAttribute_t6676 * XmlSchema_FindAttribute_m46370 (XmlSchema_t6691 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
 XmlSchemaAttributeGroup_t6757 * XmlSchema_FindAttributeGroup_m46371 (XmlSchema_t6691 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
 XmlSchemaElement_t6657 * XmlSchema_FindElement_m46372 (XmlSchema_t6691 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
 XmlSchemaType_t6687 * XmlSchema_FindSchemaType_m46373 (XmlSchema_t6691 * __this, XmlQualifiedName_t6656 * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
 void XmlSchema_Validate_m46374 (XmlSchema_t6691 * __this, ValidationEventHandler_t6682 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchema_t6691 * XmlSchema_Read_m46375 (Object_t * __this/* static, unused */, XmlReader_t6677 * ___rdr, ValidationEventHandler_t6682 * ___validationEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 void XmlSchema_ReadAttributes_m46376 (Object_t * __this/* static, unused */, XmlSchema_t6691 * ___schema, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 void XmlSchema_ReadContent_m46377 (Object_t * __this/* static, unused */, XmlSchema_t6691 * ___schema, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
