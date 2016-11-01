#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>
struct Predicate_1_t24296;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.MeshSubsetCombineUtility/MeshInstance
#include "UnityEngine_UnityEngine_MeshSubsetCombineUtility_MeshInstanc.h"

// System.Void System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m177077 (Predicate_1_t24296 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>::Invoke(T)
 bool Predicate_1_Invoke_m177078 (Predicate_1_t24296 * __this, MeshInstance_t7519  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m177079 (Predicate_1_t24296 * __this, MeshInstance_t7519  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m177080 (Predicate_1_t24296 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
