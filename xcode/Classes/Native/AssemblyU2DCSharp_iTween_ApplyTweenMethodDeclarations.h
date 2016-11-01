#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/ApplyTween
struct ApplyTween_t5152;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
 void ApplyTween__ctor_m36617 (ApplyTween_t5152 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
 void ApplyTween_Invoke_m36618 (ApplyTween_t5152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ApplyTween_BeginInvoke_m36619 (ApplyTween_t5152 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
 void ApplyTween_EndInvoke_m36620 (ApplyTween_t5152 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
