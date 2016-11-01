#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_MissionDictionary
struct Tab_MissionDictionary_t541;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_MissionDictionary::.ctor()
 void Tab_MissionDictionary__ctor_m2624 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::GetInstanceFile()
 String_t* Tab_MissionDictionary_GetInstanceFile_m2625 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_AcceptNpcDataID()
 int32_t Tab_MissionDictionary_get_AcceptNpcDataID_m2626 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_AcceptTalkID()
 int32_t Tab_MissionDictionary_get_AcceptTalkID_m2627 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_AccepteNpcPosX()
 float Tab_MissionDictionary_get_AccepteNpcPosX_m2628 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_AccepteNpcPosZ()
 float Tab_MissionDictionary_get_AccepteNpcPosZ_m2629 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_AccepteNpcSceneID()
 int32_t Tab_MissionDictionary_get_AccepteNpcSceneID_m2630 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_CompleteNpcDataID()
 int32_t Tab_MissionDictionary_get_CompleteNpcDataID_m2631 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_CompleteNpcPosX()
 float Tab_MissionDictionary_get_CompleteNpcPosX_m2632 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_CompleteNpcPosZ()
 float Tab_MissionDictionary_get_CompleteNpcPosZ_m2633 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_CompleteNpcSceneID()
 int32_t Tab_MissionDictionary_get_CompleteNpcSceneID_m2634 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::get_FollowText()
 String_t* Tab_MissionDictionary_get_FollowText_m2635 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_Id()
 int32_t Tab_MissionDictionary_get_Id_m2636 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_MissionDictionary::get_IsAcceptAutoFindPath()
 bool Tab_MissionDictionary_get_IsAcceptAutoFindPath_m2637 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::get_MissionDesc()
 String_t* Tab_MissionDictionary_get_MissionDesc_m2638 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::get_MissionDoneDesc()
 String_t* Tab_MissionDictionary_get_MissionDoneDesc_m2639 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::get_MissionIcon()
 String_t* Tab_MissionDictionary_get_MissionIcon_m2640 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_MissionDictionary::get_MissionName()
 String_t* Tab_MissionDictionary_get_MissionName_m2641 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_TargetNpcDataID()
 int32_t Tab_MissionDictionary_get_TargetNpcDataID_m2642 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_TargetNpcPosX()
 float Tab_MissionDictionary_get_TargetNpcPosX_m2643 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_MissionDictionary::get_TargetNpcPosZ()
 float Tab_MissionDictionary_get_TargetNpcPosZ_m2644 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_MissionDictionary::get_TargetNpcSceneID()
 int32_t Tab_MissionDictionary_get_TargetNpcSceneID_m2645 (Tab_MissionDictionary_t541 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_MissionDictionary::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_MissionDictionary_LoadTable_m2646 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_MissionDictionary::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_MissionDictionary_SerializableTable_m2647 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
