#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7804;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t6598;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
 void KeyPairPersistence__ctor_m53797 (KeyPairPersistence_t7804 * __this, CspParameters_t6598 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
 void KeyPairPersistence__ctor_m53798 (KeyPairPersistence_t7804 * __this, CspParameters_t6598 * ___parameters, String_t* ___keyPair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
 void KeyPairPersistence__cctor_m53799 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
 String_t* KeyPairPersistence_get_Filename_m53800 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
 String_t* KeyPairPersistence_get_KeyValue_m53801 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
 void KeyPairPersistence_set_KeyValue_m53802 (KeyPairPersistence_t7804 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
 bool KeyPairPersistence_Load_m53803 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
 void KeyPairPersistence_Save_m53804 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
 void KeyPairPersistence_Remove_m53805 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
 String_t* KeyPairPersistence_get_UserPath_m53806 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
 String_t* KeyPairPersistence_get_MachinePath_m53807 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
 bool KeyPairPersistence__CanSecure_m53808 (Object_t * __this/* static, unused */, String_t* ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
 bool KeyPairPersistence__ProtectUser_m53809 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
 bool KeyPairPersistence__ProtectMachine_m53810 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
 bool KeyPairPersistence__IsUserProtected_m53811 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
 bool KeyPairPersistence__IsMachineProtected_m53812 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
 bool KeyPairPersistence_CanSecure_m53813 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
 bool KeyPairPersistence_ProtectUser_m53814 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
 bool KeyPairPersistence_ProtectMachine_m53815 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
 bool KeyPairPersistence_IsUserProtected_m53816 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
 bool KeyPairPersistence_IsMachineProtected_m53817 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
 bool KeyPairPersistence_get_CanChange_m53818 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
 bool KeyPairPersistence_get_UseDefaultKeyContainer_m53819 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
 bool KeyPairPersistence_get_UseMachineKeyStore_m53820 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
 String_t* KeyPairPersistence_get_ContainerName_m53821 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
 CspParameters_t6598 * KeyPairPersistence_Copy_m53822 (KeyPairPersistence_t7804 * __this, CspParameters_t6598 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
 void KeyPairPersistence_FromXml_m53823 (KeyPairPersistence_t7804 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
 String_t* KeyPairPersistence_ToXml_m53824 (KeyPairPersistence_t7804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
