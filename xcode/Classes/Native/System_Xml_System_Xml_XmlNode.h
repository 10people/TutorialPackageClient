#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t7010;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t7011;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct XmlNode_t5526  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t5524 * ___ownerDocument;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t5526 * ___parentNode;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t7011 * ___childNodes;
};
struct XmlNode_t5526_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t7010 * ___emptyList;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t944 * ___U3CU3Ef__switch$map44;
};
