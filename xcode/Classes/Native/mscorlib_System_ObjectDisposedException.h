#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ObjectDisposedException
struct ObjectDisposedException_t5719  : public InvalidOperationException_t5468
{
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg;
};
