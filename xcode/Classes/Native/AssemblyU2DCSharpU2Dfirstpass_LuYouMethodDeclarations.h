#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou
struct LuYou_t907;
// LuYou/RecordingStartedDelegate
struct RecordingStartedDelegate_t910;
// LuYou/RecordingStopedDelegate
struct RecordingStopedDelegate_t911;
// LuYou/RecordingFailedDelegate
struct RecordingFailedDelegate_t912;
// LuYou/RecordingWarningDelegate
struct RecordingWarningDelegate_t913;
// LuYou/RecordingTimeDelegate
struct RecordingTimeDelegate_t914;
// LuYou/SharerPreingDelegate
struct SharerPreingDelegate_t915;
// LuYou/SharerPreparedDelegate
struct SharerPreparedDelegate_t916;
// LuYou/SharerStartedDelegate
struct SharerStartedDelegate_t917;
// LuYou/SharerProgressDelegate
struct SharerProgressDelegate_t919;
// LuYou/SharerCompleteDelegate
struct SharerCompleteDelegate_t920;
// LuYou/SharerFailedDelegate
struct SharerFailedDelegate_t921;
// LuYou/LuYouImplement
struct LuYouImplement_t906;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;

// System.Void LuYou::.ctor()
 void LuYou__ctor_m3920 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::.cctor()
 void LuYou__cctor_m3921 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_RecordingStarted(LuYou/RecordingStartedDelegate)
 void LuYou_add_RecordingStarted_m3922 (Object_t * __this/* static, unused */, RecordingStartedDelegate_t910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_RecordingStarted(LuYou/RecordingStartedDelegate)
 void LuYou_remove_RecordingStarted_m3923 (Object_t * __this/* static, unused */, RecordingStartedDelegate_t910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_RecordingStoped(LuYou/RecordingStopedDelegate)
 void LuYou_add_RecordingStoped_m3924 (Object_t * __this/* static, unused */, RecordingStopedDelegate_t911 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_RecordingStoped(LuYou/RecordingStopedDelegate)
 void LuYou_remove_RecordingStoped_m3925 (Object_t * __this/* static, unused */, RecordingStopedDelegate_t911 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_RecordingFailed(LuYou/RecordingFailedDelegate)
 void LuYou_add_RecordingFailed_m3926 (Object_t * __this/* static, unused */, RecordingFailedDelegate_t912 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_RecordingFailed(LuYou/RecordingFailedDelegate)
 void LuYou_remove_RecordingFailed_m3927 (Object_t * __this/* static, unused */, RecordingFailedDelegate_t912 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_RecordingWarning(LuYou/RecordingWarningDelegate)
 void LuYou_add_RecordingWarning_m3928 (Object_t * __this/* static, unused */, RecordingWarningDelegate_t913 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_RecordingWarning(LuYou/RecordingWarningDelegate)
 void LuYou_remove_RecordingWarning_m3929 (Object_t * __this/* static, unused */, RecordingWarningDelegate_t913 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_RecordingTime(LuYou/RecordingTimeDelegate)
 void LuYou_add_RecordingTime_m3930 (Object_t * __this/* static, unused */, RecordingTimeDelegate_t914 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_RecordingTime(LuYou/RecordingTimeDelegate)
 void LuYou_remove_RecordingTime_m3931 (Object_t * __this/* static, unused */, RecordingTimeDelegate_t914 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerPreing(LuYou/SharerPreingDelegate)
 void LuYou_add_SharerPreing_m3932 (Object_t * __this/* static, unused */, SharerPreingDelegate_t915 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerPreing(LuYou/SharerPreingDelegate)
 void LuYou_remove_SharerPreing_m3933 (Object_t * __this/* static, unused */, SharerPreingDelegate_t915 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerPrepared(LuYou/SharerPreparedDelegate)
 void LuYou_add_SharerPrepared_m3934 (Object_t * __this/* static, unused */, SharerPreparedDelegate_t916 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerPrepared(LuYou/SharerPreparedDelegate)
 void LuYou_remove_SharerPrepared_m3935 (Object_t * __this/* static, unused */, SharerPreparedDelegate_t916 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerStarted(LuYou/SharerStartedDelegate)
 void LuYou_add_SharerStarted_m3936 (Object_t * __this/* static, unused */, SharerStartedDelegate_t917 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerStarted(LuYou/SharerStartedDelegate)
 void LuYou_remove_SharerStarted_m3937 (Object_t * __this/* static, unused */, SharerStartedDelegate_t917 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerProgress(LuYou/SharerProgressDelegate)
 void LuYou_add_SharerProgress_m3938 (Object_t * __this/* static, unused */, SharerProgressDelegate_t919 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerProgress(LuYou/SharerProgressDelegate)
 void LuYou_remove_SharerProgress_m3939 (Object_t * __this/* static, unused */, SharerProgressDelegate_t919 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerComplete(LuYou/SharerCompleteDelegate)
 void LuYou_add_SharerComplete_m3940 (Object_t * __this/* static, unused */, SharerCompleteDelegate_t920 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerComplete(LuYou/SharerCompleteDelegate)
 void LuYou_remove_SharerComplete_m3941 (Object_t * __this/* static, unused */, SharerCompleteDelegate_t920 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::add_SharerFailed(LuYou/SharerFailedDelegate)
 void LuYou_add_SharerFailed_m3942 (Object_t * __this/* static, unused */, SharerFailedDelegate_t921 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::remove_SharerFailed(LuYou/SharerFailedDelegate)
 void LuYou_remove_SharerFailed_m3943 (Object_t * __this/* static, unused */, SharerFailedDelegate_t921 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LuYou/LuYouImplement LuYou::LuYouImpl()
 LuYouImplement_t906 * LuYou_LuYouImpl_m3944 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LuYou LuYou::Instance()
 LuYou_t907 * LuYou_Instance_m3945 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::Awake()
 void LuYou_Awake_m3946 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::OnApplicationQuit()
 void LuYou_OnApplicationQuit_m3947 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::OnApplicationPause(System.Boolean)
 void LuYou_OnApplicationPause_m3948 (LuYou_t907 * __this, bool ___isPause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::Start()
 void LuYou_Start_m3949 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::RemoveAllEventHandlers()
 void LuYou_RemoveAllEventHandlers_m3950 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::OnDisable()
 void LuYou_OnDisable_m3951 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::OnEnable()
 void LuYou_OnEnable_m3952 (LuYou_t907 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuYou::IsSupported()
 int32_t LuYou_IsSupported_m3953 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou::IsHDSupported()
 bool LuYou_IsHDSupported_m3954 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::StartRecording()
 void LuYou_StartRecording_m3955 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::PauseRecording()
 void LuYou_PauseRecording_m3956 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::ResumeRecording()
 void LuYou_ResumeRecording_m3957 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::StopRecording()
 void LuYou_StopRecording_m3958 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou::IsRecording()
 bool LuYou_IsRecording_m3959 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuYou::IsPaused()
 bool LuYou_IsPaused_m3960 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetDeletageCallback(System.Boolean)
 void LuYou_SetDeletageCallback_m3961 (Object_t * __this/* static, unused */, bool ___isDeletage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuYou::GetLastRecordingFile()
 String_t* LuYou_GetLastRecordingFile_m3962 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuYou::LoadThumbnailFromFilePath(System.String)
 String_t* LuYou_LoadThumbnailFromFilePath_m3963 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetMetadata(System.String,System.String)
 void LuYou_SetMetadata_m3964 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetMetadatas(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void LuYou_SetMetadatas_m3965 (Object_t * __this/* static, unused */, Dictionary_2_t908 * ___metadatas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::BeginDraw()
 void LuYou_BeginDraw_m3966 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::EndDraw()
 void LuYou_EndDraw_m3967 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::CaptureFrame(System.Int32)
 void LuYou_CaptureFrame_m3968 (Object_t * __this/* static, unused */, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetMaxRecordingTime(System.Int32)
 void LuYou_SetMaxRecordingTime_m3969 (Object_t * __this/* static, unused */, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetMinRecordingTime(System.Int32)
 void LuYou_SetMinRecordingTime_m3970 (Object_t * __this/* static, unused */, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetNotWifiAllowShare(System.Boolean)
 void LuYou_SetNotWifiAllowShare_m3971 (Object_t * __this/* static, unused */, bool ___isAllow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::PublishVideo(System.String,System.String,System.String,System.String)
 void LuYou_PublishVideo_m3972 (Object_t * __this/* static, unused */, String_t* ___videoid, String_t* ___path, String_t* ___title, String_t* ___desc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuYou::GetVideoStatus(System.String)
 int32_t LuYou_GetVideoStatus_m3973 (Object_t * __this/* static, unused */, String_t* ___videoid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::InitializeRenderCamera(System.String)
 void LuYou_InitializeRenderCamera_m3974 (LuYou_t907 * __this, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::SetRenderCameraEnabled(System.String,System.Boolean)
 void LuYou_SetRenderCameraEnabled_m3975 (Object_t * __this/* static, unused */, String_t* ___type, bool ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onRecordingStarted(System.String)
 void LuYou_onRecordingStarted_m3976 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onRecordingFailed(System.String)
 void LuYou_onRecordingFailed_m3977 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onRecordingWarning(System.String)
 void LuYou_onRecordingWarning_m3978 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onRecordingStopped(System.String)
 void LuYou_onRecordingStopped_m3979 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onRecordingTime(System.String)
 void LuYou_onRecordingTime_m3980 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadProgress(System.String)
 void LuYou_onUploadProgress_m3981 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadPreparing(System.String)
 void LuYou_onUploadPreparing_m3982 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadPrepared(System.String)
 void LuYou_onUploadPrepared_m3983 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadFailed(System.String)
 void LuYou_onUploadFailed_m3984 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadCompleted(System.String)
 void LuYou_onUploadCompleted_m3985 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou::onUploadStarted(System.String)
 void LuYou_onUploadStarted_m3986 (LuYou_t907 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
