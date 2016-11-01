//This code create by CodeEngine

using System;
using System.Collections.Generic;
using Games.ImpactModle;
using Games.LogicObj;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using UnityEngine;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_UPDATE_NEEDIMPACTINFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UPDATE_NEEDIMPACTINFO packet = (GC_UPDATE_NEEDIMPACTINFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            bool bHasRemoveOP = false;
            for (int nImpactIndex = 0; nImpactIndex < packet.impactIdCount; nImpactIndex++)
            {
                if (packet.GetImpactId(nImpactIndex) == -1)
                {
                    continue;
                }
                //添加
                if (nImpactIndex < packet.isAddCount && packet.GetIsAdd(nImpactIndex) == 1)
                {
                    ClientImpactInfo _impactInfo = new ClientImpactInfo();
                    _impactInfo.CleanUp();
                    _impactInfo.ImpactId = packet.GetImpactId(nImpactIndex);
                    if (nImpactIndex < packet.impactLogicIdCount)
                    {
                        _impactInfo.ImpactLogicId = packet.GetImpactLogicId(nImpactIndex);
                    }
                    if (nImpactIndex < packet.isForeverCount)
                    {
                        _impactInfo.IsForever = (packet.GetIsForever(nImpactIndex) == 1 ? true : false);
                    }
                    if (nImpactIndex < packet.remainTimeCount)
                    {
                        _impactInfo.RemainTime = packet.GetRemainTime(nImpactIndex) / 1.0f;
                    }
                    GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Add(_impactInfo);

                    if (_impactInfo.ImpactId == GlobeVar.MOUNTCRASH_IMPACTID)
                    {
                        if (BackCamerControll.Instance() != null)
                        {
                            BackCamerControll.Instance().PlaySceneEffect(434);
                        }
                    }
                }
                else //移除
                {
                    for (int i = 0; i < GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Count; i++)
                    {
                        if (GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].ImpactId == packet.GetImpactId(nImpactIndex))
                        {
                            if (GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].ImpactId == GlobeVar.MOUNTCRASH_IMPACTID)
                            {
                                if (BackCamerControll.Instance() != null)
                                {
                                    BackCamerControll.Instance().StopSceneEffect(434, false);
                                }
                            }

                            if (GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].ImpactId >= GlobeVar.XP_IMPACT_MIN_ID && GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].ImpactId <= GlobeVar.XP_IMPACT_MAX_ID)
                            {
                                bHasRemoveOP = true;
                            }
                            ClientImpactInfo _TmpInfo = new ClientImpactInfo();
                            _TmpInfo.CleanUp();
                            GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i] = _TmpInfo;
                        }
                    }
                }
            }
            //清除无效的
            List<ClientImpactInfo> impactList = new List<ClientImpactInfo>();
            for (int i = 0; i < GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Count; ++i)
            {
                if (GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i].IsVaild() == false)
                {
                    impactList.Add(GameManager.gameManager.PlayerDataPool.ClientImpactInfo[i]);
                }
            }

            for (int i = 0; i < impactList.Count; ++i)
            {
                GameManager.gameManager.PlayerDataPool.ClientImpactInfo.Remove(impactList[i]);
            }
            //更新主角头像图标
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().UpdateBuffIcon();
            }

            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer != null && _mainPlayer.GetCurrentChangeState() != _mainPlayer.CurChangeState)
            {
                _mainPlayer.CurChangeState = _mainPlayer.GetCurrentChangeState();
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().OnClickXpClose();
                }

                if ((int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 == _mainPlayer.CurChangeState
                    || (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1 == _mainPlayer.CurChangeState)
                {
                    Singleton<ObjManager>.GetInstance().ChangeMainPlayer();
                }
                else
                {
                    if ((int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.NORMAL == _mainPlayer.CurChangeState)
                    {
                        Singleton<ObjManager>.GetInstance().ChangeMainPlayerToNormal();
                    }
                }
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().CleanUpSkillBarInfo();
                    SkillBarLogic.Instance().UpdateSkillBarInfo();
                    SkillBarLogic.Instance().CleanUpAttackBarInfo();
                    SkillBarLogic.Instance().SetChangeModeAttackBtn();
                    SkillBarLogic.Instance().UpdateSkillActiveByChangeState(_mainPlayer.CurChangeState);
                }
            }
            //             //当移除了变身之后，需要恢复原先的技能
            //             if ( bHasRemoveOP && _mainPlayer != null && SkillBarLogic.Instance()
            //                  && _mainPlayer.CurChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.NORMAL)
            //             {
            //                 SkillBarLogic.Instance().ShowAfterChangeSkill(false);
            //                 SkillBarLogic.Instance().CleanUpSkillBarInfo();
            //                 SkillBarLogic.Instance().SaveNotChangeModeSkillBarInfo();
            //                 SkillBarLogic.Instance().OnClickXpClose();
            //             }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
