#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t6670;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
 void XsdAnyValidationState__ctor_m45929 (XsdAnyValidationState_t6670 * __this, XmlSchemaAny_t6671 * ___any, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdAnyValidationState_EvaluateStartElement_m45930 (XsdAnyValidationState_t6670 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
 bool XsdAnyValidationState_MatchesNamespace_m45931 (XsdAnyValidationState_t6670 * __this, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
 bool XsdAnyValidationState_EvaluateEndElement_m45932 (XsdAnyValidationState_t6670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
 bool XsdAnyValidationState_EvaluateIsEmptiable_m45933 (XsdAnyValidationState_t6670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
