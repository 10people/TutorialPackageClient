#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SkillBarLogic
struct SkillBarLogic_t1726;
// SkillXpBtnInfo[]
struct SkillXpBtnInfoU5BU5D_t1727;
// SkillBarInfo[]
struct SkillBarInfoU5BU5D_t1728;
// AttackBarInfo
struct AttackBarInfo_t1724;
// TransformController
struct TransformController_t1729;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UISpriteAnimation
struct UISpriteAnimation_t1331;
// TweenPosition
struct TweenPosition_t1255;
// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;

// System.Void SkillBarLogic::.ctor()
 void SkillBarLogic__ctor_m11232 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::.cctor()
 void SkillBarLogic__cctor_m11233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillBarLogic::get_CrashBtnIntroGuide()
 bool SkillBarLogic_get_CrashBtnIntroGuide_m11234 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::set_CrashBtnIntroGuide(System.Boolean)
 void SkillBarLogic_set_CrashBtnIntroGuide_m11235 (SkillBarLogic_t1726 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillBarLogic SkillBarLogic::Instance()
 SkillBarLogic_t1726 * SkillBarLogic_Instance_m11236 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillXpBtnInfo[] SkillBarLogic::get_MySkillXpInfo()
 SkillXpBtnInfoU5BU5D_t1727* SkillBarLogic_get_MySkillXpInfo_m11237 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::set_MySkillXpInfo(SkillXpBtnInfo[])
 void SkillBarLogic_set_MySkillXpInfo_m11238 (SkillBarLogic_t1726 * __this, SkillXpBtnInfoU5BU5D_t1727* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillBarInfo[] SkillBarLogic::get_MySkillBarInfo()
 SkillBarInfoU5BU5D_t1728* SkillBarLogic_get_MySkillBarInfo_m11239 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::set_MySkillBarInfo(SkillBarInfo[])
 void SkillBarLogic_set_MySkillBarInfo_m11240 (SkillBarLogic_t1726 * __this, SkillBarInfoU5BU5D_t1728* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillBarLogic::get_NewPlayerGuide_Step()
 int32_t SkillBarLogic_get_NewPlayerGuide_Step_m11241 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::set_NewPlayerGuide_Step(System.Int32)
 void SkillBarLogic_set_NewPlayerGuide_Step_m11242 (SkillBarLogic_t1726 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AttackBarInfo SkillBarLogic::get__AttackBarInfo()
 AttackBarInfo_t1724 * SkillBarLogic_get__AttackBarInfo_m11243 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::set__AttackBarInfo(AttackBarInfo)
 void SkillBarLogic_set__AttackBarInfo_m11244 (SkillBarLogic_t1726 * __this, AttackBarInfo_t1724 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TransformController SkillBarLogic::get_TransformCon()
 TransformController_t1729 * SkillBarLogic_get_TransformCon_m11245 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::Awake()
 void SkillBarLogic_Awake_m11246 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::Start()
 void SkillBarLogic_Start_m11247 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::InitWaveUI()
 void SkillBarLogic_InitWaveUI_m11248 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::InitCrashBarInfo()
 void SkillBarLogic_InitCrashBarInfo_m11249 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::InitMySkillBarInfo(System.Int32,UnityEngine.GameObject,UISprite,UISprite,UnityEngine.GameObject,UISprite,System.Int32,UISpriteAnimation)
 void SkillBarLogic_InitMySkillBarInfo_m11250 (SkillBarLogic_t1726 * __this, int32_t ___nIndex, GameObject_t9 * ____button, UISprite_t1202 * ____CDPic, UISprite_t1202 * ____CDBk, GameObject_t9 * ____Ring, UISprite_t1202 * ____IconPic, int32_t ____SkillIndex, UISpriteAnimation_t1331 * ____CDEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::InitMySkillXpBtnInfo(System.Int32,UnityEngine.GameObject,UISprite,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.GameObject,TweenPosition)
 void SkillBarLogic_InitMySkillXpBtnInfo_m11251 (SkillBarLogic_t1726 * __this, int32_t ___nIndex, GameObject_t9 * ____btton, UISprite_t1202 * ____xpIconPic, GameObject_t9 * ____xpObj, GameObject_t9 * ____xpLock, GameObject_t9 * ____xpGray, TweenPosition_t1255 * ____xpTweenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::CleanUpSkillBarInfo()
 void SkillBarLogic_CleanUpSkillBarInfo_m11252 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SaveNotChangeModeSkillBarInfo()
 void SkillBarLogic_SaveNotChangeModeSkillBarInfo_m11253 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateAttackSkillBarInfo()
 void SkillBarLogic_UpdateAttackSkillBarInfo_m11254 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateSkillBarInfo()
 void SkillBarLogic_UpdateSkillBarInfo_m11255 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateSkillSpriteSize(UISprite,System.Boolean)
 void SkillBarLogic_UpdateSkillSpriteSize_m11256 (SkillBarLogic_t1726 * __this, UISprite_t1202 * ___sprite, bool ___forBigOne, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetSkillBarInfoByChangeState(GCGame.Table.Tab_SkillBase,System.Int32,System.Int32)
 void SkillBarLogic_SetSkillBarInfoByChangeState_m11257 (SkillBarLogic_t1726 * __this, Tab_SkillBase_t637 * ____skillBase, int32_t ___skillIndex, int32_t ___changeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetSkillBarInfo(System.Int32,System.Int32)
 void SkillBarLogic_SetSkillBarInfo_m11258 (SkillBarLogic_t1726 * __this, int32_t ____skillBarIndex, int32_t ____skillIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetSkillBarInfoForNext(System.Int32,System.Int32)
 void SkillBarLogic_SetSkillBarInfoForNext_m11259 (SkillBarLogic_t1726 * __this, int32_t ____skillBarIndex, int32_t ___nNextSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetChangeModeCDTime(System.Int32,Games.LogicObj.Obj_MainPlayer)
 void SkillBarLogic_SetChangeModeCDTime_m11260 (SkillBarLogic_t1726 * __this, int32_t ___nXpGroup, Obj_MainPlayer_t1732 * ____mainPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::Update()
 void SkillBarLogic_Update_m11261 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpateTransformController()
 void SkillBarLogic_UpateTransformController_m11262 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UdpateXpBtnState()
 void SkillBarLogic_UdpateXpBtnState_m11263 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateCrashSkillCDTime()
 void SkillBarLogic_UpdateCrashSkillCDTime_m11264 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetChangeModeAttackBtn()
 void SkillBarLogic_SetChangeModeAttackBtn_m11265 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillBarLogic::GetChangeModeAttackFirstIndex()
 int32_t SkillBarLogic_GetChangeModeAttackFirstIndex_m11266 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnEnable()
 void SkillBarLogic_OnEnable_m11267 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnDisable()
 void SkillBarLogic_OnDisable_m11268 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnDestroy()
 void SkillBarLogic_OnDestroy_m11269 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::PlayNewSkillEffect(UnityEngine.GameObject)
 void SkillBarLogic_PlayNewSkillEffect_m11270 (SkillBarLogic_t1726 * __this, GameObject_t9 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::InitXpFullEffect()
 void SkillBarLogic_InitXpFullEffect_m11271 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> SkillBarLogic::GetCurrentXPSkillNum()
 List_1_t90 * SkillBarLogic_GetCurrentXPSkillNum_m11272 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> SkillBarLogic::GetXpSkillBySkillIndex()
 Dictionary_2_t1116 * SkillBarLogic_GetXpSkillBySkillIndex_m11273 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::PlayXPActiveEffect(System.Int32,System.Boolean)
 void SkillBarLogic_PlayXPActiveEffect_m11274 (SkillBarLogic_t1726 * __this, int32_t ___nMaxIndex, bool ___isClick, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateXpBtnState(System.Int32)
 void SkillBarLogic_UpdateXpBtnState_m11275 (SkillBarLogic_t1726 * __this, int32_t ___nCurValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateTransformSpriteColor()
 void SkillBarLogic_UpdateTransformSpriteColor_m11276 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ChangeXpValueBtn(System.Int32,System.Int32)
 void SkillBarLogic_ChangeXpValueBtn_m11277 (SkillBarLogic_t1726 * __this, int32_t ___nValue, int32_t ___maxXP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ChangeXpBtnActive(System.Int32,System.Int32)
 void SkillBarLogic_ChangeXpBtnActive_m11278 (SkillBarLogic_t1726 * __this, int32_t ___nValue, int32_t ___maxXP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillBarLogic::GetCurXpPercent(System.Int32,System.Int32)
 int32_t SkillBarLogic_GetCurXpPercent_m11279 (SkillBarLogic_t1726 * __this, int32_t ___nValue, int32_t ___maxXP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::PlayCDZeroEffect(UISpriteAnimation)
 void SkillBarLogic_PlayCDZeroEffect_m11280 (SkillBarLogic_t1726 * __this, UISpriteAnimation_t1331 * ___CDEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UseSkill(UnityEngine.GameObject)
 void SkillBarLogic_UseSkill_m11281 (SkillBarLogic_t1726 * __this, GameObject_t9 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::PressSkill(UnityEngine.GameObject)
 void SkillBarLogic_PressSkill_m11282 (SkillBarLogic_t1726 * __this, GameObject_t9 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ReleaseSkill(UnityEngine.GameObject)
 void SkillBarLogic_ReleaseSkill_m11283 (SkillBarLogic_t1726 * __this, GameObject_t9 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UseItem(UnityEngine.GameObject)
 void SkillBarLogic_UseItem_m11284 (SkillBarLogic_t1726 * __this, GameObject_t9 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::HideTransformButtonInDemo()
 void SkillBarLogic_HideTransformButtonInDemo_m11285 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::NewPlayerGuide(System.Int32)
 void SkillBarLogic_NewPlayerGuide_m11286 (SkillBarLogic_t1726 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SwitchTarget()
 void SkillBarLogic_SwitchTarget_m11287 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::PlayTween(System.Boolean)
 void SkillBarLogic_PlayTween_m11288 (SkillBarLogic_t1726 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SkillBarLogic::GetContinueSkillIcons(GCGame.Table.Tab_SkillBase)
 List_1_t1333 * SkillBarLogic_GetContinueSkillIcons_m11289 (SkillBarLogic_t1726 * __this, Tab_SkillBase_t637 * ____skillBase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::CleanUpAttackBarInfo()
 void SkillBarLogic_CleanUpAttackBarInfo_m11290 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::FixedUpdate()
 void SkillBarLogic_FixedUpdate_m11291 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnClickXpShowBtn()
 void SkillBarLogic_OnClickXpShowBtn_m11292 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnMountBtn()
 void SkillBarLogic_OnMountBtn_m11293 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnTweenPositionFinsh()
 void SkillBarLogic_OnTweenPositionFinsh_m11294 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnUpdateXpBtnHide()
 void SkillBarLogic_OnUpdateXpBtnHide_m11295 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnUpdateXpBitState()
 void SkillBarLogic_OnUpdateXpBitState_m11296 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateTransformBtnShow(System.Boolean)
 void SkillBarLogic_UpdateTransformBtnShow_m11297 (SkillBarLogic_t1726 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnShowNewplayerGuide()
 void SkillBarLogic_OnShowNewplayerGuide_m11298 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdatePressTime()
 void SkillBarLogic_UpdatePressTime_m11299 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::SetAttackBarCanUseNext(System.Boolean)
 void SkillBarLogic_SetAttackBarCanUseNext_m11300 (SkillBarLogic_t1726 * __this, bool ___canUseNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillBarLogic::CheckSkillIdIsFirst(System.Int32)
 bool SkillBarLogic_CheckSkillIdIsFirst_m11301 (SkillBarLogic_t1726 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnClickXpClose()
 void SkillBarLogic_OnClickXpClose_m11302 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnXpTweenFinish()
 void SkillBarLogic_OnXpTweenFinish_m11303 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnTweenPositionXp()
 void SkillBarLogic_OnTweenPositionXp_m11304 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnTweenFinsh_Group2()
 void SkillBarLogic_OnTweenFinsh_Group2_m11305 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::OnClickXpMainBtn()
 void SkillBarLogic_OnClickXpMainBtn_m11306 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::CloseCHoosePanel()
 void SkillBarLogic_CloseCHoosePanel_m11307 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ReverseTween()
 void SkillBarLogic_ReverseTween_m11308 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateXpChooseSLiderValue(System.Single)
 void SkillBarLogic_UpdateXpChooseSLiderValue_m11309 (SkillBarLogic_t1726 * __this, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ShowAfterChangeSkill(System.Boolean)
 void SkillBarLogic_ShowAfterChangeSkill_m11310 (SkillBarLogic_t1726 * __this, bool ___isShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UpdateSkillActiveByChangeState(System.Int32)
 void SkillBarLogic_UpdateSkillActiveByChangeState_m11311 (SkillBarLogic_t1726 * __this, int32_t ___nChangeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UdpateXPBtnState()
 void SkillBarLogic_UdpateXPBtnState_m11312 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::showNewGuildByDelayId()
 void SkillBarLogic_showNewGuildByDelayId_m11313 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ShowAndHide(System.Boolean)
 void SkillBarLogic_ShowAndHide_m11314 (SkillBarLogic_t1726 * __this, bool ___isShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::ShowSomePart(System.Int32)
 void SkillBarLogic_ShowSomePart_m11315 (SkillBarLogic_t1726 * __this, int32_t ___showType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::LockSkillAtForFTE(System.Int32)
 void SkillBarLogic_LockSkillAtForFTE_m11316 (SkillBarLogic_t1726 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::UnlockSkillAtForFTE(System.Int32)
 void SkillBarLogic_UnlockSkillAtForFTE_m11317 (SkillBarLogic_t1726 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillBarLogic::<NewPlayerGuide>m__1C()
 void SkillBarLogic_U3CNewPlayerGuideU3Em__1C_m11318 (SkillBarLogic_t1726 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
