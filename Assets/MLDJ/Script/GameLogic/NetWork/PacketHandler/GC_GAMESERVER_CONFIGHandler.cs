//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
     public class GC_GAMESERVER_CONFIGHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_GAMESERVER_CONFIG packet = (GC_GAMESERVER_CONFIG)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
             bool bRankFlagOrTime = false;
            if (packet.HasUsercostrankopenflag)
            {
                GlobalData.IsOpenConsumeRank = packet.Usercostrankopenflag > 0 ? true : false;
                bRankFlagOrTime = true;
            }
            if (packet.HasChristmasopenflag)
            {
                GlobalData.IsOpenChristmas = packet.Christmasopenflag > 0 ? true : false;
                bRankFlagOrTime = true;
            }
            if (packet.HasChongzhirankopenflag)
            {
                GlobalData.IsOpenChongZhiRank = packet.Chongzhirankopenflag > 0 ? true : false;
                bRankFlagOrTime = true;
            }
            if (packet.HasChongzhistarttime)
            {
                GlobalData.ChongZhiStartTime = packet.Chongzhistarttime;
                bRankFlagOrTime = true;
            }
            if (packet.HasChongzhiendtime)
            { 
                GlobalData.ChongZhiEndTime = packet.Chongzhiendtime;
                bRankFlagOrTime = true;
            }

            if (packet.HasSpchongzhirankopenflag)
            {
                GlobalData.IsOpenSpChongZhiRank = packet.Spchongzhirankopenflag > 0 ? true : false;
                bRankFlagOrTime = true;
            }
            if (packet.HasSpchongzhistarttime)
            {
                GlobalData.SpChongZhiStartTime = packet.Spchongzhistarttime;
                bRankFlagOrTime = true;
            }
            if (packet.HasSpchongzhiendtime)
            {
                GlobalData.SpChongZhiEndTime = packet.Spchongzhiendtime;
                bRankFlagOrTime = true;
            }

            if (packet.HasChristmasstarttime)
            {
                GlobalData.ChristmasStartTime = packet.Christmasstarttime;
                bRankFlagOrTime = true;
            }
            if (packet.HasChristmasendtime)
            {
                GlobalData.ChristmasEndTime = packet.Christmasendtime;
                bRankFlagOrTime = true;
            }
            if (packet.HasVillainOpenFlag)
            {
                GlobalData.IsOpenVillain = packet.VillainOpenFlag > 0 ? true : false;
            }
            if (packet.HasVillainstarttime1)
            {
                GlobalData.VillainStartTimeOne = packet.Villainstarttime1;
            }
            if (packet.HasVillainendtime1)
            {
                GlobalData.VillainEndTimeOne = packet.Villainendtime1;
            }
            if (packet.HasVillainstarttime2)
            {
                GlobalData.VillainStartTimeTwo = packet.Villainstarttime2;
            }
            if (packet.HasVillainendtime2)
            {
                GlobalData.VillainEndTimeTwo = packet.Villainendtime2;
            }
            if (packet.HasVillainOpenFlag || packet.HasVillainstarttime1 || packet.HasVillainendtime1 ||
                packet.HasVillainstarttime2 || packet.HasVillainendtime2)
             {
                 if (ActivityController.Instance() != null)
                 {
                     ActivityController.Instance().UpdateVillainTime();
                 }          
             }
             
            if(packet.HasLoverflowerstarttime)
			{
				GlobalData.LoverFlowerStartTime = packet.Loverflowerstarttime;
			}
			if(packet.HasLoverflowerendtime)
			{
				GlobalData.LoverFlowerEndTime = packet.Loverflowerendtime;
			}
			if(packet.HasLoverthingstarttime)
			{
				GlobalData.LoverThingStartTime = packet.Loverthingstarttime;
			}
			if(packet.HasLoverthingendtime)
			{
				GlobalData.LoverThingEndTime = packet.Loverthingendtime;
			}

            // ºì°üÏà¹Ø
            if (packet.HasNHongBaoOpenFlag)
            {
                GlobalData.IsOpenHongBao = (packet.NHongBaoOpenFlag == 1?true:false);
                bRankFlagOrTime = true;
            }
