#pragma once
#include <stdint.h>
// SimpleWater/ItweenComplete
struct ItweenComplete_t1048;
// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// SimpleWater
struct SimpleWater_t1050  : public MonoBehaviour_t18
{
	// SimpleWater/ItweenComplete SimpleWater::WaterComplete
	ItweenComplete_t1048 * ___WaterComplete;
	// System.Single SimpleWater::width
	float ___width;
	// System.Single SimpleWater::height
	float ___height;
	// System.Int32 SimpleWater::waterSubdivisions
	int32_t ___waterSubdivisions;
	// UnityEngine.Mesh SimpleWater::proceduralMesh
	Mesh_t1049 * ___proceduralMesh;
	// UnityEngine.Color SimpleWater::deepColor
	Color_t939  ___deepColor;
	// UnityEngine.Color SimpleWater::surfaceColor
	Color_t939  ___surfaceColor;
	// UnityEngine.Material SimpleWater::waterMaterial
	Material_t133 * ___waterMaterial;
	// UnityEngine.Material SimpleWater::myMaterial
	Material_t133 * ___myMaterial;
	// System.Single SimpleWater::currentHeight
	float ___currentHeight;
	// UnityEngine.Color SimpleWater::currentColor
	Color_t939  ___currentColor;
	// System.Boolean SimpleWater::tweenAlpha
	bool ___tweenAlpha;
};
