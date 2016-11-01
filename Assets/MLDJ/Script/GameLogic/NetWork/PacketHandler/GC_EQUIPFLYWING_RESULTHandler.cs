//This code create by CodeEngine

using System;
using Games.GlobeDefine;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.LogicObj;


namespace SPacket.SocketInstance
 {
 public class GC_EQUIPFLYWING_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 	GC_EQUIPFLYWING_RESULT packet = (GC_EQUIPFLYWING_RESULT )ipacket;
 	if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 	//enter your logic

	if( packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ACQUIRE)
	{
        if( packet.HasFlyWingId1)
        {
            GameManager.gameManager.FlyWingMananger.addFlyWingData(packet.FlyWingId1);
        }
	}

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ACQUIRE_DREAM)
    {
        if (packet.HasFlyWingId1)
        {
            GameManager.gameManager.FlyWingMananger.addDreamFlyWingData(packet.FlyWingId1);
        }
    }
    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_DREAM)
    {
        if (packet.HasFlyWingId1)
        {
            GameManager.gameManager.FlyWingMananger.DreamFlyWing(packet.FlyWingId1);
            if (FashionLogic.Instance() != null)
            {
                FashionLogic.Instance().UpdateCurChooseFashion();
            }
        }
    }

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_CANCEL_DREAM)
    {
        GameManager.gameManager.FlyWingMananger.CancelDreamFlyWing();
        if (FashionLogic.Instance() != null)
        {
            FashionLogic.Instance().UpdateCurChooseFashion();
        }
    }

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_EQUIP)
    {
        if (packet.HasFlyWingId1)
        {
            GameManager.gameManager.FlyWingMananger.EquipFlyWing(packet.FlyWingId1);
        }
    }

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_UNEQUIP)
    {
        GameManager.gameManager.FlyWingMananger.CanceEquipFlyWing();
    }

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ABSORT)
    {
        if (packet.HasFlyWingId1 && packet.HasFlyWingId2)
        {
            GameManager.gameManager.FlyWingMananger.AbsortFlyWingData(packet.FlyWingId1,packet.FlyWingId2);
        }
    }
    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_ADVANCE)
    {
        if (packet.HasFlyWingId1 && packet.HasFlyWingId2)
        {
            GameManager.gameManager.FlyWingMananger.AdvanceFlyWing(packet.FlyWingId1, packet.FlyWingId2);
        }
    }
    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_SHOWHIDE)
    {
        if (packet.HasFlyWingId1 )
        {
            if (packet.FlyWingId1 == 1)
                GameManager.gameManager.FlyWingMananger.ShowHideFlyWing(true);
            else if( packet.FlyWingId1 == 0 )
                GameManager.gameManager.FlyWingMananger.ShowHideFlyWing(false);
        }
    }
	else if( packet.FlyWingType == (int) GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_OTHER_PLAYER  )
	{
		if(packet.HasFlyWingId1 && packet.HasFlyWingId2 )
		{
			int nObjServerID = packet.FlyWingId1;
			if(  nObjServerID != GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneServerID)
			{
				Obj_Character obj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(nObjServerID);
				if ( obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
				{
					Obj_OtherPlayer Player = obj as Obj_OtherPlayer;
					if(Player)
					{
						Player.OtherPlayerFlyWingModelId = packet.FlyWingId2 ;

                        if (Player.OtherPlayerFlyWingModelId == GlobeVar.INVALID_ID)
                            Player.DestroyFlyWingObj();
                        else
						    Player.RealoadPlayerFlyWingModel();
					}
				}
			}
		}
	}

    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_CLEAN_ALL_DATA)
    {
        GameManager.gameManager.FlyWingMananger.CleanAllFlyWingData();
    }
    else if (packet.FlyWingType == (int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_UNACQUIRE)
    {
        if (packet.HasFlyWingId1)
        {
            GameManager.gameManager.FlyWingMananger.delDreamFlyWingData(packet.FlyWingId1);
        }
    }
	
 	return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
