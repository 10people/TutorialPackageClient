#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t6928;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 void DTDSequenceAutomata__ctor_m47667 (DTDSequenceAutomata_t6928 * __this, DTDObjectModel_t6924 * ___root, DTDAutomata_t6927 * ___left, DTDAutomata_t6927 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDSequenceAutomata_TryStartElement_m47668 (DTDSequenceAutomata_t6928 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDSequenceAutomata_TryEndElement_m47669 (DTDSequenceAutomata_t6928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
 bool DTDSequenceAutomata_get_Emptiable_m47670 (DTDSequenceAutomata_t6928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
