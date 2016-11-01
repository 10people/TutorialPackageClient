#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t6953;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Collections.ArrayList
struct ArrayList_t5157;

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
 void DTDEntityDeclaration__ctor_m47824 (DTDEntityDeclaration_t6953 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
 String_t* DTDEntityDeclaration_get_NotationName_m47825 (DTDEntityDeclaration_t6953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
 void DTDEntityDeclaration_set_NotationName_m47826 (DTDEntityDeclaration_t6953 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
 bool DTDEntityDeclaration_get_HasExternalReference_m47827 (DTDEntityDeclaration_t6953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
 String_t* DTDEntityDeclaration_get_EntityValue_m47828 (DTDEntityDeclaration_t6953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
 void DTDEntityDeclaration_ScanEntityValue_m47829 (DTDEntityDeclaration_t6953 * __this, ArrayList_t5157 * ___refs, MethodInfo* method) IL2CPP_METHOD_ATTR;
