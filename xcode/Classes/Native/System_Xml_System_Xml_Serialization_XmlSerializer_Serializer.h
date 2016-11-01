#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Xml.Serialization.XmlSerializerImplementation
struct XmlSerializerImplementation_t6904;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t6905  : public Object_t
{
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::ReaderType
	Type_t * ___ReaderType;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::ReaderMethod
	MethodInfo_t1087 * ___ReaderMethod;
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::WriterType
	Type_t * ___WriterType;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::WriterMethod
	MethodInfo_t1087 * ___WriterMethod;
	// System.Xml.Serialization.XmlSerializerImplementation System.Xml.Serialization.XmlSerializer/SerializerData::Implementation
	XmlSerializerImplementation_t6904 * ___Implementation;
};
