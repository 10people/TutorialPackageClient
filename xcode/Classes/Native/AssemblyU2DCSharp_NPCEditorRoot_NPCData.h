#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// NPCEditorRoot/NPCData
struct NPCData_t5128  : public Object_t
{
	// System.String NPCEditorRoot/NPCData::name
	String_t* ___name;
	// System.Int32 NPCEditorRoot/NPCData::sceneID
	int32_t ___sceneID;
	// System.Int32 NPCEditorRoot/NPCData::dataID
	int32_t ___dataID;
	// System.Single NPCEditorRoot/NPCData::xPos
	float ___xPos;
	// System.Single NPCEditorRoot/NPCData::yPos
	float ___yPos;
	// System.Single NPCEditorRoot/NPCData::rad
	float ___rad;
	// System.Int32 NPCEditorRoot/NPCData::groupID
	int32_t ___groupID;
	// System.Int32 NPCEditorRoot/NPCData::mutexID
	int32_t ___mutexID;
	// System.Int32 NPCEditorRoot/NPCData::isHideAndSeekNpc
	int32_t ___isHideAndSeekNpc;
};
