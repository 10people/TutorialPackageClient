#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,Cutscene.Cutscene/ActionContainer>
struct Dictionary_2_t4708;
// Cutscene.Cutscene/ActionContainer
struct ActionContainer_t4591;
// Cutscene.Cutscene
struct Cutscene_t4598;
// System.Object
#include "mscorlib_System_Object.h"
// Cutscene.CutsceneFactoryBase
struct CutsceneFactoryBase_t4621  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,Cutscene.Cutscene/ActionContainer> Cutscene.CutsceneFactoryBase::m_RegistedActions
	Dictionary_2_t4708 * ___m_RegistedActions;
	// System.Int32 Cutscene.CutsceneFactoryBase::m_nGUIDAllocator
	int32_t ___m_nGUIDAllocator;
	// Cutscene.Cutscene/ActionContainer Cutscene.CutsceneFactoryBase::m_CurrentLastMainAction
	ActionContainer_t4591 * ___m_CurrentLastMainAction;
	// Cutscene.Cutscene Cutscene.CutsceneFactoryBase::m_Product
	Cutscene_t4598 * ___m_Product;
	// System.Boolean Cutscene.CutsceneFactoryBase::m_bBuilding
	bool ___m_bBuilding;
};
