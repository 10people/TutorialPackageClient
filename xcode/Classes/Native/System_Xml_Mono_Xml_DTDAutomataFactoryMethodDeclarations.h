#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t6925;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t6926;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t6928;

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
 void DTDAutomataFactory__ctor_m47651 (DTDAutomataFactory_t6925 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 DTDChoiceAutomata_t6926 * DTDAutomataFactory_Choice_m47652 (DTDAutomataFactory_t6925 * __this, DTDAutomata_t6927 * ___left, DTDAutomata_t6927 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
 DTDSequenceAutomata_t6928 * DTDAutomataFactory_Sequence_m47653 (DTDAutomataFactory_t6925 * __this, DTDAutomata_t6927 * ___left, DTDAutomata_t6927 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
