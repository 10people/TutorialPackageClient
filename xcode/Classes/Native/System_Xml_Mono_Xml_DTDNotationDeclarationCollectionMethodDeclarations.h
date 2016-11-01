#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t6938;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t6954;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
 void DTDNotationDeclarationCollection__ctor_m47748 (DTDNotationDeclarationCollection_t6938 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
 DTDNotationDeclaration_t6954 * DTDNotationDeclarationCollection_get_Item_m47749 (DTDNotationDeclarationCollection_t6938 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
 void DTDNotationDeclarationCollection_Add_m47750 (DTDNotationDeclarationCollection_t6938 * __this, String_t* ___name, DTDNotationDeclaration_t6954 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
