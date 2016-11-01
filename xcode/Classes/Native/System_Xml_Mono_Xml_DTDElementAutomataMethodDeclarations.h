#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t6929;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
 void DTDElementAutomata__ctor_m47660 (DTDElementAutomata_t6929 * __this, DTDObjectModel_t6924 * ___root, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
 String_t* DTDElementAutomata_get_Name_m47661 (DTDElementAutomata_t6929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
 DTDAutomata_t6927 * DTDElementAutomata_TryStartElement_m47662 (DTDElementAutomata_t6929 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
