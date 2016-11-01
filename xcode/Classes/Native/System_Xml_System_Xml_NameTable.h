#pragma once
#include <stdint.h>
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t6974;
// System.Xml.XmlNameTable
#include "System_Xml_System_Xml_XmlNameTable.h"
// System.Xml.NameTable
struct NameTable_t6975  : public XmlNameTable_t6650
{
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t6974* ___buckets;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size;
};
