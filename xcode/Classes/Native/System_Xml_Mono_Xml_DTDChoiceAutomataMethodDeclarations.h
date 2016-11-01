#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t6926;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 void DTDChoiceAutomata__ctor_m47663 (DTDChoiceAutomata_t6926 * __this, DTDObjectModel_t6924 * ___root, DTDAutomata_t6927 * ___left, DTDAutomata_t6927 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDChoiceAutomata_TryStartElement_m47664 (DTDChoiceAutomata_t6926 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDChoiceAutomata_TryEndElement_m47665 (DTDChoiceAutomata_t6926 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
 bool DTDChoiceAutomata_get_Emptiable_m47666 (DTDChoiceAutomata_t6926 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
