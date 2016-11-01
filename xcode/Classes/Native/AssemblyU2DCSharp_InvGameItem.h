#pragma once
#include <stdint.h>
// InvBaseItem
struct InvBaseItem_t5244;
// System.Object
#include "mscorlib_System_Object.h"
// InvGameItem/Quality
#include "AssemblyU2DCSharp_InvGameItem_Quality.h"
// InvGameItem
struct InvGameItem_t5237  : public Object_t
{
	// System.Int32 InvGameItem::mBaseItemID
	int32_t ___mBaseItemID;
	// InvGameItem/Quality InvGameItem::quality
	int32_t ___quality;
	// System.Int32 InvGameItem::itemLevel
	int32_t ___itemLevel;
	// InvBaseItem InvGameItem::mBaseItem
	InvBaseItem_t5244 * ___mBaseItem;
};
