#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// LagRotation
struct LagRotation_t5264  : public MonoBehaviour_t18
{
	// System.Int32 LagRotation::updateOrder
	int32_t ___updateOrder;
	// System.Single LagRotation::speed
	float ___speed;
	// System.Boolean LagRotation::ignoreTimeScale
	bool ___ignoreTimeScale;
	// UnityEngine.Transform LagRotation::mTrans
	Transform_t78 * ___mTrans;
	// UnityEngine.Quaternion LagRotation::mRelative
	Quaternion_t120  ___mRelative;
	// UnityEngine.Quaternion LagRotation::mAbsolute
	Quaternion_t120  ___mAbsolute;
};
