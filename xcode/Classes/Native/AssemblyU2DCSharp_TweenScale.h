#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UITable
struct UITable_t1306;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenScale
struct TweenScale_t1259  : public UITweener_t5320
{
	// UnityEngine.Vector3 TweenScale::from
	Vector3_t121  ___from;
	// UnityEngine.Vector3 TweenScale::to
	Vector3_t121  ___to;
	// System.Boolean TweenScale::updateTable
	bool ___updateTable;
	// UnityEngine.Transform TweenScale::mTrans
	Transform_t78 * ___mTrans;
	// UITable TweenScale::mTable
	UITable_t1306 * ___mTable;
};
