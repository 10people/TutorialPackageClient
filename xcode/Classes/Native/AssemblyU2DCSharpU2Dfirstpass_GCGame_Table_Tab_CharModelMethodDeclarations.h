#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_CharModel
struct Tab_CharModel_t391;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_CharModel::.ctor()
 void Tab_CharModel__ctor_m1617 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::GetInstanceFile()
 String_t* Tab_CharModel_GetInstanceFile_m1618 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_AnimPath()
 String_t* Tab_CharModel_get_AnimPath_m1619 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_CharModel::getBornEffectCount()
 int32_t Tab_CharModel_getBornEffectCount_m1620 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 GCGame.Table.Tab_CharModel::GetBornEffectbyIndex(System.Int32)
 int16_t Tab_CharModel_GetBornEffectbyIndex_m1621 (Tab_CharModel_t391 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_CharModel::getDeadSoundCount()
 int32_t Tab_CharModel_getDeadSoundCount_m1622 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 GCGame.Table.Tab_CharModel::GetDeadSoundbyIndex(System.Int32)
 int16_t Tab_CharModel_GetDeadSoundbyIndex_m1623 (Tab_CharModel_t391 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_CharModel::getEffectIdCount()
 int32_t Tab_CharModel_getEffectIdCount_m1624 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 GCGame.Table.Tab_CharModel::GetEffectIdbyIndex(System.Int32)
 int16_t Tab_CharModel_GetEffectIdbyIndex_m1625 (Tab_CharModel_t391 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_CharModel::get_HeadInfoHeight()
 float Tab_CharModel_get_HeadInfoHeight_m1626 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_HeadPic()
 String_t* Tab_CharModel_get_HeadPic_m1627 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_CharModel::get_Id()
 int32_t Tab_CharModel_get_Id_m1628 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_CharModel::get_ModelType()
 int32_t Tab_CharModel_get_ModelType_m1629 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_NPCSpriteName()
 String_t* Tab_CharModel_get_NPCSpriteName_m1630 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_Name()
 String_t* Tab_CharModel_get_Name_m1631 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_ResPath()
 String_t* Tab_CharModel_get_ResPath_m1632 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_CharModel::get_Scale()
 float Tab_CharModel_get_Scale_m1633 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_CharModel::get_SelectCircleSize()
 float Tab_CharModel_get_SelectCircleSize_m1634 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_CharModel::get_Title()
 String_t* Tab_CharModel_get_Title_m1635 (Tab_CharModel_t391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_CharModel::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_CharModel_LoadTable_m1636 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_CharModel::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_CharModel_SerializableTable_m1637 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
