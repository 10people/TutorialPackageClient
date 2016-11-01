#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t7291;
// System.UInt16[]
struct UInt16U5BU5D_t7204;
// System.Text.RegularExpressions.Match
struct Match_t6630;
// System.Text.RegularExpressions.Regex
struct Regex_t6628;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t6632;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
 void Interpreter__ctor_m50740 (Interpreter_t7291 * __this, UInt16U5BU5D_t7204* ___program, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
 int32_t Interpreter_ReadProgramCount_m50741 (Interpreter_t7291 * __this, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
 Match_t6630 * Interpreter_Scan_m50742 (Interpreter_t7291 * __this, Regex_t6628 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
 void Interpreter_Reset_m50743 (Interpreter_t7291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
 bool Interpreter_Eval_m50744 (Interpreter_t7291 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
 bool Interpreter_EvalChar_m50745 (Interpreter_t7291 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
 bool Interpreter_TryMatch_m50746 (Interpreter_t7291 * __this, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
 bool Interpreter_IsPosition_m50747 (Interpreter_t7291 * __this, uint16_t ___pos, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
 bool Interpreter_IsWordChar_m50748 (Interpreter_t7291 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
 String_t* Interpreter_GetString_m50749 (Interpreter_t7291 * __this, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
 void Interpreter_Open_m50750 (Interpreter_t7291 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
 void Interpreter_Close_m50751 (Interpreter_t7291 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
 bool Interpreter_Balance_m50752 (Interpreter_t7291 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
 int32_t Interpreter_Checkpoint_m50753 (Interpreter_t7291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
 void Interpreter_Backtrack_m50754 (Interpreter_t7291 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
 void Interpreter_ResetGroups_m50755 (Interpreter_t7291 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
 int32_t Interpreter_GetLastDefined_m50756 (Interpreter_t7291 * __this, int32_t ___gid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
 int32_t Interpreter_CreateMark_m50757 (Interpreter_t7291 * __this, int32_t ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
 void Interpreter_GetGroupInfo_m50758 (Interpreter_t7291 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
 void Interpreter_PopulateGroup_m50759 (Interpreter_t7291 * __this, Group_t6632 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
 Match_t6630 * Interpreter_GenerateMatch_m50760 (Interpreter_t7291 * __this, Regex_t6628 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
