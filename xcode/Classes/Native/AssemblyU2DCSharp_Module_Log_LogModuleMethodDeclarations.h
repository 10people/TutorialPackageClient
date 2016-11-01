#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Module.Log.LogModule
struct LogModule_t1161;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Module.Log.LogModule/LOG_TYPE
#include "AssemblyU2DCSharp_Module_Log_LogModule_LOG_TYPE.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void Module.Log.LogModule::.ctor()
 void LogModule__ctor_m6929 (LogModule_t1161 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::.cctor()
 void LogModule__cctor_m6930 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::WriteLog(System.String,Module.Log.LogModule/LOG_TYPE,System.Boolean)
 void LogModule_WriteLog_m6931 (Object_t * __this/* static, unused */, String_t* ___msg, int32_t ___type, bool ____showInConsole, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::ErrorLog(System.String,System.Object[])
 void LogModule_ErrorLog_m6932 (Object_t * __this/* static, unused */, String_t* ___fort, ObjectU5BU5D_t142* ___areges, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::WarningLog(System.String,System.Object[])
 void LogModule_WarningLog_m6933 (Object_t * __this/* static, unused */, String_t* ___fort, ObjectU5BU5D_t142* ___areges, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::DebugLog(System.String,System.Object[])
 void LogModule_DebugLog_m6934 (Object_t * __this/* static, unused */, String_t* ___fort, ObjectU5BU5D_t142* ___areges, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::ErrorLog(System.String)
 void LogModule_ErrorLog_m6935 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::WarningLog(System.String)
 void LogModule_WarningLog_m6936 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::DebugLog(System.String)
 void LogModule_DebugLog_m6937 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule::Log(System.String,System.String,UnityEngine.LogType)
 void LogModule_Log_m6938 (Object_t * __this/* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Module.Log.LogModule::ByteToString(System.Byte[],System.Int32,System.Int32)
 String_t* LogModule_ByteToString_m6939 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___byteData, int32_t ___nStartIndex, int32_t ___nCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
