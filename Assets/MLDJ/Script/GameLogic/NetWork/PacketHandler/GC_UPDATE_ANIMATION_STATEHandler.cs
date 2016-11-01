//This code create by CodeEngine

using System;
using Games.GlobeDefine;
using Games.LogicObj;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_UPDATE_ANIMATION_STATEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UPDATE_ANIMATION_STATE packet = (GC_UPDATE_ANIMATION_STATE )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
          
            Obj_Character _objChar = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjId);
            if (_objChar ==null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //NPC受击动作单独处理
            if (_objChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC && _objChar.CurObjAnimState == Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HIT)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;                
            }

            _objChar.CurObjAnimState = (Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE)(packet.AnimationState);
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
