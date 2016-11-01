//This code create by CodeEngine

using System;
using Games.AwardActivity;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_SYNC_JOINNUMREWARDHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_SYNC_JOINNUMREWARD packet = (GC_SYNC_JOINNUMREWARD )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic

 for (int i = 0; i < packet.indexCount; i++)
 {
     JoinNumRewardData DataLine = new JoinNumRewardData();
     DataLine.Index = packet.GetIndex(i);
     DataLine.Number = packet.GetNumber(i);
     DataLine.Item1DataID = packet.GetItem1dataid(i);
     DataLine.Item1Count = packet.GetItem1count(i);
//     DataLine.State = (JoinNumRewardState)packet.GetState(i);
     DataLine.JoinNum = packet.GetJoinNum(i);

     if (DataLine.Index == 1)
     {
         GameManager.gameManager.PlayerDataPool.m_ActivityRewardSrateTime = packet.JoinStartTime;
         GameManager.gameManager.PlayerDataPool.ActivityRewardBeginTime = packet.JoinStartTime.ToString();
     }
     else if(DataLine.Index == 2)
     {
         GameManager.gameManager.PlayerDataPool.m_ActivityRewardEndTime = packet.JoinStartTime;
     }
     else
     {
         GameManager.gameManager.PlayerDataPool.m_ActivityRewardJoinNumSarteTime = packet.JoinStartTime;
     }

     GameManager.gameManager.PlayerDataPool.AddJoinNumRewardTable(DataLine);
     GameManager.gameManager.PlayerDataPool.ActivityRewardJoinNum = DataLine.JoinNum;
 }

 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
