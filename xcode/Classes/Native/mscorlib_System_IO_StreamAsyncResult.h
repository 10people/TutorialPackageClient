#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Exception
struct Exception_t972;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.StreamAsyncResult
struct StreamAsyncResult_t7920  : public Object_t
{
	// System.Object System.IO.StreamAsyncResult::state
	Object_t * ___state;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t972 * ___exc;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t5219 * ___wh;
};
