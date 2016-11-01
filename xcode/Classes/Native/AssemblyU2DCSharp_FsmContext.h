#pragma once
#include <stdint.h>
// Lexer
struct Lexer_t1092;
// System.Object
#include "mscorlib_System_Object.h"
// FsmContext
struct FsmContext_t1100  : public Object_t
{
	// System.Boolean FsmContext::Return
	bool ___Return;
	// System.Int32 FsmContext::NextState
	int32_t ___NextState;
	// Lexer FsmContext::L
	Lexer_t1092 * ___L;
	// System.Int32 FsmContext::StateStack
	int32_t ___StateStack;
};
