//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
  public class GC_RET_ABSORB_BELLEPIECEHandler : Ipacket
  {
    public uint Execute(PacketDistributed ipacket)
    {
      GC_RET_ABSORB_BELLEPIECE packet = (GC_RET_ABSORB_BELLEPIECE)ipacket;
      if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
      //enter your logic
      if (BelleData.OwnedBelleAbsorbNum != null) {
        if (BelleData.OwnedBelleAbsorbNum.ContainsKey(packet.Index)) {
          BelleData.OwnedBelleAbsorbNum[packet.Index] = packet.AbsorbSum;
        } else {
          BelleData.OwnedBelleAbsorbNum.Add(packet.Index, packet.AbsorbSum);
        }
      }
      if (BelleOwnWindow.Instance() != null) {
          BelleOwnWindow.Instance().UpdateAdvanceBelleFragmentInfo();
      }
      return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
    }
  }
}
