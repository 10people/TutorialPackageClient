//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;

namespace SPacket.SocketInstance
 {
 public class GC_PVPSHOP_BRUSH_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PVPSHOP_BRUSH_RESULT packet = (GC_PVPSHOP_BRUSH_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

		
 //enter your logic

			// 手动刷新
			if (packet.TIME != GlobeVar.INVALID_ID) 
			{
				GameManager.gameManager.PlayerDataPool.ReTick_PVP(packet.TIME);
			}
			else 
			{
				if( PvpShopLogic.Instance() )
					PvpShopLogic.Instance().close(); 
			}

 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
