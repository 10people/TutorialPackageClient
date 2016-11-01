#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Fellow.FellowTool
struct FellowTool_t4725;
// System.Collections.Generic.List`1<Games.Fellow.Fellow>
struct List_1_t1633;
// Games.Fellow.FellowContainer
struct FellowContainer_t4724;
// System.String
struct String_t;

// System.Void Games.Fellow.FellowTool::.ctor()
 void FellowTool__ctor_m33405 (FellowTool_t4725 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Fellow.Fellow> Games.Fellow.FellowTool::FellowSort(Games.Fellow.FellowContainer)
 List_1_t1633 * FellowTool_FellowSort_m33406 (Object_t * __this/* static, unused */, FellowContainer_t4724 * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Fellow.Fellow> Games.Fellow.FellowTool::FellowCanBreedingFilter(Games.Fellow.FellowContainer)
 List_1_t1633 * FellowTool_FellowCanBreedingFilter_m33407 (Object_t * __this/* static, unused */, FellowContainer_t4724 * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Fellow.Fellow> Games.Fellow.FellowTool::FellowBabyFilter(Games.Fellow.FellowContainer)
 List_1_t1633 * FellowTool_FellowBabyFilter_m33408 (Object_t * __this/* static, unused */, FellowContainer_t4724 * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowQualityFrame(System.Int32)
 String_t* FellowTool_GetFellowQualityFrame_m33409 (Object_t * __this/* static, unused */, int32_t ___quality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowQualityIcon(System.Int32)
 String_t* FellowTool_GetFellowQualityIcon_m33410 (Object_t * __this/* static, unused */, int32_t ___quality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowElementPic(System.Int32)
 String_t* FellowTool_GetFellowElementPic_m33411 (Object_t * __this/* static, unused */, int32_t ___elemenetattr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowElementText(System.Int32)
 String_t* FellowTool_GetFellowElementText_m33412 (Object_t * __this/* static, unused */, int32_t ___elemenetattr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowTypeText(System.Int32,System.Int32)
 String_t* FellowTool_GetFellowTypeText_m33413 (Object_t * __this/* static, unused */, int32_t ___type, int32_t ___alien, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowStarQualityPic(System.Int32)
 String_t* FellowTool_GetFellowStarQualityPic_m33414 (Object_t * __this/* static, unused */, int32_t ___starlevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetChatFellowStarQualityPic(System.Int32)
 String_t* FellowTool_GetChatFellowStarQualityPic_m33415 (Object_t * __this/* static, unused */, int32_t ___starlevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowTallentSkillQualityPic(System.Int32)
 String_t* FellowTool_GetFellowTallentSkillQualityPic_m33416 (Object_t * __this/* static, unused */, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetChatFellowTallentSkillQualityPic(System.Int32)
 String_t* FellowTool_GetChatFellowTallentSkillQualityPic_m33417 (Object_t * __this/* static, unused */, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowElementSkillQualityPic(System.Int32)
 String_t* FellowTool_GetFellowElementSkillQualityPic_m33418 (Object_t * __this/* static, unused */, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetChatFellowElementSkillQualityPic(System.Int32)
 String_t* FellowTool_GetChatFellowElementSkillQualityPic_m33419 (Object_t * __this/* static, unused */, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.Fellow.FellowTool::GetFellowElementLevelText(System.Int32)
 String_t* FellowTool_GetFellowElementLevelText_m33420 (Object_t * __this/* static, unused */, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Fellow.FellowTool::GetFellowTalentSkillNewLevel(System.Int32,System.Int32&)
 int32_t FellowTool_GetFellowTalentSkillNewLevel_m33421 (Object_t * __this/* static, unused */, int32_t ___skillid, int32_t* ___addexp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Fellow.FellowTool::GetFellowAddStarLevel(System.Int32,System.Int32)
 int32_t FellowTool_GetFellowAddStarLevel_m33422 (Object_t * __this/* static, unused */, int32_t ___curstarlevel, int32_t ___totalstarexp, MethodInfo* method) IL2CPP_METHOD_ATTR;
