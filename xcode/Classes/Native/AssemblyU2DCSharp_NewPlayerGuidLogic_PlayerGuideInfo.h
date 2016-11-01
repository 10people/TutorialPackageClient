#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// NewPlayerGuidLogic/OnShowGuide
struct OnShowGuide_t1599;
// System.Object
#include "mscorlib_System_Object.h"
// NewPlayerGuidLogic/GuideSpriteType
#include "AssemblyU2DCSharp_NewPlayerGuidLogic_GuideSpriteType.h"
// NewPlayerGuidLogic/PlayerGuideInfo
struct PlayerGuideInfo_t1600  : public Object_t
{
	// UnityEngine.GameObject NewPlayerGuidLogic/PlayerGuideInfo::_UIObj
	GameObject_t9 * ____UIObj;
	// NewPlayerGuidLogic/GuideSpriteType NewPlayerGuidLogic/PlayerGuideInfo::_GuideSpriteType
	int32_t ____GuideSpriteType;
	// System.Int32 NewPlayerGuidLogic/PlayerGuideInfo::_nWidth
	int32_t ____nWidth;
	// System.Int32 NewPlayerGuidLogic/PlayerGuideInfo::_nHeight
	int32_t ____nHeight;
	// System.String NewPlayerGuidLogic/PlayerGuideInfo::_strText
	String_t* ____strText;
	// System.String NewPlayerGuidLogic/PlayerGuideInfo::_TextLocation
	String_t* ____TextLocation;
	// System.Int32 NewPlayerGuidLogic/PlayerGuideInfo::_nMotionType
	int32_t ____nMotionType;
	// System.Boolean NewPlayerGuidLogic/PlayerGuideInfo::_bIsBoxEnable
	bool ____bIsBoxEnable;
	// System.Boolean NewPlayerGuidLogic/PlayerGuideInfo::_bIsMaskEnable
	bool ____bIsMaskEnable;
	// System.Boolean NewPlayerGuidLogic/PlayerGuideInfo::_bIsForever
	bool ____bIsForever;
	// NewPlayerGuidLogic/OnShowGuide NewPlayerGuidLogic/PlayerGuideInfo::_deleOnShowGuide
	OnShowGuide_t1599 * ____deleOnShowGuide;
	// NewPlayerGuidLogic/OnShowGuide NewPlayerGuidLogic/PlayerGuideInfo::_afterShowGuide
	OnShowGuide_t1599 * ____afterShowGuide;
	// System.Single NewPlayerGuidLogic/PlayerGuideInfo::_offsetX
	float ____offsetX;
	// System.Single NewPlayerGuidLogic/PlayerGuideInfo::_offsetY
	float ____offsetY;
};
