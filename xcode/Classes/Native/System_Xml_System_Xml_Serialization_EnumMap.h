#pragma once
#include <stdint.h>
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t6921;
// System.String[]
struct StringU5BU5D_t333;
// System.Int64[]
struct Int64U5BU5D_t6861;
// System.Xml.Serialization.ObjectMap
#include "System_Xml_System_Xml_Serialization_ObjectMap.h"
// System.Xml.Serialization.EnumMap
struct EnumMap_t6922  : public ObjectMap_t6866
{
	// System.Xml.Serialization.EnumMap/EnumMapMember[] System.Xml.Serialization.EnumMap::_members
	EnumMapMemberU5BU5D_t6921* ____members;
	// System.Boolean System.Xml.Serialization.EnumMap::_isFlags
	bool ____isFlags;
	// System.String[] System.Xml.Serialization.EnumMap::_enumNames
	StringU5BU5D_t333* ____enumNames;
	// System.String[] System.Xml.Serialization.EnumMap::_xmlNames
	StringU5BU5D_t333* ____xmlNames;
	// System.Int64[] System.Xml.Serialization.EnumMap::_values
	Int64U5BU5D_t6861* ____values;
};
