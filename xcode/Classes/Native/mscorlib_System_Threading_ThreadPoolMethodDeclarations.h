#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t8206;
// System.Threading.WaitCallback
struct WaitCallback_t7214;
// System.Object
struct Object_t;

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
 bool ThreadPool_QueueUserWorkItem_m51250 (Object_t * __this/* static, unused */, WaitCallback_t7214 * ___callBack, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
