#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t6667;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t6666  : public XsdValidationState_t6661
{
	// System.Xml.Schema.XmlSchemaChoice Mono.Xml.Schema.XsdChoiceValidationState::choice
	XmlSchemaChoice_t6667 * ___choice;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiable
	bool ___emptiable;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiableComputed
	bool ___emptiableComputed;
};
