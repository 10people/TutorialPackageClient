
//This code create by CodeEngine

using System;
using System.Diagnostics;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_SYN_SKILLINFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYN_SKILLINFO packet = (GC_SYN_SKILLINFO )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            PlayerData playerDataPool = GameManager.gameManager.PlayerDataPool;
            //先清除
            for (int skillIndex = 0; skillIndex < playerDataPool.OwnSkillInfo.Length; skillIndex++)
            {
                playerDataPool.OwnSkillInfo[skillIndex].CleanUp();
            }
            for (int i=0;i<packet.skillidCount;i++)
            {
                int nIndex = packet.GetSkillindex(i);
                if (nIndex >=0 && nIndex<playerDataPool.OwnSkillInfo.Length)
                {
                    playerDataPool.OwnSkillInfo[nIndex].SkillId = packet.GetSkillid(i);
                    //冷却时间
                    playerDataPool.OwnSkillInfo[nIndex].CDTime = packet.GetCDTime(i);
                    playerDataPool.OwnSkillInfo[nIndex].LevelUpExp = packet.GetSkillExp(i);

                    //如果这个技能被废除，客户端启用的技能Index值也对应清理一下
                    if (playerDataPool.OwnSkillInfo[nIndex].SkillId == -1)
                    {

                        if (PlayerPreferenceData.PVESkillIdCurUsing == nIndex)
                        {
                            PlayerPreferenceData.PVESkillIdCurUsing = -1;
                        }

                        if (PlayerPreferenceData.PVPSkillIdCurUsing == nIndex)
                        {
                            PlayerPreferenceData.PVPSkillIdCurUsing = -1;
                        }
                    }
                }
            }
            if (Singleton<ObjManager>.GetInstance().MainPlayer !=null)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.UpdateSkillInfo();
            }
            if (PVPPowerWindow.Instance())
            {
                PVPPowerWindow.Instance().UpdateSkillList();
            }
//             if (SkillRootLogic.Instance())
//             {
//                if (packet.HasIsSkillLevelUp && packet.IsSkillLevelUp ==1)
//               {
//                     if (null != GameManager.gameManager)
//                     {
//                         GameManager.gameManager.SoundManager.PlaySoundEffect(141);  //skill_levelup
//                     }
//                    SkillRootLogic.Instance().PlaySkillLevelUpEffect();
//                }
//                
//                 SkillRootLogic.Instance().UpdateSkillInfo();
//            
            if(SkillLevelUpRoot.Instance())
            {
                if (packet.HasIsSkillLevelUp && packet.IsSkillLevelUp == 1)
                {
                    if (null != GameManager.gameManager)
                    {
                        GameManager.gameManager.SoundManager.PlaySoundEffect(141);  //skill_levelup
                    }
                    SkillLevelUpRoot.Instance().PlaySkillLevelUpEffect();
                    SkillLevelUpRoot.Instance().PlayLevelupEffect();
                }
                SkillLevelUpRoot.Instance().UpdateSkillInfo();
                if (SkillLevelUpRoot.Instance().DelUpdateSkillMenu != null)
                {
                    SkillLevelUpRoot.Instance().DelUpdateSkillMenu();
                }
            }
            if (GUIData.delMasterDataUpdate != null)
            {
                GUIData.delMasterDataUpdate();
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
