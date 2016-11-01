#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PartnerFrameLogic_Skill
struct PartnerFrameLogic_Skill_t1636;
// Games.Fellow.Fellow
struct Fellow_t1174;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_CommonItem
struct Tab_CommonItem_t407;

// System.Void PartnerFrameLogic_Skill::.ctor()
 void PartnerFrameLogic_Skill__ctor_m10395 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::.cctor()
 void PartnerFrameLogic_Skill__cctor_m10396 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PartnerFrameLogic_Skill PartnerFrameLogic_Skill::Instance()
 PartnerFrameLogic_Skill_t1636 * PartnerFrameLogic_Skill_Instance_m10397 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnEnable()
 void PartnerFrameLogic_Skill_OnEnable_m10398 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnDisable()
 void PartnerFrameLogic_Skill_OnDisable_m10399 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::UpdateFellowInfo(Games.Fellow.Fellow)
 void PartnerFrameLogic_Skill_UpdateFellowInfo_m10400 (PartnerFrameLogic_Skill_t1636 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::UpdateFellowInfo_TalentSkill(Games.Fellow.Fellow)
 void PartnerFrameLogic_Skill_UpdateFellowInfo_TalentSkill_m10401 (PartnerFrameLogic_Skill_t1636 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::UpdateFellowInfo_ElementSkill(Games.Fellow.Fellow)
 void PartnerFrameLogic_Skill_UpdateFellowInfo_ElementSkill_m10402 (PartnerFrameLogic_Skill_t1636 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnTalentSkillLevelUpClick(System.Int32)
 void PartnerFrameLogic_Skill_OnTalentSkillLevelUpClick_m10403 (PartnerFrameLogic_Skill_t1636 * __this, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnTalentSkillChooseBookClick()
 void PartnerFrameLogic_Skill_OnTalentSkillChooseBookClick_m10404 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnTalentSkillBookOKClick()
 void PartnerFrameLogic_Skill_OnTalentSkillBookOKClick_m10405 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnTalentSkillBookCancelClick()
 void PartnerFrameLogic_Skill_OnTalentSkillBookCancelClick_m10406 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnTalentSkillLevelUpOKClick()
 void PartnerFrameLogic_Skill_OnTalentSkillLevelUpOKClick_m10407 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnElementSkillLevelUpClick(System.Int32)
 void PartnerFrameLogic_Skill_OnElementSkillLevelUpClick_m10408 (PartnerFrameLogic_Skill_t1636 * __this, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::InitGetInfoDialog(System.Int32)
 void PartnerFrameLogic_Skill_InitGetInfoDialog_m10409 (PartnerFrameLogic_Skill_t1636 * __this, int32_t ___bookId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnElementSkillLevelUpOKClick()
 void PartnerFrameLogic_Skill_OnElementSkillLevelUpOKClick_m10410 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnLearnSkillClick(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_OnLearnSkillClick_m10411 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::CloseLearnSkillDialog(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_CloseLearnSkillDialog_m10412 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::CloseUpgradeSkillDialog(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_CloseUpgradeSkillDialog_m10413 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OpenChooseSkillBookDialog(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_OpenChooseSkillBookDialog_m10414 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnSkillChooseOKClick(GCGame.Table.Tab_CommonItem)
 void PartnerFrameLogic_Skill_OnSkillChooseOKClick_m10415 (PartnerFrameLogic_Skill_t1636 * __this, Tab_CommonItem_t407 * ___book, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnSkillChooseCancelClick()
 void PartnerFrameLogic_Skill_OnSkillChooseCancelClick_m10416 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnLearSkillOKClick()
 void PartnerFrameLogic_Skill_OnLearSkillOKClick_m10417 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::ConfirmLearnElementSkill()
 void PartnerFrameLogic_Skill_ConfirmLearnElementSkill_m10418 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::OnSkillLevelUpOKClick()
 void PartnerFrameLogic_Skill_OnSkillLevelUpOKClick_m10419 (PartnerFrameLogic_Skill_t1636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::ShowGetInfo(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_ShowGetInfo_m10420 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Skill::HideGetInfo(UnityEngine.GameObject)
 void PartnerFrameLogic_Skill_HideGetInfo_m10421 (PartnerFrameLogic_Skill_t1636 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
