#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieContainer
struct CookieContainer_t7164;
// System.Net.Cookie
struct Cookie_t7159;
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;
// System.Net.CookieCollection
struct CookieCollection_t7162;

// System.Void System.Net.CookieContainer::.ctor()
 void CookieContainer__ctor_m49796 (CookieContainer_t7164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
 void CookieContainer_AddCookie_m49797 (CookieContainer_t7164 * __this, Cookie_t7159 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
 int32_t CookieContainer_CountDomain_m49798 (CookieContainer_t7164 * __this, String_t* ___domain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
 void CookieContainer_RemoveOldest_m49799 (CookieContainer_t7164 * __this, String_t* ___domain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
 void CookieContainer_CheckExpiration_m49800 (CookieContainer_t7164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
 void CookieContainer_Cook_m49801 (CookieContainer_t7164 * __this, Uri_t6735 * ___uri, Cookie_t7159 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
 void CookieContainer_Add_m49802 (CookieContainer_t7164 * __this, Uri_t6735 * ___uri, Cookie_t7159 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
 String_t* CookieContainer_GetCookieHeader_m49803 (CookieContainer_t7164 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
 bool CookieContainer_CheckDomain_m49804 (Object_t * __this/* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
 CookieCollection_t7162 * CookieContainer_GetCookies_m49805 (CookieContainer_t7164 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
 bool CookieContainer_IsNullOrEmpty_m49806 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
