#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t6993;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.String
struct String_t;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982;

// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
 void XmlNameEntryCache__ctor_m48353 (XmlNameEntryCache_t6993 * __this, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
 String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m48354 (XmlNameEntryCache_t6993 * __this, String_t* ___prefix, String_t* ___local, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
 XmlNameEntry_t6982 * XmlNameEntryCache_Add_m48355 (XmlNameEntryCache_t6993 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
 XmlNameEntry_t6982 * XmlNameEntryCache_GetInternal_m48356 (XmlNameEntryCache_t6993 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, MethodInfo* method) IL2CPP_METHOD_ATTR;
