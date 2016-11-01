#pragma once
#include <stdint.h>
// ClipSlider
struct ClipSlider_t1849;
// UILabel
struct UILabel_t1176;
// LoadingBackTexAdapt
struct LoadingBackTexAdapt_t2006;
// UISlider
struct UISlider_t1219;
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_SCENE_D.h"
// LoadingWindow
struct LoadingWindow_t2008  : public MonoBehaviour_t18
{
	// ClipSlider LoadingWindow::m_ClipSlider
	ClipSlider_t1849 * ___m_ClipSlider;
	// UILabel LoadingWindow::m_xiaozhitiao
	UILabel_t1176 * ___m_xiaozhitiao;
	// UILabel LoadingWindow::LabelLoadingProgressNum1
	UILabel_t1176 * ___LabelLoadingProgressNum1;
	// UILabel LoadingWindow::LabelLoadingProgressNum2
	UILabel_t1176 * ___LabelLoadingProgressNum2;
	// LoadingBackTexAdapt LoadingWindow::m_LoadingBackTexAdapt
	LoadingBackTexAdapt_t2006 * ___m_LoadingBackTexAdapt;
	// UISlider LoadingWindow::SliderLoading1
	UISlider_t1219 * ___SliderLoading1;
};
struct LoadingWindow_t2008_StaticFields{
	// UnityEngine.AssetBundle LoadingWindow::m_lastSceneBundle
	AssetBundle_t2010 * ___m_lastSceneBundle;
	// Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE LoadingWindow::nextSceneID
	int32_t ___nextSceneID;
};
