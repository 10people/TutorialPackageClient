#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t8011;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t8009;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Collections.IList
struct IList_t1062;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
 void ConstructionCall__ctor_m55391 (ConstructionCall_t8011 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall__ctor_m55392 (ConstructionCall_t8011 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
 void ConstructionCall_InitDictionary_m55393 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
 void ConstructionCall_set_IsContextOk_m55394 (ConstructionCall_t8011 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
 Type_t * ConstructionCall_get_ActivationType_m55395 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
 String_t* ConstructionCall_get_ActivationTypeName_m55396 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
 Object_t * ConstructionCall_get_Activator_m55397 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
 void ConstructionCall_set_Activator_m55398 (ConstructionCall_t8011 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
 ObjectU5BU5D_t142* ConstructionCall_get_CallSiteActivationAttributes_m55399 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
 void ConstructionCall_SetActivationAttributes_m55400 (ConstructionCall_t8011 * __this, ObjectU5BU5D_t142* ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
 Object_t * ConstructionCall_get_ContextProperties_m55401 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
 void ConstructionCall_InitMethodProperty_m55402 (ConstructionCall_t8011 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall_GetObjectData_m55403 (ConstructionCall_t8011 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
 Object_t * ConstructionCall_get_Properties_m55404 (ConstructionCall_t8011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
