#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
 void DTDAutomata__ctor_m47654 (DTDAutomata_t6927 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
 DTDObjectModel_t6924 * DTDAutomata_get_Root_m47655 (DTDAutomata_t6927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
 DTDAutomata_t6927 * DTDAutomata_MakeChoice_m47656 (DTDAutomata_t6927 * __this, DTDAutomata_t6927 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
 DTDAutomata_t6927 * DTDAutomata_MakeSequence_m47657 (DTDAutomata_t6927 * __this, DTDAutomata_t6927 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryStartElement(System.String)
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDAutomata_TryEndElement_m47658 (DTDAutomata_t6927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
 bool DTDAutomata_get_Emptiable_m47659 (DTDAutomata_t6927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
