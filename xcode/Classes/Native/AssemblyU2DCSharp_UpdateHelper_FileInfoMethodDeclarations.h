#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateHelper/FileInfo
struct FileInfo_t4511;
// System.String
struct String_t;

// System.Void UpdateHelper/FileInfo::.ctor(System.String,System.Int64,System.Int32)
 void FileInfo__ctor_m32337 (FileInfo_t4511 * __this, String_t* ____md5, int64_t ____size, int32_t ____level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/FileInfo::.ctor()
 void FileInfo__ctor_m32338 (FileInfo_t4511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/FileInfo::CopyData(UpdateHelper/FileInfo)
 void FileInfo_CopyData_m32339 (FileInfo_t4511 * __this, FileInfo_t4511 * ___otherData, MethodInfo* method) IL2CPP_METHOD_ATTR;
