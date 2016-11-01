#pragma once
#include <stdint.h>
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIHexagonGrid/Arrangement
#include "AssemblyU2DCSharp_UIHexagonGrid_Arrangement.h"
// UIHexagonGrid
struct UIHexagonGrid_t5311  : public UIWidgetContainer_t1195
{
	// UIHexagonGrid/Arrangement UIHexagonGrid::arrangement
	int32_t ___arrangement;
	// System.Int32 UIHexagonGrid::maxPerLine
	int32_t ___maxPerLine;
	// System.Single UIHexagonGrid::cellWidth
	float ___cellWidth;
	// System.Single UIHexagonGrid::cellHeight
	float ___cellHeight;
	// System.Boolean UIHexagonGrid::repositionNow
	bool ___repositionNow;
	// System.Boolean UIHexagonGrid::sorted
	bool ___sorted;
	// System.Boolean UIHexagonGrid::hideInactive
	bool ___hideInactive;
	// System.Boolean UIHexagonGrid::mStarted
	bool ___mStarted;
};
