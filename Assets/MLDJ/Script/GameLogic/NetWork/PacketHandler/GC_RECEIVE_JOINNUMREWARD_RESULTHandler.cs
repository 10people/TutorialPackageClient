//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_RECEIVE_JOINNUMREWARD_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RECEIVE_JOINNUMREWARD_RESULT packet = (GC_RECEIVE_JOINNUMREWARD_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
// if (SpringActivityRewardWindow.Instance())
// {
//     SpringActivityRewardWindow.Instance().OnJoinNumReceiveResult(packet.RewardIndex, packet.Ndata);
// }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
