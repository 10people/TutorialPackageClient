#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.ListMap
struct ListMap_t6902;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t6877;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t6894;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.ListMap::.ctor()
 void ListMap__ctor_m47630 (ListMap_t6902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ChoiceMember(System.String)
 void ListMap_set_ChoiceMember_m47631 (ListMap_t6902 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.ListMap::get_ItemInfo()
 XmlTypeMapElementInfoList_t6877 * ListMap_get_ItemInfo_m47632 (ListMap_t6902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ItemInfo(System.Xml.Serialization.XmlTypeMapElementInfoList)
 void ListMap_set_ItemInfo_m47633 (ListMap_t6902 * __this, XmlTypeMapElementInfoList_t6877 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.Object,System.Int32,System.Object)
 XmlTypeMapElementInfo_t6894 * ListMap_FindElement_m47634 (ListMap_t6902 * __this, Object_t * ___ob, int32_t ___index, Object_t * ___memberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.String,System.String)
 XmlTypeMapElementInfo_t6894 * ListMap_FindElement_m47635 (ListMap_t6902 * __this, String_t* ___elementName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindTextElement()
 XmlTypeMapElementInfo_t6894 * ListMap_FindTextElement_m47636 (ListMap_t6902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::GetArrayType(System.Int32,System.String&,System.String&)
 void ListMap_GetArrayType_m47637 (ListMap_t6902 * __this, int32_t ___itemCount, String_t** ___localName, String_t** ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ListMap::Equals(System.Object)
 bool ListMap_Equals_m47638 (ListMap_t6902 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.ListMap::GetHashCode()
 int32_t ListMap_GetHashCode_m47639 (ListMap_t6902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
