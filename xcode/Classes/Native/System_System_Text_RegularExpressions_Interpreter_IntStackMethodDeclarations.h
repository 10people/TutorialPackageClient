#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t7286;
struct IntStack_t7286_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
 int32_t IntStack_Pop_m50726 (IntStack_t7286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
 void IntStack_Push_m50727 (IntStack_t7286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
 int32_t IntStack_get_Count_m50728 (IntStack_t7286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
 void IntStack_set_Count_m50729 (IntStack_t7286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t7286_marshal(const IntStack_t7286& unmarshaled, IntStack_t7286_marshaled& marshaled);
void IntStack_t7286_marshal_back(const IntStack_t7286_marshaled& marshaled, IntStack_t7286& unmarshaled);
void IntStack_t7286_marshal_cleanup(IntStack_t7286_marshaled& marshaled);