//            if (packet.HasNHongBaoStarttime && packet.HasNHongBaoEndtime && packet.HasNHongBaoRankEndtime)
//            {
//                GlobalData.HongBaoStartTime = packet.NHongBaoStarttime;
//                GlobalData.HongBaoEndTime = packet.NHongBaoEndtime;
//                GlobalData.HongBaoRankEndTime = packet.NHongBaoRankEndtime;
//                bRankFlagOrTime = true;
//                if (HongBaoWindow.Instance())
//                {
//                    HongBaoWindow.Instance().UpdateActTime();
//                }
//            }

			if (packet.HasNianShouOpenFlag)
			{
				if(packet.NianShouOpenFlag == 1)
				{
					GlobalData.IsOpenNianShou = true;
				}
				else if(packet.NianShouOpenFlag == -1)
				{
					GlobalData.IsOpenNianShou = false;
				}
			}
			if (packet.HasNianShoustarttime1)
			{
				GlobalData.NianShouStartTimeOne = packet.NianShoustarttime1;
			}
			if (packet.HasNianShouendtime1)
			{
				GlobalData.NianShouEndTimeOne = packet.NianShouendtime1;
			}
			if (packet.HasNianShoustarttime2)
			{
				GlobalData.NianShouStartTimeTwo = packet.NianShoustarttime2;
			}
			if (packet.HasNianShouendtime2)
			{
				GlobalData.NianShouEndTimeTwo = packet.NianShouendtime2;
			}

            if(packet.HasWulinOpenFlag)
            {
                GlobalData.IsOpenWuLinFlag = packet.WulinOpenFlag == 1;
            }

            if(packet.HasWulinOpenWeek1)
            {
                GlobalData.WuLinOpenWeek1 = packet.WulinOpenWeek1;
            }

            if(packet.HasWulinOpenTime1)
            {
                GlobalData.WuLinOpenTime1 = packet.WulinOpenTime1;
            }

            if (packet.HasWulinCloseTime1)
            {
                GlobalData.WuLinCloseTime1 = packet.WulinCloseTime1;
            }

            if (packet.HasWulinOpenWeek2)
            {
                GlobalData.WuLinOpenWeek2 = packet.WulinOpenWeek2;
            }

            if (packet.HasWulinOpenTime2)
            {
                GlobalData.WuLinOpenTime2 = packet.WulinOpenTime2;
            }

            if (packet.HasWulinCloseTime2)
            {
                GlobalData.WuLinCloseTime2 = packet.WulinCloseTime2;
            }

             if (packet.HasIsOpenHeroReturn)
             {
                 GlobalData.IsOpenHeroReturn = (packet.IsOpenHeroReturn == 1 ? true : false);
             }
             if (packet.HasHeroReturnOpenTime)
             {
                 GlobalData.HeroReturnOpenTime = packet.HeroReturnOpenTime;
             }

             if (packet.HasHeroReturnCloseTime)
             {
                 GlobalData.HeroReturnCloseTime = packet.HeroReturnCloseTime;
             } 
             if (packet.HasLoudSpeakeropenflag)
             {
                 GlobalData.IsOpenLoudSpeakerRankFlag = (packet.LoudSpeakeropenflag == 1 ? true : false);
                 bRankFlagOrTime = true;
             }
             if (packet.HasCharmopenflag)
             {
                 GlobalData.IsOpenCharmRankFlag = (packet.Charmopenflag == 1 ? true : false);
                 bRankFlagOrTime = true;
             } 
             if (bRankFlagOrTime && RankWindow.Instance() != null)
             {
                 RankWindow.Instance().OnRankOpenFlagChange();
             }
             if (packet.HasEnterAutoCombatTime)
             {
                 GlobalData.EnterAutoCombatTime = packet.EnterAutoCombatTime;
             }
             if (packet.HasNewSrverAwardFlag)
             {
                 GlobalData.IsOpenNewServerAwardFlag = (packet.NewSrverAwardFlag == 1);
             }
             if (packet.HasNewServerAwardOpenTime)
             {
                 GameManager.gameManager.PlayerDataPool.NStartTime = packet.NewServerAwardOpenTime;
             }
             if (packet.HasNewServerAwardEndTime)
             {
                 GameManager.gameManager.PlayerDataPool.NEndTime = packet.NewServerAwardEndTime;
                 if (AwardLogic.Instance() != null)
                 {
                    AwardLogic.Instance().UpdateTabButton(AwardLogic.TabType.NewServerAward,GlobalData.IsOpenNewServerAwardFlag);
                 }
                 
             }
             
             if (packet.HasCarnivalOpenFlag)
             {
               GlobalData.IsOpenSevenDaysRewardFlag = (packet.CarnivalOpenFlag == 1);
             }
             if (FunctionButtonLogic.Instance() != null) {
               FunctionButtonLogic.Instance().UpdateNewFunctionButtonState(FunctionButtonLogic.DynamicLogo.SevenDays);
             }
             
             if (packet.HasContinuLoginFlag)
             {
                 GlobalData.IsOpenContinueLoginAwardFlag = (packet.ContinuLoginFlag == 1);
                 if (AwardLogic.Instance() != null)
                 {
                     AwardLogic.Instance().UpdateTabButton(AwardLogic.TabType.TianDao, GlobalData.IsOpenContinueLoginAwardFlag);
                 }
                 
             }
                             
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
