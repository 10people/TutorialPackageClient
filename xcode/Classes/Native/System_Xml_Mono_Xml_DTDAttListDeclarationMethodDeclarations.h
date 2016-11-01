#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t6952;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t6957;
// System.Collections.IList
struct IList_t1062;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
 void DTDAttListDeclaration__ctor_m47799 (DTDAttListDeclaration_t6952 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
 String_t* DTDAttListDeclaration_get_Name_m47800 (DTDAttListDeclaration_t6952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
 void DTDAttListDeclaration_set_Name_m47801 (DTDAttListDeclaration_t6952 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
 DTDAttributeDefinition_t6957 * DTDAttListDeclaration_get_Item_m47802 (DTDAttListDeclaration_t6952 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
 DTDAttributeDefinition_t6957 * DTDAttListDeclaration_get_Item_m47803 (DTDAttListDeclaration_t6952 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
 DTDAttributeDefinition_t6957 * DTDAttListDeclaration_Get_m47804 (DTDAttListDeclaration_t6952 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
 DTDAttributeDefinition_t6957 * DTDAttListDeclaration_Get_m47805 (DTDAttListDeclaration_t6952 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
 Object_t * DTDAttListDeclaration_get_Definitions_m47806 (DTDAttListDeclaration_t6952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
 void DTDAttListDeclaration_Add_m47807 (DTDAttListDeclaration_t6952 * __this, DTDAttributeDefinition_t6957 * ___def, MethodInfo* method) IL2CPP_METHOD_ATTR;
