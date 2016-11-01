#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t6655;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t6642;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t6639;
// System.Collections.ArrayList
struct ArrayList_t5157;

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
 void XsdKeyTable__ctor_m45885 (XsdKeyTable_t6653 * __this, XmlSchemaIdentityConstraint_t6655 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
 XmlSchemaIdentityConstraint_t6655 * XsdKeyTable_get_SourceSchemaIdentity_m45886 (XsdKeyTable_t6653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
 XsdIdentitySelector_t6642 * XsdKeyTable_get_Selector_m45887 (XsdKeyTable_t6653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
 void XsdKeyTable_Reset_m45888 (XsdKeyTable_t6653 * __this, XmlSchemaIdentityConstraint_t6655 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
 XsdIdentityPath_t6639 * XsdKeyTable_SelectorMatches_m45889 (XsdKeyTable_t6653 * __this, ArrayList_t5157 * ___qnameStack, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
