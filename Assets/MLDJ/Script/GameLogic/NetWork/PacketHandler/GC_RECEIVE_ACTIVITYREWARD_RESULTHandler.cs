//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_RECEIVE_ACTIVITYREWARD_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RECEIVE_ACTIVITYREWARD_RESULT packet = (GC_RECEIVE_ACTIVITYREWARD_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

//     if (SpringActivityRewardWindow.Instance())
//     {
//         SpringActivityRewardWindow.Instance().OnReceiveResult(packet.RewardIndex, packet.Ndata);
//     }

     //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
