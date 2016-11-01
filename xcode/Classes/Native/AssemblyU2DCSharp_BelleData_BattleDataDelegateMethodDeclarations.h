#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/BattleDataDelegate
struct BattleDataDelegate_t4857;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/BattleDataDelegate::.ctor(System.Object,System.IntPtr)
 void BattleDataDelegate__ctor_m34516 (BattleDataDelegate_t4857 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/BattleDataDelegate::Invoke()
 void BattleDataDelegate_Invoke_m34517 (BattleDataDelegate_t4857 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/BattleDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * BattleDataDelegate_BeginInvoke_m34518 (BattleDataDelegate_t4857 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/BattleDataDelegate::EndInvoke(System.IAsyncResult)
 void BattleDataDelegate_EndInvoke_m34519 (BattleDataDelegate_t4857 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
