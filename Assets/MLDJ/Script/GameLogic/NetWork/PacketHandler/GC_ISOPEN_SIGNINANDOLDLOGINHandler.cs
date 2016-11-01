//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
	 public class GC_ISOPEN_SIGNINANDOLDLOGINHandler : Ipacket
	 {
		 public uint Execute(PacketDistributed ipacket)
		 {
			 GC_ISOPEN_SIGNINANDOLDLOGIN packet = (GC_ISOPEN_SIGNINANDOLDLOGIN )ipacket;
			 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
			 //enter your logic

			GameManager.gameManager.PlayerDataPool.IsOpenOldLoginReward = (packet.Isopenoldlogin == 0)?(false):(true);
			GameManager.gameManager.PlayerDataPool.IsOpenSignInReward = (packet.Isopensignin == 0)?(false):(true);

			 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
		 }
	 }
 }
