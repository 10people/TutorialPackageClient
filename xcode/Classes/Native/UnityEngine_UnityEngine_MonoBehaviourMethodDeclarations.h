#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t5584;
struct Coroutine_t5584_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
 void MonoBehaviour__ctor_m4086 (MonoBehaviour_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
 void MonoBehaviour_Invoke_m39110 (MonoBehaviour_t18 * __this, String_t* ___methodName, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
 void MonoBehaviour_InvokeRepeating_m39136 (MonoBehaviour_t18 * __this, String_t* ___methodName, float ___time, float ___repeatRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
 void MonoBehaviour_CancelInvoke_m39108 (MonoBehaviour_t18 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
 Coroutine_t5584 * MonoBehaviour_StartCoroutine_m39424 (MonoBehaviour_t18 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
 Coroutine_t5584 * MonoBehaviour_StartCoroutine_Auto_m52581 (MonoBehaviour_t18 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
 Coroutine_t5584 * MonoBehaviour_StartCoroutine_m52582 (MonoBehaviour_t18 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
 Coroutine_t5584 * MonoBehaviour_StartCoroutine_m40685 (MonoBehaviour_t18 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
 void MonoBehaviour_StopCoroutine_m41776 (MonoBehaviour_t18 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutine_m52583 (MonoBehaviour_t18 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_m43942 (MonoBehaviour_t18 * __this, Coroutine_t5584 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m52584 (MonoBehaviour_t18 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_Auto_m52585 (MonoBehaviour_t18 * __this, Coroutine_t5584 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
 void MonoBehaviour_set_useGUILayout_m42391 (MonoBehaviour_t18 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
