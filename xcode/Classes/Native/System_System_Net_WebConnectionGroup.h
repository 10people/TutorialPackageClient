#pragma once
#include <stdint.h>
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Random
struct Random_t7215;
// System.Collections.Queue
struct Queue_t6898;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t7209  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t6620 * ___sPoint;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t5157 * ___connections;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t7215 * ___rnd;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t6898 * ___queue;
};
