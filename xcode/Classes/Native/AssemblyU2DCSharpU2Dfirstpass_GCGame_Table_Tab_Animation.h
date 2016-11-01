#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// GCGame.Table.Tab_Animation
struct Tab_Animation_t341  : public Object_t
{
	// System.String GCGame.Table.Tab_Animation::m_AinmName
	String_t* ___m_AinmName;
	// System.Int32 GCGame.Table.Tab_Animation::m_AnimID
	int32_t ___m_AnimID;
	// System.Single GCGame.Table.Tab_Animation::m_DelayFrameSpeed
	float ___m_DelayFrameSpeed;
	// System.Single GCGame.Table.Tab_Animation::m_DelayFrameTime
	float ___m_DelayFrameTime;
	// System.Single GCGame.Table.Tab_Animation::m_DelaySpeedTime
	float ___m_DelaySpeedTime;
	// System.Int32 GCGame.Table.Tab_Animation::m_EndEffect
	int32_t ___m_EndEffect;
	// System.Boolean GCGame.Table.Tab_Animation::m_IsCallEnd
	bool ___m_IsCallEnd;
	// System.Boolean GCGame.Table.Tab_Animation::m_IsCanBreak
	bool ___m_IsCanBreak;
	// System.Boolean[] GCGame.Table.Tab_Animation::m_IsStartEffectAutoEnd
	BooleanU5BU5D_t102* ___m_IsStartEffectAutoEnd;
	// System.Byte GCGame.Table.Tab_Animation::m_Layer
	uint8_t ___m_Layer;
	// System.Int32 GCGame.Table.Tab_Animation::m_LoopOverAnimId
	int32_t ___m_LoopOverAnimId;
	// System.Int32 GCGame.Table.Tab_Animation::m_LoopTime
	int32_t ___m_LoopTime;
	// System.Int32 GCGame.Table.Tab_Animation::m_NextAnimId
	int32_t ___m_NextAnimId;
	// System.Byte GCGame.Table.Tab_Animation::m_PlayMode
	uint8_t ___m_PlayMode;
	// System.Byte GCGame.Table.Tab_Animation::m_QueueMode
	uint8_t ___m_QueueMode;
	// System.Single GCGame.Table.Tab_Animation::m_SPEED
	float ___m_SPEED;
	// System.Int16 GCGame.Table.Tab_Animation::m_SoundBreakKeep
	int16_t ___m_SoundBreakKeep;
	// System.Int16 GCGame.Table.Tab_Animation::m_SoundID
	int16_t ___m_SoundID;
	// System.Int32[] GCGame.Table.Tab_Animation::m_StartEffect
	Int32U5BU5D_t116* ___m_StartEffect;
	// System.Single GCGame.Table.Tab_Animation::m_TransitTime
	float ___m_TransitTime;
	// System.Byte GCGame.Table.Tab_Animation::m_WrapMode
	uint8_t ___m_WrapMode;
};
