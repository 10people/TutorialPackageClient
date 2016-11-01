#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t6561;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t6624;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t7130;
// System.Net.Security.AuthenticatedStream
#include "System_System_Net_Security_AuthenticatedStream.h"
// System.Net.Security.SslStream
struct SslStream_t7128  : public AuthenticatedStream_t7126
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t6561 * ___ssl_stream;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t6624 * ___validation_callback;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t7130 * ___selection_callback;
};
