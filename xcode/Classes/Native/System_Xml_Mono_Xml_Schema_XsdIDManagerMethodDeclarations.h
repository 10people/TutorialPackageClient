#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t6681;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6689;
// System.Object
struct Object_t;

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
 void XsdIDManager__ctor_m46042 (XsdIDManager_t6681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
 ArrayList_t5157 * XsdIDManager_get_MissingIDReferences_m46043 (XsdIDManager_t6681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
 void XsdIDManager_OnStartElement_m46044 (XsdIDManager_t6681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
 String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m46045 (XsdIDManager_t6681 * __this, XmlSchemaDatatype_t6689 * ___dt, Object_t * ___parsedValue, String_t* ___elementName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
 bool XsdIDManager_HasMissingIDReferences_m46046 (XsdIDManager_t6681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
 String_t* XsdIDManager_GetMissingIDString_m46047 (XsdIDManager_t6681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
