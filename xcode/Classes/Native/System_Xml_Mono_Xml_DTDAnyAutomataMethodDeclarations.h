#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t6932;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
 void DTDAnyAutomata__ctor_m47678 (DTDAnyAutomata_t6932 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDAnyAutomata_TryEndElement_m47679 (DTDAnyAutomata_t6932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDAnyAutomata_TryStartElement_m47680 (DTDAnyAutomata_t6932 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
 bool DTDAnyAutomata_get_Emptiable_m47681 (DTDAnyAutomata_t6932 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
