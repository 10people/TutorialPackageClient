//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using GCGame.Table;
namespace SPacket.SocketInstance
{
    public class GC_EQUIP_ENCHANCE_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_EQUIP_ENCHANCE_RET packet = (GC_EQUIP_ENCHANCE_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

//            int success = packet.Success;
//            int packType = packet.Packtype;
//            UInt64 equipGuid = packet.Equipguid;

            //ǿ������
            if (EquipStrengthenLogic.Instance() != null)
            {
                if (EquipStrengthenLogic.Instance().IsCurEnchanceTab())
                {
                    EquipStrengthenLogic.Instance().UpdateTab();
                    EquipStrengthenLogic.Instance().EnchanceOK();
                }
            }

            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
