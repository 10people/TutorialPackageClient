#pragma once
#include <stdint.h>
// NPCPresentChild
struct NPCPresentChild_t5131;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NPCPresent
struct NPCPresent_t5132  : public MonoBehaviour_t18
{
	// NPCPresentChild NPCPresent::dirChild
	NPCPresentChild_t5131 * ___dirChild;
	// System.Single NPCPresent::m_terrainHeight
	float ___m_terrainHeight;
	// UnityEngine.Color NPCPresent::m_curColor
	Color_t939  ___m_curColor;
	// System.String NPCPresent::NPCName
	String_t* ___NPCName;
	// UnityEngine.Vector3 NPCPresent::m_localPosCache
	Vector3_t121  ___m_localPosCache;
	// System.Single NPCPresent::m_radius
	float ___m_radius;
	// System.Int32 NPCPresent::DataID
	int32_t ___DataID;
	// System.Int32 NPCPresent::MutexID
	int32_t ___MutexID;
	// System.Int32 NPCPresent::GroupID
	int32_t ___GroupID;
	// System.Int32 NPCPresent::isHideAndSeekNpc
	int32_t ___isHideAndSeekNpc;
};
