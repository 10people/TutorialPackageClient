//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_UPDATE_FOLLOWSTATEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_UPDATE_FOLLOWSTATE packet = (GC_UPDATE_FOLLOWSTATE )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            int nObjID = packet.ObjID;
            int nFollowState = packet.FollowState;
            Obj_Character obj = Singleton<ObjManager>.Instance.FindObjCharacterInScene(nObjID);
            if (obj == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER
                || obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer player = obj as Obj_OtherPlayer;
                if (player != null)
                {
                    // 逻辑处理
                    player.IsInTeamFollow = (nFollowState == 1 ? true : false);
                }
                
            }

            // 更新下UI
            if (obj.ObjType == GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                if (MissionDialogAndLeftTabsLogic.Instance())
                {
                    MissionDialogAndLeftTabsLogic.Instance().UpdateButtonTeamFollow();
                }
                
            }
                        return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
