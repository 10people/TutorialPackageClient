#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t6808;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.InvalidOperationException
struct InvalidOperationException_t5468;
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
 void TypeData__ctor_m47118 (TypeData_t6841 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
 void TypeData__ctor_m47119 (TypeData_t6841 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t6841 * ___mappedType, XmlSchemaPatternFacet_t6808 * ___facet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
 void TypeData__cctor_m47120 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_TypeName()
 String_t* TypeData_get_TypeName_m47121 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
 String_t* TypeData_get_XmlType_m47122 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
 Type_t * TypeData_get_Type_m47123 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_FullTypeName()
 String_t* TypeData_get_FullTypeName_m47124 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
 int32_t TypeData_get_SchemaType_m47125 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
 bool TypeData_get_IsListType_m47126 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsComplexType()
 bool TypeData_get_IsComplexType_m47127 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsValueType()
 bool TypeData_get_IsValueType_m47128 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsNullable()
 bool TypeData_get_IsNullable_m47129 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
 void TypeData_set_IsNullable_m47130 (TypeData_t6841 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
 TypeData_t6841 * TypeData_get_ListItemTypeData_m47131 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
 Type_t * TypeData_get_ListItemType_m47132 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsXsdType()
 bool TypeData_get_IsXsdType_m47133 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_HasPublicConstructor()
 bool TypeData_get_HasPublicConstructor_m47134 (TypeData_t6841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
 PropertyInfo_t5355 * TypeData_GetIndexerProperty_m47135 (Object_t * __this/* static, unused */, Type_t * ___collectionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
 InvalidOperationException_t5468 * TypeData_CreateMissingAddMethodException_m47136 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
 Type_t * TypeData_GetGenericListItemType_m47137 (TypeData_t6841 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
