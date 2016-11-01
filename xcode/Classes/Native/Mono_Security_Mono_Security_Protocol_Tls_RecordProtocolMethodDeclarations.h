#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t6532;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// System.IO.Stream
struct Stream_t1038;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t6534;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t6533;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t6520;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t6523;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
 void RecordProtocol__ctor_m45333 (RecordProtocol_t6532 * __this, Stream_t1038 * ___innerStream, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
 void RecordProtocol__cctor_m45334 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
 Context_t6522 * RecordProtocol_get_Context_m45335 (RecordProtocol_t6532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void RecordProtocol_SendRecord_m45336 (RecordProtocol_t6532 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
 void RecordProtocol_ProcessChangeCipherSpec_m45337 (RecordProtocol_t6532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t6533 * RecordProtocol_GetMessage_m45338 (RecordProtocol_t6532 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginReceiveRecord_m45339 (RecordProtocol_t6532 * __this, Stream_t1038 * ___record, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalReceiveRecordCallback_m45340 (RecordProtocol_t6532 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
 ByteU5BU5D_t1033* RecordProtocol_EndReceiveRecord_m45341 (RecordProtocol_t6532 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
 ByteU5BU5D_t1033* RecordProtocol_ReceiveRecord_m45342 (RecordProtocol_t6532 * __this, Stream_t1038 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
 ByteU5BU5D_t1033* RecordProtocol_ReadRecordBuffer_m45343 (RecordProtocol_t6532 * __this, int32_t ___contentType, Stream_t1038 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
 ByteU5BU5D_t1033* RecordProtocol_ReadClientHelloV2_m45344 (RecordProtocol_t6532 * __this, Stream_t1038 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
 ByteU5BU5D_t1033* RecordProtocol_ReadStandardRecordBuffer_m45345 (RecordProtocol_t6532 * __this, Stream_t1038 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_ProcessAlert_m45346 (RecordProtocol_t6532 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m45347 (RecordProtocol_t6532 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m45348 (RecordProtocol_t6532 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
 void RecordProtocol_SendAlert_m45349 (RecordProtocol_t6532 * __this, Alert_t6520 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
 void RecordProtocol_SendChangeCipherSpec_m45350 (RecordProtocol_t6532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m45351 (RecordProtocol_t6532 * __this, uint8_t ___handshakeType, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalSendRecordCallback_m45352 (RecordProtocol_t6532 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m45353 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___recordData, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
 void RecordProtocol_EndSendRecord_m45354 (RecordProtocol_t6532 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 void RecordProtocol_SendRecord_m45355 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t1033* RecordProtocol_EncodeRecord_m45356 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* RecordProtocol_EncodeRecord_m45357 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t1033* RecordProtocol_encryptRecordFragment_m45358 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t1033* RecordProtocol_decryptRecordFragment_m45359 (RecordProtocol_t6532 * __this, uint8_t ___contentType, ByteU5BU5D_t1033* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
 bool RecordProtocol_Compare_m45360 (RecordProtocol_t6532 * __this, ByteU5BU5D_t1033* ___array1, ByteU5BU5D_t1033* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
 void RecordProtocol_ProcessCipherSpecV2Buffer_m45361 (RecordProtocol_t6532 * __this, int32_t ___protocol, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
 CipherSuite_t6523 * RecordProtocol_MapV2CipherCode_m45362 (RecordProtocol_t6532 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
