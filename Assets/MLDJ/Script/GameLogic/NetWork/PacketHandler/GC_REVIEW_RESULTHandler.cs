//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
 {
 public class GC_REVIEW_RESULTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_REVIEW_RESULT packet = (GC_REVIEW_RESULT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
     //�ж���������
     //ֻ��appstore�����԰汾��windows���԰汾�Żᵯ������
     //�����������رոù���
   /*  if ( PlatformHelper.ChannelType.IOS_APPSTORE == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_TEST == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_APPSTORE_TEST == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_TY == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.TEST == PlatformHelper.GetChannelType())*/
 //��GetAppDetailUrl()���ء���ʱ����ʾ������δ�����ù��ܡ�
     //��˼��˵�����ĳ���������뿪���ù��ܣ���AppDetailUrl��������Ϊ�������ɡ�

   //  �����ļ�·��
 //IOS��D:\Workspace\BuildTools\iOS\config_sdk.plist
 //Android��D:\Workspace\BuildTools\AndroidPlugins\Android_cyou\assets\config.properties
 string sAppDetailUrl = PlatformHelper.GetAppDetailUrl();
 if ("" != sAppDetailUrl &&
     null != sAppDetailUrl)
     {
         switch (PlayerPreferenceData.ReviewRefuseType)
         {
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING:
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WAIT_FOR_A_MOMENT:
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.REFUSE_WITHOUT_RESON:
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.RT_INVALID:
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.INTOLERABILITY:
                 {
                     GameManager.gameManager.PlayerDataPool.ReviewResult = packet.Result;
                     GameManager.gameManager.PlayerDataPool.ReviewRewardEnable = packet.OpenReward;
                 }
                 break;
             case (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE:
                 {
                     GameManager.gameManager.PlayerDataPool.ReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.WITH_PLEASURE;
                     GameManager.gameManager.PlayerDataPool.ReviewRewardEnable = packet.OpenReward;
                 }
                 break;
         }
     }     
     else
     {
         GameManager.gameManager.PlayerDataPool.ReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.RT_INVALID;
         GameManager.gameManager.PlayerDataPool.ReviewRewardEnable = 0;
     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
