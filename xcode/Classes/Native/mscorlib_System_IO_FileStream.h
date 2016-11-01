#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t7764;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileStream
struct FileStream_t927  : public Stream_t1038
{
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner;
	// System.Boolean System.IO.FileStream::async
	bool ___async;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t1033* ___buf;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start;
	// System.String System.IO.FileStream::name
	String_t* ___name;
	// System.IntPtr System.IO.FileStream::handle
	IntPtr_t24 ___handle;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t7764 * ___safeHandle;
};
