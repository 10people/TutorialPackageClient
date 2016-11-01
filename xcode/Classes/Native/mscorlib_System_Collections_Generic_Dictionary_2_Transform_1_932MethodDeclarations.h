#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>>
struct Transform_1_t19772;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PVPSkillListItem
struct PVPSkillListItem_t1914;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_253.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m144109 (Transform_1_t19772 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>>::Invoke(TKey,TValue)
 KeyValuePair_2_t19757  Transform_1_Invoke_m144110 (Transform_1_t19772 * __this, String_t* ___key, PVPSkillListItem_t1914 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m144111 (Transform_1_t19772 * __this, String_t* ___key, PVPSkillListItem_t1914 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,PVPSkillListItem,System.Collections.Generic.KeyValuePair`2<System.String,PVPSkillListItem>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t19757  Transform_1_EndInvoke_m144112 (Transform_1_t19772 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
