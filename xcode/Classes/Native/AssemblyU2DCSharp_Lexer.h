#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// Lexer/StateHandler[]
struct StateHandlerU5BU5D_t1102;
// FsmContext
struct FsmContext_t1100;
// System.IO.TextReader
struct TextReader_t1019;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Lexer
struct Lexer_t1092  : public Object_t
{
	// System.Boolean Lexer::allow_comments
	bool ___allow_comments;
	// System.Boolean Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings;
	// System.Boolean Lexer::end_of_input
	bool ___end_of_input;
	// FsmContext Lexer::fsm_context
	FsmContext_t1100 * ___fsm_context;
	// System.Int32 Lexer::input_buffer
	int32_t ___input_buffer;
	// System.Int32 Lexer::input_char
	int32_t ___input_char;
	// System.IO.TextReader Lexer::reader
	TextReader_t1019 * ___reader;
	// System.Int32 Lexer::state
	int32_t ___state;
	// System.Text.StringBuilder Lexer::string_buffer
	StringBuilder_t1097 * ___string_buffer;
	// System.String Lexer::string_value
	String_t* ___string_value;
	// System.Int32 Lexer::token
	int32_t ___token;
	// System.Int32 Lexer::unichar
	int32_t ___unichar;
};
struct Lexer_t1092_StaticFields{
	// System.Int32[] Lexer::fsm_return_table
	Int32U5BU5D_t116* ___fsm_return_table;
	// Lexer/StateHandler[] Lexer::fsm_handler_table
	StateHandlerU5BU5D_t1102* ___fsm_handler_table;
};
