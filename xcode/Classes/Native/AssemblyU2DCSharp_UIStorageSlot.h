#pragma once
#include <stdint.h>
// UIItemStorage
struct UIItemStorage_t5239;
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlot.h"
// UIStorageSlot
struct UIStorageSlot_t5240  : public UIItemSlot_t5236
{
	// UIItemStorage UIStorageSlot::storage
	UIItemStorage_t5239 * ___storage;
	// System.Int32 UIStorageSlot::slot
	int32_t ___slot;
};
