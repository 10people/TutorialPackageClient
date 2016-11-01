#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t6617;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct CultureAwareComparer_t8269  : public StringComparer_t7426
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t6617 * ____compareInfo;
};
