#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t8038;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t8046  : public Object_t
{
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t8038 * ____methodDictionary;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	Object_t * ____hashtableEnum;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod;
};
