#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_TrainingBook
struct Tab_TrainingBook_t689;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_TrainingBook::.ctor()
 void Tab_TrainingBook__ctor_m3593 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_TrainingBook::GetInstanceFile()
 String_t* Tab_TrainingBook_GetInstanceFile_m3594 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_AttackSpeed()
 int32_t Tab_TrainingBook_get_AttackSpeed_m3595 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Branch()
 int32_t Tab_TrainingBook_get_Branch_m3596 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Cost()
 int32_t Tab_TrainingBook_get_Cost_m3597 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_CritiAdd()
 int32_t Tab_TrainingBook_get_CritiAdd_m3598 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_CritiMis()
 int32_t Tab_TrainingBook_get_CritiMis_m3599 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Critical()
 int32_t Tab_TrainingBook_get_Critical_m3600 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Decritical()
 int32_t Tab_TrainingBook_get_Decritical_m3601 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Dodge()
 int32_t Tab_TrainingBook_get_Dodge_m3602 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Ductical()
 int32_t Tab_TrainingBook_get_Ductical_m3603 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Hit()
 int32_t Tab_TrainingBook_get_Hit_m3604 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Id()
 int32_t Tab_TrainingBook_get_Id_m3605 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_LimitLevel()
 int32_t Tab_TrainingBook_get_LimitLevel_m3606 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MagAttack()
 int32_t Tab_TrainingBook_get_MagAttack_m3607 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MagDef()
 int32_t Tab_TrainingBook_get_MagDef_m3608 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MaxHP()
 int32_t Tab_TrainingBook_get_MaxHP_m3609 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MaxMP()
 int32_t Tab_TrainingBook_get_MaxMP_m3610 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MaxXP()
 int32_t Tab_TrainingBook_get_MaxXP_m3611 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_MoveSpeed()
 int32_t Tab_TrainingBook_get_MoveSpeed_m3612 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_TrainingBook::get_Name()
 String_t* Tab_TrainingBook_get_Name_m3613 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_PysAttack()
 int32_t Tab_TrainingBook_get_PysAttack_m3614 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_PysDef()
 int32_t Tab_TrainingBook_get_PysDef_m3615 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_TrainingBook::get_Strike()
 int32_t Tab_TrainingBook_get_Strike_m3616 (Tab_TrainingBook_t689 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_TrainingBook::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_TrainingBook_LoadTable_m3617 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_TrainingBook::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_TrainingBook_SerializableTable_m3618 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
