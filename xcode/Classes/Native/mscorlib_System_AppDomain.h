#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Security.Policy.Evidence
struct Evidence_t7952;
// System.Security.PermissionSet
struct PermissionSet_t7953;
// System.Security.Principal.IPrincipal
struct IPrincipal_t8204;
// System.AppDomain
struct AppDomain_t8169;
// System.AppDomainManager
struct AppDomainManager_t8212;
// System.ActivationContext
struct ActivationContext_t8210;
// System.ApplicationIdentity
struct ApplicationIdentity_t8213;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t8214;
// System.ResolveEventHandler
struct ResolveEventHandler_t8215;
// System.EventHandler
struct EventHandler_t7200;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t8216;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.PrincipalPolicy
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"
// System.AppDomain
struct AppDomain_t8169  : public MarshalByRefObject_t7220
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t24 ____mono_app_domain;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t7952 * ____evidence;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t7953 * ____granted;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t8212 * ____domain_manager;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t8210 * ____activation;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t8213 * ____applicationIdentity;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t8214 * ___AssemblyLoad;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t8215 * ___AssemblyResolve;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t7200 * ___DomainUnload;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t7200 * ___ProcessExit;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t8215 * ___ResourceResolve;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t8215 * ___TypeResolve;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t8216 * ___UnhandledException;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t8215 * ___ReflectionOnlyAssemblyResolve;
};
struct AppDomain_t8169_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t8169 * ___default_domain;
};
struct AppDomain_t8169_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t4372 * ___type_resolve_in_progress;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t4372 * ___assembly_resolve_in_progress;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t4372 * ___assembly_resolve_in_progress_refonly;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal;
};
