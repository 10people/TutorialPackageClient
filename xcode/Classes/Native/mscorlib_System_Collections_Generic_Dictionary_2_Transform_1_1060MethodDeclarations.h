#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>>
struct Transform_1_t22684;
// System.Object
struct Object_t;
// BMGlyph
struct BMGlyph_t5343;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_274.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m164744 (Transform_1_t22684 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>>::Invoke(TKey,TValue)
 KeyValuePair_2_t22676  Transform_1_Invoke_m164745 (Transform_1_t22684 * __this, int32_t ___key, BMGlyph_t5343 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m164746 (Transform_1_t22684 * __this, int32_t ___key, BMGlyph_t5343 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,System.Collections.Generic.KeyValuePair`2<System.Int32,BMGlyph>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t22676  Transform_1_EndInvoke_m164747 (Transform_1_t22684 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
