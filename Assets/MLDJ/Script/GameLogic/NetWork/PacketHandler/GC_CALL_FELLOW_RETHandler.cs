//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
using Games.Fellow;
using Games.LogicObj;
namespace SPacket.SocketInstance
{
    public class GC_CALL_FELLOW_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_CALL_FELLOW_RET packet = (GC_CALL_FELLOW_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            UInt64 fellowGuid = packet.Guid;
            int fellowObjId = packet.Objid;
            if (fellowGuid == GlobeVar.INVALID_GUID)
            {
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            }

            FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
            if (container != null)
            {
                Fellow fellow = container.GetFellowByGuid(fellowGuid);
                if (fellow != null)
                {
                    //设置为召出
                    fellow.Called = true;

                    if (PartnerFrameLogic.Instance() != null)
                    {
                        if (PartnerFrameLogic_Info.Instance() != null)
                        {
                            PartnerFrameLogic_Info.Instance().UpdateFellowInfo(fellow, false);
                        }

                        if (PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step == 1)
                        {
                            if (MenuBarLogic.Instance())
                            {
                               //MenuBarLogic.Instance().NewPlayerGuide(101);
                            }
                            //PartnerFrameLogic.Instance().NewPlayerGuideFlag_Step = -1;
                        }
                        //UIManager.CloseUI(UIInfo.PartnerFrameRoot);
                    }
                }
            }
            Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjId = fellowObjId;
            Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid = fellowGuid;
            //播放召出特效
            GameManager.gameManager.PlayerDataPool.FellowPlayerEffect = true;

            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
