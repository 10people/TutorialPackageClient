//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using System.Collections.Generic;
using Games.LogicObj;
namespace SPacket.SocketInstance
{
  public class GC_BROADCAST_BELLEDATAHandler : Ipacket
  {
    public uint Execute(PacketDistributed ipacket)
    {
      GC_BROADCAST_BELLEDATA packet = (GC_BROADCAST_BELLEDATA)ipacket;
      if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
      //enter your logic
      Dictionary<int, Belle> belleDic;
      if (BelleData.AllOtherPlayerBelleMap.TryGetValue(packet.CharGuid, out belleDic)) {
        if (belleDic != null) {
          if (belleDic.ContainsKey(packet.BelleId)) {
            belleDic.Remove(packet.BelleId);
          }
          belleDic.Add(packet.BelleId, new Belle(packet.BelleId, packet.BelleClose, packet.BelleLevel));
        } else {
          BelleData.AllOtherPlayerBelleMap.Remove(packet.CharGuid);
          belleDic = new Dictionary<int, Belle>();
          BelleData.AllOtherPlayerBelleMap.Add(packet.CharGuid, belleDic);
          belleDic.Add(packet.BelleId, new Belle(packet.BelleId, packet.BelleClose, packet.BelleLevel));
        }
      } else {
        belleDic = new Dictionary<int, Belle>();
        BelleData.AllOtherPlayerBelleMap.Add(packet.CharGuid, belleDic);
        belleDic.Add(packet.BelleId, new Belle(packet.BelleId, packet.BelleClose, packet.BelleLevel));
      }
      Obj_OtherPlayer _otherPlayer = Singleton<ObjManager>.GetInstance().FindOtherPlayerInScene(packet.CharGuid);
      if (_otherPlayer != null) {
        _otherPlayer.UpdateBelleShowDelay();
      }
      return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
    }
  }
}
