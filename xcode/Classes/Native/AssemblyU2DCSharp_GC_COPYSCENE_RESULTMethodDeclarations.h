#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_COPYSCENE_RESULT
struct GC_COPYSCENE_RESULT_t3082;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_COPYSCENE_RESULT::.ctor()
 void GC_COPYSCENE_RESULT__ctor_m19381 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasResult()
 bool GC_COPYSCENE_RESULT_get_HasResult_m19382 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Result()
 int32_t GC_COPYSCENE_RESULT_get_Result_m19383 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Result(System.Int32)
 void GC_COPYSCENE_RESULT_set_Result_m19384 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetResult(System.Int32)
 void GC_COPYSCENE_RESULT_SetResult_m19385 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasSceneID()
 bool GC_COPYSCENE_RESULT_get_HasSceneID_m19386 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_SceneID()
 int32_t GC_COPYSCENE_RESULT_get_SceneID_m19387 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_SceneID(System.Int32)
 void GC_COPYSCENE_RESULT_set_SceneID_m19388 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetSceneID(System.Int32)
 void GC_COPYSCENE_RESULT_SetSceneID_m19389 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasIsSolo()
 bool GC_COPYSCENE_RESULT_get_HasIsSolo_m19390 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_IsSolo()
 int32_t GC_COPYSCENE_RESULT_get_IsSolo_m19391 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_IsSolo(System.Int32)
 void GC_COPYSCENE_RESULT_set_IsSolo_m19392 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetIsSolo(System.Int32)
 void GC_COPYSCENE_RESULT_SetIsSolo_m19393 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasDifficult()
 bool GC_COPYSCENE_RESULT_get_HasDifficult_m19394 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Difficult()
 int32_t GC_COPYSCENE_RESULT_get_Difficult_m19395 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Difficult(System.Int32)
 void GC_COPYSCENE_RESULT_set_Difficult_m19396 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetDifficult(System.Int32)
 void GC_COPYSCENE_RESULT_SetDifficult_m19397 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasStar()
 bool GC_COPYSCENE_RESULT_get_HasStar_m19398 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Star()
 int32_t GC_COPYSCENE_RESULT_get_Star_m19399 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Star(System.Int32)
 void GC_COPYSCENE_RESULT_set_Star_m19400 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetStar(System.Int32)
 void GC_COPYSCENE_RESULT_SetStar_m19401 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasScore()
 bool GC_COPYSCENE_RESULT_get_HasScore_m19402 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Score()
 int32_t GC_COPYSCENE_RESULT_get_Score_m19403 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Score(System.Int32)
 void GC_COPYSCENE_RESULT_set_Score_m19404 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetScore(System.Int32)
 void GC_COPYSCENE_RESULT_SetScore_m19405 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasCarom()
 bool GC_COPYSCENE_RESULT_get_HasCarom_m19406 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Carom()
 int32_t GC_COPYSCENE_RESULT_get_Carom_m19407 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Carom(System.Int32)
 void GC_COPYSCENE_RESULT_set_Carom_m19408 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetCarom(System.Int32)
 void GC_COPYSCENE_RESULT_SetCarom_m19409 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasTime()
 bool GC_COPYSCENE_RESULT_get_HasTime_m19410 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Time()
 int32_t GC_COPYSCENE_RESULT_get_Time_m19411 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Time(System.Int32)
 void GC_COPYSCENE_RESULT_set_Time_m19412 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetTime(System.Int32)
 void GC_COPYSCENE_RESULT_SetTime_m19413 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasExp()
 bool GC_COPYSCENE_RESULT_get_HasExp_m19414 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Exp()
 int32_t GC_COPYSCENE_RESULT_get_Exp_m19415 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Exp(System.Int32)
 void GC_COPYSCENE_RESULT_set_Exp_m19416 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetExp(System.Int32)
 void GC_COPYSCENE_RESULT_SetExp_m19417 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasVipExp()
 bool GC_COPYSCENE_RESULT_get_HasVipExp_m19418 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_VipExp()
 int32_t GC_COPYSCENE_RESULT_get_VipExp_m19419 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_VipExp(System.Int32)
 void GC_COPYSCENE_RESULT_set_VipExp_m19420 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetVipExp(System.Int32)
 void GC_COPYSCENE_RESULT_SetVipExp_m19421 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasMoney()
 bool GC_COPYSCENE_RESULT_get_HasMoney_m19422 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_Money()
 int32_t GC_COPYSCENE_RESULT_get_Money_m19423 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_Money(System.Int32)
 void GC_COPYSCENE_RESULT_set_Money_m19424 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetMoney(System.Int32)
 void GC_COPYSCENE_RESULT_SetMoney_m19425 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_RewardTypeList()
 Object_t* GC_COPYSCENE_RESULT_get_RewardTypeList_m19426 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_RewardTypeCount()
 int32_t GC_COPYSCENE_RESULT_get_RewardTypeCount_m19427 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetRewardType(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetRewardType_m19428 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddRewardType(System.Int32)
 void GC_COPYSCENE_RESULT_AddRewardType_m19429 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_RewardItemIdList()
 Object_t* GC_COPYSCENE_RESULT_get_RewardItemIdList_m19430 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_RewardItemIdCount()
 int32_t GC_COPYSCENE_RESULT_get_RewardItemIdCount_m19431 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetRewardItemId(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetRewardItemId_m19432 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddRewardItemId(System.Int32)
 void GC_COPYSCENE_RESULT_AddRewardItemId_m19433 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_RewardCountList()
 Object_t* GC_COPYSCENE_RESULT_get_RewardCountList_m19434 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_RewardCountCount()
 int32_t GC_COPYSCENE_RESULT_get_RewardCountCount_m19435 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetRewardCount(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetRewardCount_m19436 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddRewardCount(System.Int32)
 void GC_COPYSCENE_RESULT_AddRewardCount_m19437 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_DrawTypeList()
 Object_t* GC_COPYSCENE_RESULT_get_DrawTypeList_m19438 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_DrawTypeCount()
 int32_t GC_COPYSCENE_RESULT_get_DrawTypeCount_m19439 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetDrawType(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetDrawType_m19440 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddDrawType(System.Int32)
 void GC_COPYSCENE_RESULT_AddDrawType_m19441 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_DrawItemIdList()
 Object_t* GC_COPYSCENE_RESULT_get_DrawItemIdList_m19442 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_DrawItemIdCount()
 int32_t GC_COPYSCENE_RESULT_get_DrawItemIdCount_m19443 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetDrawItemId(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetDrawItemId_m19444 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddDrawItemId(System.Int32)
 void GC_COPYSCENE_RESULT_AddDrawItemId_m19445 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_COPYSCENE_RESULT::get_DrawCountList()
 Object_t* GC_COPYSCENE_RESULT_get_DrawCountList_m19446 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_DrawCountCount()
 int32_t GC_COPYSCENE_RESULT_get_DrawCountCount_m19447 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::GetDrawCount(System.Int32)
 int32_t GC_COPYSCENE_RESULT_GetDrawCount_m19448 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddDrawCount(System.Int32)
 void GC_COPYSCENE_RESULT_AddDrawCount_m19449 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasDrawIndex()
 bool GC_COPYSCENE_RESULT_get_HasDrawIndex_m19450 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_DrawIndex()
 int32_t GC_COPYSCENE_RESULT_get_DrawIndex_m19451 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_DrawIndex(System.Int32)
 void GC_COPYSCENE_RESULT_set_DrawIndex_m19452 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetDrawIndex(System.Int32)
 void GC_COPYSCENE_RESULT_SetDrawIndex_m19453 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_COPYSCENE_RESULT::get_UserInSceneList()
 Object_t* GC_COPYSCENE_RESULT_get_UserInSceneList_m19454 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_UserInSceneCount()
 int32_t GC_COPYSCENE_RESULT_get_UserInSceneCount_m19455 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_COPYSCENE_RESULT::GetUserInScene(System.Int32)
 uint64_t GC_COPYSCENE_RESULT_GetUserInScene_m19456 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::AddUserInScene(System.UInt64)
 void GC_COPYSCENE_RESULT_AddUserInScene_m19457 (GC_COPYSCENE_RESULT_t3082 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasDrawIndexTwo()
 bool GC_COPYSCENE_RESULT_get_HasDrawIndexTwo_m19458 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_DrawIndexTwo()
 int32_t GC_COPYSCENE_RESULT_get_DrawIndexTwo_m19459 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_DrawIndexTwo(System.Int32)
 void GC_COPYSCENE_RESULT_set_DrawIndexTwo_m19460 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetDrawIndexTwo(System.Int32)
 void GC_COPYSCENE_RESULT_SetDrawIndexTwo_m19461 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::get_HasPetExp()
 bool GC_COPYSCENE_RESULT_get_HasPetExp_m19462 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::get_PetExp()
 int32_t GC_COPYSCENE_RESULT_get_PetExp_m19463 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::set_PetExp(System.Int32)
 void GC_COPYSCENE_RESULT_set_PetExp_m19464 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::SetPetExp(System.Int32)
 void GC_COPYSCENE_RESULT_SetPetExp_m19465 (GC_COPYSCENE_RESULT_t3082 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_COPYSCENE_RESULT::SerializedSize()
 int32_t GC_COPYSCENE_RESULT_SerializedSize_m19466 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_COPYSCENE_RESULT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_COPYSCENE_RESULT_WriteTo_m19467 (GC_COPYSCENE_RESULT_t3082 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_COPYSCENE_RESULT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_COPYSCENE_RESULT_MergeFrom_m19468 (GC_COPYSCENE_RESULT_t3082 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_COPYSCENE_RESULT::IsInitialized()
 bool GC_COPYSCENE_RESULT_IsInitialized_m19469 (GC_COPYSCENE_RESULT_t3082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
