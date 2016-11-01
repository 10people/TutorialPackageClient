//This code create by CodeEngine

using System;
using Games.AwardActivity;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_SYNC_ACTIVITYREWARDTABLEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_SYNC_ACTIVITYREWARDTABLE packet = (GC_SYNC_ACTIVITYREWARDTABLE )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

 for (int i = 0; i < packet.indexCount; i++)
 {
     ActivityRewardData DataLine = new ActivityRewardData();
     DataLine.Index = packet.GetIndex(i);
     DataLine.Exp = packet.GetExp(i);
     DataLine.Money = packet.GetMoney(i);
     DataLine.BindYuanbao = packet.GetBindyuanbao(i);
     DataLine.Item1DataID = packet.GetItem1dataid(i);
     DataLine.Item1Count = packet.GetItem1count(i);
     DataLine.Item2DataID = packet.GetItem2dataid(i);
     DataLine.Item2count = packet.GetItem2count(i);
//     DataLine.State = (AcitivityRewardState)packet.GetState(i);
     
     GameManager.gameManager.PlayerDataPool.AddActivityRewardTable(DataLine);
 }


 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
