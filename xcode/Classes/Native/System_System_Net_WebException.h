#pragma once
#include <stdint.h>
// System.Net.WebResponse
struct WebResponse_t7078;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Net.WebException
struct WebException_t7216  : public InvalidOperationException_t5468
{
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t7078 * ___response;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status;
};
