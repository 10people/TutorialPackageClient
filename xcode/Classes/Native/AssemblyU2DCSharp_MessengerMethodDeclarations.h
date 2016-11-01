#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Messenger
struct Messenger_t2195;
// System.String
struct String_t;
// System.Delegate
struct Delegate_t959;
// Messenger/BroadcastException
struct BroadcastException_t2192;
// Callback
struct Callback_t2196;
// MessengerMode
#include "AssemblyU2DCSharp_MessengerMode.h"

// System.Void Messenger::.cctor()
 void Messenger__cctor_m14695 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::MarkAsPermanent(System.String)
 void Messenger_MarkAsPermanent_m14696 (Object_t * __this/* static, unused */, String_t* ___eventType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::Cleanup()
 void Messenger_Cleanup_m14697 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::PrintEventTable()
 void Messenger_PrintEventTable_m14698 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerAdding(System.String,System.Delegate)
 void Messenger_OnListenerAdding_m14699 (Object_t * __this/* static, unused */, String_t* ___eventType, Delegate_t959 * ___listenerBeingAdded, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerRemoving(System.String,System.Delegate)
 void Messenger_OnListenerRemoving_m14700 (Object_t * __this/* static, unused */, String_t* ___eventType, Delegate_t959 * ___listenerBeingRemoved, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerRemoved(System.String)
 void Messenger_OnListenerRemoved_m14701 (Object_t * __this/* static, unused */, String_t* ___eventType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnBroadcasting(System.String,MessengerMode)
 void Messenger_OnBroadcasting_m14702 (Object_t * __this/* static, unused */, String_t* ___eventType, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Messenger/BroadcastException Messenger::CreateBroadcastSignatureException(System.String)
 BroadcastException_t2192 * Messenger_CreateBroadcastSignatureException_m14703 (Object_t * __this/* static, unused */, String_t* ___eventType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::AddListener(System.String,Callback)
 void Messenger_AddListener_m14704 (Object_t * __this/* static, unused */, String_t* ___eventType, Callback_t2196 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::RemoveListener(System.String,Callback)
 void Messenger_RemoveListener_m14705 (Object_t * __this/* static, unused */, String_t* ___eventType, Callback_t2196 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::Broadcast(System.String)
 void Messenger_Broadcast_m14706 (Object_t * __this/* static, unused */, String_t* ___eventType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::Broadcast(System.String,MessengerMode)
 void Messenger_Broadcast_m14707 (Object_t * __this/* static, unused */, String_t* ___eventType, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
