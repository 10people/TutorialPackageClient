//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
	public class GC_RET_COPYSCENE_SWEEPHandler : Ipacket
	{
		public uint Execute(PacketDistributed ipacket)
		{
			GC_RET_COPYSCENE_SWEEP packet = (GC_RET_COPYSCENE_SWEEP )ipacket;
			if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
			//enter your logic
			if (DungeonWindow.Instance() != null)
			{
				DungeonWindow.Instance().RetCopySceneSweep(packet);
			}
			return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
		}
	}
}
