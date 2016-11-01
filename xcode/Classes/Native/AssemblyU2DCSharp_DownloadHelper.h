#pragma once
#include <stdint.h>
// System.String[]
struct StringU5BU5D_t333;
// DownloadHelper/DelegateDownloadFinish
struct DelegateDownloadFinish_t4497;
// System.Object
#include "mscorlib_System_Object.h"
// DownloadHelper
struct DownloadHelper_t4498  : public Object_t
{
	// System.Int64 DownloadHelper::m_alreadyDownloadSize
	int64_t ___m_alreadyDownloadSize;
	// System.String[] DownloadHelper::m_curUrlArray
	StringU5BU5D_t333* ___m_curUrlArray;
	// System.String[] DownloadHelper::m_curFilePathArray
	StringU5BU5D_t333* ___m_curFilePathArray;
	// DownloadHelper/DelegateDownloadFinish DownloadHelper::m_curDelFun
	DelegateDownloadFinish_t4497 * ___m_curDelFun;
	// System.Int32 DownloadHelper::m_curDownloadSize
	int32_t ___m_curDownloadSize;
	// System.Boolean DownloadHelper::m_bStop
	bool ___m_bStop;
};
