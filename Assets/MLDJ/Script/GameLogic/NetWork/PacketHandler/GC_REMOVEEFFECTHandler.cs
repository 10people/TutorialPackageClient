//This code create by CodeEngine

using System;
using Games.LogicObj;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_REMOVEEFFECTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_REMOVEEFFECT packet = (GC_REMOVEEFFECT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            Obj_Character _objChar = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjId);
            if (_objChar)
            {
                if (_objChar.ObjEffectController != null)
                {
                    _objChar.ObjEffectController.StopEffect(packet.EffectId);
                }

                if (packet.HasStartMotionID && packet.StartMotionID != GlobeVar.INVALID_ID && packet.StartMotionID == (int)CharacterDefine.CharacterAnimId.DizzyId && _objChar.AnimLogic != null)
                {
                    _objChar.InDizzy = false;
                    _objChar.AnimLogic.Stop();
                }
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
