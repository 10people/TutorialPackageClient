//This code create by CodeEngine

using System;
using Games.LogicObj;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;

namespace SPacket.SocketInstance
{
    public class GC_BROADCASTPSSTATEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_BROADCASTPSSTATE packet = (GC_BROADCASTPSSTATE) ipacket;
            if (null == packet) return (uint) PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            Obj_OtherPlayer _otherPlayer =Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(packet.ObjId) as Obj_OtherPlayer;
            if (_otherPlayer)
            {
                _otherPlayer.PaoShangState = packet.State;
                _otherPlayer.UpdatePaoShangStateEffect(_otherPlayer.PaoShangState);
                if (ReliveLogic.Instance() !=null)
                {
                    if (Singleton<ObjManager>.GetInstance().MainPlayer != null &&
                    Singleton<ObjManager>.GetInstance().MainPlayer.ServerID == _otherPlayer.ServerID)
                    {
                        ReliveLogic.Instance().ChangeShowInfoPaoShangChange();
                    }
                }
                
            }
            return (uint) PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
