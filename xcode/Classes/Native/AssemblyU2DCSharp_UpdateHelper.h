#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo>
struct Dictionary_2_t1178;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// DownloadHelper
struct DownloadHelper_t4498;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UpdateHelper/UpdateStep
#include "AssemblyU2DCSharp_UpdateHelper_UpdateStep.h"
// UpdateHelper/UpdateResult
#include "AssemblyU2DCSharp_UpdateHelper_UpdateResult.h"
// UpdateHelper
struct UpdateHelper_t1524  : public MonoBehaviour_t18
{
	// System.String UpdateHelper::m_cacheDataPath
	String_t* ___m_cacheDataPath;
	// System.String UpdateHelper::m_remoteDataPath
	String_t* ___m_remoteDataPath;
	// System.Int32 UpdateHelper::m_localVersion
	int32_t ___m_localVersion;
	// System.Int32 UpdateHelper::m_remoteVersion
	int32_t ___m_remoteVersion;
	// System.String UpdateHelper::m_remoteResLevelIndex
	String_t* ___m_remoteResLevelIndex;
	// System.Int32 UpdateHelper::m_playerNeedResLevel
	int32_t ___m_playerNeedResLevel;
	// System.Int32 UpdateHelper::m_localResLevel
	int32_t ___m_localResLevel;
	// System.Int32 UpdateHelper::m_downloadResLevel
	int32_t ___m_downloadResLevel;
	// System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo> UpdateHelper::m_dicLocalFiles
	Dictionary_2_t1178 * ___m_dicLocalFiles;
	// System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo> UpdateHelper::m_dicRemoteFiles
	Dictionary_2_t1178 * ___m_dicRemoteFiles;
	// System.Collections.Generic.List`1<System.String> UpdateHelper::m_listUpdateFiles
	List_1_t1333 * ___m_listUpdateFiles;
	// System.Collections.Generic.List`1<System.String> UpdateHelper::m_listUpdateErrorFiles
	List_1_t1333 * ___m_listUpdateErrorFiles;
	// System.Collections.Generic.List`1<System.String> UpdateHelper::m_listDownloadFiles
	List_1_t1333 * ___m_listDownloadFiles;
	// System.Collections.Generic.List`1<System.String> UpdateHelper::m_listDownloadFileUrls
	List_1_t1333 * ___m_listDownloadFileUrls;
	// DownloadHelper UpdateHelper::m_versionFileDownloader
	DownloadHelper_t4498 * ___m_versionFileDownloader;
	// DownloadHelper UpdateHelper::m_dataFileDownloader
	DownloadHelper_t4498 * ___m_dataFileDownloader;
	// UpdateHelper/UpdateStep UpdateHelper::m_curUpdateStep
	int32_t ___m_curUpdateStep;
	// UpdateHelper/UpdateResult UpdateHelper::m_curUpdateResult
	int32_t ___m_curUpdateResult;
	// System.Int64 UpdateHelper::m_totalNeedDownloadSize
	int64_t ___m_totalNeedDownloadSize;
};
struct UpdateHelper_t1524_StaticFields{
	// System.String UpdateHelper::ResCachePath
	String_t* ___ResCachePath;
	// System.String UpdateHelper::AppVersionFolder
	String_t* ___AppVersionFolder;
	// System.String UpdateHelper::LocalVersionPath
	String_t* ___LocalVersionPath;
	// System.String UpdateHelper::CacheVersionPath
	String_t* ___CacheVersionPath;
	// System.String UpdateHelper::DownloadDataFolder
	String_t* ___DownloadDataFolder;
	// System.String UpdateHelper::VersionFileName
	String_t* ___VersionFileName;
	// System.String UpdateHelper::ResFileListName
	String_t* ___ResFileListName;
	// System.String UpdateHelper::ResLevelIndexFileName
	String_t* ___ResLevelIndexFileName;
	// System.String UpdateHelper::LocalResLevelFileName
	String_t* ___LocalResLevelFileName;
	// System.String UpdateHelper::LocalPathRoot
	String_t* ___LocalPathRoot;
	// System.String UpdateHelper::m_resServerUrl
	String_t* ___m_resServerUrl;
};
