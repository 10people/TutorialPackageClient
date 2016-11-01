#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t6664;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t6665;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
 void XsdSequenceValidationState__ctor_m45917 (XsdSequenceValidationState_t6664 * __this, XmlSchemaSequence_t6665 * ___sequence, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdSequenceValidationState_EvaluateStartElement_m45918 (XsdSequenceValidationState_t6664 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
 bool XsdSequenceValidationState_EvaluateEndElement_m45919 (XsdSequenceValidationState_t6664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
 bool XsdSequenceValidationState_EvaluateIsEmptiable_m45920 (XsdSequenceValidationState_t6664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
