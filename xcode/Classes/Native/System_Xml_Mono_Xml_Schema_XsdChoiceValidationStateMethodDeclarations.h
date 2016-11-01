#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t6666;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t6667;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
 void XsdChoiceValidationState__ctor_m45921 (XsdChoiceValidationState_t6666 * __this, XmlSchemaChoice_t6667 * ___choice, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdChoiceValidationState_EvaluateStartElement_m45922 (XsdChoiceValidationState_t6666 * __this, String_t* ___localName, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
 bool XsdChoiceValidationState_EvaluateEndElement_m45923 (XsdChoiceValidationState_t6666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
 bool XsdChoiceValidationState_EvaluateIsEmptiable_m45924 (XsdChoiceValidationState_t6666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
