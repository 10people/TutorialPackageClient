#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t6185;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t6186;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t6188;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m44101(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m167741_gshared((ObjectPool_1_t23121 *)__this, (UnityAction_1_t8593 *)___actionOnGet, (UnityAction_1_t8593 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m171893(__this, method) (int32_t)ObjectPool_1_get_countAll_m167743_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m171894(__this, ___value, method) (void)ObjectPool_1_set_countAll_m167745_gshared((ObjectPool_1_t23121 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m171895(__this, method) (int32_t)ObjectPool_1_get_countActive_m167747_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m171896(__this, method) (int32_t)ObjectPool_1_get_countInactive_m167749_gshared((ObjectPool_1_t23121 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m44102(__this, method) (List_1_t6188 *)ObjectPool_1_Get_m167751_gshared((ObjectPool_1_t23121 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m44103(__this, ___element, method) (void)ObjectPool_1_Release_m167753_gshared((ObjectPool_1_t23121 *)__this, (Object_t *)___element, method)
