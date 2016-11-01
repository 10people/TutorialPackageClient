#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t7781;
struct Context_t7781_marshaled;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Boolean)
 void Context__ctor_m53602 (Context_t7781 * __this, int32_t ___opt, uint8_t* ___alwaysMatchFlags, uint8_t* ___neverMatchFlags, uint8_t* ___buffer1, uint8_t* ___buffer2, uint8_t* ___prev1, bool ___quickCheckPossible, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Context_t7781_marshal(const Context_t7781& unmarshaled, Context_t7781_marshaled& marshaled);
void Context_t7781_marshal_back(const Context_t7781_marshaled& marshaled, Context_t7781& unmarshaled);
void Context_t7781_marshal_cleanup(Context_t7781_marshaled& marshaled);
