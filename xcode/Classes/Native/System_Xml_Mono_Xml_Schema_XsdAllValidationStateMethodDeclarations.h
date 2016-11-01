#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t6668;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t6669;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
 void XsdAllValidationState__ctor_m45925 (XsdAllValidationState_t6668 * __this, XmlSchemaAll_t6669 * ___all, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdAllValidationState_EvaluateStartElement_m45926 (XsdAllValidationState_t6668 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
 bool XsdAllValidationState_EvaluateEndElement_m45927 (XsdAllValidationState_t6668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
 bool XsdAllValidationState_EvaluateIsEmptiable_m45928 (XsdAllValidationState_t6668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
