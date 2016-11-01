//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using Games.Events;
using Games.GlobeDefine;
using UnityEngine;

namespace SPacket.SocketInstance
{
    public class GC_ENTER_SCENEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_ENTER_SCENE packet = (GC_ENTER_SCENE)ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            
            //enter your logic
            //EnterSceneΪ��ҵ�½���ݵ�һ���֣�����һ������CreatePlayer��Ϣ���з���
            //��¼��¼������λ��
            float fEnterPosX = ((float)packet.PosX)/100;
            float fEnterPosZ = ((float)packet.PosZ)/100;
            GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterScenePos = new UnityEngine.Vector3(fEnterPosX, 0, fEnterPosZ);
            GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneServerID = packet.Mainplayerserverid;
            GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneSceneID = packet.Sceneclass;
            SceneData.SceneInst = packet.Sceneinst;

            //�����г�������
            NetWorkLogic.GetMe().CanProcessPacket = false;
            GameEvent _event = new GameEvent(Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_CHANGESCENE);
            _event.AddIntParam(packet.Sceneclass);
            Singleton<EventSystem>.GetInstance().PushEvent(_event);
			GameManager.gameManager.ActiveScene.StartTime = Time.realtimeSinceStartup;
			GameManager.gameManager.ActiveScene.ExistTime = packet.ExistTime/1000;
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
