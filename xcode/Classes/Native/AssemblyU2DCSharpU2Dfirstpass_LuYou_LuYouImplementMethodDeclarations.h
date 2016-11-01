#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/LuYouImplement
struct LuYouImplement_t906;
// LuYou
struct LuYou_t907;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;

// System.Void LuYou/LuYouImplement::.ctor()
 void LuYouImplement__ctor_m3851 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::Awake(LuYou)
 void LuYouImplement_Awake_m3852 (LuYouImplement_t906 * __this, LuYou_t907 * ___luYouInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::Start(LuYou,System.Int32,System.Int32)
 void LuYouImplement_Start_m3853 (LuYouImplement_t906 * __this, LuYou_t907 * ___luYouInstance, int32_t ___screenWidth, int32_t ___screenHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuYou/LuYouImplement::IsSupported()
 int32_t LuYouImplement_IsSupported_m3854 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou/LuYouImplement::IsHDSupported()
 bool LuYouImplement_IsHDSupported_m3855 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::StartRecording()
 void LuYouImplement_StartRecording_m3856 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::PauseRecording()
 void LuYouImplement_PauseRecording_m3857 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::ResumeRecording()
 void LuYouImplement_ResumeRecording_m3858 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::StopRecording()
 void LuYouImplement_StopRecording_m3859 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::SetMinRecordingTime(System.Int32)
 void LuYouImplement_SetMinRecordingTime_m3860 (LuYouImplement_t906 * __this, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::SetMaxRecordingTime(System.Int32)
 void LuYouImplement_SetMaxRecordingTime_m3861 (LuYouImplement_t906 * __this, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou/LuYouImplement::IsRecording()
 bool LuYouImplement_IsRecording_m3862 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou/LuYouImplement::IsPaused()
 bool LuYouImplement_IsPaused_m3863 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::BeginDraw()
 void LuYouImplement_BeginDraw_m3864 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::EndDraw()
 void LuYouImplement_EndDraw_m3865 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuYou/LuYouImplement::CaptureFrame(System.Int32)
 int32_t LuYouImplement_CaptureFrame_m3866 (LuYouImplement_t906 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuYou/LuYouImplement::getLastRecordingFile()
 String_t* LuYouImplement_getLastRecordingFile_m3867 (LuYouImplement_t906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuYou/LuYouImplement::loadThumbnailFromFilePath(System.String)
 String_t* LuYouImplement_loadThumbnailFromFilePath_m3868 (LuYouImplement_t906 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::setMetadata(System.String,System.String)
 void LuYouImplement_setMetadata_m3869 (LuYouImplement_t906 * __this, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::setMetadatas(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void LuYouImplement_setMetadatas_m3870 (LuYouImplement_t906 * __this, Dictionary_2_t908 * ___metadatas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::setNotWifiAllowShare(System.Boolean)
 void LuYouImplement_setNotWifiAllowShare_m3871 (LuYouImplement_t906 * __this, bool ___isAllow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::publishVideo(System.String,System.String,System.String,System.String)
 void LuYouImplement_publishVideo_m3872 (LuYouImplement_t906 * __this, String_t* ___videoid, String_t* ___path, String_t* ___title, String_t* ___desc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuYou/LuYouImplement::getVideoStatus(System.String)
 int32_t LuYouImplement_getVideoStatus_m3873 (LuYouImplement_t906 * __this, String_t* ___videoid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/LuYouImplement::setDeletageCallback(System.Boolean)
 void LuYouImplement_setDeletageCallback_m3874 (LuYouImplement_t906 * __this, bool ___isDeletage, MethodInfo* method) IL2CPP_METHOD_ATTR;
