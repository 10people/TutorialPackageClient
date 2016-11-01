#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t6646;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t6641;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t6647;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t6639;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t6648  : public Object_t
{
	// Mono.Xml.Schema.XsdKeyEntry Mono.Xml.Schema.XsdKeyEntryField::entry
	XsdKeyEntry_t6646 * ___entry;
	// Mono.Xml.Schema.XsdIdentityField Mono.Xml.Schema.XsdKeyEntryField::field
	XsdIdentityField_t6641 * ___field;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldFound
	bool ___FieldFound;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLineNumber
	int32_t ___FieldLineNumber;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLinePosition
	int32_t ___FieldLinePosition;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldHasLineInfo
	bool ___FieldHasLineInfo;
	// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdKeyEntryField::FieldType
	XsdAnySimpleType_t6647 * ___FieldType;
	// System.Object Mono.Xml.Schema.XsdKeyEntryField::Identity
	Object_t * ___Identity;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::IsXsiNil
	bool ___IsXsiNil;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldFoundDepth
	int32_t ___FieldFoundDepth;
	// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::FieldFoundPath
	XsdIdentityPath_t6639 * ___FieldFoundPath;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consuming
	bool ___Consuming;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consumed
	bool ___Consumed;
};
