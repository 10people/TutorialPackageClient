//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using UnityEngine;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_FLY_ANIMATION_STATEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_FLY_ANIMATION_STATE packet = (GC_SYNC_FLY_ANIMATION_STATE)ipacket;
            if (null == packet)
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            Obj_Character _objChar = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjID);

            if (_objChar != null)
            {
                _objChar._FlyStateData = new Obj_Character.FlyStateData(packet.RemainTime, packet.AnimaId, Time.time);
                _objChar._FlyStateData.SetNstartAnimationTime(_objChar.GetCurFlyStartAnimTime(_objChar._FlyStateData.nStartAnimationId));
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
