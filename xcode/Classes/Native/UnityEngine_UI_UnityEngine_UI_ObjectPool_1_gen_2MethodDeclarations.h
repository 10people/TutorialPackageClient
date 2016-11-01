#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t6189;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t6190;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t5044;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m44106(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m167741_gshared((ObjectPool_1_t23121 *)__this, (UnityAction_1_t8593 *)___actionOnGet, (UnityAction_1_t8593 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m171933(__this, method) (int32_t)ObjectPool_1_get_countAll_m167743_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m171934(__this, ___value, method) (void)ObjectPool_1_set_countAll_m167745_gshared((ObjectPool_1_t23121 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m171935(__this, method) (int32_t)ObjectPool_1_get_countActive_m167747_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m171936(__this, method) (int32_t)ObjectPool_1_get_countInactive_m167749_gshared((ObjectPool_1_t23121 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m44107(__this, method) (List_1_t5044 *)ObjectPool_1_Get_m167751_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m44108(__this, ___element, method) (void)ObjectPool_1_Release_m167753_gshared((ObjectPool_1_t23121 *)__this, (Object_t *)___element, method)
