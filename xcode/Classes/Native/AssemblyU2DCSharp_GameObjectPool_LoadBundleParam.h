#pragma once
#include <stdint.h>
// GameObjectPool/CreatePoolObjDelegate
struct CreatePoolObjDelegate_t2183;
// System.Object
struct Object_t;
// UIPathData
struct UIPathData_t1177;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GameObjectPool/LoadBundleParam
struct LoadBundleParam_t2184  : public Object_t
{
	// GameObjectPool/CreatePoolObjDelegate GameObjectPool/LoadBundleParam::m_delFun
	CreatePoolObjDelegate_t2183 * ___m_delFun;
	// System.Object GameObjectPool/LoadBundleParam::m_userParam1
	Object_t * ___m_userParam1;
	// System.Object GameObjectPool/LoadBundleParam::m_userParam2
	Object_t * ___m_userParam2;
	// UIPathData GameObjectPool/LoadBundleParam::m_uiData
	UIPathData_t1177 * ___m_uiData;
	// System.String GameObjectPool/LoadBundleParam::m_objName
	String_t* ___m_objName;
};
