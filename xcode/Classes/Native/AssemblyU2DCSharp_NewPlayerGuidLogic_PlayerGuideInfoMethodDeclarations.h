#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NewPlayerGuidLogic/PlayerGuideInfo
struct PlayerGuideInfo_t1600;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// NewPlayerGuidLogic/OnShowGuide
struct OnShowGuide_t1599;
// NewPlayerGuidLogic/GuideSpriteType
#include "AssemblyU2DCSharp_NewPlayerGuidLogic_GuideSpriteType.h"

// System.Void NewPlayerGuidLogic/PlayerGuideInfo::.ctor()
 void PlayerGuideInfo__ctor_m9969 (PlayerGuideInfo_t1600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic/PlayerGuideInfo::.ctor(UnityEngine.GameObject,System.Int32,System.Int32,System.String,System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean,NewPlayerGuidLogic/GuideSpriteType,NewPlayerGuidLogic/OnShowGuide,System.Single,System.Single)
 void PlayerGuideInfo__ctor_m9970 (PlayerGuideInfo_t1600 * __this, GameObject_t9 * ___UIObj, int32_t ___nWidth, int32_t ___nHeight, String_t* ___strText, String_t* ___TextLocation, int32_t ___nMotionType, bool ___bIsBoxEnable, bool ___bIsMaskEnable, bool ___bIsForever, int32_t ___eGuideSpriteType, OnShowGuide_t1599 * ___deleOnShowGuide, float ___offsetX, float ___offsetY, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic/PlayerGuideInfo::Init(UnityEngine.GameObject,System.Int32,System.Int32,System.String,System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean,NewPlayerGuidLogic/GuideSpriteType,NewPlayerGuidLogic/OnShowGuide,NewPlayerGuidLogic/OnShowGuide,System.Single,System.Single)
 void PlayerGuideInfo_Init_m9971 (PlayerGuideInfo_t1600 * __this, GameObject_t9 * ___UIObj, int32_t ___nWidth, int32_t ___nHeight, String_t* ___strText, String_t* ___TextLocation, int32_t ___nMotionType, bool ___bIsBoxEnable, bool ___bIsMaskEnable, bool ___bIsForever, int32_t ___eGuideSpriteType, OnShowGuide_t1599 * ___deleOnShowGuide, OnShowGuide_t1599 * ___afterShowGuide, float ___offsetX, float ___offsetY, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic/PlayerGuideInfo::CleanUp()
 void PlayerGuideInfo_CleanUp_m9972 (PlayerGuideInfo_t1600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NewPlayerGuidLogic/PlayerGuideInfo::IsValid()
 bool PlayerGuideInfo_IsValid_m9973 (PlayerGuideInfo_t1600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
