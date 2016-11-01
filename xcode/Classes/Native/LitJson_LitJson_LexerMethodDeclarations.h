#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.Lexer
struct Lexer_t6312;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// LitJson.FsmContext
struct FsmContext_t6316;

// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
 void Lexer__ctor_m44419 (Lexer_t6312 * __this, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
 void Lexer__cctor_m44420 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
 bool Lexer_get_AllowComments_m44421 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
 void Lexer_set_AllowComments_m44422 (Lexer_t6312 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
 bool Lexer_get_AllowSingleQuotedStrings_m44423 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
 void Lexer_set_AllowSingleQuotedStrings_m44424 (Lexer_t6312 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
 bool Lexer_get_EndOfInput_m44425 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
 int32_t Lexer_get_Token_m44426 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
 String_t* Lexer_get_StringValue_m44427 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
 int32_t Lexer_HexValue_m44428 (Object_t * __this/* static, unused */, int32_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
 void Lexer_PopulateFsmTables_m44429 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
 uint16_t Lexer_ProcessEscChar_m44430 (Object_t * __this/* static, unused */, int32_t ___esc_char, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
 bool Lexer_State1_m44431 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
 bool Lexer_State2_m44432 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
 bool Lexer_State3_m44433 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
 bool Lexer_State4_m44434 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
 bool Lexer_State5_m44435 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
 bool Lexer_State6_m44436 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
 bool Lexer_State7_m44437 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
 bool Lexer_State8_m44438 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
 bool Lexer_State9_m44439 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
 bool Lexer_State10_m44440 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
 bool Lexer_State11_m44441 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
 bool Lexer_State12_m44442 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
 bool Lexer_State13_m44443 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
 bool Lexer_State14_m44444 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
 bool Lexer_State15_m44445 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
 bool Lexer_State16_m44446 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
 bool Lexer_State17_m44447 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
 bool Lexer_State18_m44448 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
 bool Lexer_State19_m44449 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
 bool Lexer_State20_m44450 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
 bool Lexer_State21_m44451 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
 bool Lexer_State22_m44452 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
 bool Lexer_State23_m44453 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
 bool Lexer_State24_m44454 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
 bool Lexer_State25_m44455 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
 bool Lexer_State26_m44456 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
 bool Lexer_State27_m44457 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
 bool Lexer_State28_m44458 (Object_t * __this/* static, unused */, FsmContext_t6316 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
 bool Lexer_GetChar_m44459 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
 int32_t Lexer_NextChar_m44460 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
 bool Lexer_NextToken_m44461 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
 void Lexer_UngetChar_m44462 (Lexer_t6312 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
