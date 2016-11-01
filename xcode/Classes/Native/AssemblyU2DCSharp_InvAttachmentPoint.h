#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// InvAttachmentPoint
struct InvAttachmentPoint_t5241  : public MonoBehaviour_t18
{
	// InvBaseItem/Slot InvAttachmentPoint::slot
	int32_t ___slot;
	// UnityEngine.GameObject InvAttachmentPoint::mPrefab
	GameObject_t9 * ___mPrefab;
	// UnityEngine.GameObject InvAttachmentPoint::mChild
	GameObject_t9 * ___mChild;
};
