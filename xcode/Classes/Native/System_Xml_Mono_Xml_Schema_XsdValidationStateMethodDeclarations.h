#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t6673;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
 void XsdValidationState__ctor_m45903 (XsdValidationState_t6661 * __this, XsdParticleStateManager_t6660 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::.cctor()
 void XsdValidationState__cctor_m45904 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::get_Invalid()
 XsdInvalidValidationState_t6673 * XsdValidationState_get_Invalid_m45905 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationState::EvaluateStartElement(System.String,System.String)
// System.Boolean Mono.Xml.Schema.XsdValidationState::EvaluateEndElement()
// System.Boolean Mono.Xml.Schema.XsdValidationState::EvaluateIsEmptiable()
// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::get_Manager()
 XsdParticleStateManager_t6660 * XsdValidationState_get_Manager_m45906 (XsdValidationState_t6661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_Occured()
 int32_t XsdValidationState_get_Occured_m45907 (XsdValidationState_t6661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_OccuredInternal()
 int32_t XsdValidationState_get_OccuredInternal_m45908 (XsdValidationState_t6661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::set_OccuredInternal(System.Int32)
 void XsdValidationState_set_OccuredInternal_m45909 (XsdValidationState_t6661 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
