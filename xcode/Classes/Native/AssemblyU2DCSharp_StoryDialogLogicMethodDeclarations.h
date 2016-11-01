#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StoryDialogLogic
struct StoryDialogLogic_t1764;
// UILabel
struct UILabel_t1176;
// UITexture
struct UITexture_t1378;
// Callback`1<System.Boolean>
struct Callback_1_t1765;
// System.String
struct String_t;
// System.Object
struct Object_t;
// TweenHeight
struct TweenHeight_t1589;

// System.Void StoryDialogLogic::.ctor()
 void StoryDialogLogic__ctor_m11581 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::.cctor()
 void StoryDialogLogic__cctor_m11582 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// StoryDialogLogic StoryDialogLogic::Instance()
 StoryDialogLogic_t1764 * StoryDialogLogic_Instance_m11583 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel StoryDialogLogic::get_DialogLabel()
 UILabel_t1176 * StoryDialogLogic_get_DialogLabel_m11584 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::set_DialogLabel(UILabel)
 void StoryDialogLogic_set_DialogLabel_m11585 (StoryDialogLogic_t1764 * __this, UILabel_t1176 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UITexture StoryDialogLogic::get_RoleHeadIcon()
 UITexture_t1378 * StoryDialogLogic_get_RoleHeadIcon_m11586 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::set_RoleHeadIcon(UITexture)
 void StoryDialogLogic_set_RoleHeadIcon_m11587 (StoryDialogLogic_t1764 * __this, UITexture_t1378 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel StoryDialogLogic::get_SpeakerName()
 UILabel_t1176 * StoryDialogLogic_get_SpeakerName_m11588 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::set_SpeakerName(UILabel)
 void StoryDialogLogic_set_SpeakerName_m11589 (StoryDialogLogic_t1764 * __this, UILabel_t1176 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StoryDialogLogic::ShowStory(System.Int32,System.Int32,Callback`1<System.Boolean>,System.Int32)
 bool StoryDialogLogic_ShowStory_m11590 (Object_t * __this/* static, unused */, int32_t ___clientStoryTableID, int32_t ___dialogIndex, Callback_1_t1765 * ___dialogEndCallback, int32_t ___dialogType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StoryDialogLogic::ShowMissionStory(System.String,System.Boolean,System.Boolean)
 bool StoryDialogLogic_ShowMissionStory_m11591 (Object_t * __this/* static, unused */, String_t* ___missionContent, bool ___defaultDialog, bool ___bHaveNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnShowStory(System.Boolean,System.Object)
 void StoryDialogLogic_OnShowStory_m11592 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___para, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnShowMission(System.Boolean,System.Object)
 void StoryDialogLogic_OnShowMission_m11593 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___para, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnEnable()
 void StoryDialogLogic_OnEnable_m11594 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::Start()
 void StoryDialogLogic_Start_m11595 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::Update()
 void StoryDialogLogic_Update_m11596 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::FixedUpdate()
 void StoryDialogLogic_FixedUpdate_m11597 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnDisable()
 void StoryDialogLogic_OnDisable_m11598 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::InitStoryDialog()
 void StoryDialogLogic_InitStoryDialog_m11599 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::DialogEnd(System.Boolean)
 void StoryDialogLogic_DialogEnd_m11600 (StoryDialogLogic_t1764 * __this, bool ___noMoreNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::CleanUp()
 void StoryDialogLogic_CleanUp_m11601 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::AutoBeginStory()
 void StoryDialogLogic_AutoBeginStory_m11602 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnClickStoryDialog()
 void StoryDialogLogic_OnClickStoryDialog_m11603 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::ShowNextStory()
 void StoryDialogLogic_ShowNextStory_m11604 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::AutoNextStory()
 void StoryDialogLogic_AutoNextStory_m11605 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::ShowMissionUI(System.String,System.Boolean)
 void StoryDialogLogic_ShowMissionUI_m11606 (StoryDialogLogic_t1764 * __this, String_t* ___missionContent, bool ___defaultDialog, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::ShowStoryUI(System.Boolean,System.String,System.String,System.Int32)
 void StoryDialogLogic_ShowStoryUI_m11607 (StoryDialogLogic_t1764 * __this, bool ___bTopUI, String_t* ___strRolePicName, String_t* ___strDialog, int32_t ___nDataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StoryDialogLogic::PlayStory()
 bool StoryDialogLogic_PlayStory_m11608 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::InitBackgroundWidth()
 void StoryDialogLogic_InitBackgroundWidth_m11609 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::InitAniDialog(System.String,System.Boolean)
 void StoryDialogLogic_InitAniDialog_m11610 (StoryDialogLogic_t1764 * __this, String_t* ___text, bool ___bTopUI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::UpdateAniDialog()
 void StoryDialogLogic_UpdateAniDialog_m11611 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String StoryDialogLogic::GetColorSymbols(System.Int32&)
 String_t* StoryDialogLogic_GetColorSymbols_m11612 (StoryDialogLogic_t1764 * __this, int32_t* ___nBeginIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::ShowAniDialogEnd()
 void StoryDialogLogic_ShowAniDialogEnd_m11613 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::ShowMovieUI()
 void StoryDialogLogic_ShowMovieUI_m11614 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OperatorHeightTweener(TweenHeight,System.Boolean)
 void StoryDialogLogic_OperatorHeightTweener_m11615 (StoryDialogLogic_t1764 * __this, TweenHeight_t1589 * ___tweener, bool ___isFadeIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnFadeOutTweenerFinish(TweenHeight)
 void StoryDialogLogic_OnFadeOutTweenerFinish_m11616 (StoryDialogLogic_t1764 * __this, TweenHeight_t1589 * ___tweener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::HideMovieUI()
 void StoryDialogLogic_HideMovieUI_m11617 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::OnCloseButtonClicked()
 void StoryDialogLogic_OnCloseButtonClicked_m11618 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::UpdateNextLabelShow(System.Boolean)
 void StoryDialogLogic_UpdateNextLabelShow_m11619 (StoryDialogLogic_t1764 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::DoAnimation()
 void StoryDialogLogic_DoAnimation_m11620 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::_onDoAnimation()
 void StoryDialogLogic__onDoAnimation_m11621 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryDialogLogic::_onEndAnimation()
 void StoryDialogLogic__onEndAnimation_m11622 (StoryDialogLogic_t1764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
