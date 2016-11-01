//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame;
namespace SPacket.SocketInstance
{
    public class GC_CREATEROLE_RETHandler : Ipacket
    {
        public delegate void CreateRoltFailRet(GC_CREATEROLE_RET.CREATEROLE_RESULT result);
        public static CreateRoltFailRet retCreateRoleFail;
        public uint Execute(PacketDistributed ipacket)
        {
            GC_CREATEROLE_RET packet = (GC_CREATEROLE_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            if (packet.Result == (int)GC_CREATEROLE_RET.CREATEROLE_RESULT.CREATEROLE_SUCCESS)
            {
                LoginData.loginRoleList.Add(new LoginData.PlayerRoleData(packet.PlayerGuid, packet.Profession, packet.PlayerName, 1, -1, -1, -1));
                PlatformHelper.OnRoleCreate(packet.PlayerName, "1");
                UserConfigData.AddRoleInfo();
                LoginData.UpdateLoginRoleInfo(packet.PlayerGuid);
                // LoginData.UpdateLoginRoleInfo�л�����ְҵ���ڴ����¸�ֵ���������������ְҵ�������ã�
                GameManager.gameManager.PlayerDataPool.EnterSceneCache.Profession = packet.Profession;
                //��һ�δ�����ɫ���ֹ�Ĭ������һ�����⼼��
                Utils.SetPVXSkillIndexByProfession(packet.Profession);
            }
            else
            {
                if (null != retCreateRoleFail) retCreateRoleFail((GC_CREATEROLE_RET.CREATEROLE_RESULT)packet.Result);
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}