#pragma once
#include <stdint.h>
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t6806;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t6619;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t6624;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"
// System.Net.ServicePointManager
struct ServicePointManager_t6609  : public Object_t
{
};
struct ServicePointManager_t6609_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t6806 * ___servicePoints;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	Object_t * ___policy;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t6624 * ___server_cert_cb;
};
