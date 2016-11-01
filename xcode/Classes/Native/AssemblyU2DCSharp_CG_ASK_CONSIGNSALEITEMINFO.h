#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_CONSIGNSALEITEMINFO
struct CG_ASK_CONSIGNSALEITEMINFO_t3201  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasSearchclass
	bool ___hasSearchclass;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::searchclass_
	int32_t ___searchclass_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasSearchsubclass
	bool ___hasSearchsubclass;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::searchsubclass_
	int32_t ___searchsubclass_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasSearchquality
	bool ___hasSearchquality;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::searchquality_
	int32_t ___searchquality_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasSortclass
	bool ___hasSortclass;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::sortclass_
	int32_t ___sortclass_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasSorttype
	bool ___hasSorttype;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::sorttype_
	int32_t ___sorttype_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasKeyword
	bool ___hasKeyword;
	// System.String CG_ASK_CONSIGNSALEITEMINFO::keyword_
	String_t* ___keyword_;
	// System.Boolean CG_ASK_CONSIGNSALEITEMINFO::hasPage
	bool ___hasPage;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::page_
	int32_t ___page_;
	// System.Int32 CG_ASK_CONSIGNSALEITEMINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
