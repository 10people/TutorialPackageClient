#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t6934;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t6951;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
 void DTDElementDeclarationCollection__ctor_m47738 (DTDElementDeclarationCollection_t6934 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
 DTDElementDeclaration_t6951 * DTDElementDeclarationCollection_get_Item_m47739 (DTDElementDeclarationCollection_t6934 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
 DTDElementDeclaration_t6951 * DTDElementDeclarationCollection_Get_m47740 (DTDElementDeclarationCollection_t6934 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
 void DTDElementDeclarationCollection_Add_m47741 (DTDElementDeclarationCollection_t6934 * __this, String_t* ___name, DTDElementDeclaration_t6951 * ___decl, MethodInfo* method) IL2CPP_METHOD_ATTR;
