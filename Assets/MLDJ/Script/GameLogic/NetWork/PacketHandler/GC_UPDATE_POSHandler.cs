//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using UnityEngine;
using Games.GlobeDefine;
using Games.Scene;
namespace SPacket.SocketInstance
 {
     public class GC_UPDATE_POSHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_UPDATE_POS packet = (GC_UPDATE_POS )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
             Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
             if (null == MainPlayer) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

             int objId = packet.ObjId;
             Obj_Character TargetObj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(objId);
             if (TargetObj == null) return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;

             //if (objId == MainPlayer.ServerID)
             //{
             //    //������Լ����жϵ�ǰ���������Ƿ���ã���������ã����µ�������
             //    if (GameManager.gameManager != null)
             //    {
             //        if (GameManager.gameManager.ActiveScene != null)
             //        {
             //            if (GameManager.gameManager.ActiveScene.TerrainData != null)
             //            {
             //                //�������ݴ��ڣ�������û�м��سɹ�
             //                if (!GameManager.gameManager.ActiveScene.TerrainData.RawDataOK)
             //                {
             //                    GameManager.gameManager.m_loadErrorNum = 0;
             //                    GameManager.gameManager.ActiveScene.SetTerrainData();
             //                }
             //            }
             //            else
             //            {
             //                //�������ݲ����ڣ����ص�������
             //                GameManager.gameManager.m_loadErrorNum = 0;
             //                GameManager.gameManager.ActiveScene.SetTerrainData();
             //            }
             //        }
             //    }
             //}
             if (packet.HasPos_x && packet.HasPos_z)
             {
                 float fEnterPosX = ((float)packet.Pos_x) / 100;
                 float fEnterPosZ = ((float)packet.Pos_z) / 100;
                 Vector3 newPosition = new UnityEngine.Vector3(fEnterPosX, 0, fEnterPosZ);
                 //if (GameManager.gameManager.ActiveScene.IsT4MScene())
                 //{
                     newPosition.y = GameManager.gameManager.ActiveScene.GetTerrainHeight(newPosition);
                 //}
                 //else if (null != Terrain.activeTerrain)
                 //{
                 //    newPosition.y = GameManager.gameManager.ActiveScene.GetNavSampleHeight(newPosition);
                 //}

                 //Temp����֤�汾��ȷ��
                 newPosition = ActiveScene.GetTerrainPosition(newPosition);
                 //                  if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ERHAI)
                 //                  {
                 //                      newPosition.y = 18.0f;
                 //                  }
                 //                  else if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU
                 //                      || GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WANGYOUGU
                 //                      || GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_TIANSHAN)
                 //                  {
                 //                      newPosition.y = 22.5f;
                 //                  }

                 TargetObj.Position = newPosition;
             }

             //����λ�����⴦��
             if (objId == MainPlayer.ServerID)
             {
                 MainPlayer.LastSyncPos = MainPlayer.Position;
                 if (null == MainPlayer.NavAgent)
                 {
                     MainPlayer.InitNavAgent();
                     MainPlayer.NavAgent.destination = MainPlayer.Position;
                 }
             }
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }
