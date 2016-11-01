#pragma once
#include <stdint.h>
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t6985  : public Object_t
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t5526 * ___parent;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t5157 * ___nodeList;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly;
};
struct XmlNamedNodeMap_t6985_StaticFields{
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Object_t * ___emptyEnumerator;
};
