#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.EnumMap
struct EnumMap_t6922;
// System.String[]
struct StringU5BU5D_t333;
// System.Int64[]
struct Int64U5BU5D_t6861;
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t6921;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.EnumMap::.ctor(System.Xml.Serialization.EnumMap/EnumMapMember[],System.Boolean)
 void EnumMap__ctor_m47644 (EnumMap_t6922 * __this, EnumMapMemberU5BU5D_t6921* ___members, bool ___isFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.EnumMap::get_IsFlags()
 bool EnumMap_get_IsFlags_m47645 (EnumMap_t6922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_EnumNames()
 StringU5BU5D_t333* EnumMap_get_EnumNames_m47646 (EnumMap_t6922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_XmlNames()
 StringU5BU5D_t333* EnumMap_get_XmlNames_m47647 (EnumMap_t6922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] System.Xml.Serialization.EnumMap::get_Values()
 Int64U5BU5D_t6861* EnumMap_get_Values_m47648 (EnumMap_t6922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetXmlName(System.String,System.Object)
 String_t* EnumMap_GetXmlName_m47649 (EnumMap_t6922 * __this, String_t* ___typeName, Object_t * ___enumValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetEnumName(System.String,System.String)
 String_t* EnumMap_GetEnumName_m47650 (EnumMap_t6922 * __this, String_t* ___typeName, String_t* ___xmlName, MethodInfo* method) IL2CPP_METHOD_ATTR;
