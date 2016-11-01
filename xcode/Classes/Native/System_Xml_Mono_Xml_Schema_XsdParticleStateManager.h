#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.Collections.Stack
struct Stack_t6658;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t6659;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t6660  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdParticleStateManager::table
	Hashtable_t4372 * ___table;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::processContents
	int32_t ___processContents;
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdParticleStateManager::CurrentElement
	XmlSchemaElement_t6657 * ___CurrentElement;
	// System.Collections.Stack Mono.Xml.Schema.XsdParticleStateManager::ContextStack
	Stack_t6658 * ___ContextStack;
	// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdParticleStateManager::Context
	XsdValidationContext_t6659 * ___Context;
};
struct XsdParticleStateManager_t6660_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdParticleStateManager::<>f__switch$map2
	Dictionary_2_t944 * ___U3CU3Ef__switch$map2;
};
