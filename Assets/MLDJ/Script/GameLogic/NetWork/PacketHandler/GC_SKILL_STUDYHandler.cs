//This code create by CodeEngine

using System;
using Games.LogicObj;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;

namespace SPacket.SocketInstance
 {
    public class GC_SKILL_STUDYHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SKILL_STUDY packet = (GC_SKILL_STUDY )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
         
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer)
            {
                if (!packet.HasAttachSkillId)
                {
                    _mainPlayer.StudySkillOpt(packet.SkillId, packet.Skillindex);
                }
                else
                {
                    _mainPlayer.StudySkillOpt(packet.SkillId, packet.Skillindex,packet.AttachSkillId,packet.AttachSkillIndex);
                }
            }

            if (SkillLevelUpRoot.Instance())
            {
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

            //新手引导-突刺第一步
            for (int i = 0; i < GlobeVar.SKILL_GUIDE_START_IDS.Length; i ++ )
            {
                if (GlobeVar.SKILL_GUIDE_START_IDS[i] == packet.SkillId
                    && GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                {
                    SkillBarLogic.Instance().NewPlayerGuide(3);
                    break;
                }
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
