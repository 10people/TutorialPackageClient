#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlReaderBinarySupport/CommandState
#include "System_Xml_System_Xml_XmlReaderBinarySupport_CommandState.h"
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t7021  : public Object_t
{
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_t6677 * ___reader;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset;
};
