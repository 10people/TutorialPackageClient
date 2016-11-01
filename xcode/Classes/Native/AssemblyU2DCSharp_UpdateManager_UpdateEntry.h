#pragma once
#include <stdint.h>
// UpdateManager/OnUpdate
struct OnUpdate_t5276;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// System.Object
#include "mscorlib_System_Object.h"
// UpdateManager/UpdateEntry
struct UpdateEntry_t5277  : public Object_t
{
	// System.Int32 UpdateManager/UpdateEntry::index
	int32_t ___index;
	// UpdateManager/OnUpdate UpdateManager/UpdateEntry::func
	OnUpdate_t5276 * ___func;
	// UnityEngine.MonoBehaviour UpdateManager/UpdateEntry::mb
	MonoBehaviour_t18 * ___mb;
	// System.Boolean UpdateManager/UpdateEntry::isMonoBehaviour
	bool ___isMonoBehaviour;
};
