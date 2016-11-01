#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t6993  : public Object_t
{
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t4372 * ___table;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t6982 * ___dummy;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t1016* ___cacheBuffer;
};
