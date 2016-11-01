#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t5585;
struct WaitForSeconds_t5585_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
 void WaitForSeconds__ctor_m39457 (WaitForSeconds_t5585 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t5585_marshal(const WaitForSeconds_t5585& unmarshaled, WaitForSeconds_t5585_marshaled& marshaled);
void WaitForSeconds_t5585_marshal_back(const WaitForSeconds_t5585_marshaled& marshaled, WaitForSeconds_t5585& unmarshaled);
void WaitForSeconds_t5585_marshal_cleanup(WaitForSeconds_t5585_marshaled& marshaled);
