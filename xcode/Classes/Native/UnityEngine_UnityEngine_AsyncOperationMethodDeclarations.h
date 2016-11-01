#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2007;
struct AsyncOperation_t2007_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m52516 (AsyncOperation_t2007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m52517 (AsyncOperation_t2007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m52518 (AsyncOperation_t2007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
 bool AsyncOperation_get_isDone_m39975 (AsyncOperation_t2007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AsyncOperation::get_progress()
 float AsyncOperation_get_progress_m39974 (AsyncOperation_t2007 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2007_marshal(const AsyncOperation_t2007& unmarshaled, AsyncOperation_t2007_marshaled& marshaled);
void AsyncOperation_t2007_marshal_back(const AsyncOperation_t2007_marshaled& marshaled, AsyncOperation_t2007& unmarshaled);
void AsyncOperation_t2007_marshal_cleanup(AsyncOperation_t2007_marshaled& marshaled);
