#pragma once
#include <stdint.h>
// UnityEngine.Texture[]
struct TextureU5BU5D_t936;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t5161;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// iceMagic/PlayMode
#include "AssemblyU2DCSharp_iceMagic_PlayMode.h"
// iceMagic
struct iceMagic_t5162  : public MonoBehaviour_t18
{
	// UnityEngine.Texture[] iceMagic::frames
	TextureU5BU5D_t936* ___frames;
	// System.Single iceMagic::TailTime
	float ___TailTime;
	// System.Int32 iceMagic::framesPerSecond
	int32_t ___framesPerSecond;
	// System.Int32 iceMagic::xCount
	int32_t ___xCount;
	// System.Int32 iceMagic::yCount
	int32_t ___yCount;
	// iceMagic/PlayMode iceMagic::curMode
	int32_t ___curMode;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> iceMagic::curTextrueList
	List_1_t5161 * ___curTextrueList;
	// System.Int32 iceMagic::cellFrameCount
	int32_t ___cellFrameCount;
	// System.Int32 iceMagic::m_curIndex
	int32_t ___m_curIndex;
	// System.Single iceMagic::m_curTimer
	float ___m_curTimer;
	// System.Single iceMagic::m_delayTimer
	float ___m_delayTimer;
};
