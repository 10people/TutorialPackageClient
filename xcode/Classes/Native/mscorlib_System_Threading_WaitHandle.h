#pragma once
#include <stdint.h>
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t7767;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
struct WaitHandle_t5906  : public MarshalByRefObject_t7220
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t7767 * ___safe_wait_handle;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed;
};
struct WaitHandle_t5906_StaticFields{
	// System.Int32 System.Threading.WaitHandle::WaitTimeout
	int32_t ___WaitTimeout;
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t24 ___InvalidHandle;
};
