#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
 void XmlNamespaceManager__ctor_m48368 (XmlNamespaceManager_t6685 * __this, XmlNameTable_t6650 * ___nameTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
 void XmlNamespaceManager_InitData_m48369 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
 void XmlNamespaceManager_GrowDecls_m48370 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
 void XmlNamespaceManager_GrowScopes_m48371 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
 String_t* XmlNamespaceManager_get_DefaultNamespace_m48372 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
 XmlNameTable_t6650 * XmlNamespaceManager_get_NameTable_m48373 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
 void XmlNamespaceManager_AddNamespace_m48374 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
 void XmlNamespaceManager_AddNamespace_m48375 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
 String_t* XmlNamespaceManager_IsValidDeclaration_m48376 (Object_t * __this/* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
 Object_t * XmlNamespaceManager_GetEnumerator_m48377 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
 String_t* XmlNamespaceManager_LookupNamespace_m48378 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
 String_t* XmlNamespaceManager_LookupNamespace_m48379 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
 bool XmlNamespaceManager_CompareString_m48380 (XmlNamespaceManager_t6685 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String,System.Boolean)
 String_t* XmlNamespaceManager_LookupPrefix_m48381 (XmlNamespaceManager_t6685 * __this, String_t* ___uri, bool ___atomizedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
 String_t* XmlNamespaceManager_LookupPrefixExclusive_m48382 (XmlNamespaceManager_t6685 * __this, String_t* ___uri, bool ___atomizedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
 String_t* XmlNamespaceManager_LookupPrefixCore_m48383 (XmlNamespaceManager_t6685 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
 bool XmlNamespaceManager_IsOverriden_m48384 (XmlNamespaceManager_t6685 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
 bool XmlNamespaceManager_PopScope_m48385 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
 void XmlNamespaceManager_PushScope_m48386 (XmlNamespaceManager_t6685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
 void XmlNamespaceManager_RemoveNamespace_m48387 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
 void XmlNamespaceManager_RemoveNamespace_m48388 (XmlNamespaceManager_t6685 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
