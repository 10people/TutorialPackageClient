#pragma once
#include <stdint.h>
// UITable/OnReposition
struct OnReposition_t5330;
// UIPanel
struct UIPanel_t1364;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1711;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UITable/Direction
#include "AssemblyU2DCSharp_UITable_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UITable
struct UITable_t1306  : public UIWidgetContainer_t1195
{
	// System.Int32 UITable::columns
	int32_t ___columns;
	// UITable/Direction UITable::direction
	int32_t ___direction;
	// System.Boolean UITable::sorted
	bool ___sorted;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel;
	// System.Boolean UITable::repositionNow
	bool ___repositionNow;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t5330 * ___onReposition;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t12  ___padding;
	// UIPanel UITable::mPanel
	UIPanel_t1364 * ___mPanel;
	// UIDraggablePanel UITable::mDrag
	UIDraggablePanel_t1165 * ___mDrag;
	// System.Boolean UITable::mStarted
	bool ___mStarted;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::mChildren
	List_1_t1711 * ___mChildren;
};
