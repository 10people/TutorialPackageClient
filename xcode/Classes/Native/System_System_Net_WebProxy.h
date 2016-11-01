#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t6735;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebProxy
struct WebProxy_t7219  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t6735 * ___address;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t5157 * ___bypassList;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials;
};
