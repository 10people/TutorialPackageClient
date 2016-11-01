#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t6759;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671;

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
 void XmlSchemaGroupBase__ctor_m46674 (XmlSchemaGroupBase_t6759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_Items()
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
 XmlSchemaObjectCollection_t6755 * XmlSchemaGroupBase_get_CompiledItems_m46675 (XmlSchemaGroupBase_t6759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
 void XmlSchemaGroupBase_CopyOptimizedItems_m46676 (XmlSchemaGroupBase_t6759 * __this, XmlSchemaGroupBase_t6759 * ___gb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
 bool XmlSchemaGroupBase_ParticleEquals_m46677 (XmlSchemaGroupBase_t6759 * __this, XmlSchemaParticle_t6760 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaGroupBase_CheckRecursion_m46678 (XmlSchemaGroupBase_t6759 * __this, int32_t ___depth, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m46679 (XmlSchemaGroupBase_t6759 * __this, XmlSchemaAny_t6671 * ___any, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaGroupBase_ValidateRecurse_m46680 (XmlSchemaGroupBase_t6759 * __this, XmlSchemaGroupBase_t6759 * ___baseGroup, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
 bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m46681 (XmlSchemaGroupBase_t6759 * __this, XmlSchemaGroupBase_t6759 * ___baseGroup, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
