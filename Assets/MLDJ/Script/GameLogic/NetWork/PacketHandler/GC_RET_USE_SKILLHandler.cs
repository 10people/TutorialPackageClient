//This code create by CodeEngine

using System;
using System.Runtime.Remoting.Lifetime;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.SkillModle;
using GCGame.Table;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using UnityEngine;
using Games.AI_Logic;
using Games.UserCommonData;
namespace SPacket.SocketInstance
{
    public class GC_RET_USE_SKILLHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_USE_SKILL packet = (GC_RET_USE_SKILL)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            int nSkillId = packet.HasFixedSkillId ? packet.FixedSkillId : packet.SkillId;
            int nSenderId = packet.SenderId;
            int nTargetID = packet.TargetId;

            Obj_Character Sender = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(nSenderId);
            if (Sender == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;

            }
            if (Sender.SkillCore == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }
            int nFailType = (int)SKILLUSEFAILTYPE.INVALID;
            if (packet.HasSkillfailType)
            {
                nFailType = packet.SkillfailType;
            }
            string szSkillName = "";
            if (packet.HasSkillname)
            {
                szSkillName = packet.Skillname;
            }
            if (nFailType == (int)SKILLUSEFAILTYPE.DISTANCE)
            {
                if (Sender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                {
                    //服务器认定 距离不够 再往前走点
                    Obj_Character targetCharacter = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(nTargetID);
                    if (targetCharacter)
                    {
                        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
                        if (_skillEx != null)
                        {
                            if (Sender.SkillCore.IsUsingSkill)
                            {
                                Sender.SkillCore.BreakCurSkill();
                            }
                            Singleton<ObjManager>.GetInstance().MainPlayer.CurUseSkillId = nSkillId;
                            Singleton<ObjManager>.GetInstance().MainPlayer.MoveTo(targetCharacter.Position, targetCharacter.gameObject, _skillEx.Radius - 2.0f);
                        }
                    }
                }
            }
            else
            {
                //结婚相关特殊表现
                if (nSkillId == GlobeVar.MARRY_SKILL_2)
                {
                    Sender.SkillCore.BreakCurSkill();
                    Sender.FaceTo(new UnityEngine.Vector3(13.79419f, 0.9015087f, 30.36249f));
                }
                //结婚相关特殊表现
                if (nSkillId == GlobeVar.MARRY_SKILL_1)
                {
                    Sender.SkillCore.BreakCurSkill();
                    Sender.FaceTo(new UnityEngine.Vector3(13.79419f, 0.9015087f, 4.068859f));
                }
                if (szSkillName != "")
                {
                    Sender.SkillCore.UseSkill(nSkillId, nSenderId, nTargetID, szSkillName);
                }
                else
                {
                    Sender.SkillCore.UseSkill(nSkillId, nSenderId, nTargetID);
                }

                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
            }

            if(Sender is Obj_MainPlayer)
            {
                //if the main player in the state of changing mode

                int nImpactCount = GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Count;

                Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);

                Tab_SkillBase _skillBase = null;

                int nSkillIndex = -1;
                int nChangeState = -1;
                if (null != _mainPlayer)
                {
                    for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; i++)
                    {
                        if (_mainPlayer.OwnSkillInfo[i].SkillId == nSkillId)
                        {
                            nSkillIndex = i;
                            break;
                        }
                    }

                    nChangeState = _mainPlayer.GetCurrentChangeState();

                    // added by mawenbin
                    // 缓存玩家使用的技能，用于挂机连续技的判定
                    AI_PlayerCombat aiPlayerCombat = _mainPlayer.GetComponent<AI_PlayerCombat>();
                    if (null != aiPlayerCombat && Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER == Sender.ObjType)
                    {
                        aiPlayerCombat.CurUseSkillId = nSkillId;
                    }
                }

                if (null != _skillEx)
                {
                    _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                }

