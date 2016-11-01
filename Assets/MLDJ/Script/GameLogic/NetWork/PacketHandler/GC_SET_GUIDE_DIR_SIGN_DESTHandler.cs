//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using GCGame;

namespace SPacket.SocketInstance
{
    public class GC_SET_GUIDE_DIR_SIGN_DESTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SET_GUIDE_DIR_SIGN_DEST packet = (GC_SET_GUIDE_DIR_SIGN_DEST)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            float posX = ((float)packet.PosX) / 100;
            float posZ = ((float)packet.PosZ) / 100;
            if (null != GameManager.gameManager.ActiveScene)
            {
                GameManager.gameManager.ActiveScene.SetGuideDestination(packet.SceneID, posX, posZ, packet.DestEffect);
            }

            if (packet.SceneID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO
                && NewPlayerGuidLogic.txtFteIndex == 0
                && packet.DestEffect == 1)
            {
                NewPlayerGuidLogic.OpenWindow_Circle(PlayerFrameLogic.Instance().gameObject, 1, Utils.GetDicByID(11173),
                    "center", -1, false, false, false, null, null, false);
            }
            else if (packet.SceneID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO
                && NewPlayerGuidLogic.txtFteIndex == 1)
            {
                NewPlayerGuidLogic.OpenWindow_Circle(PlayerFrameLogic.Instance().gameObject, 1, Utils.GetDicByID(11174),
                    "center", -1, false, false, false, null, null, false);
            }
            else if (packet.SceneID == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO
                && NewPlayerGuidLogic.txtFteIndex == 2)
            {
                NewPlayerGuidLogic.OpenWindow_Circle(PlayerFrameLogic.Instance().gameObject, 1, Utils.GetDicByID(11177),
                    "center", -1, false, false, false, null, null, false);
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
