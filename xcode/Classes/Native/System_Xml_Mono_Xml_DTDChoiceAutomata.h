#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// Mono.Xml.DTDAutomata
#include "System_Xml_Mono_Xml_DTDAutomata.h"
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t6926  : public DTDAutomata_t6927
{
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::left
	DTDAutomata_t6927 * ___left;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::right
	DTDAutomata_t6927 * ___right;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::cachedEmptiable
	bool ___cachedEmptiable;
};
