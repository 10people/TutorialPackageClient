#pragma once
#include <stdint.h>
// InvEquipment
struct InvEquipment_t5232;
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlot.h"
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// UIEquipmentSlot
struct UIEquipmentSlot_t5235  : public UIItemSlot_t5236
{
	// InvEquipment UIEquipmentSlot::equipment
	InvEquipment_t5232 * ___equipment;
	// InvBaseItem/Slot UIEquipmentSlot::slot
	int32_t ___slot;
};
