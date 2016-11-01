#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
 void XmlTypeMapping__ctor_m47592 (XmlTypeMapping_t6835 * __this, String_t* ___elementName, String_t* ___ns, TypeData_t6841 * ___typeData, String_t* ___xmlType, String_t* ___xmlTypeNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
 String_t* XmlTypeMapping_get_TypeFullName_m47593 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
 TypeData_t6841 * XmlTypeMapping_get_TypeData_m47594 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
 String_t* XmlTypeMapping_get_XmlType_m47595 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
 void XmlTypeMapping_set_XmlType_m47596 (XmlTypeMapping_t6835 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
 String_t* XmlTypeMapping_get_XmlTypeNamespace_m47597 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
 void XmlTypeMapping_set_XmlTypeNamespace_m47598 (XmlTypeMapping_t6835 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
 ArrayList_t5157 * XmlTypeMapping_get_DerivedTypes_m47599 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
 bool XmlTypeMapping_get_MultiReferenceType_m47600 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
 XmlTypeMapping_t6835 * XmlTypeMapping_get_BaseMap_m47601 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
 void XmlTypeMapping_set_BaseMap_m47602 (XmlTypeMapping_t6835 * __this, XmlTypeMapping_t6835 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
 void XmlTypeMapping_set_IncludeInSchema_m47603 (XmlTypeMapping_t6835 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
 bool XmlTypeMapping_get_IsNullable_m47604 (XmlTypeMapping_t6835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
 void XmlTypeMapping_set_IsNullable_m47605 (XmlTypeMapping_t6835 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealTypeMap(System.Type)
 XmlTypeMapping_t6835 * XmlTypeMapping_GetRealTypeMap_m47606 (XmlTypeMapping_t6835 * __this, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
 XmlTypeMapping_t6835 * XmlTypeMapping_GetRealElementMap_m47607 (XmlTypeMapping_t6835 * __this, String_t* ___name, String_t* ___ens, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
 void XmlTypeMapping_UpdateRoot_m47608 (XmlTypeMapping_t6835 * __this, XmlQualifiedName_t6656 * ___qname, MethodInfo* method) IL2CPP_METHOD_ATTR;
