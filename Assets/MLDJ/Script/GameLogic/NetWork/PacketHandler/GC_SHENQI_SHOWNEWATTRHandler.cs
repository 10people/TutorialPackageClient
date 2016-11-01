//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;

namespace SPacket.SocketInstance
{
    public class GC_SHENQI_SHOWNEWATTRHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SHENQI_SHOWNEWATTR packet = (GC_SHENQI_SHOWNEWATTR) ipacket;
            if (null == packet) return (uint) PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            //神器强化界面
            if (EquipShenQiStrength.Instance() != null)
            {
                EquipShenQiStrength.Instance().UpdateNewAttrViewInfo(packet);
            }
            return (uint) PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
