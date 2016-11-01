#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t6657;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
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
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchemaElement::.ctor()
 void XmlSchemaElement__ctor_m46597 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::InitPostCompileInformations()
 void XmlSchemaElement_InitPostCompileInformations_m46598 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsAbstract()
 bool XmlSchemaElement_get_IsAbstract_m46599 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsAbstract(System.Boolean)
 void XmlSchemaElement_set_IsAbstract_m46600 (XmlSchemaElement_t6657 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
 void XmlSchemaElement_set_Final_m46601 (XmlSchemaElement_t6657 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Name(System.String)
 void XmlSchemaElement_set_Name_m46602 (XmlSchemaElement_t6657 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsNillable()
 bool XmlSchemaElement_get_IsNillable_m46603 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsNillable(System.Boolean)
 void XmlSchemaElement_set_IsNillable_m46604 (XmlSchemaElement_t6657 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_RefName()
 XmlQualifiedName_t6656 * XmlSchemaElement_get_RefName_m46605 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SubstitutionGroup()
 XmlQualifiedName_t6656 * XmlSchemaElement_get_SubstitutionGroup_m46606 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SchemaTypeName()
 XmlQualifiedName_t6656 * XmlSchemaElement_get_SchemaTypeName_m46607 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaTypeName(System.Xml.XmlQualifiedName)
 void XmlSchemaElement_set_SchemaTypeName_m46608 (XmlSchemaElement_t6657 * __this, XmlQualifiedName_t6656 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::get_SchemaType()
 XmlSchemaType_t6687 * XmlSchemaElement_get_SchemaType_m46609 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaType(System.Xml.Schema.XmlSchemaType)
 void XmlSchemaElement_set_SchemaType_m46610 (XmlSchemaElement_t6657 * __this, XmlSchemaType_t6687 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::get_Constraints()
 XmlSchemaObjectCollection_t6755 * XmlSchemaElement_get_Constraints_m46611 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_QualifiedName()
 XmlQualifiedName_t6656 * XmlSchemaElement_get_QualifiedName_m46612 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaElement::get_ElementType()
 Object_t * XmlSchemaElement_get_ElementType_m46613 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_BlockResolved()
 int32_t XmlSchemaElement_get_BlockResolved_m46614 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_FinalResolved()
 int32_t XmlSchemaElement_get_FinalResolved_m46615 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsNillable()
 bool XmlSchemaElement_get_ActualIsNillable_m46616 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsAbstract()
 bool XmlSchemaElement_get_ActualIsAbstract_m46617 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedDefaultValue()
 String_t* XmlSchemaElement_get_ValidatedDefaultValue_m46618 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedFixedValue()
 String_t* XmlSchemaElement_get_ValidatedFixedValue_m46619 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::get_SubstitutingElements()
 ArrayList_t5157 * XmlSchemaElement_get_SubstitutingElements_m46620 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::SetParent(System.Xml.Schema.XmlSchemaObject)
 void XmlSchemaElement_SetParent_m46621 (XmlSchemaElement_t6657 * __this, XmlSchemaObject_t6662 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaElement_Compile_m46622 (XmlSchemaElement_t6657 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaElement::GetOptimizedParticle(System.Boolean)
 XmlSchemaParticle_t6760 * XmlSchemaElement_GetOptimizedParticle_m46623 (XmlSchemaElement_t6657 * __this, bool ___isTop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::AddSubstElementRecursively(System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaElement)
 void XmlSchemaElement_AddSubstElementRecursively_m46624 (XmlSchemaElement_t6657 * __this, XmlSchemaObjectCollection_t6755 * ___col, XmlSchemaElement_t6657 * ___el, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::FillSubstitutionElementInfo()
 void XmlSchemaElement_FillSubstitutionElementInfo_m46625 (XmlSchemaElement_t6657 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 int32_t XmlSchemaElement_Validate_m46626 (XmlSchemaElement_t6657 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
 bool XmlSchemaElement_ParticleEquals_m46627 (XmlSchemaElement_t6657 * __this, XmlSchemaParticle_t6760 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaElement_ValidateDerivationByRestriction_m46628 (XmlSchemaElement_t6657 * __this, XmlSchemaParticle_t6760 * ___baseParticle, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestrictionNameAndTypeOK(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
 bool XmlSchemaElement_ValidateDerivationByRestrictionNameAndTypeOK_m46629 (XmlSchemaElement_t6657 * __this, XmlSchemaElement_t6657 * ___baseElement, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, bool ___raiseError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaElement_CheckRecursion_m46630 (XmlSchemaElement_t6657 * __this, int32_t ___depth, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaElement_ValidateUniqueParticleAttribution_m46631 (XmlSchemaElement_t6657 * __this, XmlSchemaObjectTable_t6754 * ___qnames, ArrayList_t5157 * ___nsNames, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaElement_ValidateUniqueTypeAttribution_m46632 (XmlSchemaElement_t6657 * __this, XmlSchemaObjectTable_t6754 * ___labels, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateElementDefaultValidImmediate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
 void XmlSchemaElement_ValidateElementDefaultValidImmediate_m46633 (XmlSchemaElement_t6657 * __this, ValidationEventHandler_t6682 * ___h, XmlSchema_t6691 * ___schema, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
 XmlSchemaElement_t6657 * XmlSchemaElement_Read_m46634 (Object_t * __this/* static, unused */, XmlSchemaReader_t6758 * ___reader, ValidationEventHandler_t6682 * ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
