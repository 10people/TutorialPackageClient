#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BundleManager/ModelLoadData
struct ModelLoadData_t2145;
// System.String
struct String_t;
// BundleManager/LoadSingleFinish
struct LoadSingleFinish_t2144;
// System.Object
struct Object_t;
// BundleManager/ModelLoadData/LoadType
#include "AssemblyU2DCSharp_BundleManager_ModelLoadData_LoadType.h"

// System.Void BundleManager/ModelLoadData::.ctor()
 void ModelLoadData__ctor_m14465 (ModelLoadData_t2145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/ModelLoadData::.ctor(BundleManager/ModelLoadData/LoadType,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.Object)
 void ModelLoadData__ctor_m14466 (ModelLoadData_t2145 * __this, int32_t ___loadType, String_t* ___modelName, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager/ModelLoadData::ResetData(BundleManager/ModelLoadData/LoadType,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.Object)
 void ModelLoadData_ResetData_m14467 (ModelLoadData_t2145 * __this, int32_t ___loadType, String_t* ___modelName, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BundleManager/ModelLoadData::GetLoadUrl()
 String_t* ModelLoadData_GetLoadUrl_m14468 (ModelLoadData_t2145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
