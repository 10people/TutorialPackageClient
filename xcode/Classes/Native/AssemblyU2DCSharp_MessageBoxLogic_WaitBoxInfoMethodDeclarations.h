#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MessageBoxLogic/WaitBoxInfo
struct WaitBoxInfo_t1550;
// System.String
struct String_t;
// MessageBoxLogic/OnWaitTimeOut
struct OnWaitTimeOut_t1549;
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"

// System.Void MessageBoxLogic/WaitBoxInfo::.ctor(System.String,System.Single,System.Single,MessageBoxLogic/OnWaitTimeOut,MessageBoxLogic/PASSWORD)
 void WaitBoxInfo__ctor_m9599 (WaitBoxInfo_t1550 * __this, String_t* ___text, float ___duration, float ___delay, OnWaitTimeOut_t1549 * ___delWaitTimeOutFun, int32_t ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
