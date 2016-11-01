//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;

namespace SPacket.SocketInstance
 {
     public class GC_RET_RANKHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_RET_RANK packet = (GC_RET_RANK )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
             if (packet.Type != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARKILLRANK &&
               packet.Type != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARRANK &&
               packet.Type != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GIVEROSE &&
               packet.Type != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_RECEIVEROSE)
             {
                 if (RankWindow.Instance() == null)
                 {
                     return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
                 }
                 if (RankWindow.Instance().GetRankType() != packet.Type)
                 {
                     return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
                 }
             }

             PVPData.ClearRankData();

             int curPage = 0;
             if (packet.HasCurPage)
             {
                 curPage = packet.CurPage;
                 PVPData.RankCurPage = curPage;
             }

             if (packet.HasTotalPage)
             {
                 PVPData.RankTotalPage = packet.TotalPage;
             }
             PVPData.RankIsPage = (packet.nameCount < 20);
             PVPData.RankType = packet.Type;
             if (packet.HasMerank && packet.Merank != -1)
             {
                 PVPData.meRank = (packet.Merank + 1).ToString();
             }
             else
             {
                 PVPData.meRank = Utils.GetDicByID(2059);
             }

             if (packet.Type == (int) Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE)
             {
                 for (int i =0; i < packet.nameCount; i++)
                 {  
                     string szRank = (curPage*20+(i+1)).ToString();
                     string szName = packet.GetName(i);
                     string szlevel = packet.GetLevel(i).ToString();
                     //string szPro = StrDictionary.GetClientDictionaryString("#{" + CharacterDefine.PROFESSION_DICNUM[packet.GetPro(i)].ToString() + "}");
                     string szTier = packet.GetTier(i).ToString();
                     string Sec = (packet.GetTime(i) % 60).ToString();
                     if (packet.GetTime(i) % 60 < 10)
                     {
                         Sec = "0" + (packet.GetTime(i) % 60).ToString();
                     }
                     string szTime = (packet.GetTime(i)/60).ToString() + ":" + Sec;
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, szName, szlevel,/* szPro,*/ szTier, szTime);
                 }   
             }
