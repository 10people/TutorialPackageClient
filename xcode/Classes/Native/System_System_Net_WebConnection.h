#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.IO.Stream
struct Stream_t1038;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Object
struct Object_t;
// System.Threading.WaitCallback
struct WaitCallback_t7214;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.EventHandler
struct EventHandler_t7200;
// System.Net.WebConnection/AbortHelper
struct AbortHelper_t7213;
// System.Net.WebConnectionData
struct WebConnectionData_t7202;
// System.Net.ChunkStream
struct ChunkStream_t7158;
// System.Collections.Queue
struct Queue_t6898;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Net.NetworkCredential
struct NetworkCredential_t7190;
// System.Exception
struct Exception_t972;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Net.ReadState
#include "System_System_Net_ReadState.h"
// System.Net.WebConnection
struct WebConnection_t7201  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnection::sPoint
	ServicePoint_t6620 * ___sPoint;
	// System.IO.Stream System.Net.WebConnection::nstream
	Stream_t1038 * ___nstream;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_t4375 * ___socket;
	// System.Object System.Net.WebConnection::socketLock
	Object_t * ___socketLock;
	// System.Net.WebExceptionStatus System.Net.WebConnection::status
	int32_t ___status;
	// System.Threading.WaitCallback System.Net.WebConnection::initConn
	WaitCallback_t7214 * ___initConn;
	// System.Boolean System.Net.WebConnection::keepAlive
	bool ___keepAlive;
	// System.Byte[] System.Net.WebConnection::buffer
	ByteU5BU5D_t1033* ___buffer;
	// System.EventHandler System.Net.WebConnection::abortHandler
	EventHandler_t7200 * ___abortHandler;
	// System.Net.WebConnection/AbortHelper System.Net.WebConnection::abortHelper
	AbortHelper_t7213 * ___abortHelper;
	// System.Net.ReadState System.Net.WebConnection::readState
	int32_t ___readState;
	// System.Net.WebConnectionData System.Net.WebConnection::Data
	WebConnectionData_t7202 * ___Data;
	// System.Boolean System.Net.WebConnection::chunkedRead
	bool ___chunkedRead;
	// System.Net.ChunkStream System.Net.WebConnection::chunkStream
	ChunkStream_t7158 * ___chunkStream;
	// System.Collections.Queue System.Net.WebConnection::queue
	Queue_t6898 * ___queue;
	// System.Boolean System.Net.WebConnection::reused
	bool ___reused;
	// System.Int32 System.Net.WebConnection::position
	int32_t ___position;
	// System.Boolean System.Net.WebConnection::busy
	bool ___busy;
	// System.Net.HttpWebRequest System.Net.WebConnection::priority_request
	HttpWebRequest_t6544 * ___priority_request;
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t7190 * ___ntlm_credentials;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing;
	// System.Boolean System.Net.WebConnection::ssl
	bool ___ssl;
	// System.Boolean System.Net.WebConnection::certsAvailable
	bool ___certsAvailable;
	// System.Exception System.Net.WebConnection::connect_exception
	Exception_t972 * ___connect_exception;
};
struct WebConnection_t7201_StaticFields{
	// System.AsyncCallback System.Net.WebConnection::readDoneDelegate
	AsyncCallback_t15 * ___readDoneDelegate;
	// System.Object System.Net.WebConnection::classLock
	Object_t * ___classLock;
	// System.Type System.Net.WebConnection::sslStream
	Type_t * ___sslStream;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piClient
	PropertyInfo_t5355 * ___piClient;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piServer
	PropertyInfo_t5355 * ___piServer;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piTrustFailure
	PropertyInfo_t5355 * ___piTrustFailure;
	// System.Reflection.MethodInfo System.Net.WebConnection::method_GetSecurityPolicyFromNonMainThread
	MethodInfo_t1087 * ___method_GetSecurityPolicyFromNonMainThread;
};
