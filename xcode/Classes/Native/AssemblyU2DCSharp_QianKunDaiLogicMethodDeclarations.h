#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QianKunDaiLogic
struct QianKunDaiLogic_t1243;
// System.String
struct String_t;
// Games.Item.GameItem
struct GameItem_t1172;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// GCGame.Table.Tab_QianKunDaiFormula
struct Tab_QianKunDaiFormula_t599;
// TabButton
struct TabButton_t1210;
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"

// System.Void QianKunDaiLogic::.ctor()
 void QianKunDaiLogic__ctor_m10779 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::.cctor()
 void QianKunDaiLogic__cctor_m10780 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// QianKunDaiLogic QianKunDaiLogic::Instance()
 QianKunDaiLogic_t1243 * QianKunDaiLogic_Instance_m10781 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::get_IsOpenFromChristmas()
 bool QianKunDaiLogic_get_IsOpenFromChristmas_m10782 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::set_IsOpenFromChristmas(System.Boolean)
 void QianKunDaiLogic_set_IsOpenFromChristmas_m10783 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::Awake()
 void QianKunDaiLogic_Awake_m10784 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::Start()
 void QianKunDaiLogic_Start_m10785 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnEnable()
 void QianKunDaiLogic_OnEnable_m10786 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnDisable()
 void QianKunDaiLogic_OnDisable_m10787 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ClearData()
 void QianKunDaiLogic_ClearData_m10788 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ClearProductSlot()
 void QianKunDaiLogic_ClearProductSlot_m10789 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ProductSlotOnClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void QianKunDaiLogic_ProductSlotOnClick_m10790 (QianKunDaiLogic_t1243 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CombineFormula()
 void QianKunDaiLogic_CombineFormula_m10791 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsAllGem()
 bool QianKunDaiLogic_IsAllGem_m10792 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CombineFormulaOK()
 void QianKunDaiLogic_CombineFormulaOK_m10793 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CombineFormulaCancel()
 void QianKunDaiLogic_CombineFormulaCancel_m10794 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ShowFormula()
 void QianKunDaiLogic_ShowFormula_m10795 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CloseFormulaRoot()
 void QianKunDaiLogic_CloseFormulaRoot_m10796 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ChooseStuff(Games.Item.GameItem,ItemSlotLogic)
 void QianKunDaiLogic_ChooseStuff_m10797 (QianKunDaiLogic_t1243 * __this, GameItem_t1172 * ___chooseitem, ItemSlotLogic_t1237 * ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::StuffSlotOnClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void QianKunDaiLogic_StuffSlotOnClick_m10798 (QianKunDaiLogic_t1243 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnClickDelNum()
 void QianKunDaiLogic_OnClickDelNum_m10799 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnClickAddNum()
 void QianKunDaiLogic_OnClickAddNum_m10800 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::NumChooseInput()
 void QianKunDaiLogic_NumChooseInput_m10801 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::NumChooseCancel()
 void QianKunDaiLogic_NumChooseCancel_m10802 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::NumChooseOK()
 void QianKunDaiLogic_NumChooseOK_m10803 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsGemFormulaSameLevel(GCGame.Table.Tab_QianKunDaiFormula)
 bool QianKunDaiLogic_IsGemFormulaSameLevel_m10804 (QianKunDaiLogic_t1243 * __this, Tab_QianKunDaiFormula_t599 * ___tabFormula, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsAllStuffRight(GCGame.Table.Tab_QianKunDaiFormula,System.Boolean)
 bool QianKunDaiLogic_IsAllStuffRight_m10805 (QianKunDaiLogic_t1243 * __this, Tab_QianKunDaiFormula_t599 * ___tabFormula, bool ___bAllGem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QianKunDaiLogic::GetChooseGemLevelCount()
 int32_t QianKunDaiLogic_GetChooseGemLevelCount_m10806 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QianKunDaiLogic::GetChooseGemClassCount()
 int32_t QianKunDaiLogic_GetChooseGemClassCount_m10807 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ClearNumChoose()
 void QianKunDaiLogic_ClearNumChoose_m10808 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::MakeCombinePacket()
 void QianKunDaiLogic_MakeCombinePacket_m10809 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CombineCDWait()
 void QianKunDaiLogic_CombineCDWait_m10810 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::HandleUpdateItemPacket()
 void QianKunDaiLogic_HandleUpdateItemPacket_m10811 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ResetChooseStuffKinds()
 void QianKunDaiLogic_ResetChooseStuffKinds_m10812 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsInStuffChoose(Games.Item.GameItem)
 bool QianKunDaiLogic_IsInStuffChoose_m10813 (QianKunDaiLogic_t1243 * __this, GameItem_t1172 * ___chooseitem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::HandleQianKunDaiProduct(System.Int32)
 void QianKunDaiLogic_HandleQianKunDaiProduct_m10814 (QianKunDaiLogic_t1243 * __this, int32_t ___nProductDataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnTabIntroduction(TabButton)
 void QianKunDaiLogic_OnTabIntroduction_m10815 (QianKunDaiLogic_t1243 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnTabFilter(TabButton)
 void QianKunDaiLogic_OnTabFilter_m10816 (QianKunDaiLogic_t1243 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::SetCombineTotalMoney()
 void QianKunDaiLogic_SetCombineTotalMoney_m10817 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ShowFilter()
 void QianKunDaiLogic_ShowFilter_m10818 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsStuffInFormula(GCGame.Table.Tab_QianKunDaiFormula,System.Int32)
 bool QianKunDaiLogic_IsStuffInFormula_m10819 (QianKunDaiLogic_t1243 * __this, Tab_QianKunDaiFormula_t599 * ___tabFormula, int32_t ___nItemDataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QianKunDaiLogic::IsAllStuffInFormula(GCGame.Table.Tab_QianKunDaiFormula)
 bool QianKunDaiLogic_IsAllStuffInFormula_m10820 (QianKunDaiLogic_t1243 * __this, Tab_QianKunDaiFormula_t599 * ___tabFormula, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::ShowTabFilter()
 void QianKunDaiLogic_ShowTabFilter_m10821 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::CloseFilter()
 void QianKunDaiLogic_CloseFilter_m10822 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::UpdateFilter()
 void QianKunDaiLogic_UpdateFilter_m10823 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnClickProductOK()
 void QianKunDaiLogic_OnClickProductOK_m10824 (QianKunDaiLogic_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QianKunDaiLogic::OnProductItemClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void QianKunDaiLogic_OnProductItemClick_m10825 (QianKunDaiLogic_t1243 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
