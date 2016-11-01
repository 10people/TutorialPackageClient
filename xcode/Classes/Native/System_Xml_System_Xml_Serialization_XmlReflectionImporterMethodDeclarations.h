#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t6874;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t6840;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t6839;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t6853;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t6876;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t6877;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t6878;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
 void XmlReflectionImporter__ctor_m47253 (XmlReflectionImporter_t6874 * __this, XmlAttributeOverrides_t6840 * ___attributeOverrides, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
 void XmlReflectionImporter__cctor_m47254 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportTypeMapping_m47255 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportTypeMapping_m47256 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportTypeMapping_m47257 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportTypeMapping_m47258 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_CreateTypeMapping_m47259 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultXmlType, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportClassMapping_m47260 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportClassMapping_m47261 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
 void XmlReflectionImporter_RegisterDerivedMap_m47262 (XmlReflectionImporter_t6874 * __this, XmlTypeMapping_t6835 * ___map, XmlTypeMapping_t6835 * ___derivedMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 String_t* XmlReflectionImporter_GetTypeNamespace_m47263 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportListMapping_m47264 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, XmlAttributes_t6853 * ___atts, int32_t ___nestingLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportListMapping_m47265 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, XmlAttributes_t6853 * ___atts, int32_t ___nestingLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportXmlNodeMapping_m47266 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportPrimitiveMapping_m47267 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportEnumMapping_m47268 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
 XmlTypeMapping_t6835 * XmlReflectionImporter_ImportXmlSerializableMapping_m47269 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, XmlRootAttribute_t6839 * ___root, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
 void XmlReflectionImporter_ImportIncludedTypes_m47270 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
 Object_t * XmlReflectionImporter_GetReflectionMembers_m47271 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
 XmlTypeMapMember_t6875 * XmlReflectionImporter_CreateMapMember_m47272 (XmlReflectionImporter_t6874 * __this, Type_t * ___declaringType, XmlReflectionMember_t6876 * ___rmember, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
 XmlTypeMapElementInfoList_t6877 * XmlReflectionImporter_ImportElementInfo_m47273 (XmlReflectionImporter_t6874 * __this, Type_t * ___cls, String_t* ___defaultName, String_t* ___defaultNamespace, Type_t * ___defaultType, XmlTypeMapMemberElement_t6878 * ___member, XmlAttributes_t6853 * ___atts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
 XmlTypeMapElementInfoList_t6877 * XmlReflectionImporter_ImportAnyElementInfo_m47274 (XmlReflectionImporter_t6874 * __this, String_t* ___defaultNamespace, XmlReflectionMember_t6876 * ___rmember, XmlTypeMapMemberElement_t6878 * ___member, XmlAttributes_t6853 * ___atts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
 void XmlReflectionImporter_ImportTextElementInfo_m47275 (XmlReflectionImporter_t6874 * __this, XmlTypeMapElementInfoList_t6877 * ___list, Type_t * ___defaultType, XmlTypeMapMemberElement_t6878 * ___member, XmlAttributes_t6853 * ___atts, String_t* ___defaultNamespace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
 bool XmlReflectionImporter_CanBeNull_m47276 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
 void XmlReflectionImporter_IncludeType_m47277 (XmlReflectionImporter_t6874 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
 Object_t * XmlReflectionImporter_GetDefaultValue_m47278 (XmlReflectionImporter_t6874 * __this, TypeData_t6841 * ___typeData, Object_t * ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
