#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t6673;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdValidationState::occured
	int32_t ___occured;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::manager
	XsdParticleStateManager_t6660 * ___manager;
};
struct XsdValidationState_t6661_StaticFields{
	// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::invalid
	XsdInvalidValidationState_t6673 * ___invalid;
};
