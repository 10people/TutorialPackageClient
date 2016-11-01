//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PVPSHOP_BUY_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PVPSHOP_BUY_RESULT packet = (GC_PVPSHOP_BUY_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
			if (PvpShopLogic.Instance () != null) 
			{
				PvpShopLogic.Instance().OnClickCancelBuyItem();
                PvpShopLogic.Instance()._Update();
			}

 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
