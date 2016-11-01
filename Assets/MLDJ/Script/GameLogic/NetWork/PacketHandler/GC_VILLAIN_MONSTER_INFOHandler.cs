
using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using UnityEngine;
using Games.GlobeDefine;
using Games.Scene;

namespace SPacket.SocketInstance
{
    public class GC_VILLAIN_MONSTER_INFOHandler : Ipacket
    {
		public uint Execute(PacketDistributed ipacket)
        {
            GC_VILLAIN_MONSTER_INFO packet = (GC_VILLAIN_MONSTER_INFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            Obj_MainPlayer mainplayer = Singleton<ObjManager>.Instance.MainPlayer;
            if (mainplayer == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            if (!mainplayer.IsOpenAutoCombat)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            if (packet.HasMonsterPosZ && packet.HasMonsterPosX)
            {
                mainplayer.SetFourVillainAutoCombatTargetPos(packet.MonsterPosX / 100.0f, packet.MonsterPosZ / 100.0f);      
            }                          
			return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;          
        }
    }

}
