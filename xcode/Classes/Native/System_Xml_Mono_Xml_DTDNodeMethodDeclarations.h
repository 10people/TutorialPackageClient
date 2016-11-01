#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNode
struct DTDNode_t6942;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Xml.XmlException
struct XmlException_t6940;

// System.Void Mono.Xml.DTDNode::.ctor()
 void DTDNode__ctor_m47770 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
 String_t* DTDNode_get_BaseURI_m47771 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
 void DTDNode_set_BaseURI_m47772 (DTDNode_t6942 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
 bool DTDNode_get_IsInternalSubset_m47773 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
 void DTDNode_set_IsInternalSubset_m47774 (DTDNode_t6942 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
 int32_t DTDNode_get_LineNumber_m47775 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
 int32_t DTDNode_get_LinePosition_m47776 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::HasLineInfo()
 bool DTDNode_HasLineInfo_m47777 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
 void DTDNode_SetRoot_m47778 (DTDNode_t6942 * __this, DTDObjectModel_t6924 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
 DTDObjectModel_t6924 * DTDNode_get_Root_m47779 (DTDNode_t6942 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
 XmlException_t6940 * DTDNode_NotWFError_m47780 (DTDNode_t6942 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
