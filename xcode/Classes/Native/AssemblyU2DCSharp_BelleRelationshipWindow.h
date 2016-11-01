#pragma once
#include <stdint.h>
// UITexture[]
struct UITextureU5BU5D_t1558;
// UILabel[]
struct UILabelU5BU5D_t1203;
// BelleRelationshipWindow
struct BelleRelationshipWindow_t1974;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleRelationshipWindow
struct BelleRelationshipWindow_t1974  : public MonoBehaviour_t18
{
	// UITexture[] BelleRelationshipWindow::m_bellePics
	UITextureU5BU5D_t1558* ___m_bellePics;
	// UILabel[] BelleRelationshipWindow::m_belleNames
	UILabelU5BU5D_t1203* ___m_belleNames;
	// UILabel[] BelleRelationshipWindow::m_relationNames
	UILabelU5BU5D_t1203* ___m_relationNames;
	// UILabel[] BelleRelationshipWindow::m_attrDescs
	UILabelU5BU5D_t1203* ___m_attrDescs;
	// UnityEngine.Color BelleRelationshipWindow::m_ColorDisable
	Color_t939  ___m_ColorDisable;
	// UnityEngine.Color BelleRelationshipWindow::m_belleNameHighlight
	Color_t939  ___m_belleNameHighlight;
	// UnityEngine.Color BelleRelationshipWindow::m_relationNameHightlight
	Color_t939  ___m_relationNameHightlight;
	// UnityEngine.Color BelleRelationshipWindow::m_attrDescHightlight
	Color_t939  ___m_attrDescHightlight;
};
struct BelleRelationshipWindow_t1974_StaticFields{
	// BelleRelationshipWindow BelleRelationshipWindow::m_instance
	BelleRelationshipWindow_t1974 * ___m_instance;
};
