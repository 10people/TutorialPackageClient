#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_BUY_CONSIGNSALEITEMINFO
struct CG_BUY_CONSIGNSALEITEMINFO_t3203  : public PacketDistributed_t2209
{
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasSearchclass
	bool ___hasSearchclass;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::searchclass_
	int32_t ___searchclass_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasSearchsubclass
	bool ___hasSearchsubclass;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::searchsubclass_
	int32_t ___searchsubclass_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasSearchquality
	bool ___hasSearchquality;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::searchquality_
	int32_t ___searchquality_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasSortclass
	bool ___hasSortclass;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::sortclass_
	int32_t ___sortclass_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasSorttype
	bool ___hasSorttype;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::sorttype_
	int32_t ___sorttype_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasKeyword
	bool ___hasKeyword;
	// System.String CG_BUY_CONSIGNSALEITEMINFO::keyword_
	String_t* ___keyword_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasPage
	bool ___hasPage;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::page_
	int32_t ___page_;
	// System.Boolean CG_BUY_CONSIGNSALEITEMINFO::hasItemguid
	bool ___hasItemguid;
	// System.UInt64 CG_BUY_CONSIGNSALEITEMINFO::itemguid_
	uint64_t ___itemguid_;
	// System.Int32 CG_BUY_CONSIGNSALEITEMINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
