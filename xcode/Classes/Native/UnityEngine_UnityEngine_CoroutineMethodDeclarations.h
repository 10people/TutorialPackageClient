#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t5584;
struct Coroutine_t5584_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m51996 (Coroutine_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m51997 (Coroutine_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m51998 (Coroutine_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t5584_marshal(const Coroutine_t5584& unmarshaled, Coroutine_t5584_marshaled& marshaled);
void Coroutine_t5584_marshal_back(const Coroutine_t5584_marshaled& marshaled, Coroutine_t5584& unmarshaled);
void Coroutine_t5584_marshal_cleanup(Coroutine_t5584_marshaled& marshaled);
