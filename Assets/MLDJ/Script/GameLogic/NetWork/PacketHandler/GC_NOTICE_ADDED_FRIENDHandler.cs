//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;
//using Games.LogicObj;
using GCGame.Table;
namespace SPacket.SocketInstance
{
    public class GC_NOTICE_ADDED_FRIENDHandler : Ipacket
    {
        private UInt64 m_guid;
		private string m_name ;

        public uint Execute(PacketDistributed ipacket)
        {
            GC_NOTICE_ADDED_FRIEND packet = (GC_NOTICE_ADDED_FRIEND)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            m_guid = packet.Guid;
            if (m_guid == GlobeVar.INVALID_GUID)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

			string text = packet.Name + StrDictionary.GetClientDictionaryString("#{1072}");

			PlayerData playerdata = GameManager.gameManager.PlayerDataPool;
			playerdata.AddFriendVlue.m_guid = packet.Guid;
			playerdata.AddFriendVlue.m_name = packet.Name;
			playerdata.AddFriendVlue.m_fight = packet.Fight;
			playerdata.AddFriendVlue.m_profess = packet.Prof;
			playerdata.AddFriendVlue.m_level = packet.Level;

			if(OpenServer.Instance() == null || OpenServer.Instance().IsShow() == false)
				UIManager.ShowUI (UIInfo.AddFriend);

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
