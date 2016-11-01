#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<MeleeWeaponTrail/Point>
struct List_1_t5126;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MeleeWeaponTrail
struct MeleeWeaponTrail_t5127  : public MonoBehaviour_t18
{
	// System.Boolean MeleeWeaponTrail::_emit
	bool ____emit;
	// System.Boolean MeleeWeaponTrail::_use
	bool ____use;
	// System.Single MeleeWeaponTrail::_emitTime
	float ____emitTime;
	// UnityEngine.Material MeleeWeaponTrail::_material
	Material_t133 * ____material;
	// System.Single MeleeWeaponTrail::_lifeTime
	float ____lifeTime;
	// UnityEngine.Color[] MeleeWeaponTrail::_colors
	ColorU5BU5D_t1421* ____colors;
	// System.Single[] MeleeWeaponTrail::_sizes
	SingleU5BU5D_t744* ____sizes;
	// System.Single MeleeWeaponTrail::_minVertexDistance
	float ____minVertexDistance;
	// System.Single MeleeWeaponTrail::_maxVertexDistance
	float ____maxVertexDistance;
	// System.Single MeleeWeaponTrail::_minVertexDistanceSqr
	float ____minVertexDistanceSqr;
	// System.Single MeleeWeaponTrail::_maxVertexDistanceSqr
	float ____maxVertexDistanceSqr;
	// System.Single MeleeWeaponTrail::_maxAngle
	float ____maxAngle;
	// System.Boolean MeleeWeaponTrail::_autoDestruct
	bool ____autoDestruct;
	// System.Int32 MeleeWeaponTrail::subdivisions
	int32_t ___subdivisions;
	// UnityEngine.Transform MeleeWeaponTrail::_base
	Transform_t78 * ____base;
	// UnityEngine.Transform MeleeWeaponTrail::_tip
	Transform_t78 * ____tip;
	// System.Collections.Generic.List`1<MeleeWeaponTrail/Point> MeleeWeaponTrail::_points
	List_1_t5126 * ____points;
	// System.Collections.Generic.List`1<MeleeWeaponTrail/Point> MeleeWeaponTrail::_smoothedPoints
	List_1_t5126 * ____smoothedPoints;
	// UnityEngine.GameObject MeleeWeaponTrail::_trailObject
	GameObject_t9 * ____trailObject;
	// UnityEngine.Mesh MeleeWeaponTrail::_trailMesh
	Mesh_t1049 * ____trailMesh;
	// UnityEngine.Vector3 MeleeWeaponTrail::_lastPosition
	Vector3_t121  ____lastPosition;
};
