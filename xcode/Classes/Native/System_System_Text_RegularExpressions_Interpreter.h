#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t7204;
// System.String
struct String_t;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t7289;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t7287;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t7290;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// System.Text.RegularExpressions.Interpreter
struct Interpreter_t7291  : public BaseMachine_t7260
{
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t7204* ___program;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t7289 * ___qs;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t7287 * ___repeat;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t7287 * ___fast;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t7286  ___stack;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t7287 * ___deep;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t7290* ___marks;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t116* ___groups;
};
