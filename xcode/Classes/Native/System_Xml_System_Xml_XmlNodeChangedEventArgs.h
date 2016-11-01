#pragma once
#include <stdint.h>
// System.Xml.XmlNode
struct XmlNode_t5526;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t7013  : public EventArgs_t5207
{
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_oldParent
	XmlNode_t5526 * ____oldParent;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_newParent
	XmlNode_t5526 * ____newParent;
	// System.Xml.XmlNodeChangedAction System.Xml.XmlNodeChangedEventArgs::_action
	int32_t ____action;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_node
	XmlNode_t5526 * ____node;
	// System.String System.Xml.XmlNodeChangedEventArgs::_oldValue
	String_t* ____oldValue;
	// System.String System.Xml.XmlNodeChangedEventArgs::_newValue
	String_t* ____newValue;
};
