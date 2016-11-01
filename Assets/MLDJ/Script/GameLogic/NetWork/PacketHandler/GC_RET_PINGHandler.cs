
using System;
using Games.LogicObj;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using UnityEngine;

namespace SPacket.SocketInstance
{
    public class GC_RET_PINGHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_PING packet = (GC_RET_PING)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (mainPlayer != null)
            {
                mainPlayer.SetMainPlayerNetSpeed();
                mainPlayer = null;
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
