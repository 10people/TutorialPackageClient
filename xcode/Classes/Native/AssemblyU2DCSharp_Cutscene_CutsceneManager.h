#pragma once
#include <stdint.h>
// Cutscene.Cutscene
struct Cutscene_t4598;
// Singleton`1<Cutscene.CutsceneManager>
#include "AssemblyU2DCSharp_Singleton_1_gen_2.h"
// Cutscene.CutsceneManager
struct CutsceneManager_t4709  : public Singleton_1_t4710
{
	// System.Boolean Cutscene.CutsceneManager::m_bCloseSyncPos
	bool ___m_bCloseSyncPos;
	// System.Int32 Cutscene.CutsceneManager::m_nCurrentPlayingCutsceneID
	int32_t ___m_nCurrentPlayingCutsceneID;
	// System.Boolean Cutscene.CutsceneManager::m_BlockAutoBattle
	bool ___m_BlockAutoBattle;
	// Cutscene.Cutscene Cutscene.CutsceneManager::m_CurrentPlayingCutscene
	Cutscene_t4598 * ___m_CurrentPlayingCutscene;
};
