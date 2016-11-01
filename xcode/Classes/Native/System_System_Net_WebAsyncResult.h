#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.Exception
struct Exception_t972;
// System.Net.HttpWebResponse
struct HttpWebResponse_t7198;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebAsyncResult
struct WebAsyncResult_t7199  : public Object_t
{
	// System.Threading.ManualResetEvent System.Net.WebAsyncResult::handle
	ManualResetEvent_t5219 * ___handle;
	// System.Boolean System.Net.WebAsyncResult::synch
	bool ___synch;
	// System.Boolean System.Net.WebAsyncResult::isCompleted
	bool ___isCompleted;
	// System.AsyncCallback System.Net.WebAsyncResult::cb
	AsyncCallback_t15 * ___cb;
	// System.Object System.Net.WebAsyncResult::state
	Object_t * ___state;
	// System.Int32 System.Net.WebAsyncResult::nbytes
	int32_t ___nbytes;
	// System.IAsyncResult System.Net.WebAsyncResult::innerAsyncResult
	Object_t * ___innerAsyncResult;
	// System.Boolean System.Net.WebAsyncResult::callbackDone
	bool ___callbackDone;
	// System.Exception System.Net.WebAsyncResult::exc
	Exception_t972 * ___exc;
	// System.Net.HttpWebResponse System.Net.WebAsyncResult::response
	HttpWebResponse_t7198 * ___response;
	// System.IO.Stream System.Net.WebAsyncResult::writeStream
	Stream_t1038 * ___writeStream;
	// System.Byte[] System.Net.WebAsyncResult::buffer
	ByteU5BU5D_t1033* ___buffer;
	// System.Int32 System.Net.WebAsyncResult::offset
	int32_t ___offset;
	// System.Int32 System.Net.WebAsyncResult::size
	int32_t ___size;
	// System.Object System.Net.WebAsyncResult::locker
	Object_t * ___locker;
	// System.Boolean System.Net.WebAsyncResult::EndCalled
	bool ___EndCalled;
	// System.Boolean System.Net.WebAsyncResult::AsyncWriteAll
	bool ___AsyncWriteAll;
};
