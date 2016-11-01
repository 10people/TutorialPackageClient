#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Lexer
struct Lexer_t1092;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1019;
// FsmContext
struct FsmContext_t1100;

// System.Void Lexer::.ctor(System.IO.TextReader)
 void Lexer__ctor_m6865 (Lexer_t1092 * __this, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lexer::.cctor()
 void Lexer__cctor_m6866 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::get_AllowComments()
 bool Lexer_get_AllowComments_m6867 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lexer::set_AllowComments(System.Boolean)
 void Lexer_set_AllowComments_m6868 (Lexer_t1092 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::get_AllowSingleQuotedStrings()
 bool Lexer_get_AllowSingleQuotedStrings_m6869 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lexer::set_AllowSingleQuotedStrings(System.Boolean)
 void Lexer_set_AllowSingleQuotedStrings_m6870 (Lexer_t1092 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::get_EndOfInput()
 bool Lexer_get_EndOfInput_m6871 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lexer::get_Token()
 int32_t Lexer_get_Token_m6872 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lexer::get_StringValue()
 String_t* Lexer_get_StringValue_m6873 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lexer::HexValue(System.Int32)
 int32_t Lexer_HexValue_m6874 (Object_t * __this/* static, unused */, int32_t ___digit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lexer::PopulateFsmTables()
 void Lexer_PopulateFsmTables_m6875 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Lexer::ProcessEscChar(System.Int32)
 uint16_t Lexer_ProcessEscChar_m6876 (Object_t * __this/* static, unused */, int32_t ___esc_char, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State1(FsmContext)
 bool Lexer_State1_m6877 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State2(FsmContext)
 bool Lexer_State2_m6878 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State3(FsmContext)
 bool Lexer_State3_m6879 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State4(FsmContext)
 bool Lexer_State4_m6880 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State5(FsmContext)
 bool Lexer_State5_m6881 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State6(FsmContext)
 bool Lexer_State6_m6882 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State7(FsmContext)
 bool Lexer_State7_m6883 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State8(FsmContext)
 bool Lexer_State8_m6884 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State9(FsmContext)
 bool Lexer_State9_m6885 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State10(FsmContext)
 bool Lexer_State10_m6886 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State11(FsmContext)
 bool Lexer_State11_m6887 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State12(FsmContext)
 bool Lexer_State12_m6888 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State13(FsmContext)
 bool Lexer_State13_m6889 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State14(FsmContext)
 bool Lexer_State14_m6890 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State15(FsmContext)
 bool Lexer_State15_m6891 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State16(FsmContext)
 bool Lexer_State16_m6892 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State17(FsmContext)
 bool Lexer_State17_m6893 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State18(FsmContext)
 bool Lexer_State18_m6894 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State19(FsmContext)
 bool Lexer_State19_m6895 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State20(FsmContext)
 bool Lexer_State20_m6896 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State21(FsmContext)
 bool Lexer_State21_m6897 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State22(FsmContext)
 bool Lexer_State22_m6898 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State23(FsmContext)
 bool Lexer_State23_m6899 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State24(FsmContext)
 bool Lexer_State24_m6900 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State25(FsmContext)
 bool Lexer_State25_m6901 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State26(FsmContext)
 bool Lexer_State26_m6902 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State27(FsmContext)
 bool Lexer_State27_m6903 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::State28(FsmContext)
 bool Lexer_State28_m6904 (Object_t * __this/* static, unused */, FsmContext_t1100 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::GetChar()
 bool Lexer_GetChar_m6905 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lexer::NextChar()
 int32_t Lexer_NextChar_m6906 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lexer::NextToken()
 bool Lexer_NextToken_m6907 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lexer::UngetChar()
 void Lexer_UngetChar_m6908 (Lexer_t1092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
