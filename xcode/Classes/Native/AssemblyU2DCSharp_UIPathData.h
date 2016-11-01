#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,UIPathData>
struct Dictionary_2_t1602;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UIPathData/UIType
#include "AssemblyU2DCSharp_UIPathData_UIType.h"
// UIPathData
struct UIPathData_t1177  : public Object_t
{
	// System.String UIPathData::path
	String_t* ___path;
	// System.String UIPathData::name
	String_t* ___name;
	// UIPathData/UIType UIPathData::uiType
	int32_t ___uiType;
	// System.String UIPathData::uiGroupName
	String_t* ___uiGroupName;
	// System.Boolean UIPathData::isMainAsset
	bool ___isMainAsset;
	// System.Boolean UIPathData::isDestroyOnUnload
	bool ___isDestroyOnUnload;
};
struct UIPathData_t1177_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,UIPathData> UIPathData::m_DicUIInfo
	Dictionary_2_t1602 * ___m_DicUIInfo;
	// System.Collections.Generic.Dictionary`2<System.String,UIPathData> UIPathData::m_DicUIName
	Dictionary_2_t1602 * ___m_DicUIName;
};
