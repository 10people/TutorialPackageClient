#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1098;
// System.IO.TextReader
struct TextReader_t1019;
// System.Text.Encoding
struct Encoding_t1037;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t5684  : public Object_t
{
};
struct Console_t5684_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1098 * ___stdout;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1098 * ___stderr;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1019 * ___stdin;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1037 * ___inputEncoding;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1037 * ___outputEncoding;
};
