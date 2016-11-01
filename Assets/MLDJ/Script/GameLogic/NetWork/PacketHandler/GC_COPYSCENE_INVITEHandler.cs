//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.LogicObj;
using GCGame.Table;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
 {
     public class GC_COPYSCENE_INVITEHandler : Ipacket
     {
         public uint Execute(PacketDistributed ipacket)
         {
             GC_COPYSCENE_INVITE packet = (GC_COPYSCENE_INVITE )ipacket;
             if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
             //enter your logic
             Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
             if (null == MainPlayer) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

             int CONVENTION = 0;
             int TEAMLLEADER = 1;
             m_nSceneId = packet.SceneID;
             m_nDifficult = packet.Difficult;
             string szName = packet.InviterName;

             //added by mawenbin
             //组队藏经阁邀请队员进入副本特殊处理
             //无大R带小R
             //无挂机默认自动同意
             if ((int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI == m_nSceneId)
             {
                 string sDescription = MainPlayer.SpliceTeamMemberCJGInviteDescription(szName);
                 MessageBoxLogic.OpenOKCancelBox(sDescription, "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);
                 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
             }
              
             int nMultipleType = CONVENTION;
             if (packet.HasMultipleType)
             {
                 nMultipleType =  packet.MultipleType;
             }
             Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(m_nSceneId, 0);
             if (null != tabSceneClass)
             {
                 if (m_nDifficult == 1)
                 {
                     if (nMultipleType == TEAMLLEADER)
                     {
                         MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5273}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);
                         
                     }
                     else
                     {
						Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
						if( User && User.AutoActivityAccept)
							MessageBoxLogic.OpenCancelBox(StrDictionary.GetClientDictionaryString("#{1974}", szName,  tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 5,MessageBoxLogic.PASSWORD.INVALID,5559);
						else
                         	MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1974}", szName,  tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);
                     }                    
                 }
                 else if (m_nDifficult == 2)
                 {
                     if (nMultipleType == TEAMLLEADER)
                     {
                         MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5274}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);

                     }
                     else
                     {
						Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
						if( User && User.AutoActivityAccept)
							MessageBoxLogic.OpenCancelBox(StrDictionary.GetClientDictionaryString("#{2015}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 5,MessageBoxLogic.PASSWORD.INVALID,5559);
						else
							MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2015}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);
                     }
                 }
                 else if (m_nDifficult == 3)
                 {
                     if (nMultipleType == TEAMLLEADER)
                     {
                         MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5275}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);

                     }
                     else
                     {
						Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
						if( User && User.AutoActivityAccept)
							MessageBoxLogic.OpenCancelBox(StrDictionary.GetClientDictionaryString("#{2016}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 5,MessageBoxLogic.PASSWORD.INVALID,5559);
						else
                        	 MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2016}", szName, tabSceneClass.Name), "", AgreeCopySceneInvite, DisagreeCopySceneInvite, 20);
                     }
                 }
             } 
             return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
         int m_nSceneId =  GlobeVar.INVALID_ID;
         int m_nDifficult =  GlobeVar.INVALID_ID;
         public void AgreeCopySceneInvite()
         {
             CG_COPYSCENE_INVITE_RET pak = (CG_COPYSCENE_INVITE_RET)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COPYSCENE_INVITE_RET);
             pak.SceneID = m_nSceneId;
             pak.InviteResult = (int)CG_COPYSCENE_INVITE_RET.InviteResultType.RESULTTYPE_YES;
             pak.Difficult = m_nDifficult;
             pak.SendPacket();

             m_nSceneId = GlobeVar.INVALID_ID;
             m_nDifficult = GlobeVar.INVALID_ID;
         }

         public void DisagreeCopySceneInvite()
         {
             CG_COPYSCENE_INVITE_RET pak = (CG_COPYSCENE_INVITE_RET)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COPYSCENE_INVITE_RET);
             pak.SceneID = m_nSceneId;
             pak.InviteResult = (int)CG_COPYSCENE_INVITE_RET.InviteResultType.RESULTTYPE_NO;
             pak.Difficult = m_nDifficult;
             pak.SendPacket();

             m_nSceneId = GlobeVar.INVALID_ID;
             m_nDifficult = GlobeVar.INVALID_ID;
         }
     }
 }
