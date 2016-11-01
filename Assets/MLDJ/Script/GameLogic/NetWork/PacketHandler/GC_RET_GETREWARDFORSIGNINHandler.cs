//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;

namespace SPacket.SocketInstance
 {
	 public class GC_RET_GETREWARDFORSIGNINHandler : Ipacket
	 {
		 public uint Execute(PacketDistributed ipacket)
		 {
			GC_RET_GETREWARDFORSIGNIN packet = (GC_RET_GETREWARDFORSIGNIN )ipacket;
			if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
			//enter your logic  GC_RET_GETREWARDFORSIGNIN

			GameManager.gameManager.PlayerDataPool.HandlePacket(packet);

 			return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 		}
 	}
 }
