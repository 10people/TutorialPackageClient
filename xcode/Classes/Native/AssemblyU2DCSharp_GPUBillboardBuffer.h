#pragma once
#include <stdint.h>
// GPUBillboardBuffer
struct GPUBillboardBuffer_t1417;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1419;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1420;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GPUBillboardBuffer
struct GPUBillboardBuffer_t1417  : public Object_t
{
	// UnityEngine.GameObject GPUBillboardBuffer::mGameObject
	GameObject_t9 * ___mGameObject;
	// UnityEngine.Mesh GPUBillboardBuffer::mMesh
	Mesh_t1049 * ___mMesh;
	// UnityEngine.Material GPUBillboardBuffer::mMaterial
	Material_t133 * ___mMaterial;
	// UnityEngine.MeshFilter GPUBillboardBuffer::mFilter
	MeshFilter_t1418 * ___mFilter;
	// UnityEngine.MeshRenderer GPUBillboardBuffer::mRenderer
	MeshRenderer_t1419 * ___mRenderer;
	// UnityEngine.Vector3[] GPUBillboardBuffer::mCenters
	Vector3U5BU5D_t1262* ___mCenters;
	// UnityEngine.Vector4[] GPUBillboardBuffer::mPosXYLifeScale
	Vector4U5BU5D_t1420* ___mPosXYLifeScale;
	// UnityEngine.Vector2[] GPUBillboardBuffer::mUv
	Vector2U5BU5D_t114* ___mUv;
	// UnityEngine.Color[] GPUBillboardBuffer::mColors
	ColorU5BU5D_t1421* ___mColors;
	// UnityEngine.Vector2[] GPUBillboardBuffer::mInitialSpeedXY
	Vector2U5BU5D_t114* ___mInitialSpeedXY;
	// UnityEngine.Vector2[] GPUBillboardBuffer::mAccelerationXY
	Vector2U5BU5D_t114* ___mAccelerationXY;
	// UnityEngine.Vector3[] GPUBillboardBuffer::mLifeSpanParam
	Vector3U5BU5D_t1262* ___mLifeSpanParam;
	// UnityEngine.Vector4[] GPUBillboardBuffer::m_SpeedParam
	Vector4U5BU5D_t1420* ___m_SpeedParam;
	// UnityEngine.Vector4[] GPUBillboardBuffer::m_TimeParam
	Vector4U5BU5D_t1420* ___m_TimeParam;
	// UnityEngine.Vector4[] GPUBillboardBuffer::m_TimeParamExtra
	Vector4U5BU5D_t1420* ___m_TimeParamExtra;
	// UnityEngine.Vector2 GPUBillboardBuffer::randomspeed
	Vector2_t12  ___randomspeed;
	// UnityEngine.Vector2 GPUBillboardBuffer::randomacceleration
	Vector2_t12  ___randomacceleration;
	// UnityEngine.Vector3 GPUBillboardBuffer::lifeParam
	Vector3_t121  ___lifeParam;
	// UnityEngine.Vector2 GPUBillboardBuffer::mUVIncrease
	Vector2_t12  ___mUVIncrease;
	// System.UInt32 GPUBillboardBuffer::mMaxBoardSize
	uint32_t ___mMaxBoardSize;
	// System.UInt32 GPUBillboardBuffer::mBoardIndex
	uint32_t ___mBoardIndex;
};
struct GPUBillboardBuffer_t1417_StaticFields{
	// System.Int32 GPUBillboardBuffer::BC_VERTEX_EACH_BOARD
	int32_t ___BC_VERTEX_EACH_BOARD;
	// System.Int32 GPUBillboardBuffer::BC_INDICES_EACH_BOARD
	int32_t ___BC_INDICES_EACH_BOARD;
	// System.Int32 GPUBillboardBuffer::BC_TEXTURE_ROW_COLUMN
	int32_t ___BC_TEXTURE_ROW_COLUMN;
	// System.Single GPUBillboardBuffer::BC_FONT_WIDTH
	float ___BC_FONT_WIDTH;
	// GPUBillboardBuffer GPUBillboardBuffer::instance
	GPUBillboardBuffer_t1417 * ___instance;
};
