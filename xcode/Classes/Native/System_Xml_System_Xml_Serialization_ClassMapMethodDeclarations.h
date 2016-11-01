#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ClassMap
struct ClassMap_t6891;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t6903;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t6915;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t6916;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t6913;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t6911;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t6894;

// System.Void System.Xml.Serialization.ClassMap::.ctor()
 void ClassMap__ctor_m47610 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
 void ClassMap_AddMember_m47611 (ClassMap_t6891 * __this, XmlTypeMapMember_t6875 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
 void ClassMap_RegisterFlatList_m47612 (ClassMap_t6891 * __this, XmlTypeMapMemberExpandable_t6913 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
 XmlTypeMapMemberAttribute_t6911 * ClassMap_GetAttribute_m47613 (ClassMap_t6891 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
 XmlTypeMapElementInfo_t6894 * ClassMap_GetElement_m47614 (ClassMap_t6891 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
 XmlTypeMapElementInfo_t6894 * ClassMap_GetElement_m47615 (ClassMap_t6891 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
 String_t* ClassMap_BuildKey_m47616 (ClassMap_t6891 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
 XmlTypeMapMemberAnyElement_t6903 * ClassMap_get_DefaultAnyElementMember_m47617 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
 XmlTypeMapMemberAnyAttribute_t6915 * ClassMap_get_DefaultAnyAttributeMember_m47618 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
 XmlTypeMapMemberNamespaces_t6916 * ClassMap_get_NamespaceDeclarations_m47619 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
 Object_t * ClassMap_get_AttributeMembers_m47620 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
 Object_t * ClassMap_get_ElementMembers_m47621 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
 ArrayList_t5157 * ClassMap_get_AllMembers_m47622 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
 ArrayList_t5157 * ClassMap_get_FlatLists_m47623 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
 ArrayList_t5157 * ClassMap_get_ListMembers_m47624 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
 XmlTypeMapMember_t6875 * ClassMap_get_XmlTextCollector_m47625 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
 XmlTypeMapMember_t6875 * ClassMap_get_ReturnMember_m47626 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
 XmlQualifiedName_t6656 * ClassMap_get_SimpleContentBaseType_m47627 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
 void ClassMap_SetCanBeSimpleType_m47628 (ClassMap_t6891 * __this, bool ___can, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
 bool ClassMap_get_HasSimpleContent_m47629 (ClassMap_t6891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
