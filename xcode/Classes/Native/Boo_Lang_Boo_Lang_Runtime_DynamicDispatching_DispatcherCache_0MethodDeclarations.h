#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t6365;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t6362;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t6366;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t6363;

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
 void DispatcherCache__ctor_m44569 (DispatcherCache_t6365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
 void DispatcherCache__cctor_m44570 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
 Dispatcher_t6362 * DispatcherCache_Get_m44571 (DispatcherCache_t6365 * __this, DispatcherKey_t6366 * ___key, DispatcherFactory_t6363 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
