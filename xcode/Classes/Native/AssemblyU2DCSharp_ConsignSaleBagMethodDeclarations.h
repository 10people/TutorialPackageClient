#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConsignSaleBag
struct ConsignSaleBag_t1339;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// Games.Item.GameItemContainer
struct GameItemContainer_t1340;

// System.Void ConsignSaleBag::.ctor()
 void ConsignSaleBag__ctor_m7929 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnEnable()
 void ConsignSaleBag_OnEnable_m7930 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnDisable()
 void ConsignSaleBag_OnDisable_m7931 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::InitPack()
 void ConsignSaleBag_InitPack_m7932 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnLoadBackPackItem(UnityEngine.GameObject,System.Object)
 void ConsignSaleBag_OnLoadBackPackItem_m7933 (ConsignSaleBag_t1339 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::CleanAllBackItemHighLight()
 void ConsignSaleBag_CleanAllBackItemHighLight_m7934 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::UpdateBackPack()
 void ConsignSaleBag_UpdateBackPack_m7935 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConsignSaleBag::isCanConsignSale(Games.Item.GameItem,System.Boolean)
 bool ConsignSaleBag_isCanConsignSale_m7936 (Object_t * __this/* static, unused */, GameItem_t1172 * ___checkItemInfo, bool ___isChatLink, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.Item.GameItem> ConsignSaleBag::FilterConsignSale(Games.Item.GameItemContainer,System.Int32,System.Int32)
 List_1_t1244 * ConsignSaleBag_FilterConsignSale_m7937 (ConsignSaleBag_t1339 * __this, GameItemContainer_t1340 * ___Container, int32_t ___nClass, int32_t ___nSubClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPack_All()
 void ConsignSaleBag_ShowBackPack_All_m7938 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPack_Other()
 void ConsignSaleBag_ShowBackPack_Other_m7939 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPack_Equip()
 void ConsignSaleBag_ShowBackPack_Equip_m7940 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPack_Material()
 void ConsignSaleBag_ShowBackPack_Material_m7941 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPack_Medic()
 void ConsignSaleBag_ShowBackPack_Medic_m7942 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::ShowBackPackItemList(System.Collections.Generic.List`1<Games.Item.GameItem>)
 void ConsignSaleBag_ShowBackPackItemList_m7943 (ConsignSaleBag_t1339 * __this, List_1_t1244 * ___itemlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::CloseWindow()
 void ConsignSaleBag_CloseWindow_m7944 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnClick_TabAll()
 void ConsignSaleBag_OnClick_TabAll_m7945 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnClick_TabEquip()
 void ConsignSaleBag_OnClick_TabEquip_m7946 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnClick_TabMaterial()
 void ConsignSaleBag_OnClick_TabMaterial_m7947 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnClick_TabMedic()
 void ConsignSaleBag_OnClick_TabMedic_m7948 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnClick_TabOther()
 void ConsignSaleBag_OnClick_TabOther_m7949 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsignSaleBag::OnItemDragFinished()
 void ConsignSaleBag_OnItemDragFinished_m7950 (ConsignSaleBag_t1339 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
