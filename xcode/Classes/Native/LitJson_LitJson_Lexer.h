#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t6318;
// LitJson.FsmContext
struct FsmContext_t6316;
// System.IO.TextReader
struct TextReader_t1019;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.Lexer
struct Lexer_t6312  : public Object_t
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t6316 * ___fsm_context;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t1019 * ___reader;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t1097 * ___string_buffer;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar;
};
struct Lexer_t6312_StaticFields{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t116* ___fsm_return_table;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t6318* ___fsm_handler_table;
};
