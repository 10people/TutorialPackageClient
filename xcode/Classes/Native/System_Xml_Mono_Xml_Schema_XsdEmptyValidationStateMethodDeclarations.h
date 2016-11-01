#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t6672;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
 void XsdEmptyValidationState__ctor_m45938 (XsdEmptyValidationState_t6672 * __this, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdEmptyValidationState_EvaluateStartElement_m45939 (XsdEmptyValidationState_t6672 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
 bool XsdEmptyValidationState_EvaluateEndElement_m45940 (XsdEmptyValidationState_t6672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
 bool XsdEmptyValidationState_EvaluateIsEmptiable_m45941 (XsdEmptyValidationState_t6672 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
