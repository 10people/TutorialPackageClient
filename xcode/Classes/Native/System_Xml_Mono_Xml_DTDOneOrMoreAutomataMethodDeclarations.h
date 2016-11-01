#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t6930;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
 void DTDOneOrMoreAutomata__ctor_m47671 (DTDOneOrMoreAutomata_t6930 * __this, DTDObjectModel_t6924 * ___root, DTDAutomata_t6927 * ___children, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDOneOrMoreAutomata_TryStartElement_m47672 (DTDOneOrMoreAutomata_t6930 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDOneOrMoreAutomata_TryEndElement_m47673 (DTDOneOrMoreAutomata_t6930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
