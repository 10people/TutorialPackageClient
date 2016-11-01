#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Cutscene.Cutscene/ActionContainer,System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>>
struct Transform_1_t21132;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_265.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Cutscene.Cutscene/ActionContainer,System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m154074 (Transform_1_t21132 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Cutscene.Cutscene/ActionContainer,System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21124  Transform_1_Invoke_m154075 (Transform_1_t21132 * __this, String_t* ___key, ActionContainer_t4591 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Cutscene.Cutscene/ActionContainer,System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m154076 (Transform_1_t21132 * __this, String_t* ___key, ActionContainer_t4591 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Cutscene.Cutscene/ActionContainer,System.Collections.Generic.KeyValuePair`2<System.String,Cutscene.Cutscene/ActionContainer>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21124  Transform_1_EndInvoke_m154077 (Transform_1_t21132 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
