#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TestAudioRecorder
struct TestAudioRecorder_t928;
// System.Single[]
struct SingleU5BU5D_t744;
// System.String
struct String_t;

// System.Void TestAudioRecorder::.ctor()
 void TestAudioRecorder__ctor_m3997 (TestAudioRecorder_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::Awake()
 void TestAudioRecorder_Awake_m3998 (TestAudioRecorder_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::Start()
 void TestAudioRecorder_Start_m3999 (TestAudioRecorder_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::OnApplicationQuit()
 void TestAudioRecorder_OnApplicationQuit_m4000 (TestAudioRecorder_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::OnAudioFilterRead(System.Single[],System.Int32)
 void TestAudioRecorder_OnAudioFilterRead_m4001 (TestAudioRecorder_t928 * __this, SingleU5BU5D_t744* ___data, int32_t ___channels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::StartWriting(System.String)
 void TestAudioRecorder_StartWriting_m4002 (TestAudioRecorder_t928 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::ConvertAndWrite(System.Single[])
 void TestAudioRecorder_ConvertAndWrite_m4003 (TestAudioRecorder_t928 * __this, SingleU5BU5D_t744* ___dataSource, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestAudioRecorder::WriteHeader()
 void TestAudioRecorder_WriteHeader_m4004 (TestAudioRecorder_t928 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
