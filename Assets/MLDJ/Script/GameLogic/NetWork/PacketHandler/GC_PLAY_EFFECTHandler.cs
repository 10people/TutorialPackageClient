//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame.Table;
using UnityEngine;
using Games.LogicObj;
using Games.GlobeDefine;
using Games;
namespace SPacket.SocketInstance
{
    public class GC_PLAY_EFFECTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_PLAY_EFFECT packet = (GC_PLAY_EFFECT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            Obj_Character _objChar = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjID);
            
            if (null != _objChar)
            {
                _objChar.PlayEffect(packet.EffectID);

                if (packet.HasStartMotionID && packet.StartMotionID != GlobeVar.INVALID_ID && packet.StartMotionID == (int)CharacterDefine.CharacterAnimId.DizzyId && _objChar.AnimLogic != null)
                {
                    _objChar.InDizzy = true;
                    _objChar.CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
                }

                //是否需要播放附加动作
                if (packet.HasStartMotionID && _objChar.AnimLogic != null)
                {
                    _objChar.AnimLogic.Stop();
                    _objChar.AnimLogic.Play(packet.StartMotionID);
                    
                }
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
