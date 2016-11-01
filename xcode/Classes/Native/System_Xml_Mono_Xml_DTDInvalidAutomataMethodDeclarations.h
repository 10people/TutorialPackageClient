#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t6933;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
 void DTDInvalidAutomata__ctor_m47682 (DTDInvalidAutomata_t6933 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
 DTDAutomata_t6927 * DTDInvalidAutomata_TryEndElement_m47683 (DTDInvalidAutomata_t6933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDInvalidAutomata_TryStartElement_m47684 (DTDInvalidAutomata_t6933 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
