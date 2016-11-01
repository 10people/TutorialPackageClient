#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t6669;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t6668  : public XsdValidationState_t6661
{
	// System.Xml.Schema.XmlSchemaAll Mono.Xml.Schema.XsdAllValidationState::all
	XmlSchemaAll_t6669 * ___all;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdAllValidationState::consumed
	ArrayList_t5157 * ___consumed;
};
