#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t6937;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t6953;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
 void DTDEntityDeclarationCollection__ctor_m47745 (DTDEntityDeclarationCollection_t6937 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
 DTDEntityDeclaration_t6953 * DTDEntityDeclarationCollection_get_Item_m47746 (DTDEntityDeclarationCollection_t6937 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
 void DTDEntityDeclarationCollection_Add_m47747 (DTDEntityDeclarationCollection_t6937 * __this, String_t* ___name, DTDEntityDeclaration_t6953 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
