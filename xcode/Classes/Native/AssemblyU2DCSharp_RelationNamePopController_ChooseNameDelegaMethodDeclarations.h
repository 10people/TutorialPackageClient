#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RelationNamePopController/ChooseNameDelegate
struct ChooseNameDelegate_t1820;
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

// System.Void RelationNamePopController/ChooseNameDelegate::.ctor(System.Object,System.IntPtr)
 void ChooseNameDelegate__ctor_m12045 (ChooseNameDelegate_t1820 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNamePopController/ChooseNameDelegate::Invoke(System.UInt64,System.String)
 void ChooseNameDelegate_Invoke_m12046 (ChooseNameDelegate_t1820 * __this, uint64_t ___curRelationID, String_t* ___recevierName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult RelationNamePopController/ChooseNameDelegate::BeginInvoke(System.UInt64,System.String,System.AsyncCallback,System.Object)
 Object_t * ChooseNameDelegate_BeginInvoke_m12047 (ChooseNameDelegate_t1820 * __this, uint64_t ___curRelationID, String_t* ___recevierName, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNamePopController/ChooseNameDelegate::EndInvoke(System.IAsyncResult)
 void ChooseNameDelegate_EndInvoke_m12048 (ChooseNameDelegate_t1820 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
