#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_RANK
struct GC_RET_RANK_t1480;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_RANK::.ctor()
 void GC_RET_RANK__ctor_m22617 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANK::get_HasType()
 bool GC_RET_RANK_get_HasType_m22618 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_Type()
 int32_t GC_RET_RANK_get_Type_m22619 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::set_Type(System.Int32)
 void GC_RET_RANK_set_Type_m22620 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::SetType(System.Int32)
 void GC_RET_RANK_SetType_m22621 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANK::get_HasMerank()
 bool GC_RET_RANK_get_HasMerank_m22622 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_Merank()
 int32_t GC_RET_RANK_get_Merank_m22623 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::set_Merank(System.Int32)
 void GC_RET_RANK_set_Merank_m22624 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::SetMerank(System.Int32)
 void GC_RET_RANK_SetMerank_m22625 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_RANK::get_guidList()
 Object_t* GC_RET_RANK_get_guidList_m22626 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_guidCount()
 int32_t GC_RET_RANK_get_guidCount_m22627 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_RANK::GetGuid(System.Int32)
 uint64_t GC_RET_RANK_GetGuid_m22628 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddGuid(System.UInt64)
 void GC_RET_RANK_AddGuid_m22629 (GC_RET_RANK_t1480 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_RANK::get_nameList()
 Object_t* GC_RET_RANK_get_nameList_m22630 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_nameCount()
 int32_t GC_RET_RANK_get_nameCount_m22631 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_RANK::GetName(System.Int32)
 String_t* GC_RET_RANK_GetName_m22632 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddName(System.String)
 void GC_RET_RANK_AddName_m22633 (GC_RET_RANK_t1480 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_levelList()
 Object_t* GC_RET_RANK_get_levelList_m22634 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_levelCount()
 int32_t GC_RET_RANK_get_levelCount_m22635 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetLevel(System.Int32)
 int32_t GC_RET_RANK_GetLevel_m22636 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddLevel(System.Int32)
 void GC_RET_RANK_AddLevel_m22637 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_proList()
 Object_t* GC_RET_RANK_get_proList_m22638 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_proCount()
 int32_t GC_RET_RANK_get_proCount_m22639 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetPro(System.Int32)
 int32_t GC_RET_RANK_GetPro_m22640 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddPro(System.Int32)
 void GC_RET_RANK_AddPro_m22641 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_tierList()
 Object_t* GC_RET_RANK_get_tierList_m22642 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_tierCount()
 int32_t GC_RET_RANK_get_tierCount_m22643 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTier(System.Int32)
 int32_t GC_RET_RANK_GetTier_m22644 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTier(System.Int32)
 void GC_RET_RANK_AddTier_m22645 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_timeList()
 Object_t* GC_RET_RANK_get_timeList_m22646 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_timeCount()
 int32_t GC_RET_RANK_get_timeCount_m22647 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTime(System.Int32)
 int32_t GC_RET_RANK_GetTime_m22648 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTime(System.Int32)
 void GC_RET_RANK_AddTime_m22649 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_guildSortNumList()
 Object_t* GC_RET_RANK_get_guildSortNumList_m22650 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_guildSortNumCount()
 int32_t GC_RET_RANK_get_guildSortNumCount_m22651 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetGuildSortNum(System.Int32)
 int32_t GC_RET_RANK_GetGuildSortNum_m22652 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddGuildSortNum(System.Int32)
 void GC_RET_RANK_AddGuildSortNum_m22653 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_guildScoreList()
 Object_t* GC_RET_RANK_get_guildScoreList_m22654 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_guildScoreCount()
 int32_t GC_RET_RANK_get_guildScoreCount_m22655 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetGuildScore(System.Int32)
 int32_t GC_RET_RANK_GetGuildScore_m22656 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddGuildScore(System.Int32)
 void GC_RET_RANK_AddGuildScore_m22657 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_RANK::get_guilidNameList()
 Object_t* GC_RET_RANK_get_guilidNameList_m22658 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_guilidNameCount()
 int32_t GC_RET_RANK_get_guilidNameCount_m22659 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_RANK::GetGuilidName(System.Int32)
 String_t* GC_RET_RANK_GetGuilidName_m22660 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddGuilidName(System.String)
 void GC_RET_RANK_AddGuilidName_m22661 (GC_RET_RANK_t1480 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_killerSortNumList()
 Object_t* GC_RET_RANK_get_killerSortNumList_m22662 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_killerSortNumCount()
 int32_t GC_RET_RANK_get_killerSortNumCount_m22663 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetKillerSortNum(System.Int32)
 int32_t GC_RET_RANK_GetKillerSortNum_m22664 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddKillerSortNum(System.Int32)
 void GC_RET_RANK_AddKillerSortNum_m22665 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_killNumList()
 Object_t* GC_RET_RANK_get_killNumList_m22666 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_killNumCount()
 int32_t GC_RET_RANK_get_killNumCount_m22667 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetKillNum(System.Int32)
 int32_t GC_RET_RANK_GetKillNum_m22668 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddKillNum(System.Int32)
 void GC_RET_RANK_AddKillNum_m22669 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_RANK::get_killerNameList()
 Object_t* GC_RET_RANK_get_killerNameList_m22670 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_killerNameCount()
 int32_t GC_RET_RANK_get_killerNameCount_m22671 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_RANK::GetKillerName(System.Int32)
 String_t* GC_RET_RANK_GetKillerName_m22672 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddKillerName(System.String)
 void GC_RET_RANK_AddKillerName_m22673 (GC_RET_RANK_t1480 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_zhanjiList()
 Object_t* GC_RET_RANK_get_zhanjiList_m22674 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_zhanjiCount()
 int32_t GC_RET_RANK_get_zhanjiCount_m22675 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetZhanji(System.Int32)
 int32_t GC_RET_RANK_GetZhanji_m22676 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddZhanji(System.Int32)
 void GC_RET_RANK_AddZhanji_m22677 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_jinyaodaiList()
 Object_t* GC_RET_RANK_get_jinyaodaiList_m22678 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_jinyaodaiCount()
 int32_t GC_RET_RANK_get_jinyaodaiCount_m22679 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetJinyaodai(System.Int32)
 int32_t GC_RET_RANK_GetJinyaodai_m22680 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddJinyaodai(System.Int32)
 void GC_RET_RANK_AddJinyaodai_m22681 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_combatnumList()
 Object_t* GC_RET_RANK_get_combatnumList_m22682 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_combatnumCount()
 int32_t GC_RET_RANK_get_combatnumCount_m22683 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetCombatnum(System.Int32)
 int32_t GC_RET_RANK_GetCombatnum_m22684 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddCombatnum(System.Int32)
 void GC_RET_RANK_AddCombatnum_m22685 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_hpList()
 Object_t* GC_RET_RANK_get_hpList_m22686 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_hpCount()
 int32_t GC_RET_RANK_get_hpCount_m22687 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetHp(System.Int32)
 int32_t GC_RET_RANK_GetHp_m22688 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddHp(System.Int32)
 void GC_RET_RANK_AddHp_m22689 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_coinList()
 Object_t* GC_RET_RANK_get_coinList_m22690 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_coinCount()
 int32_t GC_RET_RANK_get_coinCount_m22691 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetCoin(System.Int32)
 int32_t GC_RET_RANK_GetCoin_m22692 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddCoin(System.Int32)
 void GC_RET_RANK_AddCoin_m22693 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_RANK::get_masternameList()
 Object_t* GC_RET_RANK_get_masternameList_m22694 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_masternameCount()
 int32_t GC_RET_RANK_get_masternameCount_m22695 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_RANK::GetMastername(System.Int32)
 String_t* GC_RET_RANK_GetMastername_m22696 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddMastername(System.String)
 void GC_RET_RANK_AddMastername_m22697 (GC_RET_RANK_t1480 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_touchvalueList()
 Object_t* GC_RET_RANK_get_touchvalueList_m22698 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_touchvalueCount()
 int32_t GC_RET_RANK_get_touchvalueCount_m22699 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTouchvalue(System.Int32)
 int32_t GC_RET_RANK_GetTouchvalue_m22700 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTouchvalue(System.Int32)
 void GC_RET_RANK_AddTouchvalue_m22701 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANK::get_HasTotalPage()
 bool GC_RET_RANK_get_HasTotalPage_m22702 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_TotalPage()
 int32_t GC_RET_RANK_get_TotalPage_m22703 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::set_TotalPage(System.Int32)
 void GC_RET_RANK_set_TotalPage_m22704 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::SetTotalPage(System.Int32)
 void GC_RET_RANK_SetTotalPage_m22705 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_totalcostyuanbaoList()
 Object_t* GC_RET_RANK_get_totalcostyuanbaoList_m22706 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_totalcostyuanbaoCount()
 int32_t GC_RET_RANK_get_totalcostyuanbaoCount_m22707 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTotalcostyuanbao(System.Int32)
 int32_t GC_RET_RANK_GetTotalcostyuanbao_m22708 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTotalcostyuanbao(System.Int32)
 void GC_RET_RANK_AddTotalcostyuanbao_m22709 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANK::get_HasCurPage()
 bool GC_RET_RANK_get_HasCurPage_m22710 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_CurPage()
 int32_t GC_RET_RANK_get_CurPage_m22711 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::set_CurPage(System.Int32)
 void GC_RET_RANK_set_CurPage_m22712 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::SetCurPage(System.Int32)
 void GC_RET_RANK_SetCurPage_m22713 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_TotalChongZhiList()
 Object_t* GC_RET_RANK_get_TotalChongZhiList_m22714 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_TotalChongZhiCount()
 int32_t GC_RET_RANK_get_TotalChongZhiCount_m22715 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTotalChongZhi(System.Int32)
 int32_t GC_RET_RANK_GetTotalChongZhi_m22716 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTotalChongZhi(System.Int32)
 void GC_RET_RANK_AddTotalChongZhi_m22717 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_totalonlinetimeList()
 Object_t* GC_RET_RANK_get_totalonlinetimeList_m22718 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_totalonlinetimeCount()
 int32_t GC_RET_RANK_get_totalonlinetimeCount_m22719 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetTotalonlinetime(System.Int32)
 int32_t GC_RET_RANK_GetTotalonlinetime_m22720 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddTotalonlinetime(System.Int32)
 void GC_RET_RANK_AddTotalonlinetime_m22721 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_decorationList()
 Object_t* GC_RET_RANK_get_decorationList_m22722 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_decorationCount()
 int32_t GC_RET_RANK_get_decorationCount_m22723 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetDecoration(System.Int32)
 int32_t GC_RET_RANK_GetDecoration_m22724 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddDecoration(System.Int32)
 void GC_RET_RANK_AddDecoration_m22725 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_pdefenseList()
 Object_t* GC_RET_RANK_get_pdefenseList_m22726 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_pdefenseCount()
 int32_t GC_RET_RANK_get_pdefenseCount_m22727 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetPdefense(System.Int32)
 int32_t GC_RET_RANK_GetPdefense_m22728 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddPdefense(System.Int32)
 void GC_RET_RANK_AddPdefense_m22729 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_mdefenseList()
 Object_t* GC_RET_RANK_get_mdefenseList_m22730 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_mdefenseCount()
 int32_t GC_RET_RANK_get_mdefenseCount_m22731 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetMdefense(System.Int32)
 int32_t GC_RET_RANK_GetMdefense_m22732 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddMdefense(System.Int32)
 void GC_RET_RANK_AddMdefense_m22733 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_RANK::get_n64ValueList()
 Object_t* GC_RET_RANK_get_n64ValueList_m22734 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_n64ValueCount()
 int32_t GC_RET_RANK_get_n64ValueCount_m22735 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_RANK::GetN64Value(System.Int32)
 uint64_t GC_RET_RANK_GetN64Value_m22736 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddN64Value(System.UInt64)
 void GC_RET_RANK_AddN64Value_m22737 (GC_RET_RANK_t1480 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_loudspeakernumList()
 Object_t* GC_RET_RANK_get_loudspeakernumList_m22738 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_loudspeakernumCount()
 int32_t GC_RET_RANK_get_loudspeakernumCount_m22739 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetLoudspeakernum(System.Int32)
 int32_t GC_RET_RANK_GetLoudspeakernum_m22740 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddLoudspeakernum(System.Int32)
 void GC_RET_RANK_AddLoudspeakernum_m22741 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_RANK::get_charmvalueList()
 Object_t* GC_RET_RANK_get_charmvalueList_m22742 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::get_charmvalueCount()
 int32_t GC_RET_RANK_get_charmvalueCount_m22743 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::GetCharmvalue(System.Int32)
 int32_t GC_RET_RANK_GetCharmvalue_m22744 (GC_RET_RANK_t1480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::AddCharmvalue(System.Int32)
 void GC_RET_RANK_AddCharmvalue_m22745 (GC_RET_RANK_t1480 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_RANK::SerializedSize()
 int32_t GC_RET_RANK_SerializedSize_m22746 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_RANK::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_RANK_WriteTo_m22747 (GC_RET_RANK_t1480 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_RANK::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_RANK_MergeFrom_m22748 (GC_RET_RANK_t1480 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_RANK::IsInitialized()
 bool GC_RET_RANK_IsInitialized_m22749 (GC_RET_RANK_t1480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
