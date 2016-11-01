//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
 {
     public class GC_SERVER_CONFIGHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_SERVER_CONFIG packet = (GC_SERVER_CONFIG)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            //if (packet.HasType)
            //{
            //    if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO)
            //    {
            //        GlobalData.IsOpenConsumeRank = packet.Chongzhiopen > 0 ? true : false;
            //    }
            //    else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI)
            //    {
            //        GameManager.gameManager.PlayerDataPool.OpenChongZhiRank = packet.Chongzhiopen > 0 ? true : false;
            //        GameManager.gameManager.PlayerDataPool.ChongZhiStartTime = packet.Chongzhistarttime;
            //        GameManager.gameManager.PlayerDataPool.ChongZhiEndTime = packet.Chongzhiendtime;
            //    }
            //}
            //else
            //{
            //    GameManager.gameManager.PlayerDataPool.OpenChongZhiRank = packet.Chongzhiopen > 0 ? true : false;
            //    GameManager.gameManager.PlayerDataPool.ChongZhiStartTime = packet.Chongzhistarttime;
            //    GameManager.gameManager.PlayerDataPool.ChongZhiEndTime = packet.Chongzhiendtime;
            //}
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
