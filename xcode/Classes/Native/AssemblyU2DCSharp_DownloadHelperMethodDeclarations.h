#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DownloadHelper
struct DownloadHelper_t4498;
// System.String
struct String_t;
// DownloadHelper/DelegateDownloadFinish
struct DelegateDownloadFinish_t4497;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void DownloadHelper::.ctor(System.String,System.Boolean,System.String,DownloadHelper/DelegateDownloadFinish)
 void DownloadHelper__ctor_m32217 (DownloadHelper_t4498 * __this, String_t* ___url, bool ___bRemote, String_t* ___fileSavePath, DelegateDownloadFinish_t4497 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DownloadHelper::.ctor(System.Collections.Generic.List`1<System.String>,System.Boolean,System.Collections.Generic.List`1<System.String>,DownloadHelper/DelegateDownloadFinish)
 void DownloadHelper__ctor_m32218 (DownloadHelper_t4498 * __this, List_1_t1333 * ___urlList, bool ___bRemote, List_1_t1333 * ___fileSavePathList, DelegateDownloadFinish_t4497 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 DownloadHelper::get_AlreadyDownloadSize()
 int64_t DownloadHelper_get_AlreadyDownloadSize_m32219 (DownloadHelper_t4498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// DownloadHelper DownloadHelper::StartDownload(UnityEngine.MonoBehaviour,System.String,System.Boolean,System.String,DownloadHelper/DelegateDownloadFinish)
 DownloadHelper_t4498 * DownloadHelper_StartDownload_m32220 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___monoBehavior, String_t* ___url, bool ___bRemote, String_t* ___fileSavePath, DelegateDownloadFinish_t4497 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// DownloadHelper DownloadHelper::StartDownload(UnityEngine.MonoBehaviour,System.Collections.Generic.List`1<System.String>,System.Boolean,System.Collections.Generic.List`1<System.String>,DownloadHelper/DelegateDownloadFinish)
 DownloadHelper_t4498 * DownloadHelper_StartDownload_m32221 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___monoBehavior, List_1_t1333 * ___urlList, bool ___bRemote, List_1_t1333 * ___fileSavePathList, DelegateDownloadFinish_t4497 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DownloadHelper::Stop()
 void DownloadHelper_Stop_m32222 (DownloadHelper_t4498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DownloadHelper::DownloadFile()
 Object_t * DownloadHelper_DownloadFile_m32223 (DownloadHelper_t4498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DownloadHelper::AddTimestampToUrl(System.String)
 String_t* DownloadHelper_AddTimestampToUrl_m32224 (Object_t * __this/* static, unused */, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
