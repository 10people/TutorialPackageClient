#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String>
struct PopsicleList_1_t2924;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_LOGIN_RET
struct GC_LOGIN_RET_t2925  : public PacketDistributed_t2209
{
	// System.Boolean GC_LOGIN_RET::hasResult
	bool ___hasResult;
	// System.Int32 GC_LOGIN_RET::result_
	int32_t ___result_;
	// System.Boolean GC_LOGIN_RET::hasValidateresult
	bool ___hasValidateresult;
	// System.Int32 GC_LOGIN_RET::validateresult_
	int32_t ___validateresult_;
	// System.Boolean GC_LOGIN_RET::hasUserid
	bool ___hasUserid;
	// System.String GC_LOGIN_RET::userid_
	String_t* ___userid_;
	// System.Boolean GC_LOGIN_RET::hasOid
	bool ___hasOid;
	// System.String GC_LOGIN_RET::oid_
	String_t* ___oid_;
	// System.Boolean GC_LOGIN_RET::hasAccesstoken
	bool ___hasAccesstoken;
	// System.String GC_LOGIN_RET::accesstoken_
	String_t* ___accesstoken_;
	// System.Boolean GC_LOGIN_RET::hasRapidvalidatecode
	bool ___hasRapidvalidatecode;
	// System.Int32 GC_LOGIN_RET::rapidvalidatecode_
	int32_t ___rapidvalidatecode_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> GC_LOGIN_RET::roleGUIDList_
	PopsicleList_1_t2922 * ___roleGUIDList_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_LOGIN_RET::roleTypeList_
	PopsicleList_1_t2923 * ___roleTypeList_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.String> GC_LOGIN_RET::playerNameList_
	PopsicleList_1_t2924 * ___playerNameList_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_LOGIN_RET::roleLevelList_
	PopsicleList_1_t2923 * ___roleLevelList_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_LOGIN_RET::ModelVisualID_
	PopsicleList_1_t2923 * ___ModelVisualID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_LOGIN_RET::WeaponID_
	PopsicleList_1_t2923 * ___WeaponID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_LOGIN_RET::WeaponEffectGem_
	PopsicleList_1_t2923 * ___WeaponEffectGem_;
	// System.Int32 GC_LOGIN_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
