//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame.Table;


namespace SPacket.SocketInstance
{
    public class GC_ADDFRIENDHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_ADDFRIEND packet = (GC_ADDFRIEND)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            if (null != GameManager.gameManager.PlayerDataPool.FriendList)
            {
                Relation _relation = new Relation();
                _relation.Guid = packet.Guid;
                _relation.Name = packet.Name;
                _relation.Level = packet.Level;
                _relation.Profession = packet.Prof;
                _relation.CombatNum = packet.Combat;
                _relation.State = packet.State;
				_relation.TimeInfo = packet.TimeInfo;

				if(_relation.Level == -1 &&
				   _relation.Profession == -1 && 
				   _relation.CombatNum == -1 )
				{
					string tem = StrDictionary.GetClientDictionaryString("#{10832}",  _relation.Name );
					Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, tem);
					return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
				}
                if (GameManager.gameManager.PlayerDataPool.FriendList.AddRelation(_relation))
                {
                    if (Singleton<ObjManager>.Instance.MainPlayer != null)
                    {
                        Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2393}");
                    }
                }
            }

            //���º��ѽ��棨���δ�򿪣���UpdateFriendList������
            if (null != GUIData.delFriendDataUpdate) GUIData.delFriendDataUpdate();

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
