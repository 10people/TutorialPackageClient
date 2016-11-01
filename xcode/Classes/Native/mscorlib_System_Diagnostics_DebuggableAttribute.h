#pragma once
#include <stdint.h>
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Diagnostics.DebuggableAttribute/DebuggingModes
#include "mscorlib_System_Diagnostics_DebuggableAttribute_DebuggingMod.h"
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_t5972  : public Attribute_t6396
{
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITTrackingEnabledFlag
	bool ___JITTrackingEnabledFlag;
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITOptimizerDisabledFlag
	bool ___JITOptimizerDisabledFlag;
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::debuggingModes
	int32_t ___debuggingModes;
};
