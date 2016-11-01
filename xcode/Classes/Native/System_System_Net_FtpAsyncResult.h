#pragma once
#include <stdint.h>
// System.Net.FtpWebResponse
struct FtpWebResponse_t7180;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.Exception
struct Exception_t972;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IO.Stream
struct Stream_t1038;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t7181  : public Object_t
{
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t7180 * ___response;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t5219 * ___waitHandle;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t972 * ___exception;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t15 * ___callback;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t1038 * ___stream;
	// System.Object System.Net.FtpAsyncResult::state
	Object_t * ___state;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch;
	// System.Object System.Net.FtpAsyncResult::locker
	Object_t * ___locker;
};
