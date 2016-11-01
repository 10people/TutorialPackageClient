//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_MOUNT_MOUNTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_MOUNT_MOUNT packet = (CG_MOUNT_MOUNT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic

/*Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
if( mainPlayer != null)
{
	mainPlayer.PlayerStopMountSound();
}  */
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
