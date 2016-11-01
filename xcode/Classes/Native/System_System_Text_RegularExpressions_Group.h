#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t6632;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t7263;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct Group_t6632  : public Capture_t7261
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t7263 * ___captures;
};
struct Group_t6632_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t6632 * ___Fail;
};
