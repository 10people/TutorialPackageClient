#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetWorkLogic
struct NetWorkLogic_t2203;
// System.String
struct String_t;
// NetWorkLogic/ConnectDelegate
struct ConnectDelegate_t2201;
// NetWorkLogic/ConnectLostDelegate
struct ConnectLostDelegate_t2202;
// PacketDistributed
struct PacketDistributed_t2209;
// System.Object
struct Object_t;
// NetWorkLogic/ConnectStatus
#include "AssemblyU2DCSharp_NetWorkLogic_ConnectStatus.h"

// System.Void NetWorkLogic::.ctor()
 void NetWorkLogic__ctor_m14720 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::.cctor()
 void NetWorkLogic__cctor_m14721 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetWorkLogic::GetIP()
 String_t* NetWorkLogic_GetIP_m14722 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetWorkLogic::GetPort()
 int32_t NetWorkLogic_GetPort_m14723 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetWorkLogic NetWorkLogic::GetMe()
 NetWorkLogic_t2203 * NetWorkLogic_GetMe_m14724 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetWorkLogic::get_CanProcessPacket()
 bool NetWorkLogic_get_CanProcessPacket_m14725 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::set_CanProcessPacket(System.Boolean)
 void NetWorkLogic_set_CanProcessPacket_m14726 (NetWorkLogic_t2203 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetWorkLogic::IsDisconnected()
 bool NetWorkLogic_IsDisconnected_m14727 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::WaitConnected()
 void NetWorkLogic_WaitConnected_m14728 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetWorkLogic/ConnectStatus NetWorkLogic::GetConnectStautus()
 int32_t NetWorkLogic_GetConnectStautus_m14729 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::SetConcnectDelegate(NetWorkLogic/ConnectDelegate)
 void NetWorkLogic_SetConcnectDelegate_m14730 (Object_t * __this/* static, unused */, ConnectDelegate_t2201 * ___delConnectFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::SetConnectLostDelegate(NetWorkLogic/ConnectLostDelegate)
 void NetWorkLogic_SetConnectLostDelegate_m14731 (Object_t * __this/* static, unused */, ConnectLostDelegate_t2202 * ___delFun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::Update()
 void NetWorkLogic_Update_m14732 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::Reset()
 void NetWorkLogic_Reset_m14733 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::ConnectLost()
 void NetWorkLogic_ConnectLost_m14734 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::Finalize()
 void NetWorkLogic_Finalize_m14735 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetWorkLogic::IsCryptoPacket(System.UInt16)
 bool NetWorkLogic_IsCryptoPacket_m14736 (NetWorkLogic_t2203 * __this, uint16_t ___nPacketID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::WaitPacket()
 void NetWorkLogic_WaitPacket_m14737 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetWorkLogic::ProcessInput()
 bool NetWorkLogic_ProcessInput_m14738 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetWorkLogic::ProcessOutput()
 bool NetWorkLogic_ProcessOutput_m14739 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::ProcessPacket()
 void NetWorkLogic_ProcessPacket_m14740 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::SendPacket(PacketDistributed)
 void NetWorkLogic_SendPacket_m14741 (NetWorkLogic_t2203 * __this, PacketDistributed_t2209 * ___pPacket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::ConnectToServer(System.String,System.Int32,System.Int32)
 void NetWorkLogic_ConnectToServer_m14742 (NetWorkLogic_t2203 * __this, String_t* ___szServerAddr, int32_t ___nServerPort, int32_t ___nSleepTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::ReConnectToServer()
 void NetWorkLogic_ReConnectToServer_m14743 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::DisconnectServer()
 void NetWorkLogic_DisconnectServer_m14744 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::ConnectThread()
 void NetWorkLogic_ConnectThread_m14745 (NetWorkLogic_t2203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic::_ConnectThread(System.Object)
 void NetWorkLogic__ConnectThread_m14746 (Object_t * __this/* static, unused */, Object_t * ___me, MethodInfo* method) IL2CPP_METHOD_ATTR;
