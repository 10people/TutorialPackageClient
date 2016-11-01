#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t6935;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t6952;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
 void DTDAttListDeclarationCollection__ctor_m47742 (DTDAttListDeclarationCollection_t6935 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
 DTDAttListDeclaration_t6952 * DTDAttListDeclarationCollection_get_Item_m47743 (DTDAttListDeclarationCollection_t6935 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
 void DTDAttListDeclarationCollection_Add_m47744 (DTDAttListDeclarationCollection_t6935 * __this, String_t* ___name, DTDAttListDeclaration_t6952 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
