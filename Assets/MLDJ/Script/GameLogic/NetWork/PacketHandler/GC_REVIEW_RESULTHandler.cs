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
     //判断渠道类型
     //只有appstore，测试版本，windows测试版本才会弹出评价
     //其他渠道都关闭该功能
   /*  if ( PlatformHelper.ChannelType.IOS_APPSTORE == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_TEST == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_APPSTORE_TEST == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.IOS_TY == PlatformHelper.GetChannelType() ||
         PlatformHelper.ChannelType.TEST == PlatformHelper.GetChannelType())*/
 //当GetAppDetailUrl()返回“”时，表示该渠道未开启该功能。
     //意思是说，如果某个渠道不想开启该功能，将AppDetailUrl属性设置为“”即可。

   //  配置文件路径
 //IOS，D:\Workspace\BuildTools\iOS\config_sdk.plist
 //Android，D:\Workspace\BuildTools\AndroidPlugins\Android_cyou\assets\config.properties
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
