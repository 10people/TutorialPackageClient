//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_TODAY_FIRST_LOGINHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_TODAY_FIRST_LOGIN packet = (GC_TODAY_FIRST_LOGIN)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (GameManager.gameManager.PlayerDataPool != null)
            {
                GameManager.gameManager.PlayerDataPool.OnTodayFirstLogin();
            }

            if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP) )
            {
                if (RechargeBarLogic.Instance() != null)
                {
                    RechargeBarLogic.Instance().RefreshVIPTips();
                }
                if (VipRootLogic.Instance() != null)
                {
                    VipRootLogic.Instance().RefreshVIPTips();
                }
            }
//            if (GlobalData.IsHongBaoOpen())
//            {
//                if (FunctionButtonLogic.Instance() != null)
//                {
//                    FunctionButtonLogic.Instance().UpdateFestivalTip();
//                }
//                if (FestivalController.Instance() != null)
//                {
//                    FestivalController.Instance().UpdateHongBaoTip();
//                }
//            }
//			if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER))
//			{
//				if (FunctionButtonLogic.Instance() != null)
//				{
//					FunctionButtonLogic.Instance().UpdateFestivalTip();
//				}
//				if (FestivalController.Instance() != null)
//				{
//					FestivalController.Instance().UpdateLoverFlowerTip();
//				}
//			}
//			if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING))
//			{
//				if (FunctionButtonLogic.Instance() != null)
//				{
//					FunctionButtonLogic.Instance().UpdateFestivalTip();
//				}
//				if (FestivalController.Instance() != null)
//				{
//					FestivalController.Instance().UpdateLoverThingTip();
//				}
//			}
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
