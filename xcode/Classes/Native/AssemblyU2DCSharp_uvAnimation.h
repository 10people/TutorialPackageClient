#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Renderer
struct Renderer_t1008;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// uvAnimation
struct uvAnimation_t5109  : public MonoBehaviour_t18
{
	// System.Int32 uvAnimation::materialIndex
	int32_t ___materialIndex;
	// System.String uvAnimation::textureName
	String_t* ___textureName;
	// UnityEngine.Vector2 uvAnimation::uvAnimationRate
	Vector2_t12  ___uvAnimationRate;
	// UnityEngine.Vector2 uvAnimation::uvOffset
	Vector2_t12  ___uvOffset;
	// UnityEngine.Renderer uvAnimation::r
	Renderer_t1008 * ___r;
	// UnityEngine.Material uvAnimation::m_IndexMaterial
	Material_t133 * ___m_IndexMaterial;
};
