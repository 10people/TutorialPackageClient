//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;

namespace SPacket.SocketInstance
{
    public class GC_STOPHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_STOP packet = (GC_STOP)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            //��ʱ���룬�ȷ��أ����Ե�ʱ���
            //return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;

            //�ж�ServerID
            if (packet.Serverid == GlobeVar.INVALID_ID)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //���Ҹ�NPC
            Obj_Character obj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.Serverid);
            if (null == obj)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            //�Ṧ״̬��ֹͣ�Ṧ
            if (obj.ObjType ==Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer _otherPlayer = obj as Obj_OtherPlayer;
                if (_otherPlayer && _otherPlayer.IsLightState)
                {
                    _otherPlayer.EndLightSkillMove();
                }
            }
            //����Obj�Ƿ��AutoMove���
			AutoMove autoMove = obj.AutoMoveComponent;
            if (null != autoMove)
            {
                autoMove.InterruptMove(packet);
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
