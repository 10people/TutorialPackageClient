#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t5195;
// UITable
struct UITable_t1306;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenWidth
struct TweenWidth_t5387  : public UITweener_t5320
{
	// System.Int32 TweenWidth::from
	int32_t ___from;
	// System.Int32 TweenWidth::to
	int32_t ___to;
	// System.Boolean TweenWidth::updateTable
	bool ___updateTable;
	// UIWidget TweenWidth::mWidget
	UIWidget_t5195 * ___mWidget;
	// UITable TweenWidth::mTable
	UITable_t1306 * ___mTable;
};
