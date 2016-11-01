#pragma once
#include <stdint.h>
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"
// System.Net.ChunkStream
struct ChunkStream_t7158  : public Object_t
{
	// System.Net.WebHeaderCollection System.Net.ChunkStream::headers
	WebHeaderCollection_t7157 * ___headers;
	// System.Int32 System.Net.ChunkStream::chunkSize
	int32_t ___chunkSize;
	// System.Int32 System.Net.ChunkStream::chunkRead
	int32_t ___chunkRead;
	// System.Net.ChunkStream/State System.Net.ChunkStream::state
	int32_t ___state;
	// System.Text.StringBuilder System.Net.ChunkStream::saved
	StringBuilder_t1097 * ___saved;
	// System.Boolean System.Net.ChunkStream::sawCR
	bool ___sawCR;
	// System.Boolean System.Net.ChunkStream::gotit
	bool ___gotit;
	// System.Int32 System.Net.ChunkStream::trailerState
	int32_t ___trailerState;
	// System.Collections.ArrayList System.Net.ChunkStream::chunks
	ArrayList_t5157 * ___chunks;
};
