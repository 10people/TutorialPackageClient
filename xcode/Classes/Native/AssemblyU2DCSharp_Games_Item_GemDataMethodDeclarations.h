#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Item.GemData
struct GemData_t4775;
struct GemData_t4775_marshaled;
// System.Int32[]
struct Int32U5BU5D_t116;
// COMBATATTE
#include "AssemblyU2DCSharp_COMBATATTE.h"

// System.Int32 Games.Item.GemData::GetGemAttrValue(COMBATATTE,System.Int32)
 int32_t GemData_GetGemAttrValue_m33803 (Object_t * __this/* static, unused */, int32_t ___attr, int32_t ___gemid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GemData::GetGemCombatValue(System.Int32)
 int32_t GemData_GetGemCombatValue_m33804 (Object_t * __this/* static, unused */, int32_t ___gemid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GemData::CleanUp()
 void GemData_CleanUp_m33805 (GemData_t4775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Item.GemData::GetGemId(System.Int32,System.Int32)
 int32_t GemData_GetGemId_m33806 (GemData_t4775 * __this, int32_t ___EquipSlot, int32_t ___Index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Item.GemData::SetGemId(System.Int32,System.Int32,System.Int32)
 bool GemData_SetGemId_m33807 (GemData_t4775 * __this, int32_t ___EquipSlot, int32_t ___Index, int32_t ___Id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Games.Item.GemData::get_Gem()
 Int32U5BU5D_t116* GemData_get_Gem_m33808 (GemData_t4775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Item.GemData::set_Gem(System.Int32[])
 void GemData_set_Gem_m33809 (GemData_t4775 * __this, Int32U5BU5D_t116* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GemData_t4775_marshal(const GemData_t4775& unmarshaled, GemData_t4775_marshaled& marshaled);
void GemData_t4775_marshal_back(const GemData_t4775_marshaled& marshaled, GemData_t4775& unmarshaled);
void GemData_t4775_marshal_cleanup(GemData_t4775_marshaled& marshaled);
