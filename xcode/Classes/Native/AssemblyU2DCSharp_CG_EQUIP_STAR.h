#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_EQUIP_STAR
struct CG_EQUIP_STAR_t3016  : public PacketDistributed_t2209
{
	// System.Boolean CG_EQUIP_STAR::hasPacktype
	bool ___hasPacktype;
	// System.Int32 CG_EQUIP_STAR::packtype_
	int32_t ___packtype_;
	// System.Boolean CG_EQUIP_STAR::hasEquipguid
	bool ___hasEquipguid;
	// System.UInt64 CG_EQUIP_STAR::equipguid_
	uint64_t ___equipguid_;
	// System.Boolean CG_EQUIP_STAR::hasStarlevel
	bool ___hasStarlevel;
	// System.Int32 CG_EQUIP_STAR::starlevel_
	int32_t ___starlevel_;
	// System.Int32 CG_EQUIP_STAR::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
