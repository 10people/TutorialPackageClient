#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t133;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t5394;
// UIAtlas
struct UIAtlas_t1593;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t5395;
// System.Comparison`1<UISpriteData>
struct Comparison_1_t5396;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAtlas/Coordinates
#include "AssemblyU2DCSharp_UIAtlas_Coordinates.h"
// UIAtlas
struct UIAtlas_t1593  : public MonoBehaviour_t18
{
	// UnityEngine.Material UIAtlas::material
	Material_t133 * ___material;
	// System.Collections.Generic.List`1<UISpriteData> UIAtlas::mSprites
	List_1_t5394 * ___mSprites;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize;
	// System.Single UIAtlas::mScale
	float ___mScale;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t1593 * ___mReplacement;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t5395 * ___sprites;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA;
};
struct UIAtlas_t1593_StaticFields{
	// System.Comparison`1<UISpriteData> UIAtlas::<>f__am$cache8
	Comparison_1_t5396 * ___U3CU3Ef__am$cache8;
};
