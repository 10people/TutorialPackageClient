#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t6642;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t6655;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// Mono.Xml.Schema.XsdKeyEntryCollection
struct XsdKeyEntryCollection_t6654;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653  : public Object_t
{
	// System.Boolean Mono.Xml.Schema.XsdKeyTable::alwaysTrue
	bool ___alwaysTrue;
	// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::selector
	XsdIdentitySelector_t6642 * ___selector;
	// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::source
	XmlSchemaIdentityConstraint_t6655 * ___source;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::qname
	XmlQualifiedName_t6656 * ___qname;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::refKeyName
	XmlQualifiedName_t6656 * ___refKeyName;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::Entries
	XsdKeyEntryCollection_t6654 * ___Entries;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::FinishedEntries
	XsdKeyEntryCollection_t6654 * ___FinishedEntries;
	// System.Int32 Mono.Xml.Schema.XsdKeyTable::StartDepth
	int32_t ___StartDepth;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyTable::ReferencedKey
	XsdKeyTable_t6653 * ___ReferencedKey;
};
