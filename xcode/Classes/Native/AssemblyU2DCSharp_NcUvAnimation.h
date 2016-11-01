#pragma once
#include <stdint.h>
// UnityEngine.Renderer
struct Renderer_t1008;
// NcEffectAniBehaviour
#include "AssemblyU2DCSharp_NcEffectAniBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// NcUvAnimation
struct NcUvAnimation_t5072  : public NcEffectAniBehaviour_t5026
{
	// System.Single NcUvAnimation::m_fScrollSpeedX
	float ___m_fScrollSpeedX;
	// System.Single NcUvAnimation::m_fScrollSpeedY
	float ___m_fScrollSpeedY;
	// System.Single NcUvAnimation::m_fTilingX
	float ___m_fTilingX;
	// System.Single NcUvAnimation::m_fTilingY
	float ___m_fTilingY;
	// System.Single NcUvAnimation::m_fOffsetX
	float ___m_fOffsetX;
	// System.Single NcUvAnimation::m_fOffsetY
	float ___m_fOffsetY;
	// System.Boolean NcUvAnimation::m_bUseSmoothDeltaTime
	bool ___m_bUseSmoothDeltaTime;
	// System.Boolean NcUvAnimation::m_bFixedTileSize
	bool ___m_bFixedTileSize;
	// System.Boolean NcUvAnimation::m_bRepeat
	bool ___m_bRepeat;
	// System.Boolean NcUvAnimation::m_bAutoDestruct
	bool ___m_bAutoDestruct;
	// UnityEngine.Vector3 NcUvAnimation::m_OriginalScale
	Vector3_t121  ___m_OriginalScale;
	// UnityEngine.Vector2 NcUvAnimation::m_OriginalTiling
	Vector2_t12  ___m_OriginalTiling;
	// UnityEngine.Vector2 NcUvAnimation::m_EndOffset
	Vector2_t12  ___m_EndOffset;
	// UnityEngine.Vector2 NcUvAnimation::m_RepeatOffset
	Vector2_t12  ___m_RepeatOffset;
	// UnityEngine.Renderer NcUvAnimation::m_Renderer
	Renderer_t1008 * ___m_Renderer;
};
