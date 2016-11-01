//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.AwardActivity;
namespace SPacket.SocketInstance
 {
 public class GC_RET_ACCUMULATESIGNININFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RET_ACCUMULATESIGNININFO packet = (GC_RET_ACCUMULATESIGNININFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 GameManager.gameManager.PlayerDataPool.AlreadySingedCount = packet.AlreadySignedCount;

 if (packet.GetIndex(0) == 1)   // 第一个说明重新发送，清理缓存
 {
     GameManager.gameManager.PlayerDataPool.ClearAccuItemListCache();
 }

 for (int i = 0; i < packet.indexCount; i++)
 {
     AccumulateSignInfo Item = new AccumulateSignInfo();
     Item.ItemIndex = packet.GetIndex(i);
     Item.ItemStatus = packet.GetStatus(i);
     Item.Exp = packet.GetExp(i);
     Item.Money = packet.GetMoney(i);
     Item.BindYuanbao = packet.GetBindYuanbao(i);
     //Item.ItemDataID = packet.GetItemDataID(i);
     //Item.ItemCount = packet.GetItemCount(i);
     Item.ItemDataID1 = packet.GetItemDataID1(i);
     Item.ItemCount1 = packet.GetItemCount1(i);
     Item.ItemDataID2 = packet.GetItemDataID2(i);
     Item.ItemCount2 = packet.GetItemCount2(i);
     Item.ItemDataID3 = packet.GetItemDataID3(i);
     Item.ItemCount3 = packet.GetItemCount3(i);
     Item.ItemDataID4 = packet.GetItemDataID4(i);
     Item.ItemCount4 = packet.GetItemCount4(i);
     Item.ItemDataID5 = packet.GetItemDataID5(i);
     Item.ItemCount5 = packet.GetItemCount5(i);
     GameManager.gameManager.PlayerDataPool.AddDaySignInfo(Item);
 }

 //GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw ();
 if (packet.indexCount > 1 && FunctionButtonLogic.Instance() != null)
 {
     FunctionButtonLogic.Instance().UpdateButtonAwardTips();

     if (AwardLogic.Instance())
     {
         AwardLogic.Instance().RefreshDaySignInUI();
     }
 }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
