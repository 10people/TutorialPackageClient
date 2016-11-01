#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,BMGlyph>
struct Transform_1_t22683;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,BMGlyph>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m164736 (Transform_1_t22683 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,BMGlyph>::Invoke(TKey,TValue)
 BMGlyph_t5343 * Transform_1_Invoke_m164737 (Transform_1_t22683 * __this, int32_t ___key, BMGlyph_t5343 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,BMGlyph>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m164738 (Transform_1_t22683 * __this, int32_t ___key, BMGlyph_t5343 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BMGlyph,BMGlyph>::EndInvoke(System.IAsyncResult)
 BMGlyph_t5343 * Transform_1_EndInvoke_m164739 (Transform_1_t22683 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
