#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t6789;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t6788;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
 void XmlSchemaGroupRef__ctor_m46682 (XmlSchemaGroupRef_t6789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
 XmlQualifiedName_t6656 * XmlSchemaGroupRef_get_RefName_m46683 (XmlSchemaGroupRef_t6789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
 XmlSchemaGroup_t6788 * XmlSchemaGroupRef_get_TargetGroup_m46684 (XmlSchemaGroupRef_t6789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaGroupRef_Compile_m46685 (XmlSchemaGroupRef_t6789 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaGroupRef_Validate_m46686 (XmlSchemaGroupRef_t6789 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
 XmlSchemaParticle_t6760 * XmlSchemaGroupRef_GetOptimizedParticle_m46687 (XmlSchemaGroupRef_t6789 * __this, bool ___isTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
 bool XmlSchemaGroupRef_ParticleEquals_m46688 (XmlSchemaGroupRef_t6789 * __this, XmlSchemaParticle_t6760 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m46689 (XmlSchemaGroupRef_t6789 * __this, XmlSchemaParticle_t6760 * ___baseParticle, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaGroupRef_CheckRecursion_m46690 (XmlSchemaGroupRef_t6789 * __this, int32_t ___depth, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m46691 (XmlSchemaGroupRef_t6789 * __this, XmlSchemaObjectTable_t6754 * ___qnames, ArrayList_t5157 * ___nsNames, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m46692 (XmlSchemaGroupRef_t6789 * __this, XmlSchemaObjectTable_t6754 * ___labels, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaGroupRef_t6789 * XmlSchemaGroupRef_Read_m46693 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
