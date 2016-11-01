#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// LagPosition
struct LagPosition_t5263  : public MonoBehaviour_t18
{
	// System.Int32 LagPosition::updateOrder
	int32_t ___updateOrder;
	// UnityEngine.Vector3 LagPosition::speed
	Vector3_t121  ___speed;
	// System.Boolean LagPosition::ignoreTimeScale
	bool ___ignoreTimeScale;
	// UnityEngine.Transform LagPosition::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Vector3 LagPosition::mRelative
	Vector3_t121  ___mRelative;
	// UnityEngine.Vector3 LagPosition::mAbsolute
	Vector3_t121  ___mAbsolute;
};
