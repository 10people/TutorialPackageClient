#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t6840;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t6853;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeMember
struct TypeMember_t6842;
// System.Text.StringBuilder
struct StringBuilder_t1097;

// System.Void System.Xml.Serialization.XmlAttributeOverrides::.ctor()
 void XmlAttributeOverrides__ctor_m47187 (XmlAttributeOverrides_t6840 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type)
 XmlAttributes_t6853 * XmlAttributeOverrides_get_Item_m47188 (XmlAttributeOverrides_t6840 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type,System.String)
 XmlAttributes_t6853 * XmlAttributeOverrides_get_Item_m47189 (XmlAttributeOverrides_t6840 * __this, Type_t * ___type, String_t* ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeMember System.Xml.Serialization.XmlAttributeOverrides::GetKey(System.Type,System.String)
 TypeMember_t6842 * XmlAttributeOverrides_GetKey_m47190 (XmlAttributeOverrides_t6840 * __this, Type_t * ___type, String_t* ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeOverrides::AddKeyHash(System.Text.StringBuilder)
 void XmlAttributeOverrides_AddKeyHash_m47191 (XmlAttributeOverrides_t6840 * __this, StringBuilder_t1097 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
