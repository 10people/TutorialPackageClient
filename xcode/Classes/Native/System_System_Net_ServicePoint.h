#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.Version
struct Version_t7194;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// System.Net.IPHostEntry
struct IPHostEntry_t7172;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Object
struct Object_t;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t7208;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.ServicePoint
struct ServicePoint_t6620  : public Object_t
{
	// System.Uri System.Net.ServicePoint::uri
	Uri_t6735 * ___uri;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t1171  ___idleSince;
	// System.Version System.Net.ServicePoint::protocolVersion
	Version_t7194 * ___protocolVersion;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::certificate
	X509Certificate_t6546 * ___certificate;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::clientCertificate
	X509Certificate_t6546 * ___clientCertificate;
	// System.Net.IPHostEntry System.Net.ServicePoint::host
	IPHostEntry_t7172 * ___host;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy;
	// System.Collections.Hashtable System.Net.ServicePoint::groups
	Hashtable_t4372 * ___groups;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect;
	// System.Object System.Net.ServicePoint::locker
	Object_t * ___locker;
	// System.Object System.Net.ServicePoint::hostE
	Object_t * ___hostE;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle;
	// System.Net.BindIPEndPoint System.Net.ServicePoint::endPointCallback
	BindIPEndPoint_t7208 * ___endPointCallback;
};
