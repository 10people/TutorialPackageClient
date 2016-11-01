#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t23121;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t8593;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
 void ObjectPool_1__ctor_m167741_gshared (ObjectPool_1_t23121 * __this, UnityAction_1_t8593 * ___actionOnGet, UnityAction_1_t8593 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m167741(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m167741_gshared((ObjectPool_1_t23121 *)__this, (UnityAction_1_t8593 *)___actionOnGet, (UnityAction_1_t8593 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
 int32_t ObjectPool_1_get_countAll_m167743_gshared (ObjectPool_1_t23121 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m167743(__this, method) (int32_t)ObjectPool_1_get_countAll_m167743_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
 void ObjectPool_1_set_countAll_m167745_gshared (ObjectPool_1_t23121 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m167745(__this, ___value, method) (void)ObjectPool_1_set_countAll_m167745_gshared((ObjectPool_1_t23121 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
 int32_t ObjectPool_1_get_countActive_m167747_gshared (ObjectPool_1_t23121 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m167747(__this, method) (int32_t)ObjectPool_1_get_countActive_m167747_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
 int32_t ObjectPool_1_get_countInactive_m167749_gshared (ObjectPool_1_t23121 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m167749(__this, method) (int32_t)ObjectPool_1_get_countInactive_m167749_gshared((ObjectPool_1_t23121 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
 Object_t * ObjectPool_1_Get_m167751_gshared (ObjectPool_1_t23121 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m167751(__this, method) (Object_t *)ObjectPool_1_Get_m167751_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
 void ObjectPool_1_Release_m167753_gshared (ObjectPool_1_t23121 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m167753(__this, ___element, method) (void)ObjectPool_1_Release_m167753_gshared((ObjectPool_1_t23121 *)__this, (Object_t *)___element, method)
