#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t6663;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
 void XsdElementValidationState__ctor_m45910 (XsdElementValidationState_t6663 * __this, XmlSchemaElement_t6657 * ___element, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
 String_t* XsdElementValidationState_get_Name_m45911 (XsdElementValidationState_t6663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
 String_t* XsdElementValidationState_get_NS_m45912 (XsdElementValidationState_t6663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
 XsdValidationState_t6661 * XsdElementValidationState_EvaluateStartElement_m45913 (XsdElementValidationState_t6663 * __this, String_t* ___name, String_t* ___ns, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
 XsdValidationState_t6661 * XsdElementValidationState_CheckOccurence_m45914 (XsdElementValidationState_t6663 * __this, XmlSchemaElement_t6657 * ___maybeSubstituted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
 bool XsdElementValidationState_EvaluateEndElement_m45915 (XsdElementValidationState_t6663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
 bool XsdElementValidationState_EvaluateIsEmptiable_m45916 (XsdElementValidationState_t6663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
