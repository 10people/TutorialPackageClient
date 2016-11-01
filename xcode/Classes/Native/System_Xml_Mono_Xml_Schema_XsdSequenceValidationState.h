#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t6665;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t6664  : public XsdValidationState_t6661
{
	// System.Xml.Schema.XmlSchemaSequence Mono.Xml.Schema.XsdSequenceValidationState::seq
	XmlSchemaSequence_t6665 * ___seq;
	// System.Int32 Mono.Xml.Schema.XsdSequenceValidationState::current
	int32_t ___current;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::currentAutomata
	XsdValidationState_t6661 * ___currentAutomata;
	// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::emptiable
	bool ___emptiable;
};
