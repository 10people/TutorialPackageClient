#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t6754;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
 void XmlSchemaParticle__ctor_m46820 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
 XmlSchemaParticle_t6760 * XmlSchemaParticle_get_Empty_m46821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
 String_t* XmlSchemaParticle_get_MinOccursString_m46822 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
 void XmlSchemaParticle_set_MinOccursString_m46823 (XmlSchemaParticle_t6760 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
 String_t* XmlSchemaParticle_get_MaxOccursString_m46824 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
 void XmlSchemaParticle_set_MaxOccursString_m46825 (XmlSchemaParticle_t6760 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
 Decimal_t1099  XmlSchemaParticle_get_MinOccurs_m46826 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
 void XmlSchemaParticle_set_MinOccurs_m46827 (XmlSchemaParticle_t6760 * __this, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
 Decimal_t1099  XmlSchemaParticle_get_MaxOccurs_m46828 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
 void XmlSchemaParticle_set_MaxOccurs_m46829 (XmlSchemaParticle_t6760 * __this, Decimal_t1099  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
 Decimal_t1099  XmlSchemaParticle_get_ValidatedMinOccurs_m46830 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
 Decimal_t1099  XmlSchemaParticle_get_ValidatedMaxOccurs_m46831 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
 XmlSchemaParticle_t6760 * XmlSchemaParticle_GetOptimizedParticle_m46832 (XmlSchemaParticle_t6760 * __this, bool ___isTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
 XmlSchemaParticle_t6760 * XmlSchemaParticle_GetShallowClone_m46833 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaParticle_CompileOccurence_m46834 (XmlSchemaParticle_t6760 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
 void XmlSchemaParticle_CopyInfo_m46835 (XmlSchemaParticle_t6760 * __this, XmlSchemaParticle_t6760 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaParticle_ValidateOccurenceRangeOK_m46836 (XmlSchemaParticle_t6760 * __this, XmlSchemaParticle_t6760 * ___other, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
 Decimal_t1099  XmlSchemaParticle_GetMinEffectiveTotalRange_m46837 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
 Decimal_t1099  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m46838 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
 bool XmlSchemaParticle_ValidateIsEmptiable_m46839 (XmlSchemaParticle_t6760 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaParticle_ValidateDerivationByRestriction_m46840 (XmlSchemaParticle_t6760 * __this, XmlSchemaParticle_t6760 * ___baseParticle, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaParticle_ValidateUniqueParticleAttribution_m46841 (XmlSchemaParticle_t6760 * __this, XmlSchemaObjectTable_t6754 * ___qnames, ArrayList_t5157 * ___nsNames, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaParticle_ValidateUniqueTypeAttribution_m46842 (XmlSchemaParticle_t6760 * __this, XmlSchemaObjectTable_t6754 * ___labels, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaParticle_CheckRecursion_m46843 (XmlSchemaParticle_t6760 * __this, int32_t ___depth, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
 bool XmlSchemaParticle_ParticleEquals_m46844 (XmlSchemaParticle_t6760 * __this, XmlSchemaParticle_t6760 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
