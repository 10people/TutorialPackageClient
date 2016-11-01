#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Mutex
struct Mutex_t8028;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
 void Mutex__ctor_m56385 (Mutex_t8028 * __this, bool ___initiallyOwned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
 IntPtr_t24 Mutex_CreateMutex_internal_m56386 (Object_t * __this/* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
 bool Mutex_ReleaseMutex_internal_m56387 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
 void Mutex_ReleaseMutex_m56388 (Mutex_t8028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
