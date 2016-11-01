#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t7279;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.String[]
struct StringU5BU5D_t333;
// System.UInt16[]
struct UInt16U5BU5D_t7204;
// System.Text.RegularExpressions.IMachine
struct IMachine_t7265;

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
 void InterpreterFactory__ctor_m50664 (InterpreterFactory_t7279 * __this, UInt16U5BU5D_t7204* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
 Object_t * InterpreterFactory_NewInstance_m50665 (InterpreterFactory_t7279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
 int32_t InterpreterFactory_get_GroupCount_m50666 (InterpreterFactory_t7279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
 int32_t InterpreterFactory_get_Gap_m50667 (InterpreterFactory_t7279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
 void InterpreterFactory_set_Gap_m50668 (InterpreterFactory_t7279 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
 Object_t * InterpreterFactory_get_Mapping_m50669 (InterpreterFactory_t7279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
 void InterpreterFactory_set_Mapping_m50670 (InterpreterFactory_t7279 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
 StringU5BU5D_t333* InterpreterFactory_get_NamesMapping_m50671 (InterpreterFactory_t7279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
 void InterpreterFactory_set_NamesMapping_m50672 (InterpreterFactory_t7279 * __this, StringU5BU5D_t333* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