//             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARRANK)
//             {
//                 if (GuildWarInfoLogic.Instance())
//                 {
//                    GuildWarInfoLogic.Instance().UpdateGuildWarPreliminaryRankInfo(packet);
//                 }
//             }
//             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARKILLRANK)
//             {
//                 if (GuildWarInfoLogic.Instance())
//                 {
//                     GuildWarInfoLogic.Instance().UpdateGuildWarKillRankInfo(packet);
//                 }
//             }

             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetZhanji(i).ToString());
                 }
             }

             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetJinyaodai(i).ToString());
                 }
             }

             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetLevel(i).ToString());
                 }
             }

             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetCombatnum(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetHp(i).ToString());
                 }
             }
			else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK)
			{
				for (int i = 0; i < packet.nameCount; i++)
				{
					
					string szRank = (curPage * 20 + (i + 1)).ToString();
					
					PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetZhanji(i).ToString());
				}
			}
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION ||
                      packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION ||
                      packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION ||
                      packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION ||
                      packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetZhanji(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT)
             {
                for (int i = 0; i < packet.nameCount ; i++)
                {
                         
                    string szRank = (curPage * 20 + (i + 1)).ToString();

                    PVPData.AddRankDataItem(GlobeVar.INVALID_GUID, szRank, packet.GetName(i), packet.GetN64Value(i).ToString());
                }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i));
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetCoin(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetMastername(i), packet.GetTouchvalue(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetTotalcostyuanbao(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetTotalChongZhi(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetTotalChongZhi(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();

                     PVPData.AddRankDataItem(GlobeVar.INVALID_GUID,szRank, packet.GetName(i), packet.GetN64Value(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN)
             {
                 for (int i = 0; i < packet.nameCount; i++)
                 {

                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     int nDiffcult = packet.GetTier(i);
                     string szDiffcult = "";
                     if (1 == nDiffcult)
                     {
                        szDiffcult = StrDictionary.GetClientDictionaryString("#{3041}");
                     }
                     else if (2 == nDiffcult)
                     {
                         szDiffcult = StrDictionary.GetClientDictionaryString("#{3042}");
                     }
                     else if (3 == nDiffcult)
                     {
                         szDiffcult = StrDictionary.GetClientDictionaryString("#{3043}");
                     }                                                        
                     string Sec = (packet.GetTime(i) % 60).ToString();
                     if (packet.GetTime(i) % 60 < 10)
                     {
                         Sec = "0" + (packet.GetTime(i) % 60).ToString();
                     }
                     string szTime = (packet.GetTime(i) / 60).ToString() + ":" + Sec;

                     PVPData.AddRankDataItem(packet.GetGuid(i),szRank, packet.GetName(i), packet.GetLevel(i).ToString(), szDiffcult, szTime);
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME)
             {
                 int nTotalOnlineTime = 0;
                 int nHour = 0;
                 int nMinute = 0;
                 int nSecond = 0;
                 for (int i = 0; i < packet.nameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     nTotalOnlineTime = packet.GetTotalonlinetime(i);
                     nHour = nTotalOnlineTime / 3600;
                     nMinute = (nTotalOnlineTime % 3600)/60;
                     nSecond = nTotalOnlineTime %60;
                     string szOnlineTime = "";
                     szOnlineTime = StrDictionary.GetClientDictionaryString("#{3195}", nHour, nMinute, nSecond);
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), szOnlineTime);
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION)
             {
    
                 for (int i = 0; i < packet.nameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetDecoration(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION)
             {
                
                 for (int i = 0; i < packet.guilidNameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(GlobeVar.INVALID_GUID, szRank, packet.GetGuilidName(i), packet.GetN64Value(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE)
             {                         
                 for (int i = 0; i < packet.nameCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), Utils.GetProfessionNameByType(packet.GetPro(i)), packet.GetMdefense(i).ToString(), packet.GetPdefense(i).ToString());
                 }
             }
//			 else if(packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GIVEROSE)
//			 {
//				for (int i = 0; i < packet.guidCount; i++)
//				{
//					PVPData.AddRankDataItem(packet.GetGuid(i), packet.GetName(i),packet.GetTime(i).ToString());
//				}
//				if (LoverFlowerWindow.Instance())
//				{
//					if (packet.Merank != -1)
//					{
//						LoverFlowerWindow.Instance().m_MySonghuaRank.text = packet.Merank+1+"";
//					}
//					if (LoverFlowerWindow.Instance().IsFirstEnter)
//					{
//						return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
//					}
//					LoverFlowerWindow.Instance().m_rankCount = packet.guidCount;
//					LoverFlowerWindow.Instance().UpdateGiveRoseRankInfo(1);
//				}
//			 }
//			 else if(packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_RECEIVEROSE)
//			 {
//				for (int i = 0; i < packet.guidCount; i++)
//				{
//					PVPData.AddRankDataItem(packet.GetGuid(i), packet.GetName(i),packet.GetTime(i).ToString());
//				}
//				if (LoverFlowerWindow.Instance())
//				{
//					if (packet.Merank != -1)
//					{
//						LoverFlowerWindow.Instance().m_MyShouhuaRank.text = packet.Merank+1+"";
//					}
//					if (LoverFlowerWindow.Instance().IsFirstEnter)
//					{
//						return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
//					}
//					LoverFlowerWindow.Instance().m_rankCount = packet.guidCount;
//					LoverFlowerWindow.Instance().UpdateGiveRoseRankInfo(2);
//				}
//
//			 }
//             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO)
//             {
//
//                 for (int i = 0; i < packet.guidCount; i++)
//                 {
//                     string szRank = (curPage * 20 + (i + 1)).ToString();
//                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), packet.GetTime(i).ToString());
//                 }
//             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER)
             {

                 for (int i = 0; i < packet.guidCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), Utils.GetProfessionNameByType(packet.GetPro(i)),packet.GetLoudspeakernum(i).ToString());
                 }
             }
             else if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM)
             {

                 for (int i = 0; i < packet.guidCount; i++)
                 {
                     string szRank = (curPage * 20 + (i + 1)).ToString();
                     PVPData.AddRankDataItem(packet.GetGuid(i), szRank, packet.GetName(i), Utils.GetProfessionNameByType(packet.GetPro(i)),packet.GetCharmvalue(i).ToString());
                 }
             }

             if (packet.Type != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARKILLRANK &&
                packet.Type  != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARRANK &&
			    packet.Type  != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GIVEROSE &&
			    packet.Type  != (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_RECEIVEROSE)
             {
                 PVPData.ShowRankData();
             }
                 
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
