#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t6674  : public XsdValidationState_t6661
{
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::head
	XsdValidationState_t6661 * ___head;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::rest
	XsdValidationState_t6661 * ___rest;
};
