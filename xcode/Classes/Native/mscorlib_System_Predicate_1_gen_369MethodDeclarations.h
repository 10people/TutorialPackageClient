#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct Predicate_1_t24311;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance
#include "UnityEngine_UnityEngine_MeshSubsetCombineUtility_SubMeshInst.h"

// System.Void System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m177228 (Predicate_1_t24311 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::Invoke(T)
 bool Predicate_1_Invoke_m177229 (Predicate_1_t24311 * __this, SubMeshInstance_t7520  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m177230 (Predicate_1_t24311 * __this, SubMeshInstance_t7520  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m177231 (Predicate_1_t24311 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
