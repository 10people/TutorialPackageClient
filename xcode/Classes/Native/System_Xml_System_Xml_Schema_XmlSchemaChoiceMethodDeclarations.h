#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t6667;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t6662;
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
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaChoice::.ctor()
 void XmlSchemaChoice__ctor_m46482 (XmlSchemaChoice_t6667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::get_Items()
 XmlSchemaObjectCollection_t6755 * XmlSchemaChoice_get_Items_m46483 (XmlSchemaChoice_t6667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaChoice_SetParent_m46484 (XmlSchemaChoice_t6667 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaChoice_Compile_m46485 (XmlSchemaChoice_t6667 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaChoice::GetOptimizedParticle(System.Boolean)
 XmlSchemaParticle_t6760 * XmlSchemaChoice_GetOptimizedParticle_m46486 (XmlSchemaChoice_t6667 * __this, bool ___isTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaChoice_Validate_m46487 (XmlSchemaChoice_t6667 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaChoice::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaChoice_ValidateDerivationByRestriction_m46488 (XmlSchemaChoice_t6667 * __this, XmlSchemaParticle_t6760 * ___baseParticle, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaChoice::GetMinEffectiveTotalRange()
 Decimal_t1099  XmlSchemaChoice_GetMinEffectiveTotalRange_m46489 (XmlSchemaChoice_t6667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaChoice_ValidateUniqueParticleAttribution_m46490 (XmlSchemaChoice_t6667 * __this, XmlSchemaObjectTable_t6754 * ___qnames, ArrayList_t5157 * ___nsNames, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaChoice_ValidateUniqueTypeAttribution_m46491 (XmlSchemaChoice_t6667 * __this, XmlSchemaObjectTable_t6754 * ___labels, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaChoice System.Xml.Schema.XmlSchemaChoice::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaChoice_t6667 * XmlSchemaChoice_Read_m46492 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
