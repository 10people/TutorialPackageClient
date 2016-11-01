#pragma once
#include <stdint.h>
// System.IO.FileStream
struct FileStream_t927;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TestAudioRecorder
struct TestAudioRecorder_t928  : public MonoBehaviour_t18
{
	// System.IO.FileStream TestAudioRecorder::fileStream
	FileStream_t927 * ___fileStream;
	// System.Int32 TestAudioRecorder::headerSize
	int32_t ___headerSize;
	// System.Int32 TestAudioRecorder::outputRate
	int32_t ___outputRate;
	// System.Int32 TestAudioRecorder::bufferSize
	int32_t ___bufferSize;
	// System.Int32 TestAudioRecorder::numBuffers
	int32_t ___numBuffers;
	// System.Int32 TestAudioRecorder::channels
	int32_t ___channels;
};
