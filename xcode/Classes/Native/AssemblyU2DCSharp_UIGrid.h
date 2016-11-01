#pragma once
#include <stdint.h>
// UIGrid/OnReposition
struct OnReposition_t5309;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIGrid/Arrangement
#include "AssemblyU2DCSharp_UIGrid_Arrangement.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIGrid
struct UIGrid_t1199  : public UIWidgetContainer_t1195
{
	// UIGrid/Arrangement UIGrid::arrangement
	int32_t ___arrangement;
	// System.Int32 UIGrid::maxPerLine
	int32_t ___maxPerLine;
	// System.Single UIGrid::cellWidth
	float ___cellWidth;
	// System.Single UIGrid::cellHeight
	float ___cellHeight;
	// System.Boolean UIGrid::repositionNow
	bool ___repositionNow;
	// System.Boolean UIGrid::sorted
	bool ___sorted;
	// System.Boolean UIGrid::hideInactive
	bool ___hideInactive;
	// UIWidget/Pivot UIGrid::pivot
	int32_t ___pivot;
	// System.Boolean UIGrid::mStarted
	bool ___mStarted;
	// UIGrid/OnReposition UIGrid::onReposition
	OnReposition_t5309 * ___onReposition;
};
