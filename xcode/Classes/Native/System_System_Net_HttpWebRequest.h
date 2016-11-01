#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t6530;
// System.String
struct String_t;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t7196;
// System.Net.CookieContainer
struct CookieContainer_t7164;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Version
struct Version_t7194;
// System.Net.IWebProxy
struct IWebProxy_t7176;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.Net.WebConnectionStream
struct WebConnectionStream_t7197;
// System.Net.HttpWebResponse
struct HttpWebResponse_t7198;
// System.Net.WebAsyncResult
struct WebAsyncResult_t7199;
// System.EventHandler
struct EventHandler_t7200;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Exception
struct Exception_t972;
// System.Object
struct Object_t;
// System.Net.WebConnection
struct WebConnection_t7201;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544  : public WebRequest_t6621
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t6735 * ___requestUri;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t6735 * ___actualUri;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t6530 * ___certificates;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t7196 * ___continueDelegate;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t7164 * ___cookieContainer;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	Object_t * ___credentials;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse;
	// System.Boolean System.Net.HttpWebRequest::haveRequest
	bool ___haveRequest;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t7157 * ___webHeaders;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth;
	// System.Version System.Net.HttpWebRequest::version
	Version_t7194 * ___version;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_t7194 * ___actualVersion;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	Object_t * ___proxy;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t6620 * ___servicePoint;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout;
	// System.Net.WebConnectionStream System.Net.HttpWebRequest::writeStream
	WebConnectionStream_t7197 * ___writeStream;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_t7198 * ___webResponse;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncWrite
	WebAsyncResult_t7199 * ___asyncWrite;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncRead
	WebAsyncResult_t7199 * ___asyncRead;
	// System.EventHandler System.Net.HttpWebRequest::abortHandler
	EventHandler_t7200 * ___abortHandler;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue;
	// System.Boolean System.Net.HttpWebRequest::authCompleted
	bool ___authCompleted;
	// System.Byte[] System.Net.HttpWebRequest::bodyBuffer
	ByteU5BU5D_t1033* ___bodyBuffer;
	// System.Int32 System.Net.HttpWebRequest::bodyBufferLength
	int32_t ___bodyBufferLength;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled;
	// System.Exception System.Net.HttpWebRequest::saved_exc
	Exception_t972 * ___saved_exc;
	// System.Object System.Net.HttpWebRequest::locker
	Object_t * ___locker;
	// System.Boolean System.Net.HttpWebRequest::is_ntlm_auth
	bool ___is_ntlm_auth;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading;
	// System.Net.WebConnection System.Net.HttpWebRequest::WebConnection
	WebConnection_t7201 * ___WebConnection;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah;
};
struct HttpWebRequest_t6544_StaticFields{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength;
};
