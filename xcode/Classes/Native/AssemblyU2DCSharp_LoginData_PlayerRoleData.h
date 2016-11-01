#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// LoginData/PlayerRoleData
struct PlayerRoleData_t4913  : public Object_t
{
	// System.UInt64 LoginData/PlayerRoleData::guid
	uint64_t ___guid;
	// System.Int32 LoginData/PlayerRoleData::type
	int32_t ___type;
	// System.String LoginData/PlayerRoleData::name
	String_t* ___name;
	// System.Int32 LoginData/PlayerRoleData::level
	int32_t ___level;
	// System.Int32 LoginData/PlayerRoleData::ModelVisualID
	int32_t ___ModelVisualID;
	// System.Int32 LoginData/PlayerRoleData::WeaponID
	int32_t ___WeaponID;
	// System.Int32 LoginData/PlayerRoleData::WeaponEffectGem
	int32_t ___WeaponEffectGem;
};
