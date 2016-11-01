#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t2185;
// System.Object
#include "mscorlib_System_Object.h"
// GameObjectPool
struct GameObjectPool_t2186  : public Object_t
{
	// System.String GameObjectPool::m_szPoolName
	String_t* ___m_szPoolName;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>> GameObjectPool::m_ActivePool
	Dictionary_2_t2185 * ___m_ActivePool;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>> GameObjectPool::m_InActivePool
	Dictionary_2_t2185 * ___m_InActivePool;
	// System.Int32 GameObjectPool::m_nMaxGameObjectType
	int32_t ___m_nMaxGameObjectType;
	// System.Int32 GameObjectPool::m_nMaxSize
	int32_t ___m_nMaxSize;
};
