#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileSystemInfo
struct FileSystemInfo_t7903  : public MarshalByRefObject_t7220
{
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t7913  ___stat;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid;
};
