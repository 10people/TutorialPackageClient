#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_EQUIP_STAR_RET
struct GC_EQUIP_STAR_RET_t3018  : public PacketDistributed_t2209
{
	// System.Boolean GC_EQUIP_STAR_RET::hasSuccess
	bool ___hasSuccess;
	// System.Int32 GC_EQUIP_STAR_RET::success_
	int32_t ___success_;
	// System.Boolean GC_EQUIP_STAR_RET::hasPacktype
	bool ___hasPacktype;
	// System.Int32 GC_EQUIP_STAR_RET::packtype_
	int32_t ___packtype_;
	// System.Boolean GC_EQUIP_STAR_RET::hasEquipguid
	bool ___hasEquipguid;
	// System.UInt64 GC_EQUIP_STAR_RET::equipguid_
	uint64_t ___equipguid_;
	// System.Int32 GC_EQUIP_STAR_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
