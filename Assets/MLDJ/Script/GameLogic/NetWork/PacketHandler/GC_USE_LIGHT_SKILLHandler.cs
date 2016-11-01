//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using UnityEngine;

namespace SPacket.SocketInstance
{
    public class GC_USE_LIGHT_SKILLHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_USE_LIGHT_SKILL packet = (GC_USE_LIGHT_SKILL)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            //首先检查场景是否一致
            if (GameManager.gameManager.RunningScene != packet.SceneId)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //再找到该玩家
            Obj_Character obj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjId);
            if (null != obj)
            {
                Vector3 dstPos = new Vector3((float)packet.DstPosX / 100, 0.0f, (float)packet.DstPosZ / 100);
                obj.PlayLightSkill(dstPos, packet.Step);
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
