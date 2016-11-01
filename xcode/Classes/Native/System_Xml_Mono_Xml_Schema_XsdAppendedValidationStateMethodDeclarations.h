#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t6674;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
 void XsdAppendedValidationState__ctor_m45934 (XsdAppendedValidationState_t6674 * __this, XsdParticleStateManager_t6660 * ___manager, XsdValidationState_t6661 * ___head, XsdValidationState_t6661 * ___rest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdAppendedValidationState_EvaluateStartElement_m45935 (XsdAppendedValidationState_t6674 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
 bool XsdAppendedValidationState_EvaluateEndElement_m45936 (XsdAppendedValidationState_t6674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
 bool XsdAppendedValidationState_EvaluateIsEmptiable_m45937 (XsdAppendedValidationState_t6674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
