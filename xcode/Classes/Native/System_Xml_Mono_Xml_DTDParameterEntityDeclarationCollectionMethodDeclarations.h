#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t6936;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t6959;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
 void DTDParameterEntityDeclarationCollection__ctor_m47841 (DTDParameterEntityDeclarationCollection_t6936 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
 DTDParameterEntityDeclaration_t6959 * DTDParameterEntityDeclarationCollection_get_Item_m47842 (DTDParameterEntityDeclarationCollection_t6936 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
 void DTDParameterEntityDeclarationCollection_Add_m47843 (DTDParameterEntityDeclarationCollection_t6936 * __this, String_t* ___name, DTDParameterEntityDeclaration_t6959 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
