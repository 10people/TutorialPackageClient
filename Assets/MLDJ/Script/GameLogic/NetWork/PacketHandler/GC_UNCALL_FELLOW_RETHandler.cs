//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.Fellow;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_UNCALL_FELLOW_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UNCALL_FELLOW_RET packet = (GC_UNCALL_FELLOW_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            UInt64 fellowGuid = packet.Guid;
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
                    //…Ë÷√Œ™’Ÿªÿ
                    fellow.Called = false;

                    if (PartnerFrameLogic_Info.Instance() != null)
                    {
                        PartnerFrameLogic_Info.Instance().UpdateFellowInfo(fellow, false);
                    }
                }
            }
            Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjId = -1;
            Singleton<ObjManager>.GetInstance().MainPlayer.CurFellowObjGuid = GlobeVar.INVALID_GUID;
            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
