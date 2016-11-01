#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t6673;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
 void XsdInvalidValidationState__ctor_m45942 (XsdInvalidValidationState_t6673 * __this, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdInvalidValidationState_EvaluateStartElement_m45943 (XsdInvalidValidationState_t6673 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
 bool XsdInvalidValidationState_EvaluateEndElement_m45944 (XsdInvalidValidationState_t6673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
 bool XsdInvalidValidationState_EvaluateIsEmptiable_m45945 (XsdInvalidValidationState_t6673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
