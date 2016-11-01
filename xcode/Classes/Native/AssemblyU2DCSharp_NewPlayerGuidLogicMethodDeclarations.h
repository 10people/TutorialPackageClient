#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NewPlayerGuidLogic
struct NewPlayerGuidLogic_t1601;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// NewPlayerGuidLogic/OnShowGuide
struct OnShowGuide_t1599;
// System.Object
struct Object_t;
// NewPlayerGuidLogic/GuideSpriteType
#include "AssemblyU2DCSharp_NewPlayerGuidLogic_GuideSpriteType.h"

// System.Void NewPlayerGuidLogic::.ctor()
 void NewPlayerGuidLogic__ctor_m9978 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::.cctor()
 void NewPlayerGuidLogic__cctor_m9979 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NewPlayerGuidLogic NewPlayerGuidLogic::Instance()
 NewPlayerGuidLogic_t1601 * NewPlayerGuidLogic_Instance_m9980 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NewPlayerGuidLogic::get_IsMaskEnable()
 bool NewPlayerGuidLogic_get_IsMaskEnable_m9981 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::set_IsMaskEnable(System.Boolean)
 void NewPlayerGuidLogic_set_IsMaskEnable_m9982 (NewPlayerGuidLogic_t1601 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::Awake()
 void NewPlayerGuidLogic_Awake_m9983 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::Update()
 void NewPlayerGuidLogic_Update_m9984 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::ResetHandePos()
 void NewPlayerGuidLogic_ResetHandePos_m9985 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::FixedUpdate()
 void NewPlayerGuidLogic_FixedUpdate_m9986 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::OnDestroy()
 void NewPlayerGuidLogic_OnDestroy_m9987 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::InitWindow(UnityEngine.GameObject,System.Single,System.Single)
 void NewPlayerGuidLogic_InitWindow_m9988 (NewPlayerGuidLogic_t1601 * __this, GameObject_t9 * ___UIObj, float ___offsetX, float ___offsetY, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::HandMoving()
 void NewPlayerGuidLogic_HandMoving_m9989 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::OpenWindow(UnityEngine.GameObject,System.Int32,System.Int32,System.String,System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean,NewPlayerGuidLogic/OnShowGuide,NewPlayerGuidLogic/OnShowGuide,System.Single,System.Single,System.Boolean)
 void NewPlayerGuidLogic_OpenWindow_m9990 (Object_t * __this/* static, unused */, GameObject_t9 * ___UIObj, int32_t ___nWidth, int32_t ___nHeight, String_t* ___strText, String_t* ___TextLocation, int32_t ___nMotionType, bool ___bIsBoxEnable, bool ___bIsMaskEnable, bool ___bIsForever, OnShowGuide_t1599 * ___deleOnShowGuide, OnShowGuide_t1599 * ___afterShowGuid, float ___offsetX, float ___offsetY, bool ___isHasGuideFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::OpenWindow_Circle(UnityEngine.GameObject,System.Int32,System.String,System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean,NewPlayerGuidLogic/OnShowGuide,NewPlayerGuidLogic/OnShowGuide,System.Boolean)
 void NewPlayerGuidLogic_OpenWindow_Circle_m9991 (Object_t * __this/* static, unused */, GameObject_t9 * ___UIObj, int32_t ___nRadius, String_t* ___strText, String_t* ___TextLocation, int32_t ___nMotionType, bool ___bIsBoxEnable, bool ___bIsMaskEnable, bool ___bIsForever, OnShowGuide_t1599 * ___deleOnShowGuide, OnShowGuide_t1599 * ___afterShowGuide, bool ___isHasGuideFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::OnOpenWindow(System.Boolean,System.Object)
 void NewPlayerGuidLogic_OnOpenWindow_m9992 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::UpdateTimeLimit(System.Boolean)
 void NewPlayerGuidLogic_UpdateTimeLimit_m9993 (NewPlayerGuidLogic_t1601 * __this, bool ___bForever, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::UpdateHand(System.Int32,System.Int32,System.Int32)
 void NewPlayerGuidLogic_UpdateHand_m9994 (NewPlayerGuidLogic_t1601 * __this, int32_t ___nWidth, int32_t ___nHeight, int32_t ___nMotionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::UpdateBoxMask(UnityEngine.GameObject,System.Int32,System.Int32,System.Boolean,System.Boolean,NewPlayerGuidLogic/GuideSpriteType)
 void NewPlayerGuidLogic_UpdateBoxMask_m9995 (NewPlayerGuidLogic_t1601 * __this, GameObject_t9 * ___UIObj, int32_t ___nWidth, int32_t ___nHeight, bool ___bIsBoxEnable, bool ___bIsMaskEnable, int32_t ___eGuideSpriteType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::CloseWindow()
 void NewPlayerGuidLogic_CloseWindow_m9996 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::AutoCloseWindow()
 void NewPlayerGuidLogic_AutoCloseWindow_m9997 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::UpdateRemindLabelPos(System.String,System.String,NewPlayerGuidLogic/GuideSpriteType)
 void NewPlayerGuidLogic_UpdateRemindLabelPos_m9998 (NewPlayerGuidLogic_t1601 * __this, String_t* ___strText, String_t* ___TextLocation, int32_t ___eType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::OnClickBlack()
 void NewPlayerGuidLogic_OnClickBlack_m9999 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NewPlayerGuidLogic::EndTweens()
 void NewPlayerGuidLogic_EndTweens_m10000 (NewPlayerGuidLogic_t1601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
