#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// NcSpriteFactory/NcFrameInfo
struct NcFrameInfo_t5094  : public Object_t
{
	// System.Int32 NcSpriteFactory/NcFrameInfo::m_nFrameIndex
	int32_t ___m_nFrameIndex;
	// System.Boolean NcSpriteFactory/NcFrameInfo::m_bEmptyFrame
	bool ___m_bEmptyFrame;
	// System.Int32 NcSpriteFactory/NcFrameInfo::m_nTexWidth
	int32_t ___m_nTexWidth;
	// System.Int32 NcSpriteFactory/NcFrameInfo::m_nTexHeight
	int32_t ___m_nTexHeight;
	// UnityEngine.Rect NcSpriteFactory/NcFrameInfo::m_TextureUvOffset
	Rect_t5068  ___m_TextureUvOffset;
	// UnityEngine.Rect NcSpriteFactory/NcFrameInfo::m_FrameUvOffset
	Rect_t5068  ___m_FrameUvOffset;
	// UnityEngine.Vector2 NcSpriteFactory/NcFrameInfo::m_FrameScale
	Vector2_t12  ___m_FrameScale;
	// UnityEngine.Vector2 NcSpriteFactory/NcFrameInfo::m_scaleFactor
	Vector2_t12  ___m_scaleFactor;
};
