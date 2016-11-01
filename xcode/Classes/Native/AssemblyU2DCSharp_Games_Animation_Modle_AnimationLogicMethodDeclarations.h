#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Animation_Modle.AnimationLogic
struct AnimationLogic_t4470;
// UnityEngine.Animation
struct Animation_t1252;
// System.String
struct String_t;
// UnityEngine.AnimationState
struct AnimationState_t4530;
// GCGame.Table.Tab_Animation
struct Tab_Animation_t341;
// UnityEngine.GameObject
struct GameObject_t9;
// Callback
struct Callback_t2196;
// UnityEngine.AnimationClip
struct AnimationClip_t2149;
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapMode.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Games.Animation_Modle.AnimationLogic::.ctor()
 void AnimationLogic__ctor_m32513 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation Games.Animation_Modle.AnimationLogic::get_Animation()
 Animation_t1252 * AnimationLogic_get_Animation_m32514 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Animation_Modle.AnimationLogic::get_AnimResFilePath()
 String_t* AnimationLogic_get_AnimResFilePath_m32515 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::set_AnimResFilePath(System.String)
 void AnimationLogic_set_AnimResFilePath_m32516 (AnimationLogic_t4470 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState Games.Animation_Modle.AnimationLogic::get_CurAnimState()
 AnimationState_t4530 * AnimationLogic_get_CurAnimState_m32517 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::set_CurAnimState(UnityEngine.AnimationState)
 void AnimationLogic_set_CurAnimState_m32518 (AnimationLogic_t4470 * __this, AnimationState_t4530 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Animation Games.Animation_Modle.AnimationLogic::get_CurAnimData()
 Tab_Animation_t341 * AnimationLogic_get_CurAnimData_m32519 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::set_CurAnimData(GCGame.Table.Tab_Animation)
 void AnimationLogic_set_CurAnimData_m32520 (AnimationLogic_t4470 * __this, Tab_Animation_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::InitState(UnityEngine.GameObject)
 void AnimationLogic_InitState_m32521 (AnimationLogic_t4470 * __this, GameObject_t9 * ___animObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation Games.Animation_Modle.AnimationLogic::GetAnimation()
 Animation_t1252 * AnimationLogic_GetAnimation_m32522 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.Animation_Modle.AnimationLogic::get_LastLoopTime()
 float AnimationLogic_get_LastLoopTime_m32523 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Animation_Modle.AnimationLogic::get_LoopTimes()
 int32_t AnimationLogic_get_LoopTimes_m32524 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::CheckForNeedCallBack()
 void AnimationLogic_CheckForNeedCallBack_m32525 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::AnimationUpdate()
 void AnimationLogic_AnimationUpdate_m32526 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::DelayFrameEffect()
 void AnimationLogic_DelayFrameEffect_m32527 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::Update()
 void AnimationLogic_Update_m32528 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Animation_Modle.AnimationLogic::Play(System.Int32,Callback,System.Boolean,System.Boolean)
 bool AnimationLogic_Play_m32529 (AnimationLogic_t4470 * __this, int32_t ___animId, Callback_t2196 * ___animFinishCallback, bool ___iSpeedMax, bool ___isSound, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::PlaySoundAtPos(Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE,System.Int32,UnityEngine.Vector3)
 void AnimationLogic_PlaySoundAtPos_m32530 (AnimationLogic_t4470 * __this, int32_t ___ObjType, int32_t ___nSoundID, Vector3_t121  ___playingPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::OnLoadAnimation(System.String,UnityEngine.AnimationClip,System.Boolean,System.Boolean)
 void AnimationLogic_OnLoadAnimation_m32531 (AnimationLogic_t4470 * __this, String_t* ___animPath, AnimationClip_t2149 * ___curAnimClip, bool ___iSpeedMax, bool ___isSound, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Animation_Modle.AnimationLogic::isPlaying()
 bool AnimationLogic_isPlaying_m32532 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::Stop()
 void AnimationLogic_Stop_m32533 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::set_CurAnimWrapMode(UnityEngine.WrapMode)
 void AnimationLogic_set_CurAnimWrapMode_m32534 (AnimationLogic_t4470 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode Games.Animation_Modle.AnimationLogic::get_CurAnimWrapMode()
 int32_t AnimationLogic_get_CurAnimWrapMode_m32535 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Animation Games.Animation_Modle.AnimationLogic::GetAnimInfoById(System.Int32)
 Tab_Animation_t341 * AnimationLogic_GetAnimInfoById_m32536 (AnimationLogic_t4470 * __this, int32_t ___AnimaId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::FinishAnimEffect(System.Int32)
 void AnimationLogic_FinishAnimEffect_m32537 (AnimationLogic_t4470 * __this, int32_t ___finishedAnimID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Animation_Modle.AnimationLogic::StopAnimEffect()
 void AnimationLogic_StopAnimEffect_m32538 (AnimationLogic_t4470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Animation_Modle.AnimationLogic::IsFlyStartMotionId(System.Int32)
 bool AnimationLogic_IsFlyStartMotionId_m32539 (AnimationLogic_t4470 * __this, int32_t ___nStartId, MethodInfo* method) IL2CPP_METHOD_ATTR;
