#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Object
#include "mscorlib_System_Object.h"
// BelleMatrix
struct BelleMatrix_t4852  : public Object_t
{
	// System.Int32 BelleMatrix::id
	int32_t ___id;
	// System.Boolean BelleMatrix::isActive
	bool ___isActive;
	// System.Int32[] BelleMatrix::belleIDs
	Int32U5BU5D_t116* ___belleIDs;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> BelleMatrix::attrMap
	Dictionary_2_t1116 * ___attrMap;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> BelleMatrix::attrAffectionMap
	Dictionary_2_t1116 * ___attrAffectionMap;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> BelleMatrix::attrBelleMap
	Dictionary_2_t1116 * ___attrBelleMap;
	// System.Boolean BelleMatrix::m_bAffectionActive
	bool ___m_bAffectionActive;
};
struct BelleMatrix_t4852_StaticFields{
	// System.Single BelleMatrix::m_lastTotalValue
	float ___m_lastTotalValue;
};
