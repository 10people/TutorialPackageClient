#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.FlyWing.FlyWingMananger
struct FlyWingMananger_t2176;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData>
struct Dictionary_2_t4730;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;

// System.Void Games.FlyWing.FlyWingMananger::.ctor()
 void FlyWingMananger__ctor_m33447 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.FlyWing.FlyWingMananger::get_CurEquipFlyWingId()
 int32_t FlyWingMananger_get_CurEquipFlyWingId_m33448 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.FlyWing.FlyWingMananger::get_CurDreamFlyWingId()
 int32_t FlyWingMananger_get_CurDreamFlyWingId_m33449 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::set_IsShowFlyWing(System.Boolean)
 void FlyWingMananger_set_IsShowFlyWing_m33450 (FlyWingMananger_t2176 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.FlyWing.FlyWingMananger::get_IsShowFlyWing()
 bool FlyWingMananger_get_IsShowFlyWing_m33451 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::addFlyWingData(System.Int32)
 void FlyWingMananger_addFlyWingData_m33452 (FlyWingMananger_t2176 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::addDreamFlyWingData(System.Int32)
 void FlyWingMananger_addDreamFlyWingData_m33453 (FlyWingMananger_t2176 * __this, int32_t ___dreamFlyWingId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::AbsortFlyWingData(System.Int32,System.Int32)
 void FlyWingMananger_AbsortFlyWingData_m33454 (FlyWingMananger_t2176 * __this, int32_t ___oldId, int32_t ___newId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::AdvanceFlyWing(System.Int32,System.Int32)
 void FlyWingMananger_AdvanceFlyWing_m33455 (FlyWingMananger_t2176 * __this, int32_t ___oldId, int32_t ___newId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::EquipFlyWing(System.Int32)
 void FlyWingMananger_EquipFlyWing_m33456 (FlyWingMananger_t2176 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::CanceEquipFlyWing()
 void FlyWingMananger_CanceEquipFlyWing_m33457 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::ShowHideFlyWing(System.Boolean)
 void FlyWingMananger_ShowHideFlyWing_m33458 (FlyWingMananger_t2176 * __this, bool ___isShowHide, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::DreamFlyWing(System.Int32)
 void FlyWingMananger_DreamFlyWing_m33459 (FlyWingMananger_t2176 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::CancelDreamFlyWing()
 void FlyWingMananger_CancelDreamFlyWing_m33460 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::ReLoadFlyWing()
 void FlyWingMananger_ReLoadFlyWing_m33461 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::CleanAllFlyWingData()
 void FlyWingMananger_CleanAllFlyWingData_m33462 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.FlyWing.FlyWingData> Games.FlyWing.FlyWingMananger::GetFlyWingDataDictionary()
 Dictionary_2_t4730 * FlyWingMananger_GetFlyWingDataDictionary_m33463 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.FlyWing.FlyWingMananger::GetDreamFlyWingData()
 List_1_t90 * FlyWingMananger_GetDreamFlyWingData_m33464 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::_onChangeFlyWingData(System.Int32,System.Int32)
 void FlyWingMananger__onChangeFlyWingData_m33465 (FlyWingMananger_t2176 * __this, int32_t ___oldId, int32_t ___newId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::_onCaluAllPlayerProperty()
 void FlyWingMananger__onCaluAllPlayerProperty_m33466 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FlyWing.FlyWingMananger::_onChangeShowHide()
 void FlyWingMananger__onChangeShowHide_m33467 (FlyWingMananger_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
