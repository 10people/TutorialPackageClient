#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t934;
// UnityEngine.Texture
struct Texture_t937;
// UnityEngine.Material
struct Material_t133;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UITexture
struct UITexture_t1378  : public UIWidget_t5195
{
	// UnityEngine.Rect UITexture::mRect
	Rect_t5068  ___mRect;
	// UnityEngine.Shader UITexture::mShader
	Shader_t934 * ___mShader;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t937 * ___mTexture;
	// UnityEngine.Material UITexture::mMat
	Material_t133 * ___mMat;
	// System.Boolean UITexture::mCreatingMat
	bool ___mCreatingMat;
	// UnityEngine.Material UITexture::mDynamicMat
	Material_t133 * ___mDynamicMat;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA;
};
