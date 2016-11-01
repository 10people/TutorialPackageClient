#pragma once
#include <stdint.h>
// System.SystemException
#include "mscorlib_System_SystemException.h"
// Mono.Xml.SmallXmlParserException
struct SmallXmlParserException_t7834  : public SystemException_t6783
{
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column;
};
