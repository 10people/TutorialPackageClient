#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvEquipment
struct InvEquipment_t5232;
// InvGameItem[]
struct InvGameItemU5BU5D_t5248;
// InvGameItem
struct InvGameItem_t5237;
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"

// System.Void InvEquipment::.ctor()
 void InvEquipment__ctor_m37319 (InvEquipment_t5232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem[] InvEquipment::get_equippedItems()
 InvGameItemU5BU5D_t5248* InvEquipment_get_equippedItems_m37320 (InvEquipment_t5232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
 InvGameItem_t5237 * InvEquipment_Replace_m37321 (InvEquipment_t5232 * __this, int32_t ___slot, InvGameItem_t5237 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Equip(InvGameItem)
 InvGameItem_t5237 * InvEquipment_Equip_m37322 (InvEquipment_t5232 * __this, InvGameItem_t5237 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvGameItem)
 InvGameItem_t5237 * InvEquipment_Unequip_m37323 (InvEquipment_t5232 * __this, InvGameItem_t5237 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
 InvGameItem_t5237 * InvEquipment_Unequip_m37324 (InvEquipment_t5232 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
 bool InvEquipment_HasEquipped_m37325 (InvEquipment_t5232 * __this, InvGameItem_t5237 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
 bool InvEquipment_HasEquipped_m37326 (InvEquipment_t5232 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
 InvGameItem_t5237 * InvEquipment_GetItem_m37327 (InvEquipment_t5232 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
