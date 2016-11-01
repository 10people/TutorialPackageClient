#pragma once
#include <stdint.h>
// LitJson.Lexer
struct Lexer_t6312;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.FsmContext
struct FsmContext_t6316  : public Object_t
{
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t6312 * ___L;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack;
};
