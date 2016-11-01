//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame.Table;
namespace SPacket.SocketInstance
{
    public class GC_MOVEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_MOVE packet = (GC_MOVE)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            //��ʱ���룬�ȷ��أ����Ե�ʱ���
            //return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;

            //�ж�ServerID
            if (packet.Serverid == GlobeVar.INVALID_ID)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //���Ҹ�NPC
            Obj_Character obj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.Serverid);
            if (null == obj)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //����ң���Ϣ����Ч
            if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            //����һ�飬��Ϣ����Ч
            if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
            {
                Obj_Fellow objFellow = obj as Obj_Fellow;
                if (objFellow.OwnerObjId == Singleton<ObjManager>.GetInstance().MainPlayer.ServerID)
                {
                    return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
                }
            }

            if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer objOther = obj as Obj_OtherPlayer;
                if (null != objOther)
                {
                    if (objOther.QingGongState == true || objOther.IsLightState == true || objOther.BindParent > 0)
                    {
                        return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
                    }

                    if (objOther.AnimLogic != null && objOther.AnimLogic.CurAnimData != null)
                    {
                        if (objOther.AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Hit)
                        {
                            objOther.AnimLogic.Stop();
                        }
                        else if (objOther.SkillCore != null && objOther.SkillCore.UsingSkillBaseInfo != null && objOther.SkillCore.UsingSkillBaseInfo.IsMove != 1)
                        {
                            int nAnimationId = objOther.SkillCore.UsingSkillStartAni;
                            while (nAnimationId != GlobeVar.INVALID_ID)
                            {
                                if (nAnimationId == objOther.AnimLogic.CurAnimData.AnimID)
                                {
                                    objOther.AnimLogic.Stop();
                                    break;
                                }

                                Tab_Animation tabAnimation = TableManager.GetAnimationByID(nAnimationId, 0);
                                if (tabAnimation == null)
                                {
                                    break;
                                }

                                nAnimationId = tabAnimation.NextAnimId;
                            }
                        }
                    }

                    if (objOther.SkillCore.UsingSkillStartAni != GlobeVar.INVALID_ID && objOther.SkillCore.UsingSkillBaseInfo == null)
                    {
                        objOther.SkillCore.UsingSkillStartAni = GlobeVar.INVALID_ID;
                    }
                }
            }

            //����Obj�Ƿ��AutoMove���
			AutoMove autoMove = obj.AutoMoveComponent;
            if (null != autoMove)
            {
                autoMove.InsertAutoMovePoint(packet);
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
