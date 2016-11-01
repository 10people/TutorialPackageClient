#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t5195;
// UITable
struct UITable_t1306;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenHeight
struct TweenHeight_t1589  : public UITweener_t5320
{
	// System.Int32 TweenHeight::from
	int32_t ___from;
	// System.Int32 TweenHeight::to
	int32_t ___to;
	// System.Boolean TweenHeight::updateTable
	bool ___updateTable;
	// UIWidget TweenHeight::mWidget
	UIWidget_t5195 * ___mWidget;
	// UITable TweenHeight::mTable
	UITable_t1306 * ___mTable;
};
