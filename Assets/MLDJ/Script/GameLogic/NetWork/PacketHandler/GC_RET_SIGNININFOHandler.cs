//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.AwardActivity;
namespace SPacket.SocketInstance
 {
	 public class GC_RET_SIGNININFOHandler : Ipacket
	 {
		 public uint Execute(PacketDistributed ipacket)
		 {
			 GC_RET_SIGNININFO packet = (GC_RET_SIGNININFO )ipacket;
			 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
			 //enter your logic
			GameManager.gameManager.PlayerDataPool.NowDayIndex  = packet.CurNaturalIndex;
			GameManager.gameManager.PlayerDataPool.DefaultFirstSignIndex = packet.FirstCanSignIndex;
			GameManager.gameManager.PlayerDataPool.CurSelectedDayIndex = packet.FirstCanSignIndex;
			GameManager.gameManager.PlayerDataPool.CurMounthId = packet.CurMounthIndex;

			if(packet.GetIndex(0) == 1)   // 第一个说明重新发送，清理缓存
			{
				GameManager.gameManager.PlayerDataPool.ClearSignInItemListInCache();
			}

			for (int i = 0; i < packet.indexCount; i++)
			{
				DaySignInItem Item = new DaySignInItem();
				Item.ItemIndex = packet.GetIndex(i);
				Item.ItemStatus = packet.GetStatus(i);
				Item.vipLimit = packet.GetRequiredVip(i);
				Item.Exp = packet.GetExp(i);
				Item.Money = packet.GetMoney(i);
				Item.BindYuanbao = packet.GetBindYuanbao(i);
				Item.Item1DataID = packet.GetItem1DataID(i);
				Item.Item1Count = packet.GetItem1Count(i);
				Item.Item2DataID = packet.GetItem2DataID(i);
				Item.Item2count = packet.GetItem2count(i);
				Item.SupplyCost = packet.GetSupplySignCost(i);
				GameManager.gameManager.PlayerDataPool.AddDaySignInfo(Item);
			}

			//GameManager.gameManager.PlayerDataPool.IsHaveNewSignCanDraw ();
			if(packet.indexCount > 1 && FunctionButtonLogic.Instance() != null)
			{
				FunctionButtonLogic.Instance().UpdateButtonAwardTips();

				if(AwardLogic.Instance())
				{
					AwardLogic.Instance().RefreshDaySignInUI();
				}
			}

 			return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 		}
 	}
 }
