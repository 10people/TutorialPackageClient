#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,Belle>
struct Dictionary_2_t4860;
// System.Collections.Generic.Dictionary`2<System.Int32,BelleMatrix>
struct Dictionary_2_t4861;
// BelleData/CloseDataDelegate
struct CloseDataDelegate_t4853;
// BelleData/EvolutionDataDelegate
struct EvolutionDataDelegate_t4854;
// BelleData/EvolutionRapidDataDelegate
struct EvolutionRapidDataDelegate_t4855;
// BelleData/GetBelleDelegate
struct GetBelleDelegate_t4856;
// BelleData/BattleDataDelegate
struct BattleDataDelegate_t4857;
// BelleData/RestDataDelegate
struct RestDataDelegate_t4858;
// BelleData/ActiveMatrixDelegate
struct ActiveMatrixDelegate_t4859;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleData
struct BelleData_t4862  : public Object_t
{
};
struct BelleData_t4862_StaticFields{
	// System.Int32 BelleData::MatrixBelleMax
	int32_t ___MatrixBelleMax;
	// System.Int32 BelleData::dayCloseTime
	int32_t ___dayCloseTime;
	// System.Int32 BelleData::nextCloseTime
	int32_t ___nextCloseTime;
	// System.Int32 BelleData::belleMatrixActiveMax
	int32_t ___belleMatrixActiveMax;
	// System.Collections.Generic.Dictionary`2<System.Int32,Belle> BelleData::OwnedBelleMap
	Dictionary_2_t4860 * ___OwnedBelleMap;
	// System.Collections.Generic.Dictionary`2<System.Int32,BelleMatrix> BelleData::OwnedMatrixMap
	Dictionary_2_t4861 * ___OwnedMatrixMap;
	// System.Int32 BelleData::m_belleActiveCount
	int32_t ___m_belleActiveCount;
	// System.Single BelleData::m_lastEffectTime
	float ___m_lastEffectTime;
	// System.Int32 BelleData::m_belleItemCount
	int32_t ___m_belleItemCount;
	// System.Int32 BelleData::m_belleEvoCount
	int32_t ___m_belleEvoCount;
	// BelleData/CloseDataDelegate BelleData::delClose
	CloseDataDelegate_t4853 * ___delClose;
	// BelleData/EvolutionDataDelegate BelleData::delEvolution
	EvolutionDataDelegate_t4854 * ___delEvolution;
	// BelleData/EvolutionRapidDataDelegate BelleData::delEvolutionRapid
	EvolutionRapidDataDelegate_t4855 * ___delEvolutionRapid;
	// BelleData/GetBelleDelegate BelleData::delGetBelle
	GetBelleDelegate_t4856 * ___delGetBelle;
	// BelleData/BattleDataDelegate BelleData::delBattle
	BattleDataDelegate_t4857 * ___delBattle;
	// BelleData/RestDataDelegate BelleData::delRest
	RestDataDelegate_t4858 * ___delRest;
	// BelleData/ActiveMatrixDelegate BelleData::delActiveMatrix
	ActiveMatrixDelegate_t4859 * ___delActiveMatrix;
	// UnityEngine.Color BelleData::m_colorOrange
	Color_t939  ___m_colorOrange;
	// UnityEngine.Color BelleData::m_colorPurple
	Color_t939  ___m_colorPurple;
	// UnityEngine.Color BelleData::m_green
	Color_t939  ___m_green;
	// UnityEngine.Color BelleData::m_blue
	Color_t939  ___m_blue;
};
