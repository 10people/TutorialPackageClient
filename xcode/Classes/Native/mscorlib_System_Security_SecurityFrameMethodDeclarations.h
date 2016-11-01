#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityFrame
struct SecurityFrame_t8171;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.AppDomain
struct AppDomain_t8169;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t8170;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
 void SecurityFrame__ctor_m56128 (SecurityFrame_t8171 * __this, RuntimeSecurityFrame_t8170 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
 Array_t * SecurityFrame__GetSecurityStack_m56129 (Object_t * __this/* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
 void SecurityFrame_InitFromRuntimeFrame_m56130 (SecurityFrame_t8171 * __this, RuntimeSecurityFrame_t8170 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
 Assembly_t7067 * SecurityFrame_get_Assembly_m56131 (SecurityFrame_t8171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
 AppDomain_t8169 * SecurityFrame_get_Domain_m56132 (SecurityFrame_t8171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
 String_t* SecurityFrame_ToString_m56133 (SecurityFrame_t8171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
 ArrayList_t5157 * SecurityFrame_GetStack_m56134 (Object_t * __this/* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
