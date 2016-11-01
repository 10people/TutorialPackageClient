#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>
struct Transform_1_t10615;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>
struct List_1_t416;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m74544 (Transform_1_t10615 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>::Invoke(TKey,TValue)
 List_1_t416 * Transform_1_Invoke_m74545 (Transform_1_t10615 * __this, int32_t ___key, List_1_t416 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m74546 (Transform_1_t10615 * __this, int32_t ___key, List_1_t416 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>::EndInvoke(System.IAsyncResult)
 List_1_t416 * Transform_1_EndInvoke_m74547 (Transform_1_t10615 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
