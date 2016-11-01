#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_DROPITEM_INFO
struct GC_DROPITEM_INFO_t3050  : public PacketDistributed_t2209
{
	// System.Boolean GC_DROPITEM_INFO::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_DROPITEM_INFO::objId_
	int32_t ___objId_;
	// System.Boolean GC_DROPITEM_INFO::hasOwnerGuid
	bool ___hasOwnerGuid;
	// System.UInt64 GC_DROPITEM_INFO::ownerGuid_
	uint64_t ___ownerGuid_;
	// System.Boolean GC_DROPITEM_INFO::hasDropItemId
	bool ___hasDropItemId;
	// System.Int32 GC_DROPITEM_INFO::dropItemId_
	int32_t ___dropItemId_;
	// System.Boolean GC_DROPITEM_INFO::hasPos_x
	bool ___hasPos_x;
	// System.Int32 GC_DROPITEM_INFO::pos_x_
	int32_t ___pos_x_;
	// System.Boolean GC_DROPITEM_INFO::hasPos_z
	bool ___hasPos_z;
	// System.Int32 GC_DROPITEM_INFO::pos_z_
	int32_t ___pos_z_;
	// System.Boolean GC_DROPITEM_INFO::hasType
	bool ___hasType;
	// System.Int32 GC_DROPITEM_INFO::type_
	int32_t ___type_;
	// System.Boolean GC_DROPITEM_INFO::hasCount
	bool ___hasCount;
	// System.Int32 GC_DROPITEM_INFO::count_
	int32_t ___count_;
	// System.Int32 GC_DROPITEM_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
