#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ItemSlotLogic
struct ItemSlotLogic_t1237;
// System.String
struct String_t;
// ItemSlotLogic/OnClick
struct OnClick_t1493;
// UnityEngine.GameObject
struct GameObject_t9;
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"

// System.Void ItemSlotLogic::.ctor()
 void ItemSlotLogic__ctor_m9075 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::OnClickOpenTips(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void ItemSlotLogic_OnClickOpenTips_m9076 (Object_t * __this/* static, unused */, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::OnClickGoldMoneyShopOpenTips(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void ItemSlotLogic_OnClickGoldMoneyShopOpenTips_m9077 (Object_t * __this/* static, unused */, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::Start()
 void ItemSlotLogic_Start_m9078 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitStaticItemInfo()
 void ItemSlotLogic_InitStaticItemInfo_m9079 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::ClearInfo()
 void ItemSlotLogic_ClearInfo_m9080 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo(ItemSlotLogic/SLOT_TYPE,System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_m9081 (ItemSlotLogic_t1237 * __this, int32_t ___type, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_GoldMoneyShopItem(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_GoldMoneyShopItem_m9082 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Item(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Item_m9083 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Fashion(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Fashion_m9084 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Fellow(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Fellow_m9085 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Mount(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Mount_m9086 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Formula(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Formula_m9087 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Stuff(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Stuff_m9088 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Restaurant(System.Int32,ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Restaurant_m9089 (ItemSlotLogic_t1237 * __this, int32_t ___id, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Coin(ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Coin_m9090 (ItemSlotLogic_t1237 * __this, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_Yuanbao(ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_Yuanbao_m9091 (ItemSlotLogic_t1237 * __this, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_YuanbaoBind(ItemSlotLogic/OnClick,System.String,System.Boolean)
 void ItemSlotLogic_InitInfo_YuanbaoBind_m9092 (ItemSlotLogic_t1237 * __this, OnClick_t1493 * ___delSlotOnClick, String_t* ___strNum, bool ___showNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_PlayerExp(System.String,ItemSlotLogic/OnClick)
 void ItemSlotLogic_InitInfo_PlayerExp_m9093 (ItemSlotLogic_t1237 * __this, String_t* ___strExp, OnClick_t1493 * ___delSlotOnClick, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::InitInfo_FellowExp(System.String,ItemSlotLogic/OnClick)
 void ItemSlotLogic_InitInfo_FellowExp_m9094 (ItemSlotLogic_t1237 * __this, String_t* ___strExp, OnClick_t1493 * ___delSlotOnClick, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::SlotOnClick(UnityEngine.GameObject)
 void ItemSlotLogic_SlotOnClick_m9095 (ItemSlotLogic_t1237 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::ItemSlotChoose()
 void ItemSlotLogic_ItemSlotChoose_m9096 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::ItemSlotChooseCancel()
 void ItemSlotLogic_ItemSlotChooseCancel_m9097 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::SetItemSlotChoose(System.Boolean)
 void ItemSlotLogic_SetItemSlotChoose_m9098 (ItemSlotLogic_t1237 * __this, bool ___bChoose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::ItemSlotDisable()
 void ItemSlotLogic_ItemSlotDisable_m9099 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::ItemSlotEnable()
 void ItemSlotLogic_ItemSlotEnable_m9100 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::SetItemSlotDisable(System.Boolean)
 void ItemSlotLogic_SetItemSlotDisable_m9101 (ItemSlotLogic_t1237 * __this, bool ___bDisable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ItemSlotLogic::IsInit()
 bool ItemSlotLogic_IsInit_m9102 (ItemSlotLogic_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::SetIconDirect(System.String)
 void ItemSlotLogic_SetIconDirect_m9103 (ItemSlotLogic_t1237 * __this, String_t* ___icon, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemSlotLogic::SetOnClickDirect(ItemSlotLogic/OnClick)
 void ItemSlotLogic_SetOnClickDirect_m9104 (ItemSlotLogic_t1237 * __this, OnClick_t1493 * ___delSlotOnClick, MethodInfo* method) IL2CPP_METHOD_ATTR;
