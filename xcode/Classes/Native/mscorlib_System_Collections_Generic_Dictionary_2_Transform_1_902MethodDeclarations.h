#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BelleMatrix,BelleMatrix>
struct Transform_1_t19041;
// System.Object
struct Object_t;
// BelleMatrix
struct BelleMatrix_t4852;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BelleMatrix,BelleMatrix>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m139673 (Transform_1_t19041 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BelleMatrix,BelleMatrix>::Invoke(TKey,TValue)
 BelleMatrix_t4852 * Transform_1_Invoke_m139674 (Transform_1_t19041 * __this, int32_t ___key, BelleMatrix_t4852 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BelleMatrix,BelleMatrix>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m139675 (Transform_1_t19041 * __this, int32_t ___key, BelleMatrix_t4852 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,BelleMatrix,BelleMatrix>::EndInvoke(System.IAsyncResult)
 BelleMatrix_t4852 * Transform_1_EndInvoke_m139676 (Transform_1_t19041 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