                if (null != _skillBase)
                {
                    if (null != SkillBarLogic.Instance())
                    {
                        //if the skill is xp skill and can put into skillbar
                        if ((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0
                            && (_skillBase.SkillClass & (int)SKILLCLASS.XP) == 0
                            && (_skillBase.GetChangeModebyIndex(_mainPlayer.CurChangeState) > 0)
                            && (_skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0)
                        {
                            for (int i = 0; i < SkillBarLogic.Instance().MySkillBarInfo.Length; i++)
                            {
                                if (nSkillId == SkillBarLogic.Instance().MySkillBarInfo[i].CurSkillId)
                                {
                                    SkillBarLogic.Instance().MySkillBarInfo[i].nPreSkillId = nSkillId;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].fCurrentStartTime = Time.realtimeSinceStartup;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].fCurDisabledStartTime = Time.realtimeSinceStartup;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].nCurrentCDTime = _skillEx.NextSkillEffectTime / 1000.0f;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].fRemainCDTime = _skillEx.NextSkillEffectTime / 1000.0f;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].fDisabledRemTime = _skillEx.NextSkillDisabledTime / 1000.0f;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].fCurDisabedTime = _skillEx.NextSkillDisabledTime / 1000.0f;
                                    SkillBarLogic.Instance().MySkillBarInfo[i].SkillCount++;
                                    if (false == GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_COMBO_FIRSTUSED))
                                    {
                                        if (nSkillId == GlobeVar.SHUANGJIANSHI_SKILL1_COMBO1 || nSkillId == GlobeVar.SHUANGJIANSHI_SKILL1_COMBO2)
                                        {
                                            SkillBarLogic.Instance().MySkillBarInfo[i].nCurrentCDTime = 10;
                                            SkillBarLogic.Instance().MySkillBarInfo[i].fRemainCDTime = 10;
                                        }
                                    }
                                    SkillBarLogic.Instance().SetSkillBarInfoForNext(i, _skillEx.NextContinueSkillId);

                                    //第一个连续技能来了，要有提示
                                    if (nSkillIndex != -1 && nSkillIndex == SkillBarLogic.Instance().MySkillBarInfo[i].SkillIndex)
                                    {
                                        if (null != ComboSkillTipLogic.Instance())
                                        {
                                            System.Collections.Generic.List<string> iconList = SkillBarLogic.Instance().GetContinueSkillIcons(_skillBase);
                                            ComboSkillTipLogic.Instance().Show(i,iconList.Count, iconList);
                                        }
                                    }

                                    if (null != ComboSkillTipLogic.Instance())
                                    {
                                        ComboSkillTipLogic.Instance().SetStep(i, SkillBarLogic.Instance().MySkillBarInfo[i].SkillCount);
                                    }
                                    if (_skillBase.NextIndex == _skillBase.FirstIndex)
                                    {
                                        SkillBarLogic.Instance().MySkillBarInfo[i].isCompleted = true;
                                        SkillBarLogic.Instance().MySkillBarInfo[i].SkillCount = 0;
                                    }

                                   
                                    break;
                                }
                                
                            }

                        }
                    }

                    //if it is xpSkill and attackSkill
                    if (((_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                        && _skillBase.GetChangeModebyIndex(_mainPlayer.CurChangeState) >= 0
                        && SkillBarLogic.Instance()._AttackBarInfo != null)
                    {
                        SkillBarLogic.Instance()._AttackBarInfo.fCurrentStartTime = Time.realtimeSinceStartup;
                        SkillBarLogic.Instance()._AttackBarInfo.fCurDisabledStartTime = Time.realtimeSinceStartup;
                        SkillBarLogic.Instance()._AttackBarInfo.nCurrentCDTime = _skillEx.NextSkillEffectTime;
                        SkillBarLogic.Instance()._AttackBarInfo.fRemainCDTime = _skillEx.NextSkillEffectTime;
                        SkillBarLogic.Instance()._AttackBarInfo.fDisabledRemTime = _skillEx.NextSkillDisabledTime;
                        SkillBarLogic.Instance()._AttackBarInfo.fCurDisabledTime = _skillEx.NextSkillDisabledTime;
                        SkillBarLogic.Instance()._AttackBarInfo.nCurSkillId = _skillEx.NextContinueSkillId;
                    }
                }
            }


            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
