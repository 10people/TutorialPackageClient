#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateHelper
struct UpdateHelper_t1524;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UpdateHelper/DelegateCheckResVersion
struct DelegateCheckResVersion_t4514;
// System.String
struct String_t;
// UpdateHelper/DelegateGetResVersion
struct DelegateGetResVersion_t4512;
// System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo>
struct Dictionary_2_t1178;
// UpdateHelper/UpdateStep
#include "AssemblyU2DCSharp_UpdateHelper_UpdateStep.h"
// UpdateHelper/UpdateResult
#include "AssemblyU2DCSharp_UpdateHelper_UpdateResult.h"

// System.Void UpdateHelper::.ctor()
 void UpdateHelper__ctor_m32370 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::.cctor()
 void UpdateHelper__cctor_m32371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpdateHelper/UpdateStep UpdateHelper::get_CurUpdateStep()
 int32_t UpdateHelper_get_CurUpdateStep_m32372 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpdateHelper/UpdateResult UpdateHelper::get_CurUpdateResult()
 int32_t UpdateHelper_get_CurUpdateResult_m32373 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UpdateHelper::get_DownloadTotalSize()
 int64_t UpdateHelper_get_DownloadTotalSize_m32374 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UpdateHelper::get_CurDownloadSize()
 int64_t UpdateHelper_get_CurDownloadSize_m32375 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateHelper::CheckResVersion(UpdateHelper/DelegateCheckResVersion)
 Object_t * UpdateHelper_CheckResVersion_m32376 (Object_t * __this/* static, unused */, DelegateCheckResVersion_t4514 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::StartCheckRes(System.String,System.Int32)
 void UpdateHelper_StartCheckRes_m32377 (UpdateHelper_t1524 * __this, String_t* ___resServerUrl, int32_t ___playerLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::DownloadCurFileList()
 void UpdateHelper_DownloadCurFileList_m32378 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateHelper::GetResVersion(UpdateHelper/DelegateGetResVersion)
 Object_t * UpdateHelper_GetResVersion_m32379 (UpdateHelper_t1524 * __this, DelegateGetResVersion_t4512 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::OnCheckVersion(System.Boolean)
 void UpdateHelper_OnCheckVersion_m32380 (UpdateHelper_t1524 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateHelper::OnDownloadlevelIndexFile()
 Object_t * UpdateHelper_OnDownloadlevelIndexFile_m32381 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::OnDownloadRemoteResFileList(System.Boolean)
 void UpdateHelper_OnDownloadRemoteResFileList_m32382 (UpdateHelper_t1524 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::OnDownloadLocalResFileList(System.Boolean)
 void UpdateHelper_OnDownloadLocalResFileList_m32383 (UpdateHelper_t1524 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::OnDownloadRes(System.Boolean)
 void UpdateHelper_OnDownloadRes_m32384 (UpdateHelper_t1524 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::CopyResToDataPath()
 void UpdateHelper_CopyResToDataPath_m32385 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::GenerateLocalFileList()
 void UpdateHelper_GenerateLocalFileList_m32386 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::GenerateResLevelFile()
 void UpdateHelper_GenerateResLevelFile_m32387 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::CopyVersionFile()
 void UpdateHelper_CopyVersionFile_m32388 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::CleanCacheFiles()
 void UpdateHelper_CleanCacheFiles_m32389 (UpdateHelper_t1524 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UpdateHelper::ReadVersionFileToDic(System.String,System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo>)
 bool UpdateHelper_ReadVersionFileToDic_m32390 (UpdateHelper_t1524 * __this, String_t* ___versionPath, Dictionary_2_t1178 * ___curDic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper::UpdateFinish(UpdateHelper/UpdateResult)
 void UpdateHelper_UpdateFinish_m32391 (UpdateHelper_t1524 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UpdateHelper::GetAppDataUrl(System.String,System.String)
 String_t* UpdateHelper_GetAppDataUrl_m32392 (Object_t * __this/* static, unused */, String_t* ___subFolder, String_t* ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
