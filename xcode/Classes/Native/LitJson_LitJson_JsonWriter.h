#pragma once
#include <stdint.h>
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1095;
// LitJson.WriterContext
struct WriterContext_t6314;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t6315;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IO.TextWriter
struct TextWriter_t1098;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonWriter
struct JsonWriter_t6286  : public Object_t
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t6314 * ___context;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t6315 * ___ctx_stack;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t1016* ___hex_seq;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t1097 * ___inst_string_builder;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t1098 * ___writer;
};
struct JsonWriter_t6286_StaticFields{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t1095 * ___number_format;
};
