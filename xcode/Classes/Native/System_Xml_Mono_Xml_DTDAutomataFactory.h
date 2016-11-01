#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t6925  : public Object_t
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomataFactory::root
	DTDObjectModel_t6924 * ___root;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::choiceTable
	Hashtable_t4372 * ___choiceTable;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::sequenceTable
	Hashtable_t4372 * ___sequenceTable;
};
