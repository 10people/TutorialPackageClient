#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct StringWriter_t5471  : public TextWriter_t1098
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t1097 * ___internalString;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed;
};
