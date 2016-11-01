#pragma once
#include <stdint.h>
// System.String
struct String_t;
// BundleManager/LoadSingleFinish
struct LoadSingleFinish_t2144;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// BundleManager/ModelLoadData/LoadType
#include "AssemblyU2DCSharp_BundleManager_ModelLoadData_LoadType.h"
// BundleManager/ModelLoadData
struct ModelLoadData_t2145  : public Object_t
{
	// System.String BundleManager/ModelLoadData::m_modelName
	String_t* ___m_modelName;
	// BundleManager/LoadSingleFinish BundleManager/ModelLoadData::m_delFinish
	LoadSingleFinish_t2144 * ___m_delFinish;
	// System.Object BundleManager/ModelLoadData::m_param1
	Object_t * ___m_param1;
	// System.Object BundleManager/ModelLoadData::m_param2
	Object_t * ___m_param2;
	// System.Object BundleManager/ModelLoadData::m_param3
	Object_t * ___m_param3;
	// BundleManager/ModelLoadData/LoadType BundleManager/ModelLoadData::m_loadType
	int32_t ___m_loadType;
};
