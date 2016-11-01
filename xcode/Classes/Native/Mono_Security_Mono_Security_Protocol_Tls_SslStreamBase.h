#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t5219;
// System.IO.Stream
struct Stream_t1038;
// System.IO.MemoryStream
struct MemoryStream_t5911;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t6532;
// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile)
struct Boolean_t956;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t6561  : public Stream_t1038
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t1038 * ___innerStream;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t5911 * ___inputBuffer;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t6522 * ___context;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t6532 * ___protocol;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t5219 * ___negotiationComplete;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t1033* ___recbuf;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t5911 * ___recordStream;
};
struct SslStreamBase_t6561_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t5219 * ___record_processing;
};
