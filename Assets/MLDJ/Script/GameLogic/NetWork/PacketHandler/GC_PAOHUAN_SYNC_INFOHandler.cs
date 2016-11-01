//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PAOHUAN_SYNC_INFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PAOHUAN_SYNC_INFO packet = (GC_PAOHUAN_SYNC_INFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
			GameManager.gameManager.MissionManager.UpdatePaoHuanMissionInfo (
				packet.PlayerLevelWhenGetMission,
				packet.CurrentNum,
				packet.CurrentMissionID,
				packet.CheckState,
				packet.RrefreshCD,
				packet.CurrentServerCD,
				packet.RefreshCntFree,
				packet.RefreshCntPaid);
            if (MissionDialogAndLeftTabsLogic.Instance() != null)
                MissionDialogAndLeftTabsLogic.Instance().SetPaoHuanAwardItemID();
     
        
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
