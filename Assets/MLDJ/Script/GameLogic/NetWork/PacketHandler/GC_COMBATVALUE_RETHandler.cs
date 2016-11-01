//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using UnityEngine;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_COMBATVALUE_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_COMBATVALUE_RET packet = (GC_COMBATVALUE_RET )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                if (packet.ShowPowerRemind == 1)
                {
                    int nNewCombatValue = packet.CombatValue;
                    int nAddCombatValue = nNewCombatValue - Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue;
                    if (nAddCombatValue > 0)
                    {
                        PowerRemindLogic.InitPowerInfo(nNewCombatValue, nAddCombatValue);  
                    }
                }

                Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue = packet.CombatValue;

                if (BackPackLogic.Instance())
                {
                    //设置了客户端战斗力之后更新背包界面
                    BackPackLogic.Instance().UpdatePlayerInfo();
                }

                if (PVPPowerWindow.Instance())
                {
                    PVPPowerWindow.Instance().UpdateCombatValue();
                }
                if (RoleViewLogic.Instance() !=null)
                {
                    RoleViewLogic.Instance().OnCombatChange();
                }
                if (FlyWingRoot.Instance() != null)
                {
                    FlyWingRoot.Instance().SetFlightVlue(packet.CombatValue);
                }
                if (PlayerFrameLogic.Instance())
                {
                    PlayerFrameLogic.Instance().ChangeCombatValue(packet.CombatValue);
                }
            }
            else
            {
                GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.CombatValue = packet.CombatValue;
            }
#if UNITY_ANDROID
            // 台湾安卓渠道特有
            if (PlatformHelper.IsChannelTW())
            {
                int newCombatValue = packet.CombatValue;
                // 提交战力排行榜数据
                PlatformHelper.SubmitRankScore(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_RANK_TYPE.COMBAT_VALUE, newCombatValue);
                // 解锁战力成就
                if (newCombatValue >= 1000000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_100);
                }
                else if (newCombatValue >= 700000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_70);
                }
                else if (newCombatValue >= 500000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_50);
                }
                else if (newCombatValue >= 300000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_30);
                }
                else if (newCombatValue >= 200000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_20);
                }
                else if (newCombatValue >= 100000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_10);
                }
                else if (newCombatValue >= 50000)
                {
                    PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.COMBAT_VALUE_5);
                }
            }
#endif
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
