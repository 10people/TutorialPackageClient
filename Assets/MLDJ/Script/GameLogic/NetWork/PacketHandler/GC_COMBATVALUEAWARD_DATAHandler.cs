//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using System.Collections.Generic;

namespace SPacket.SocketInstance
{
  public class GC_COMBATVALUEAWARD_DATAHandler : Ipacket
  {
    public uint Execute(PacketDistributed ipacket)
    {
      GC_COMBATVALUEAWARD_DATA packet = (GC_COMBATVALUEAWARD_DATA)ipacket;
      if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
      List<int> alreadyget;
      if (GameManager.gameManager.ActivityRewardGetDic.TryGetValue(ActivityRewardType.Fight, out alreadyget)) {
        alreadyget.Clear();
        alreadyget.AddRange(packet.flagList);
      } else {
        GameManager.gameManager.ActivityRewardGetDic.Add(ActivityRewardType.Fight, new List<int>(packet.flagList));
      }
      if (ActivityRewardsController.Instance() != null) {
        ActivityRewardsController.Instance().RefreshAllInfo();
        if (packet.NIndex > -1 && packet.flagList.Count > packet.NIndex && packet.flagList[packet.NIndex] == 1) {
          ActivityRewardsController.Instance().ShowGetItemTip(ActivityRewardType.Fight, packet.NIndex);
        }
      }
      return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
    }
  }
}
