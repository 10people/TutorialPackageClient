//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;

namespace SPacket.SocketInstance
 {
     public class GC_COPYSCENE_RESULTHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_COPYSCENE_RESULT packet = (GC_COPYSCENE_RESULT )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
			if(packet.Result == 0)
			{
				UIManager.ShowUI(UIInfo.FailRoot);
			}
			else
			{
				VictoryScoreRoot.Clear();
				VictoryScoreRoot.m_nResult = packet.Result;
				VictoryScoreRoot.m_nSceneId = packet.SceneID;
				VictoryScoreRoot.m_Difficult = packet.Difficult;
				VictoryScoreRoot.m_nSolo = packet.IsSolo;
				VictoryScoreRoot.m_nStar = packet.Star;
				VictoryScoreRoot.m_nScore = packet.Score;
				VictoryScoreRoot.m_nCarom = packet.Carom;
				VictoryScoreRoot.m_nTime = packet.Time;
				VictoryScoreRoot.m_nExp = packet.Exp;
				VictoryScoreRoot.m_nMoney = packet.Money;
				VictoryScoreRoot.m_nDrawIndex = packet.DrawIndex;
				VictoryScoreRoot.m_nDrawIndexTwo = packet.DrawIndexTwo;
				VictoryScoreRoot.m_nPetExp = packet.PetExp;
				if (VictoryScoreRoot.m_nStar >= 5)
				{
					VictoryScoreRoot.m_FanPaiNumber = 2;
				}
				else
				{
					VictoryScoreRoot.m_FanPaiNumber = 1;
				}

	             if (VictoryScoreRoot.m_nStar < 5)
	             {
	                 VictoryScoreRoot.m_nDrawIndexTwo = -1;
	             }

	             for (int i = 0; i < packet.RewardTypeCount; i++)
	             {
	                 VictoryScoreRoot.addRewardList(packet.GetRewardType(i), packet.GetRewardItemId(i), packet.GetRewardCount(i));
	             }
	             for (int i = 0; i < packet.DrawTypeCount; i++)
	             {
	                 VictoryScoreRoot.addDrawList(packet.GetDrawType(i), packet.GetDrawItemId(i), packet.GetDrawCount(i));
	             }


	             for (int i = 0; i < packet.UserInSceneCount; i++)
	             {
	                 if (packet.GetUserInScene(i) != Games.GlobeDefine.GlobeVar.INVALID_GUID)
	                 {
	                     VictoryScoreRoot.addUserInScene(packet.GetUserInScene(i));
	                 }
	             }

	             UIManager.ShowUI(UIInfo.VictoryScoreRoot);
			}
            if (SkillBarLogic.Instance() != null)
            {
                SkillBarLogic.Instance().TransformCon.End();
            }
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
