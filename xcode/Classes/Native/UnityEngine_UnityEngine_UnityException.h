#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UnityException
struct UnityException_t6233  : public Exception_t972
{
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace;
};
