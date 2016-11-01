#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t7930;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t7931;
// System.Exception
struct Exception_t972;
// System.Reflection.AssemblyName
struct AssemblyName_t7932;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
 String_t* AssemblyBuilder_get_Location_m54793 (AssemblyBuilder_t7930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
 ModuleU5BU5D_t7931* AssemblyBuilder_GetModulesInternal_m54794 (AssemblyBuilder_t7930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
 bool AssemblyBuilder_get_IsCompilerContext_m54795 (AssemblyBuilder_t7930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
 Exception_t972 * AssemblyBuilder_not_supported_m54796 (AssemblyBuilder_t7930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
 AssemblyName_t7932 * AssemblyBuilder_UnprotectedGetName_m54797 (AssemblyBuilder_t7930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
