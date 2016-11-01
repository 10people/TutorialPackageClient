#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t7304;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t7300;
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
 void AnchorInfo__ctor_m50927 (AnchorInfo_t7304 * __this, Expression_t7300 * ___expr, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
 void AnchorInfo__ctor_m50928 (AnchorInfo_t7304 * __this, Expression_t7300 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
 void AnchorInfo__ctor_m50929 (AnchorInfo_t7304 * __this, Expression_t7300 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
 int32_t AnchorInfo_get_Offset_m50930 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
 int32_t AnchorInfo_get_Width_m50931 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
 int32_t AnchorInfo_get_Length_m50932 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
 bool AnchorInfo_get_IsUnknownWidth_m50933 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
 bool AnchorInfo_get_IsComplete_m50934 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
 String_t* AnchorInfo_get_Substring_m50935 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
 bool AnchorInfo_get_IgnoreCase_m50936 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
 uint16_t AnchorInfo_get_Position_m50937 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
 bool AnchorInfo_get_IsSubstring_m50938 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
 bool AnchorInfo_get_IsPosition_m50939 (AnchorInfo_t7304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
 Interval_t7292  AnchorInfo_GetInterval_m50940 (AnchorInfo_t7304 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
