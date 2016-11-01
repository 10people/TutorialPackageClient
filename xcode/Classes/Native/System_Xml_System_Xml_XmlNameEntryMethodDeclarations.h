#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t6993;

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
 void XmlNameEntry__ctor_m48348 (XmlNameEntry_t6982 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
 void XmlNameEntry_Update_m48349 (XmlNameEntry_t6982 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
 bool XmlNameEntry_Equals_m48350 (XmlNameEntry_t6982 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
 int32_t XmlNameEntry_GetHashCode_m48351 (XmlNameEntry_t6982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
 String_t* XmlNameEntry_GetPrefixedName_m48352 (XmlNameEntry_t6982 * __this, XmlNameEntryCache_t6993 * ___owner, MethodInfo* method) IL2CPP_METHOD_ATTR;
