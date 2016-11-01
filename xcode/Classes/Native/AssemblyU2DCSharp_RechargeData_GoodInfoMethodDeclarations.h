#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RechargeData/GoodInfo
struct GoodInfo_t4503;
// System.String
struct String_t;

// System.Void RechargeData/GoodInfo::.ctor(System.String)
 void GoodInfo__ctor_m35543 (GoodInfo_t4503 * __this, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData/GoodInfo::.ctor()
 void GoodInfo__ctor_m35544 (GoodInfo_t4503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RechargeData/GoodInfo RechargeData/GoodInfo::GetGoodInfoWithTimes(System.Int32)
 GoodInfo_t4503 * GoodInfo_GetGoodInfoWithTimes_m35545 (GoodInfo_t4503 * __this, int32_t ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RechargeData/GoodInfo::GetValue(System.String,System.String&)
 String_t* GoodInfo_GetValue_m35546 (GoodInfo_t4503 * __this, String_t* ___curKey, String_t** ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData/GoodInfo::WriteString()
 void GoodInfo_WriteString_m35547 (GoodInfo_t4503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
