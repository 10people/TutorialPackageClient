#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t6642;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t6638;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t6640;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t6643;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t6641;

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
 void XsdIdentitySelector__ctor_m45861 (XsdIdentitySelector_t6642 * __this, XmlSchemaXPath_t6643 * ___selector, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
 XsdIdentityPathU5BU5D_t6638* XsdIdentitySelector_get_Paths_m45862 (XsdIdentitySelector_t6642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
 void XsdIdentitySelector_AddField_m45863 (XsdIdentitySelector_t6642 * __this, XsdIdentityField_t6641 * ___field, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
 XsdIdentityFieldU5BU5D_t6640* XsdIdentitySelector_get_Fields_m45864 (XsdIdentitySelector_t6642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
