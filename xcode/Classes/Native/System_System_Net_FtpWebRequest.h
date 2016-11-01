#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.String
struct String_t;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.IO.Stream
struct Stream_t1038;
// System.IO.StreamReader
struct StreamReader_t1018;
// System.Net.NetworkCredential
struct NetworkCredential_t7190;
// System.Net.IPHostEntry
struct IPHostEntry_t7172;
// System.Net.IPEndPoint
struct IPEndPoint_t5717;
// System.Net.IWebProxy
struct IWebProxy_t7176;
// System.Object
struct Object_t;
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t7181;
// System.Net.FtpWebResponse
struct FtpWebResponse_t7180;
// System.String[]
struct StringU5BU5D_t333;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t6624;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.Net.FtpWebRequest/RequestState
#include "System_System_Net_FtpWebRequest_RequestState.h"
// System.Net.FtpWebRequest
struct FtpWebRequest_t7184  : public WebRequest_t6621
{
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t6735 * ___requestUri;
	// System.String System.Net.FtpWebRequest::file_name
	String_t* ___file_name;
	// System.Net.ServicePoint System.Net.FtpWebRequest::servicePoint
	ServicePoint_t6620 * ___servicePoint;
	// System.IO.Stream System.Net.FtpWebRequest::origDataStream
	Stream_t1038 * ___origDataStream;
	// System.IO.Stream System.Net.FtpWebRequest::dataStream
	Stream_t1038 * ___dataStream;
	// System.IO.Stream System.Net.FtpWebRequest::controlStream
	Stream_t1038 * ___controlStream;
	// System.IO.StreamReader System.Net.FtpWebRequest::controlReader
	StreamReader_t1018 * ___controlReader;
	// System.Net.NetworkCredential System.Net.FtpWebRequest::credentials
	NetworkCredential_t7190 * ___credentials;
	// System.Net.IPHostEntry System.Net.FtpWebRequest::hostEntry
	IPHostEntry_t7172 * ___hostEntry;
	// System.Net.IPEndPoint System.Net.FtpWebRequest::localEndPoint
	IPEndPoint_t5717 * ___localEndPoint;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Object_t * ___proxy;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout;
	// System.Int64 System.Net.FtpWebRequest::offset
	int64_t ___offset;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary;
	// System.Boolean System.Net.FtpWebRequest::enableSsl
	bool ___enableSsl;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive;
	// System.Boolean System.Net.FtpWebRequest::keepAlive
	bool ___keepAlive;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method;
	// System.String System.Net.FtpWebRequest::renameTo
	String_t* ___renameTo;
	// System.Object System.Net.FtpWebRequest::locker
	Object_t * ___locker;
	// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::requestState
	int32_t ___requestState;
	// System.Net.FtpAsyncResult System.Net.FtpWebRequest::asyncResult
	FtpAsyncResult_t7181 * ___asyncResult;
	// System.Net.FtpWebResponse System.Net.FtpWebRequest::ftpResponse
	FtpWebResponse_t7180 * ___ftpResponse;
	// System.IO.Stream System.Net.FtpWebRequest::requestStream
	Stream_t1038 * ___requestStream;
	// System.String System.Net.FtpWebRequest::initial_path
	String_t* ___initial_path;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t6624 * ___callback;
};
struct FtpWebRequest_t7184_StaticFields{
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t333* ___supportedCommands;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t6624 * ___U3CU3Ef__am$cache1C;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map5
	Dictionary_2_t944 * ___U3CU3Ef__switch$map5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map6
	Dictionary_2_t944 * ___U3CU3Ef__switch$map6;
};
