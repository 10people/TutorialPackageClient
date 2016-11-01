#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInputNumber/Validator
struct Validator_t1859;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIInputNumber/Validator::.ctor(System.Object,System.IntPtr)
 void Validator__ctor_m12280 (Validator_t1859 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInputNumber/Validator::Invoke(System.String,System.Char)
 uint16_t Validator_Invoke_m12281 (Validator_t1859 * __this, String_t* ___currentText, uint16_t ___nextChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIInputNumber/Validator::BeginInvoke(System.String,System.Char,System.AsyncCallback,System.Object)
 Object_t * Validator_BeginInvoke_m12282 (Validator_t1859 * __this, String_t* ___currentText, uint16_t ___nextChar, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInputNumber/Validator::EndInvoke(System.IAsyncResult)
 uint16_t Validator_EndInvoke_m12283 (Validator_t1859 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
