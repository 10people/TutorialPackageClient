#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIToggledObjects
struct UIToggledObjects_t5334  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::activate
	List_1_t1289 * ___activate;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::deactivate
	List_1_t1289 * ___deactivate;
	// UnityEngine.GameObject UIToggledObjects::target
	GameObject_t9 * ___target;
	// System.Boolean UIToggledObjects::inverse
	bool ___inverse;
};
