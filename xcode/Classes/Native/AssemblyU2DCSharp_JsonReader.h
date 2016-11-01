#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t1090;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t1091;
// Lexer
struct Lexer_t1092;
// System.IO.TextReader
struct TextReader_t1019;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// JsonToken
#include "AssemblyU2DCSharp_JsonToken.h"
// JsonReader
struct JsonReader_t1088  : public Object_t
{
	// System.Collections.Generic.Stack`1<System.Int32> JsonReader::automaton_stack
	Stack_1_t1091 * ___automaton_stack;
	// System.Int32 JsonReader::current_input
	int32_t ___current_input;
	// System.Int32 JsonReader::current_symbol
	int32_t ___current_symbol;
	// System.Boolean JsonReader::end_of_json
	bool ___end_of_json;
	// System.Boolean JsonReader::end_of_input
	bool ___end_of_input;
	// Lexer JsonReader::lexer
	Lexer_t1092 * ___lexer;
	// System.Boolean JsonReader::parser_in_string
	bool ___parser_in_string;
	// System.Boolean JsonReader::parser_return
	bool ___parser_return;
	// System.Boolean JsonReader::read_started
	bool ___read_started;
	// System.IO.TextReader JsonReader::reader
	TextReader_t1019 * ___reader;
	// System.Boolean JsonReader::reader_is_owned
	bool ___reader_is_owned;
	// System.Object JsonReader::token_value
	Object_t * ___token_value;
	// JsonToken JsonReader::token
	int32_t ___token;
};
struct JsonReader_t1088_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> JsonReader::parse_table
	Object_t* ___parse_table;
};
