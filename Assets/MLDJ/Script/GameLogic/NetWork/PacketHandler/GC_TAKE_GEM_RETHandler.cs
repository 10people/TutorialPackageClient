//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_TAKE_GEM_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_TAKE_GEM_RET packet = (GC_TAKE_GEM_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (GemLogic.Instance() != null)
            {
                GemLogic.Instance().UpdateGemSlot();
            }

            if (EquipStrengthenLogic.Instance() != null)
            {
                EquipStrengthenLogic.Instance().RefreshGemsInEquips();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
