#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConsignSaleLogic
struct ConsignSaleLogic_t1350;
// ConsignsaleBuyItem
struct ConsignsaleBuyItem_t1345;
// System.Collections.Generic.List`1<Games.ConsignSale.ConsignSaleSearchInfo>
struct List_1_t1348;
// System.Collections.Generic.List`1<Games.ConsignSale.MyConsignSaleItemInfo>
struct List_1_t1349;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Games.Item.GameItem
struct GameItem_t1172;

// System.Void ConsignSaleLogic::.ctor()
 void ConsignSaleLogic__ctor_m7967 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::.cctor()
 void ConsignSaleLogic__cctor_m7968 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConsignsaleBuyItem ConsignSaleLogic::get_CurClickBuyItem()
 ConsignsaleBuyItem_t1345 * ConsignSaleLogic_get_CurClickBuyItem_m7969 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_CurClickBuyItem(ConsignsaleBuyItem)
 void ConsignSaleLogic_set_CurClickBuyItem_m7970 (ConsignSaleLogic_t1350 * __this, ConsignsaleBuyItem_t1345 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ConsignSale.ConsignSaleSearchInfo> ConsignSaleLogic::get_BuyItemInfo()
 List_1_t1348 * ConsignSaleLogic_get_BuyItemInfo_m7971 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_BuyItemInfo(System.Collections.Generic.List`1<Games.ConsignSale.ConsignSaleSearchInfo>)
 void ConsignSaleLogic_set_BuyItemInfo_m7972 (ConsignSaleLogic_t1350 * __this, List_1_t1348 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ConsignSale.MyConsignSaleItemInfo> ConsignSaleLogic::get_SaleItemInfo()
 List_1_t1349 * ConsignSaleLogic_get_SaleItemInfo_m7973 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SaleItemInfo(System.Collections.Generic.List`1<Games.ConsignSale.MyConsignSaleItemInfo>)
 void ConsignSaleLogic_set_SaleItemInfo_m7974 (ConsignSaleLogic_t1350 * __this, List_1_t1349 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_SearchClass()
 int32_t ConsignSaleLogic_get_SearchClass_m7975 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SearchClass(System.Int32)
 void ConsignSaleLogic_set_SearchClass_m7976 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_SearchSubClass()
 int32_t ConsignSaleLogic_get_SearchSubClass_m7977 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SearchSubClass(System.Int32)
 void ConsignSaleLogic_set_SearchSubClass_m7978 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_SearchQuality()
 int32_t ConsignSaleLogic_get_SearchQuality_m7979 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SearchQuality(System.Int32)
 void ConsignSaleLogic_set_SearchQuality_m7980 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_CurBuyPage()
 int32_t ConsignSaleLogic_get_CurBuyPage_m7981 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_CurBuyPage(System.Int32)
 void ConsignSaleLogic_set_CurBuyPage_m7982 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_CurSalePage()
 int32_t ConsignSaleLogic_get_CurSalePage_m7983 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_CurSalePage(System.Int32)
 void ConsignSaleLogic_set_CurSalePage_m7984 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_SelBuyIndex()
 int32_t ConsignSaleLogic_get_SelBuyIndex_m7985 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SelBuyIndex(System.Int32)
 void ConsignSaleLogic_set_SelBuyIndex_m7986 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_SelSaleIndex()
 int32_t ConsignSaleLogic_get_SelSaleIndex_m7987 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_SelSaleIndex(System.Int32)
 void ConsignSaleLogic_set_SelSaleIndex_m7988 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_CurSaleCount()
 int32_t ConsignSaleLogic_get_CurSaleCount_m7989 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_CurSaleCount(System.Int32)
 void ConsignSaleLogic_set_CurSaleCount_m7990 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsignSaleLogic::get_MaxSaleCount()
 int32_t ConsignSaleLogic_get_MaxSaleCount_m7991 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::set_MaxSaleCount(System.Int32)
 void ConsignSaleLogic_set_MaxSaleCount_m7992 (ConsignSaleLogic_t1350 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConsignSaleLogic ConsignSaleLogic::Instance()
 ConsignSaleLogic_t1350 * ConsignSaleLogic_Instance_m7993 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::Awake()
 void ConsignSaleLogic_Awake_m7994 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::Start()
 void ConsignSaleLogic_Start_m7995 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnDestroy()
 void ConsignSaleLogic_OnDestroy_m7996 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CleanBuyItemInfo()
 void ConsignSaleLogic_CleanBuyItemInfo_m7997 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::UpdateBuyInfo()
 void ConsignSaleLogic_UpdateBuyInfo_m7998 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickBuyBt()
 void ConsignSaleLogic_ClickBuyBt_m7999 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickSaleBt()
 void ConsignSaleLogic_ClickSaleBt_m8000 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CreateSaleItem()
 void ConsignSaleLogic_CreateSaleItem_m8001 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnLoadSaleItem(UnityEngine.GameObject,System.Object)
 void ConsignSaleLogic_OnLoadSaleItem_m8002 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CreateBuyItem()
 void ConsignSaleLogic_CreateBuyItem_m8003 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnLoadBuyItem(UnityEngine.GameObject,System.Object)
 void ConsignSaleLogic_OnLoadBuyItem_m8004 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::SendAskSearchInfo(System.Int32)
 void ConsignSaleLogic_SendAskSearchInfo_m8005 (ConsignSaleLogic_t1350 * __this, int32_t ___nCurPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CreateSearchClassBtItem()
 void ConsignSaleLogic_CreateSearchClassBtItem_m8006 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::SetClassBtInfo(UnityEngine.GameObject,System.String,System.Int32,UnityEngine.GameObject)
 void ConsignSaleLogic_SetClassBtInfo_m8007 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ____gameObject, String_t* ___btName, int32_t ___nClass, GameObject_t9 * ____tweenTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnLoadSearchClassBtItem(UnityEngine.GameObject,System.Object)
 void ConsignSaleLogic_OnLoadSearchClassBtItem_m8008 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CreateSearchSubClassBtItem()
 void ConsignSaleLogic_CreateSearchSubClassBtItem_m8009 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::SetSubClassBtInfo(UnityEngine.GameObject,System.String,System.Int32,System.Int32)
 void ConsignSaleLogic_SetSubClassBtInfo_m8010 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ____gameObject, String_t* ___btName, int32_t ____Class, int32_t ____subClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnLoadSearchSubClassBtItem(UnityEngine.GameObject,System.Object)
 void ConsignSaleLogic_OnLoadSearchSubClassBtItem_m8011 (ConsignSaleLogic_t1350 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ProcessClickSearchBt(System.Int32,System.Int32)
 void ConsignSaleLogic_ProcessClickSearchBt_m8012 (ConsignSaleLogic_t1350 * __this, int32_t ___nSearchClass, int32_t ___nSearchSubClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ProcessClickTitleSort(System.Int32)
 void ConsignSaleLogic_ProcessClickTitleSort_m8013 (ConsignSaleLogic_t1350 * __this, int32_t ___nSortClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickPinZhiLable()
 void ConsignSaleLogic_ClickPinZhiLable_m8014 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickDengJiLable()
 void ConsignSaleLogic_ClickDengJiLable_m8015 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickShuLingLable()
 void ConsignSaleLogic_ClickShuLingLable_m8016 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickZongJiaLable()
 void ConsignSaleLogic_ClickZongJiaLable_m8017 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::BuyItem()
 void ConsignSaleLogic_BuyItem_m8018 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::BuyChargeOK()
 void ConsignSaleLogic_BuyChargeOK_m8019 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::BuyChargeCancel()
 void ConsignSaleLogic_BuyChargeCancel_m8020 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ShowBuyItemInfo()
 void ConsignSaleLogic_ShowBuyItemInfo_m8021 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CleanSaleInfo()
 void ConsignSaleLogic_CleanSaleInfo_m8022 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::UpdateSaleInfo()
 void ConsignSaleLogic_UpdateSaleInfo_m8023 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::AskMySaleItemInfo(System.Int32)
 void ConsignSaleLogic_AskMySaleItemInfo_m8024 (ConsignSaleLogic_t1350 * __this, int32_t ___nCurPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::SaleItem(Games.Item.GameItem,System.Int32,System.Int32)
 void ConsignSaleLogic_SaleItem_m8025 (ConsignSaleLogic_t1350 * __this, GameItem_t1172 * ___saleItem, int32_t ___nItemCount, int32_t ___nItemPrice, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::CancelSaleItem()
 void ConsignSaleLogic_CancelSaleItem_m8026 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickSaleButton()
 void ConsignSaleLogic_ClickSaleButton_m8027 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickBuyDownPage()
 void ConsignSaleLogic_ClickBuyDownPage_m8028 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickBuyUpPage()
 void ConsignSaleLogic_ClickBuyUpPage_m8029 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickSaleDownPage()
 void ConsignSaleLogic_ClickSaleDownPage_m8030 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickSaleUpPage()
 void ConsignSaleLogic_ClickSaleUpPage_m8031 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::OnCloseClick()
 void ConsignSaleLogic_OnCloseClick_m8032 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::ClickKeyWordSearchBt()
 void ConsignSaleLogic_ClickKeyWordSearchBt_m8033 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::SearchForAskBuy(System.String)
 void ConsignSaleLogic_SearchForAskBuy_m8034 (ConsignSaleLogic_t1350 * __this, String_t* ____keyWord, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleLogic::KeyWordInputCommit()
 void ConsignSaleLogic_KeyWordInputCommit_m8035 (ConsignSaleLogic_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
