#pragma once
#include <stdint.h>
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1095;
// WriterContext
struct WriterContext_t1094;
// System.Collections.Generic.Stack`1<WriterContext>
struct Stack_1_t1096;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Object
#include "mscorlib_System_Object.h"
// JsonWriter
struct JsonWriter_t1060  : public Object_t
{
	// WriterContext JsonWriter::context
	WriterContext_t1094 * ___context;
	// System.Collections.Generic.Stack`1<WriterContext> JsonWriter::ctx_stack
	Stack_1_t1096 * ___ctx_stack;
	// System.Boolean JsonWriter::has_reached_end
	bool ___has_reached_end;
	// System.Char[] JsonWriter::hex_seq
	CharU5BU5D_t1016* ___hex_seq;
	// System.Int32 JsonWriter::indentation
	int32_t ___indentation;
	// System.Int32 JsonWriter::indent_value
	int32_t ___indent_value;
	// System.Text.StringBuilder JsonWriter::inst_string_builder
	StringBuilder_t1097 * ___inst_string_builder;
	// System.Boolean JsonWriter::pretty_print
	bool ___pretty_print;
	// System.Boolean JsonWriter::validate
	bool ___validate;
	// System.IO.TextWriter JsonWriter::writer
	TextWriter_t1098 * ___writer;
};
struct JsonWriter_t1060_StaticFields{
	// System.Globalization.NumberFormatInfo JsonWriter::number_format
	NumberFormatInfo_t1095 * ___number_format;
};
