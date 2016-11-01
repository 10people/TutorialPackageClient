#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t5157;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// iTween/EasingFunction
struct EasingFunction_t5151;
// iTween/ApplyTween
struct ApplyTween_t5152;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t5158;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.Rect[]
struct RectU5BU5D_t5159;
// iTween/CRSpline
struct CRSpline_t5150;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"
// iTween/LoopType
#include "AssemblyU2DCSharp_iTween_LoopType.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/NamedValueColor
#include "AssemblyU2DCSharp_iTween_NamedValueColor.h"
// iTween
struct iTween_t5153  : public MonoBehaviour_t18
{
	// System.String iTween::id
	String_t* ___id;
	// System.String iTween::type
	String_t* ___type;
	// System.String iTween::method
	String_t* ___method;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType;
	// System.Single iTween::time
	float ___time;
	// System.Single iTween::delay
	float ___delay;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType;
	// System.Boolean iTween::isRunning
	bool ___isRunning;
	// System.Boolean iTween::isPaused
	bool ___isPaused;
	// System.String iTween::_name
	String_t* ____name;
	// System.Single iTween::runningTime
	float ___runningTime;
	// System.Single iTween::percentage
	float ___percentage;
	// System.Single iTween::delayStarted
	float ___delayStarted;
	// System.Boolean iTween::kinematic
	bool ___kinematic;
	// System.Boolean iTween::isLocal
	bool ___isLocal;
	// System.Boolean iTween::loop
	bool ___loop;
	// System.Boolean iTween::reverse
	bool ___reverse;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused;
	// System.Boolean iTween::physics
	bool ___physics;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t4372 * ___tweenArguments;
	// UnityEngine.Space iTween::space
	int32_t ___space;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t5151 * ___ease;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t5152 * ___apply;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t4416 * ___audioSource;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t1262* ___vector3s;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_t114* ___vector2s;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t5158* ___colors;
	// System.Single[] iTween::floats
	SingleU5BU5D_t744* ___floats;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t5159* ___rects;
	// iTween/CRSpline iTween::path
	CRSpline_t5150 * ___path;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t121  ___preUpdate;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t121  ___postUpdate;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue;
	// System.Single iTween::lastRealTime
	float ___lastRealTime;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime;
};
struct iTween_t5153_StaticFields{
	// System.Collections.ArrayList iTween::tweens
	ArrayList_t5157 * ___tweens;
	// UnityEngine.GameObject iTween::cameraFade
	GameObject_t9 * ___cameraFade;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map7
	Dictionary_2_t944 * ___U3CU3Ef__switch$map7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map8
	Dictionary_2_t944 * ___U3CU3Ef__switch$map8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map9
	Dictionary_2_t944 * ___U3CU3Ef__switch$map9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapA
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapA;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapB
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapB;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapC
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapC;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapD
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapD;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapE
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapE;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapF
	Dictionary_2_t944 * ___U3CU3Ef__switch$mapF;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map10
	Dictionary_2_t944 * ___U3CU3Ef__switch$map10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map11
	Dictionary_2_t944 * ___U3CU3Ef__switch$map11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map12
	Dictionary_2_t944 * ___U3CU3Ef__switch$map12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map13
	Dictionary_2_t944 * ___U3CU3Ef__switch$map13;
};
