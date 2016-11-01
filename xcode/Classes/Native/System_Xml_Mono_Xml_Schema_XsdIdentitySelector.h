#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t6638;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t6640;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t6642  : public Object_t
{
	// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::selectorPaths
	XsdIdentityPathU5BU5D_t6638* ___selectorPaths;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIdentitySelector::fields
	ArrayList_t5157 * ___fields;
	// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::cachedFields
	XsdIdentityFieldU5BU5D_t6640* ___cachedFields;
};
