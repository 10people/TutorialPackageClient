#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<NPCEditorRoot/NPCData>>
struct Dictionary_2_t5129;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// NPCEditorRoot
struct NPCEditorRoot_t5130  : public MonoBehaviour_t18
{
	// System.Single NPCEditorRoot::UpdateDuration
	float ___UpdateDuration;
	// System.Single NPCEditorRoot::m_updateTimer
	float ___m_updateTimer;
	// System.Single NPCEditorRoot::m_terrainHeight
	float ___m_terrainHeight;
	// System.Int32 NPCEditorRoot::curSceneID
	int32_t ___curSceneID;
	// System.Int32 NPCEditorRoot::curDataID
	int32_t ___curDataID;
	// System.Single NPCEditorRoot::curRadius
	float ___curRadius;
	// UnityEngine.Color NPCEditorRoot::curColor
	Color_t939  ___curColor;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<NPCEditorRoot/NPCData>> NPCEditorRoot::m_dicNPCCache
	Dictionary_2_t5129 * ___m_dicNPCCache;
	// System.Collections.Generic.List`1<System.Int32> NPCEditorRoot::m_listSceneID
	List_1_t90 * ___m_listSceneID;
};
