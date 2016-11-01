#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpeechEngine
struct SpeechEngine_t1763;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// SpeechEngine/TextProcessHandler
struct TextProcessHandler_t1760;
// SpeechEngine/ErrorProcessHandler
struct ErrorProcessHandler_t1761;
// SpeechEngine/SpeechEventHandler
struct SpeechEventHandler_t1762;
// SpeechEngine/SpeechStatus
#include "AssemblyU2DCSharp_SpeechEngine_SpeechStatus.h"
// SpeechEngine/SpeechEventType
#include "AssemblyU2DCSharp_SpeechEngine_SpeechEventType.h"

// System.Void SpeechEngine::.ctor()
 void SpeechEngine__ctor_m11531 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::.cctor()
 void SpeechEngine__cctor_m11532 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpeechEngine SpeechEngine::Instance()
 SpeechEngine_t1763 * SpeechEngine_Instance_m11533 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::Awake()
 void SpeechEngine_Awake_m11534 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::StartRecording()
 void SpeechEngine_StartRecording_m11535 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::StopRecording()
 void SpeechEngine_StopRecording_m11536 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::CancleTask()
 void SpeechEngine_CancleTask_m11537 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::PlayAudio(System.Int32,System.Byte[],System.Boolean)
 void SpeechEngine_PlayAudio_m11538 (Object_t * __this/* static, unused */, int32_t ___voiceindex, ByteU5BU5D_t1033* ___buffer, bool ___bForce, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SpeechEngine::GetAudioBuffer()
 ByteU5BU5D_t1033* SpeechEngine_GetAudioBuffer_m11539 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetMaxRecordInterval(System.Single)
 void SpeechEngine_SetMaxRecordInterval_m11540 (SpeechEngine_t1763 * __this, float ___maxInternal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetUnityReceiver(System.String)
 void SpeechEngine_SetUnityReceiver_m11541 (SpeechEngine_t1763 * __this, String_t* ___gbName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetTextProcessHandler(SpeechEngine/TextProcessHandler)
 void SpeechEngine_SetTextProcessHandler_m11542 (SpeechEngine_t1763 * __this, TextProcessHandler_t1760 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetErrorProcessHandler(SpeechEngine/ErrorProcessHandler)
 void SpeechEngine_SetErrorProcessHandler_m11543 (SpeechEngine_t1763 * __this, ErrorProcessHandler_t1761 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetTaskStartHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetTaskStartHandler_m11544 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetTaskOverHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetTaskOverHandler_m11545 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetTaskCancleHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetTaskCancleHandler_m11546 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetRecordReadyHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetRecordReadyHandler_m11547 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetRecordBeginHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetRecordBeginHandler_m11548 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetRecordEndHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetRecordEndHandler_m11549 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpeechEngine/SpeechStatus SpeechEngine::get_Status()
 int32_t SpeechEngine_get_Status_m11550 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetAudioDecodeHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetAudioDecodeHandler_m11551 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::SetAudioPlayOverHandler(SpeechEngine/SpeechEventHandler)
 void SpeechEngine_SetAudioPlayOverHandler_m11552 (SpeechEngine_t1763 * __this, SpeechEventHandler_t1762 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::Init()
 void SpeechEngine_Init_m11553 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpeechEngine::CheckIfInit()
 bool SpeechEngine_CheckIfInit_m11554 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::ProcessSpeechText(System.String)
 void SpeechEngine_ProcessSpeechText_m11555 (SpeechEngine_t1763 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::ProcessErrorCode(System.String)
 void SpeechEngine_ProcessErrorCode_m11556 (SpeechEngine_t1763 * __this, String_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpeechEngine/SpeechEventType SpeechEngine::GetEventType(System.String)
 int32_t SpeechEngine_GetEventType_m11557 (SpeechEngine_t1763 * __this, String_t* ___eventstr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::ProcessEvent(System.String)
 void SpeechEngine_ProcessEvent_m11558 (SpeechEngine_t1763 * __this, String_t* ___eventstr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::ProcessEvent(SpeechEngine/SpeechEventType)
 void SpeechEngine_ProcessEvent_m11559 (SpeechEngine_t1763 * __this, int32_t ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnTaskStart()
 void SpeechEngine_OnTaskStart_m11560 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnTaskOver()
 void SpeechEngine_OnTaskOver_m11561 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnTaskCancle()
 void SpeechEngine_OnTaskCancle_m11562 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnRecordReady()
 void SpeechEngine_OnRecordReady_m11563 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnRecordBegin()
 void SpeechEngine_OnRecordBegin_m11564 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnRecordEnd()
 void SpeechEngine_OnRecordEnd_m11565 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnAudioDecodeError()
 void SpeechEngine_OnAudioDecodeError_m11566 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpeechEngine::OnAudioPlayOver()
 void SpeechEngine_OnAudioPlayOver_m11567 (SpeechEngine_t1763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
