#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t6877;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Serialization.XmlTypeMapMember
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMember.h"
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t6878  : public XmlTypeMapMember_t6875
{
	// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlTypeMapMemberElement::_elementInfo
	XmlTypeMapElementInfoList_t6877 * ____elementInfo;
	// System.String System.Xml.Serialization.XmlTypeMapMemberElement::_choiceMember
	String_t* ____choiceMember;
	// System.Boolean System.Xml.Serialization.XmlTypeMapMemberElement::_isTextCollector
	bool ____isTextCollector;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMemberElement::_choiceTypeData
	TypeData_t6841 * ____choiceTypeData;
};
