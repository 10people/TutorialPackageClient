#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t7311;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t7306;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t7301;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t7310;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t7303;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
 void CaptureAssertion__ctor_m50879 (CaptureAssertion_t7311 * __this, Literal_t7310 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void CaptureAssertion_set_CapturingGroup_m50880 (CaptureAssertion_t7311 * __this, CapturingGroup_t7306 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CaptureAssertion_Compile_m50881 (CaptureAssertion_t7311 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
 bool CaptureAssertion_IsComplex_m50882 (CaptureAssertion_t7311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
 ExpressionAssertion_t7301 * CaptureAssertion_get_Alternate_m50883 (CaptureAssertion_t7311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
