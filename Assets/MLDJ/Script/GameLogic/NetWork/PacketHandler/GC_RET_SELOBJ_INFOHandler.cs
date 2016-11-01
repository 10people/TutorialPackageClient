//This code create by CodeEngine

using System;
using Games.LogicObj;
using Games.SkillModle;
using GCGame.Table;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class GC_RET_SELOBJ_INFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_SELOBJ_INFO packet = (GC_RET_SELOBJ_INFO )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
//            int nObjId = packet.ObjId;
            int nSelObjId = packet.SeleobjId;
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer ==null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            Obj_Character selObj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(nSelObjId);
            if (selObj)
            {
                _mainPlayer.SelectTarget = selObj;
            }
            else
            {
               _mainPlayer.SelectTarget = null;
            }
            //����ѡ��Ŀ��ͷ��
            _mainPlayer.UpdateTargetFrame(selObj);
            //���ѡ���Ŀ���ڲ��ż��ܷ�Χ����Ч �л�Ŀ��ʱ�� �޸���Ч���ŵĶ���
            if (_mainPlayer.CurPressSkillId != -1 && _mainPlayer.SelectTarget)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(_mainPlayer.CurPressSkillId, 0);
                if (_skillEx != null)
                {
                    if (_skillEx.RangeEffectType != -1 && _skillEx.RangeEffectTarType == (int)SKILLRANGEEFFECTTAR.SELECTTARGET)
                    {
                        _mainPlayer.SelectTarget.PlaySkillRangeEffect();
                    }
                }
            }

            //enter your logic 
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
