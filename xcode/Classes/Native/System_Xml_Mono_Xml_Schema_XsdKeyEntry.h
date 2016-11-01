#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdKeyEntryFieldCollection
struct XsdKeyEntryFieldCollection_t6652;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t6653;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t6646  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::StartDepth
	int32_t ___StartDepth;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::SelectorLineNumber
	int32_t ___SelectorLineNumber;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::SelectorLinePosition
	int32_t ___SelectorLinePosition;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::SelectorHasLineInfo
	bool ___SelectorHasLineInfo;
	// Mono.Xml.Schema.XsdKeyEntryFieldCollection Mono.Xml.Schema.XsdKeyEntry::KeyFields
	XsdKeyEntryFieldCollection_t6652 * ___KeyFields;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::KeyRefFound
	bool ___KeyRefFound;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyEntry::OwnerSequence
	XsdKeyTable_t6653 * ___OwnerSequence;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::keyFound
	bool ___keyFound;
};
