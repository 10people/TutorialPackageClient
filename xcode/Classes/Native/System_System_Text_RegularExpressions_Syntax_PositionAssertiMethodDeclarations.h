#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t7313;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t7303;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t7304;
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
 void PositionAssertion__ctor_m50902 (PositionAssertion_t7313 * __this, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void PositionAssertion_Compile_m50903 (PositionAssertion_t7313 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
 void PositionAssertion_GetWidth_m50904 (PositionAssertion_t7313 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
 bool PositionAssertion_IsComplex_m50905 (PositionAssertion_t7313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
 AnchorInfo_t7304 * PositionAssertion_GetAnchorInfo_m50906 (PositionAssertion_t7313 * __this, bool ___revers, MethodInfo* method) IL2CPP_METHOD_ATTR;
