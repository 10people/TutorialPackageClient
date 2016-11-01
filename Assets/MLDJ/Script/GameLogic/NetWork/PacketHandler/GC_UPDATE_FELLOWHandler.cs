//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.Fellow;
using System.Collections.Generic;
using Games.LogicObj;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_UPDATE_FELLOWHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UPDATE_FELLOW packet = (GC_UPDATE_FELLOW)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //ȡ�û���������е�����
            int index = packet.Packindex;
            FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
            if (container != null)
            {
                Fellow fellow = container.GetFellowByIndex(index);
                if (fellow != null)
                {
                    //GUID
                    fellow.Guid = packet.Guid;
                    //ID
                    fellow.DataId = packet.Dataid;
                    //�ǳ�
                    fellow.Name = packet.Name;
                    //Ʒ��
                    if (packet.HasQuality)
                    {
                        fellow.Quality = packet.Quality;
                    }
                    //����
                    if (packet.HasExp)
                    {
                        fellow.Exp = packet.Exp;
                    }                  
                    //����
                    if (packet.HasLevel)
                    {
                        fellow.Level = packet.Level;
                    }
                    //���ǵȼ�
                    if (packet.HasStarexp)
                    {
                        fellow.StarExp = packet.Starexp;
                    }
                    //���ǵȼ�
                    if (packet.HasStarlevel)
                    {
                        fellow.StarLevel = packet.Starlevel;
                    }
                    //�ɳ���
                    //if (packet.HasGrowup)
                    //{
                    //    fellow.GrowUp = (float)packet.Growup / 100.0f;
                    //}
                    //����ֵ
                    if (packet.HasLucky)
                    {
                        fellow.Lucky = packet.Lucky;
                    }
                    //��ǰ���÷�ֳ����
                    if (packet.HasProcreatecount)
                    {
                        fellow.ProcreateCount = packet.Procreatecount;
                    }
                    //Ԫ������
                    if (packet.HasElementattr)
                    {
                        fellow.ElementAttr = packet.Elementattr;
                    }
                    //����
                    if (packet.HasIslock)
                    {
                        fellow.Locked = (packet.Islock == 1) ? true : false;
                    }
                    //��ʼ��Χ����
                    if (packet.HasBaseattack)
                    {
                        fellow.BaseAttack = packet.Baseattack;
                    }
                    if (packet.HasBasehit)
                    {
                        fellow.BaseHit = packet.Basehit;
                    }
                    if (packet.HasBasecritical)
                    {
                        fellow.BaseCritical = packet.Basecritical;
                    }
                    if (packet.HasBaseguard)
                    {
                        fellow.BaseGuard = packet.Baseguard;
                    }
                    if (packet.HasBasebless)
                    {
                        fellow.BaseBless = packet.Basebless;
                    }
                    if (packet.tallentskillidCount > 0 && packet.tallentskilllevelCount > 0 )
                    {
                        fellow.TallentSkill.Clear();
                        for (int i = 0; i < packet.tallentskillidCount && i < packet.tallentskilllevelCount; i++)
                        {
                            if (false == fellow.TallentSkill.ContainsKey(packet.tallentskillidList[i]))
                            {
                                fellow.TallentSkill.Add(packet.tallentskillidList[i], packet.tallentskilllevelList[i]);
                            }
                        }
                    }
                    for (int i = 0; i < packet.elementskillidCount; i++ )
                    {
                        if (false == fellow.IsHaveSkillId(packet.elementskillidList[i]))
                        {
                            fellow.SetElementSkillId(packet.elementskillidList[i], i);
                        }
                    }
                    
                   if (PartnerFrameLogic.Instance() != null)
                   {
                       	PartnerFrameLogic.Instance().UpdateFellowInfo_Refresh();
						if(PartnerFrameLogic.Instance().rebirthFellowGuid != GlobeVar.INVALID_GUID)
						{
							PartnerFrameLogic.Instance().InitPartnerList(PartnerFrameLogic.Instance().rebirthFellowGuid);
							PartnerFrameLogic.Instance().rebirthFellowGuid = Games.GlobeDefine.GlobeVar.INVALID_GUID;
						}
                   }

                   if (Singleton<ObjManager>.GetInstance().MainPlayer != null && fellow.Guid == Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid)
                    {
                        Obj_Fellow curFellow = Singleton<ObjManager>.GetInstance().FindObjInScene(Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjId) as Obj_Fellow;
                        if (curFellow != null)
                        {
                            curFellow.SetBordName(fellow.Name);
                        }
                    }
                }
            }
            if (MenuBarLogic.Instance() != null)
            {
                MenuBarLogic.Instance().UpdateFellowRedTip();
            }
            if (PartnerFrameLogic.Instance() != null)
            {
                PartnerFrameLogic.Instance().UpdateFellowTip();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
