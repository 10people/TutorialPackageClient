#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SkillBarInfo[],System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>>
struct Transform_1_t18594;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SkillBarInfo[]
struct SkillBarInfoU5BU5D_t1728;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_248.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SkillBarInfo[],System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m136858 (Transform_1_t18594 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SkillBarInfo[],System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>>::Invoke(TKey,TValue)
 KeyValuePair_2_t18585  Transform_1_Invoke_m136859 (Transform_1_t18594 * __this, String_t* ___key, SkillBarInfoU5BU5D_t1728* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SkillBarInfo[],System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m136860 (Transform_1_t18594 * __this, String_t* ___key, SkillBarInfoU5BU5D_t1728* ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SkillBarInfo[],System.Collections.Generic.KeyValuePair`2<System.String,SkillBarInfo[]>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t18585  Transform_1_EndInvoke_m136861 (Transform_1_t18594 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
