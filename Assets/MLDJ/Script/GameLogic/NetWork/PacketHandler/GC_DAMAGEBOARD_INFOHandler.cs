//This code create by CodeEngine

using System;
using Games.GlobeDefine;
using Games.LogicObj;
using Games.SkillModle;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_DAMAGEBOARD_INFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_DAMAGEBOARD_INFO packet = (GC_DAMAGEBOARD_INFO )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            int objID = packet.ObjId;
            Obj_Character _objChar = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(objID);
            if (_objChar ==null)
            {
               return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            int nType = packet.Type;
            int nValue = packet.Value;
            //冒伤害板数字
            int nShowTimes = -1;
            float fShowInter = 0.0f;
            if (packet.HasShowtimes && packet.HasShowinter)
            {
                nShowTimes = packet.Showtimes;
                fShowInter = packet.Showinter/1000.0f;
            }
            //需要多次冒泡的特殊处理
            if (nShowTimes>0) 
            {
                MultiShowDamageBoard _damageBoardInfo =new MultiShowDamageBoard();
                _damageBoardInfo.CleanUp();
                _damageBoardInfo.ShowTimes =nShowTimes;
                _damageBoardInfo.ShowInter =fShowInter;
                _damageBoardInfo.DamageType =(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE)(nType);
                _damageBoardInfo.ShowValue = nValue/nShowTimes;
                _objChar.MultiShowDamageInfo.Add(_damageBoardInfo);
                _objChar.UpdateShowMultiShowDamageBoard();
            }
            else //不需要分多次冒泡的
            {
                if (_objChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                {
                    _objChar.OnAnimationIsHit();
                    if (_objChar.NpcEdgeGlow != null)
                    {
                        _objChar.NpcEdgeGlow.UpdateRimPow_NPC();

                        Obj_NPC objNPC = _objChar as Obj_NPC;
                        if (objNPC.NpcType == GameDefine_Globe.NPC_TYPE.BOSS)
                        {
                            if (objNPC.NpcEdgeGlow != null)
                            {
                               // objNPC.NpcEdgeGlow.UpdateOutLine();   
                                objNPC.NpcEdgeGlow.UpdateRimPower();
                            }
                        }
                    }
                    //打击音效放在这里,暂时声音可能会有多份，并没有间隔
                    if (packet.HasAddanimstate && packet.Addanimstate > 0)
                    {
                        _objChar.PlaySoundAtPos(_objChar.ObjType, packet.Addanimstate, _objChar.Position);
                    }
                }
               _objChar.ShowDamageBoard((Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE)(nType), nValue);
            }
            //连击点的模拟显示
            if (packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_HPDOWN_PLAYER ||
                packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL)
            {
                Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (_mainPlayer)
                {
                    bool bIsCritical=(packet.Type == (int)Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL ? true : false);
                    int incHitPoint =1;
                    _mainPlayer.ChangeHit(incHitPoint, bIsCritical);
                }  
            }
            //伤害带来的附加音效 Demo没有这些职业，先去掉
            /*if (packet.HasAddanimstate)
            {
                if (packet.Addanimstate == (int)Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYSHAOLIN)
                {
                    _objChar.PlaySoundAtPos(_objChar.ObjType, 4, _objChar.Position);   //attack1_gun
                }
                else if (packet.Addanimstate == (int)Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYTIANSHAN)
                {
                    _objChar.PlaySoundAtPos(_objChar.ObjType, 2, _objChar.Position);   //attack1_dao
                }
                else if (packet.Addanimstate == (int)Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYDALI)
                {
                    _objChar.PlaySoundAtPos(_objChar.ObjType, 0, _objChar.Position);   //attack_jian
                }
                else if (packet.Addanimstate == (int)Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYXIAOYAO)
                {
                    _objChar.PlaySoundAtPos(_objChar.ObjType, 3, _objChar.Position);   //attack1_fu
                }
                else if (packet.Addanimstate == (int)Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HITBYGAIBANG)
                {
                    _objChar.PlaySoundAtPos(_objChar.ObjType, 167, _objChar.Position);   //attack2_gun
                }
            }
            */
           
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
