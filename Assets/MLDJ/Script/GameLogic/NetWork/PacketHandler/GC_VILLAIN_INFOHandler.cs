//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;

namespace SPacket.SocketInstance
 {
    public class GC_VILLAIN_INFOHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_VILLAIN_INFO packet = (GC_VILLAIN_INFO)ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
             if (VillainData.m_VillainInfo == null)
             {
                 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
             }
             VillainData.m_VillainInfo.Round = packet.Round;

             if (VillainData.m_VillainInfo.m_NormalSceneClassList != null)
             {
                 VillainData.m_VillainInfo.m_NormalSceneClassList.Clear();
                 for (int i = 0; i < packet.normalscneclassCount; i++)
                 {
                     VillainData.m_VillainInfo.m_NormalSceneClassList.Add(packet.GetNormalscneclass(i));
                 }
             }
             if (VillainData.m_VillainInfo.m_SuperSceneClassList != null)
             {
                 VillainData.m_VillainInfo.m_SuperSceneClassList.Clear();
                 for (int i = 0; i < packet.superscneclassCount; i++)
                 {
                     VillainData.m_VillainInfo.m_SuperSceneClassList.Add(packet.GetSuperscneclass(i));
                 }
             }   
             if (packet.HasNormalvillaincount)
             {
                 VillainData.m_VillainInfo.NormalVillainCount = packet.Normalvillaincount;
             }
             if (packet.HasSupervillaincount)
             {
                 VillainData.m_VillainInfo.SuperVillainCount = packet.Supervillaincount;
             }
             if (VillainData.delUpdateVillain != null)
             {
                 VillainData.delUpdateVillain();
             }
               
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
