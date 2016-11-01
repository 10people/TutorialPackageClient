#pragma once
#include <stdint.h>
// System.Net.IPAddress
struct IPAddress_t5682;
// System.Net.EndPoint
#include "System_System_Net_EndPoint.h"
// System.Net.IPEndPoint
struct IPEndPoint_t5717  : public EndPoint_t5222
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t5682 * ___address;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port;
};
