#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechEngine/SpeechAPI
struct SpeechAPI_t1759;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SpeechEngine/SpeechAPI::.ctor()
 void SpeechAPI__ctor_m11494 (SpeechAPI_t1759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGSetUnityReceiver(System.String)
 void SpeechAPI__SGSetUnityReceiver_m11495 (Object_t * __this/* static, unused */, String_t* ___gbName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGInitSDK(System.String,System.String)
 void SpeechAPI__SGInitSDK_m11496 (Object_t * __this/* static, unused */, String_t* ___appid, String_t* ___appkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGStartRecord()
 void SpeechAPI__SGStartRecord_m11497 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGStopRecord()
 void SpeechAPI__SGStopRecord_m11498 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGCancelTask()
 void SpeechAPI__SGCancelTask_m11499 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGPlayAudio(System.String)
 void SpeechAPI__SGPlayAudio_m11500 (Object_t * __this/* static, unused */, String_t* ___audioPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGPlayAudioBuffer(System.Byte[],System.Int32)
 void SpeechAPI__SGPlayAudioBuffer_m11501 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGGetAudioBuffer(System.IntPtr)
 void SpeechAPI__SGGetAudioBuffer_m11502 (Object_t * __this/* static, unused */, IntPtr_t24 ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpeechEngine/SpeechAPI::_SGGetAudioBufferLength()
 int32_t SpeechAPI__SGGetAudioBufferLength_m11503 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::_SGSetMaxRecordInterval(System.Single)
 void SpeechAPI__SGSetMaxRecordInterval_m11504 (Object_t * __this/* static, unused */, float ___interval, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::Init(System.String,System.String)
 void SpeechAPI_Init_m11505 (Object_t * __this/* static, unused */, String_t* ___appid, String_t* ___appkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::StartRecording()
 void SpeechAPI_StartRecording_m11506 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::StopRecording()
 void SpeechAPI_StopRecording_m11507 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::SetUnityReceiver(System.String)
 void SpeechAPI_SetUnityReceiver_m11508 (Object_t * __this/* static, unused */, String_t* ___gbName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::CancleTask()
 void SpeechAPI_CancleTask_m11509 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::PlayAudio(System.String)
 void SpeechAPI_PlayAudio_m11510 (Object_t * __this/* static, unused */, String_t* ___audioname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::PlayAudioBuffer(System.Byte[])
 void SpeechAPI_PlayAudioBuffer_m11511 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___audioBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SpeechEngine/SpeechAPI::GetAudioBuffer()
 ByteU5BU5D_t1033* SpeechAPI_GetAudioBuffer_m11512 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine/SpeechAPI::SetMaxRecordInterval(System.Single)
 void SpeechAPI_SetMaxRecordInterval_m11513 (Object_t * __this/* static, unused */, float ___maxInterval, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeechEngine/SpeechAPI::GetErrorCodeDesc(System.String)
 String_t* SpeechAPI_GetErrorCodeDesc_m11514 (Object_t * __this/* static, unused */, String_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeechEngine/SpeechAPI::GetSGErrorCodeDesc(System.String)
 String_t* SpeechAPI_GetSGErrorCodeDesc_m11515 (Object_t * __this/* static, unused */, String_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeechEngine/SpeechAPI::GetKDErrorCodeDesc(System.String)
 String_t* SpeechAPI_GetKDErrorCodeDesc_m11516 (Object_t * __this/* static, unused */, String_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpeechEngine/SpeechAPI::BytesToString(System.Byte[])
 String_t* SpeechAPI_BytesToString_m11517 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SpeechEngine/SpeechAPI::StringToBytes(System.String)
 ByteU5BU5D_t1033* SpeechAPI_StringToBytes_m11518 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
