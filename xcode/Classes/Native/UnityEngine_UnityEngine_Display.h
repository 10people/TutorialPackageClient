#pragma once
#include <stdint.h>
// UnityEngine.Display[]
struct DisplayU5BU5D_t7626;
// UnityEngine.Display
struct Display_t7627;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t7625;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct Display_t7627  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t24 ___nativeDisplay;
};
struct Display_t7627_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t7626* ___displays;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t7627 * ____mainDisplay;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t7625 * ___onDisplaysUpdated;
};
