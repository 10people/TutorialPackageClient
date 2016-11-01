#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t6931;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
 void DTDEmptyAutomata__ctor_m47674 (DTDEmptyAutomata_t6931 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDEmptyAutomata_TryEndElement_m47675 (DTDEmptyAutomata_t6931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDEmptyAutomata_TryStartElement_m47676 (DTDEmptyAutomata_t6931 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
 bool DTDEmptyAutomata_get_Emptiable_m47677 (DTDEmptyAutomata_t6931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
