//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_LEARN_LIGHT_SKILLHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_LEARN_LIGHT_SKILL packet = (GC_LEARN_LIGHT_SKILL)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            ////���GUID�Ƿ�ΪmainPlayer
            //if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
            //    packet.UserGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID &&
            //    null != GameManager.gameManager)
            //{
            //    //�����Ṧ�ȼ�
            //    GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.LightSkillLevel = packet.SkillLevel;

            //    //����ͼ��
            //    if (SkillBarLogic.Instance() != null)
            //    {
            //        SkillBarLogic.Instance().LearnLightSkill();
            //    }
            //    if (null != Turntable.Instance())
            //    {
            //        Turntable.Instance().LearnLightSkill();
            //    }
            //}

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
