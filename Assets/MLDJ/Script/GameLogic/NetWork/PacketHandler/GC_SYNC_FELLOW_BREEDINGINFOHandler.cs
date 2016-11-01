//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_FELLOW_BREEDINGINFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_FELLOW_BREEDINGINFO packet = (GC_SYNC_FELLOW_BREEDINGINFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.LastProcreateTime = packet.Lastprocreatetime;
            GameManager.gameManager.PlayerDataPool.GoneProcreateTime = packet.GoneProcreateTime;
            if (PartnerFrameLogic_Breeding.Instance() != null)
            {
                PartnerFrameLogic_Breeding.Instance().UpdateFellowInfo_Button();
                PartnerFrameLogic_Breeding.Instance().UpdateFellowInfo_Window(false);
            }
            if (MenuBarLogic.Instance() != null)
            {
                MenuBarLogic.Instance().UpdateFellowRedTip();
            }
            if (PartnerFrameLogic.Instance()!=null)
            {
                PartnerFrameLogic.Instance().UpdateFellowTip();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
