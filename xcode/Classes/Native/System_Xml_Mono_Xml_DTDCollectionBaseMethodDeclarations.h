#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t6950;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t6942;
// System.Object
struct Object_t;

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
 void DTDCollectionBase__ctor_m47733 (DTDCollectionBase_t6950 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
 DTDObjectModel_t6924 * DTDCollectionBase_get_Root_m47734 (DTDCollectionBase_t6950 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
 void DTDCollectionBase_BaseAdd_m47735 (DTDCollectionBase_t6950 * __this, String_t* ___name, DTDNode_t6942 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
 bool DTDCollectionBase_Contains_m47736 (DTDCollectionBase_t6950 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
 Object_t * DTDCollectionBase_BaseGet_m47737 (DTDCollectionBase_t6950 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
