#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatInfoLogic
struct ChatInfoLogic_t1294;
// System.String
struct String_t;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Byte[]
struct ByteU5BU5D_t1033;
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// ChatInfoLogic/LINK_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_LINK_TYPE.h"
// ChatLinkLogic/MissonLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MissonLinkInfo.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ChatInfoLogic/EMOTIONLINK_MOVE_DIRECTION
#include "AssemblyU2DCSharp_ChatInfoLogic_EMOTIONLINK_MOVE_DIRECTION.h"
// GC_CHAT/CHATTYPE
#include "AssemblyU2DCSharp_GC_CHAT_CHATTYPE.h"

// System.Void ChatInfoLogic::.ctor()
 void ChatInfoLogic__ctor_m7690 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::.cctor()
 void ChatInfoLogic__cctor_m7691 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic/CHANNEL_TYPE ChatInfoLogic::get_CurChannelType()
 int32_t ChatInfoLogic_get_CurChannelType_m7692 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::set_CurChannelType(ChatInfoLogic/CHANNEL_TYPE)
 void ChatInfoLogic_set_CurChannelType_m7693 (ChatInfoLogic_t1294 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatInfoLogic::get_TellChatReceiverGuid()
 uint64_t ChatInfoLogic_get_TellChatReceiverGuid_m7694 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::get_TellChatReceiverName()
 String_t* ChatInfoLogic_get_TellChatReceiverName_m7695 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatInfoLogic::get_FriendChatReceiverGuid()
 uint64_t ChatInfoLogic_get_FriendChatReceiverGuid_m7696 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::get_FriendChatReceiverName()
 String_t* ChatInfoLogic_get_FriendChatReceiverName_m7697 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic/LINK_TYPE ChatInfoLogic::get_ChatLinkType()
 int32_t ChatInfoLogic_get_ChatLinkType_m7698 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem ChatInfoLogic::get_ItemBuffer()
 GameItem_t1172 * ChatInfoLogic_get_ItemBuffer_m7699 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem ChatInfoLogic::get_EquipBuffer()
 GameItem_t1172 * ChatInfoLogic_get_EquipBuffer_m7700 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatInfoLogic::get_GuildBuffer()
 uint64_t ChatInfoLogic_get_GuildBuffer_m7701 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoLogic::get_LinkList()
 List_1_t1289 * ChatInfoLogic_get_LinkList_m7702 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatLinkLogic/MissonLinkInfo ChatInfoLogic::get_MissionBuffer()
 MissonLinkInfo_t1182  ChatInfoLogic_get_MissionBuffer_m7703 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatInfoLogic::get_GuidFellow()
 uint64_t ChatInfoLogic_get_GuidFellow_m7704 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChatInfoLogic::get_WaitRefresh()
 bool ChatInfoLogic_get_WaitRefresh_m7705 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::set_WaitRefresh(System.Boolean)
 void ChatInfoLogic_set_WaitRefresh_m7706 (ChatInfoLogic_t1294 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChatInfoLogic::get_IsYaoHe()
 bool ChatInfoLogic_get_IsYaoHe_m7707 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::set_IsYaoHe(System.Boolean)
 void ChatInfoLogic_set_IsYaoHe_m7708 (ChatInfoLogic_t1294 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChatInfoLogic::get_CurChatInfoItemIndex()
 int32_t ChatInfoLogic_get_CurChatInfoItemIndex_m7709 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::set_CurChatInfoItemIndex(System.Int32)
 void ChatInfoLogic_set_CurChatInfoItemIndex_m7710 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::Awake()
 void ChatInfoLogic_Awake_m7711 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::Start()
 void ChatInfoLogic_Start_m7712 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::Update()
 void ChatInfoLogic_Update_m7713 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateSpeechTime()
 void ChatInfoLogic_UpdateSpeechTime_m7714 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::SetData()
 void ChatInfoLogic_SetData_m7715 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnEnable()
 void ChatInfoLogic_OnEnable_m7716 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnDisable()
 void ChatInfoLogic_OnDisable_m7717 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnTweenPositionOver()
 void ChatInfoLogic_OnTweenPositionOver_m7718 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnSetUpBtnTweenPositionOver()
 void ChatInfoLogic_OnSetUpBtnTweenPositionOver_m7719 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::RefreshVitaliy()
 void ChatInfoLogic_RefreshVitaliy_m7720 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::Init()
 void ChatInfoLogic_Init_m7721 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ClearData()
 void ChatInfoLogic_ClearData_m7722 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnCloseClick()
 void ChatInfoLogic_OnCloseClick_m7723 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InitChatInfo()
 void ChatInfoLogic_InitChatInfo_m7724 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChatInfoLogic::IsAllChannelValid()
 bool ChatInfoLogic_IsAllChannelValid_m7725 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ChangeChannel(UnityEngine.GameObject)
 void ChatInfoLogic_ChangeChannel_m7726 (ChatInfoLogic_t1294 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateChannelState()
 void ChatInfoLogic_UpdateChannelState_m7727 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChatInfoLogic::GetCurChannelType()
 int32_t ChatInfoLogic_GetCurChannelType_m7728 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnSubmitClick()
 void ChatInfoLogic_OnSubmitClick_m7729 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnReceiveChat()
 void ChatInfoLogic_OnReceiveChat_m7730 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateChannelHistory()
 void ChatInfoLogic_UpdateChannelHistory_m7731 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertItemLinkText(Games.Item.GameItem)
 void ChatInfoLogic_InsertItemLinkText_m7732 (ChatInfoLogic_t1294 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertEquipLinkText(Games.Item.GameItem)
 void ChatInfoLogic_InsertEquipLinkText_m7733 (ChatInfoLogic_t1294 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertMissionLinkText(System.Int32)
 void ChatInfoLogic_InsertMissionLinkText_m7734 (ChatInfoLogic_t1294 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertGuildLinkText(System.UInt64)
 void ChatInfoLogic_InsertGuildLinkText_m7735 (ChatInfoLogic_t1294 * __this, uint64_t ___guild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertFellowLinkText(System.UInt64)
 void ChatInfoLogic_InsertFellowLinkText_m7736 (ChatInfoLogic_t1294 * __this, uint64_t ___fellowGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertFellowLinkForProText(System.UInt64)
 void ChatInfoLogic_InsertFellowLinkForProText_m7737 (ChatInfoLogic_t1294 * __this, uint64_t ___fellowGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::InsertLinkSymbols(System.String)
 String_t* ChatInfoLogic_InsertLinkSymbols_m7738 (ChatInfoLogic_t1294 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::MakeLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_MakeLinkEnabled_m7739 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::MakeMyLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_MakeMyLinkEnabled_m7740 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::CalculateLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoLogic_CalculateLinkSpace_m7741 (ChatInfoLogic_t1294 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::CalculateMyLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoLogic_CalculateMyLinkSpace_m7742 (ChatInfoLogic_t1294 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::CalculateEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoLogic_CalculateEmotionSpace_m7743 (ChatInfoLogic_t1294 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::CalculateMyEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoLogic_CalculateMyEmotionSpace_m7744 (ChatInfoLogic_t1294 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::MoveLinkPos(ChatInfoLogic/EMOTIONLINK_MOVE_DIRECTION,System.Int32)
 void ChatInfoLogic_MoveLinkPos_m7745 (ChatInfoLogic_t1294 * __this, int32_t ___direction, int32_t ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::MoveEmotionPos(ChatInfoLogic/EMOTIONLINK_MOVE_DIRECTION,System.Int32)
 void ChatInfoLogic_MoveEmotionPos_m7746 (ChatInfoLogic_t1294 * __this, int32_t ___direction, int32_t ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ShowOrCloseEmotionRoot()
 void ChatInfoLogic_ShowOrCloseEmotionRoot_m7747 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ShowEmotionRoot()
 void ChatInfoLogic_ShowEmotionRoot_m7748 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InsertEmotion(UnityEngine.GameObject)
 void ChatInfoLogic_InsertEmotion_m7749 (ChatInfoLogic_t1294 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InputOnActive()
 void ChatInfoLogic_InputOnActive_m7750 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::MakeEmotionEnabled(System.String)
 String_t* ChatInfoLogic_MakeEmotionEnabled_m7751 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::GetPopSpaceByChannel(System.Int32)
 String_t* ChatInfoLogic_GetPopSpaceByChannel_m7752 (ChatInfoLogic_t1294 * __this, int32_t ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InitTouchKeyboardTween()
 void ChatInfoLogic_InitTouchKeyboardTween_m7753 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ChatInfoMove()
 void ChatInfoLogic_ChatInfoMove_m7754 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ChatInfoGoBack()
 void ChatInfoLogic_ChatInfoGoBack_m7755 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::HideKeyboard()
 void ChatInfoLogic_HideKeyboard_m7756 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::InitEmotionButtons()
 void ChatInfoLogic_InitEmotionButtons_m7757 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::BeginChat(System.UInt64,System.String)
 void ChatInfoLogic_BeginChat_m7758 (ChatInfoLogic_t1294 * __this, uint64_t ___nReceiverGUID, String_t* ___strReceiverName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ClearLinkBuffer()
 void ChatInfoLogic_ClearLinkBuffer_m7759 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::GetSpaceEmotionItem(UnityEngine.GameObject)
 String_t* ChatInfoLogic_GetSpaceEmotionItem_m7760 (ChatInfoLogic_t1294 * __this, GameObject_t9 * ___emotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::HandleChatHistory(Games.ChatHistory.ChatHistoryItem)
 void ChatInfoLogic_HandleChatHistory_m7761 (ChatInfoLogic_t1294 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::SetData(Games.ChatHistory.ChatHistoryItem)
 void ChatInfoLogic_SetData_m7762 (ChatInfoLogic_t1294 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::ShowVIPIcon(System.String,System.String&,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_ShowVIPIcon_m7763 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, String_t** ___sendertext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::ShowPlayVoiceBtn(System.String,System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_ShowPlayVoiceBtn_m7764 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, String_t* ___sendertext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::MakeNameLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_MakeNameLinkEnabled_m7765 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoLogic::MakeMyNameLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoLogic_MakeMyNameLinkEnabled_m7766 (ChatInfoLogic_t1294 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ShowChatSetup()
 void ChatInfoLogic_ShowChatSetup_m7767 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::ClearCurInput()
 void ChatInfoLogic_ClearCurInput_m7768 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::RecoverFastReply()
 void ChatInfoLogic_RecoverFastReply_m7769 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::FastReplyTweenOver()
 void ChatInfoLogic_FastReplyTweenOver_m7770 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateTeamChannel()
 void ChatInfoLogic_UpdateTeamChannel_m7771 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateGuildChannel()
 void ChatInfoLogic_UpdateGuildChannel_m7772 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateMasterChannel()
 void ChatInfoLogic_UpdateMasterChannel_m7773 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateTeamGuildMasterChannel(System.String)
 void ChatInfoLogic_UpdateTeamGuildMasterChannel_m7774 (ChatInfoLogic_t1294 * __this, String_t* ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateSpeakerList_Team()
 void ChatInfoLogic_UpdateSpeakerList_Team_m7775 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateSpeakerList_Guild()
 void ChatInfoLogic_UpdateSpeakerList_Guild_m7776 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateSpeakerList_Master()
 void ChatInfoLogic_UpdateSpeakerList_Master_m7777 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::FilterFriendChat(System.UInt64,System.String)
 void ChatInfoLogic_FilterFriendChat_m7778 (ChatInfoLogic_t1294 * __this, uint64_t ___guid, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateFriendInformSprite()
 void ChatInfoLogic_UpdateFriendInformSprite_m7779 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateTellInformSprite()
 void ChatInfoLogic_UpdateTellInformSprite_m7780 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateTeamInfoSprite()
 void ChatInfoLogic_UpdateTeamInfoSprite_m7781 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateChatFrameInformSprite()
 void ChatInfoLogic_UpdateChatFrameInformSprite_m7782 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnClickVoiceBtn()
 void ChatInfoLogic_OnClickVoiceBtn_m7783 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::RecordBegin()
 void ChatInfoLogic_RecordBegin_m7784 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::UpdateSpeechPressState()
 void ChatInfoLogic_UpdateSpeechPressState_m7785 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::RecordOver()
 void ChatInfoLogic_RecordOver_m7786 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnSpeechTaskOver(System.String,System.Byte[])
 void ChatInfoLogic_OnSpeechTaskOver_m7787 (ChatInfoLogic_t1294 * __this, String_t* ___Text, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::RecordError()
 void ChatInfoLogic_RecordError_m7788 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnPlayVoiceChat()
 void ChatInfoLogic_OnPlayVoiceChat_m7789 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::OnPlayVoiceChatOver()
 void ChatInfoLogic_OnPlayVoiceChatOver_m7790 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic/CHANNEL_TYPE ChatInfoLogic::ConvertCGChannelToChatInfo(GC_CHAT/CHATTYPE)
 int32_t ChatInfoLogic_ConvertCGChannelToChatInfo_m7791 (Object_t * __this/* static, unused */, int32_t ___chatChannel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoLogic::SlowUpdate()
 void ChatInfoLogic_SlowUpdate_m7792 (ChatInfoLogic_t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
