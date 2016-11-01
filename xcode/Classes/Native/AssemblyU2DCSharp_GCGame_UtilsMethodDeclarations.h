#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Utils
struct Utils_t1170;
// System.String[]
struct StringU5BU5D_t333;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Byte[]
struct ByteU5BU5D_t1033;
// CG_CHAT
struct CG_CHAT_t1173;
// Games.Fellow.Fellow
struct Fellow_t1174;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// UILabel
struct UILabel_t1176;
// UIPathData
struct UIPathData_t1177;
// System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo>
struct Dictionary_2_t1178;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// ChatInfoLogic/LINK_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_LINK_TYPE.h"
// ChatLinkLogic/MoveToLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MoveToLinkInfo.h"
// ChatLinkLogic/HongBaoLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_HongBaoLinkInfo.h"
// ChatLinkLogic/MissonLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MissonLinkInfo.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// ShareType
#include "AssemblyU2DCSharp_ShareType.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Games.GlobeDefine.GameDefine_Globe/ESceneLayer
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_ESceneL.h"

// System.Void GCGame.Utils::.ctor()
 void Utils__ctor_m6961 (Utils_t1170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::.cctor()
 void Utils__cctor_m6962 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GCGame.Utils::MySplit(System.String,System.String[],System.String)
 StringU5BU5D_t333* Utils_MySplit_m6963 (Object_t * __this/* static, unused */, String_t* ___str, StringU5BU5D_t333* ___nTypeList, String_t* ___regix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GCGame.Utils::BindObjToParent(UnityEngine.GameObject,UnityEngine.GameObject,System.String)
 GameObject_t9 * Utils_BindObjToParent_m6964 (Object_t * __this/* static, unused */, GameObject_t9 * ___resObject, GameObject_t9 * ___parentObject, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GCGame.Utils::GetColorByString(System.String)
 Color_t939  Utils_GetColorByString_m6965 (Object_t * __this/* static, unused */, String_t* ___strColor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetItemNameColor(System.Int32)
 String_t* Utils_GetItemNameColor_m6966 (Object_t * __this/* static, unused */, int32_t ___nQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetEquipAttrFactorName(Games.Item.GameItem)
 String_t* Utils_GetEquipAttrFactorName_m6967 (Object_t * __this/* static, unused */, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetFellowNameColor(System.Int32)
 String_t* Utils_GetFellowNameColor_m6968 (Object_t * __this/* static, unused */, int32_t ___nQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetFellowQualityName(System.Int32)
 String_t* Utils_GetFellowQualityName_m6969 (Object_t * __this/* static, unused */, int32_t ___nQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetTitleColor(System.Int32)
 String_t* Utils_GetTitleColor_m6970 (Object_t * __this/* static, unused */, int32_t ___nColorLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetItemType(System.Int32,System.Int32)
 String_t* Utils_GetItemType_m6971 (Object_t * __this/* static, unused */, int32_t ___nClassID, int32_t ___nSubClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetStrFilter(System.String,System.Int32)
 String_t* Utils_GetStrFilter_m6972 (Object_t * __this/* static, unused */, String_t* ___str, int32_t ___nFilterType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SendCGChatPak(System.String,Games.ChatHistory.ChatHistoryItem,System.Byte[])
 void Utils_SendCGChatPak_m6973 (Object_t * __this/* static, unused */, String_t* ___text, ChatHistoryItem_t1179  ___historyReply, ByteU5BU5D_t1033* ___voicechat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SendLoudSpeaker(System.String,System.Int32,System.Int32)
 void Utils_SendLoudSpeaker_m6974 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___num, int32_t ___anoymousState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SendGMCommand(System.String)
 void Utils_SendGMCommand_m6975 (Object_t * __this/* static, unused */, String_t* ___cmd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat(CG_CHAT,ChatInfoLogic/LINK_TYPE,System.Boolean)
 void Utils_WriteLinkToCGChat_m6976 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, int32_t ___eChatLinkType, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat_Item(CG_CHAT,System.Boolean)
 void Utils_WriteLinkToCGChat_Item_m6977 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat_Equip(CG_CHAT,System.Boolean)
 void Utils_WriteLinkToCGChat_Equip_m6978 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat_Mission(CG_CHAT,System.Boolean)
 void Utils_WriteLinkToCGChat_Mission_m6979 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat_Propagate(CG_CHAT,System.Boolean)
 void Utils_WriteLinkToCGChat_Propagate_m6980 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::WriteLinkToCGChat_Guild(CG_CHAT,System.Boolean)
 void Utils_WriteLinkToCGChat_Guild_m6981 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, bool ___isLoudSpeaker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_Item(Games.ChatHistory.ChatHistoryItem,Games.Item.GameItem,System.Int32)
 void Utils_ReadLinkFromHistory_Item_m6982 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, GameItem_t1172 * ___item, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_Equip(Games.ChatHistory.ChatHistoryItem,Games.Item.GameItem,System.Int32)
 void Utils_ReadLinkFromHistory_Equip_m6983 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, GameItem_t1172 * ___equip, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_Fellow(Games.ChatHistory.ChatHistoryItem,Games.Fellow.Fellow,System.Int32)
 void Utils_ReadLinkFromHistory_Fellow_m6984 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___histroy, Fellow_t1174 * ___fellow, int32_t ___linkIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_Team(Games.ChatHistory.ChatHistoryItem,System.UInt64&)
 void Utils_ReadLinkFromHistory_Team_m6985 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, uint64_t* ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_MoveTo(Games.ChatHistory.ChatHistoryItem,ChatLinkLogic/MoveToLinkInfo&,System.Int32)
 void Utils_ReadLinkFromHistory_MoveTo_m6986 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, MoveToLinkInfo_t1180 * ___info, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_PlayerInfo(Games.ChatHistory.ChatHistoryItem,System.UInt64&,System.Int32)
 void Utils_ReadLinkFromHistory_PlayerInfo_m6987 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, uint64_t* ___guid, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_GuildInfo(Games.ChatHistory.ChatHistoryItem,System.UInt64&,System.Int32)
 void Utils_ReadLinkFromHistory_GuildInfo_m6988 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, uint64_t* ___guildId, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_SwordsMan(Games.ChatHistory.ChatHistoryItem,Games.SwordsMan.SwordsMan,System.Int32)
 void Utils_ReadLinkFromHistory_SwordsMan_m6989 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, SwordsMan_t1175 * ___oSwordsman, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_HongBaoInfo(Games.ChatHistory.ChatHistoryItem,ChatLinkLogic/HongBaoLinkInfo&,System.Int32)
 void Utils_ReadLinkFromHistory_HongBaoInfo_m6990 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, HongBaoLinkInfo_t1181 * ___LinkInfo, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_MissionInfo(Games.ChatHistory.ChatHistoryItem,ChatLinkLogic/MissonLinkInfo&,System.Int32)
 void Utils_ReadLinkFromHistory_MissionInfo_m6991 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, MissonLinkInfo_t1182 * ___LinkInfo, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ReadLinkFromHistory_Propagate(Games.ChatHistory.ChatHistoryItem,Games.Fellow.Fellow,System.Int32)
 void Utils_ReadLinkFromHistory_Propagate_m6992 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, Fellow_t1174 * ___fellow, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetChatLinkIntDataStart(Games.ChatHistory.ChatHistoryItem,System.Int32)
 int32_t Utils_GetChatLinkIntDataStart_m6993 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::CopyLinkFromHistoryReply(CG_CHAT,Games.ChatHistory.ChatHistoryItem)
 void Utils_CopyLinkFromHistoryReply_m6994 (Object_t * __this/* static, unused */, CG_CHAT_t1173 * ___pak, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsContainEmotion(System.String)
 bool Utils_IsContainEmotion_m6995 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsContainChatLink(System.String)
 bool Utils_IsContainChatLink_m6996 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetLinkColor(Games.ChatHistory.ChatHistoryItem,System.Int32)
 String_t* Utils_GetLinkColor_m6997 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetChannelColor(Games.ChatHistory.ChatHistoryItem)
 String_t* Utils_GetChannelColor_m6998 (Object_t * __this/* static, unused */, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetChannelName(System.Int32)
 String_t* Utils_GetChannelName_m6999 (Object_t * __this/* static, unused */, int32_t ___nChatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetChannelIndex(System.Int32)
 int32_t Utils_GetChannelIndex_m7000 (Object_t * __this/* static, unused */, int32_t ___nChatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetStrCharNum(System.String)
 int32_t Utils_GetStrCharNum_m7001 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetStrTextNum(System.String)
 int32_t Utils_GetStrTextNum_m7002 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetTimeDiffToLabel(UILabel,System.Int32)
 void Utils_SetTimeDiffToLabel_m7003 (Object_t * __this/* static, unused */, UILabel_t1176 * ___label, int32_t ___timeDiff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetTimeDiffFormatString(System.Int32)
 String_t* Utils_GetTimeDiffFormatString_m7004 (Object_t * __this/* static, unused */, int32_t ___timeDiff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::CleanGrid(UnityEngine.GameObject)
 void Utils_CleanGrid_m7005 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::StrFilter_Chat(System.String)
 String_t* Utils_StrFilter_Chat_m7006 (Object_t * __this/* static, unused */, String_t* ___strChat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::StrFilter_Abuse(System.String)
 String_t* Utils_StrFilter_Abuse_m7007 (Object_t * __this/* static, unused */, String_t* ___strChat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsStrFilter_Abuse(System.String)
 bool Utils_IsStrFilter_Abuse_m7008 (Object_t * __this/* static, unused */, String_t* ___strChat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::StrFilter_Mail(System.String)
 String_t* Utils_StrFilter_Mail_m7009 (Object_t * __this/* static, unused */, String_t* ___strMailText, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GCGame.Utils::LoadUIItem(UnityEngine.GameObject,System.String,UIPathData)
 GameObject_t9 * Utils_LoadUIItem_m7010 (Object_t * __this/* static, unused */, GameObject_t9 * ___parent, String_t* ___name, UIPathData_t1177 * ___uiData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetDicByID(System.Int32)
 String_t* Utils_GetDicByID_m7011 (Object_t * __this/* static, unused */, int32_t ___dicID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion GCGame.Utils::DirServerToClient(System.Single)
 Quaternion_t120  Utils_DirServerToClient_m7012 (Object_t * __this/* static, unused */, float ___rad, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Utils::DirClientToServer(UnityEngine.Quaternion)
 float Utils_DirClientToServer_m7013 (Object_t * __this/* static, unused */, Quaternion_t120  ___rotate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Utils::NormaliseDirection(System.Single)
 float Utils_NormaliseDirection_m7014 (Object_t * __this/* static, unused */, float ___fDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetStreamingAssetPath()
 String_t* Utils_GetStreamingAssetPath_m7015 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetAttrTypeString(System.Int32)
 String_t* Utils_GetAttrTypeString_m7016 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetItemQualityById(System.Int32)
 String_t* Utils_GetItemQualityById_m7017 (Object_t * __this/* static, unused */, int32_t ___nItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetCommonData(System.Int32)
 int32_t Utils_GetCommonData_m7018 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::GetCommonFlag(System.Int32)
 bool Utils_GetCommonFlag_m7019 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::CheckTargetPath(System.String)
 void Utils_CheckTargetPath_m7020 (Object_t * __this/* static, unused */, String_t* ___targetPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::DeleteFolder(System.String)
 void Utils_DeleteFolder_m7021 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::CopyPathFile(System.String,System.String)
 void Utils_CopyPathFile_m7022 (Object_t * __this/* static, unused */, String_t* ___srcPath, String_t* ___distPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetMD5Hash(System.String)
 String_t* Utils_GetMD5Hash_m7023 (Object_t * __this/* static, unused */, String_t* ___pathName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::PlaySceneMusic(System.Int32)
 void Utils_PlaySceneMusic_m7024 (Object_t * __this/* static, unused */, int32_t ___nSoundID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::StopBKMusic(System.Single)
 void Utils_StopBKMusic_m7025 (Object_t * __this/* static, unused */, float ___fadeTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::ConvertLargeNumToString(System.Int32)
 String_t* Utils_ConvertLargeNumToString_m7026 (Object_t * __this/* static, unused */, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::ConvertLargeNumToString_10w(System.Int32)
 String_t* Utils_ConvertLargeNumToString_10w_m7027 (Object_t * __this/* static, unused */, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetIntNumber(System.Int32,System.Int32,System.Int32)
 int32_t Utils_GetIntNumber_m7028 (Object_t * __this/* static, unused */, int32_t ___src, int32_t ___start, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::SetIntNumber(System.Int32&,System.Int32,System.Int32,System.Int32)
 bool Utils_SetIntNumber_m7029 (Object_t * __this/* static, unused */, int32_t* ___src, int32_t ___start, int32_t ___len, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::GetIntFlag(System.Int32,System.Int32)
 bool Utils_GetIntFlag_m7030 (Object_t * __this/* static, unused */, int32_t ___src, int32_t ___bit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::GetFileInt(System.String,System.Int32&)
 bool Utils_GetFileInt_m7031 (Object_t * __this/* static, unused */, String_t* ___path, int32_t* ___retInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::WriteStringToFile(System.String,System.String)
 bool Utils_WriteStringToFile_m7032 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::GenerateResFileList(System.String,System.Collections.Generic.Dictionary`2<System.String,UpdateHelper/FileInfo>)
 bool Utils_GenerateResFileList_m7033 (Object_t * __this/* static, unused */, String_t* ___path, Dictionary_2_t1178 * ___dicFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::GetCopySceneCounts(System.Int32,System.Int32,System.Int32,System.Int32&,System.Int32&)
 void Utils_GetCopySceneCounts_m7034 (Object_t * __this/* static, unused */, int32_t ___copySceneId, int32_t ___mode, int32_t ___difficult, int32_t* ___curCount, int32_t* ___maxCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::GetCopySceneCountsAll(System.Int32,System.Int32&,System.Int32&)
 void Utils_GetCopySceneCountsAll_m7035 (Object_t * __this/* static, unused */, int32_t ___copySceneId, int32_t* ___curCount, int32_t* ___maxCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::GetSweepCounts(System.Int32&,System.Int32&)
 void Utils_GetSweepCounts_m7036 (Object_t * __this/* static, unused */, int32_t* ___curCount, int32_t* ___maxCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetActivityAwardBonusLeft()
 int32_t Utils_GetActivityAwardBonusLeft_m7037 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GenCodeWithSelfGuid(ShareType)
 String_t* Utils_GenCodeWithSelfGuid_m7038 (Object_t * __this/* static, unused */, int32_t ___nShareType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GenServerNameWithSelfGuid()
 String_t* Utils_GenServerNameWithSelfGuid_m7039 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetMarryRingString(Games.Item.GameItem)
 String_t* Utils_GetMarryRingString_m7040 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetLoverString(Games.Item.GameItem)
 String_t* Utils_GetLoverString_m7041 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GCGame.Utils::GetMarryRingGUID(Games.Item.GameItem)
 uint64_t Utils_GetMarryRingGUID_m7042 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GCGame.Utils::GetServerDateTime()
 DateTime_t1171  Utils_GetServerDateTime_m7043 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GCGame.Utils::GetDateTimeByAnsiTime(System.Int32)
 DateTime_t1171  Utils_GetDateTimeByAnsiTime_m7044 (Object_t * __this/* static, unused */, int32_t ___ansitime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetProfessionNameByType(System.Int32)
 String_t* Utils_GetProfessionNameByType_m7045 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetLoginNameByIndex(System.Int32)
 String_t* Utils_GetLoginNameByIndex_m7046 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetProfessionIcon(System.Int32)
 String_t* Utils_GetProfessionIcon_m7047 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetHeadPicByProfession(System.Int32)
 String_t* Utils_GetHeadPicByProfession_m7048 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetProPicByProfession(System.Int32)
 String_t* Utils_GetProPicByProfession_m7049 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetProPicByProfessionEx(System.Int32)
 String_t* Utils_GetProPicByProfessionEx_m7050 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetCSName(System.Int32,System.Boolean)
 String_t* Utils_GetCSName_m7051 (Object_t * __this/* static, unused */, int32_t ___nCopySceneID, bool ___Single, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetParent(UnityEngine.Transform,UnityEngine.Transform)
 void Utils_SetParent_m7052 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, Transform_t78 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::ResetTransform(UnityEngine.Transform)
 void Utils_ResetTransform_m7053 (Object_t * __this/* static, unused */, Transform_t78 * ___trans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::NpcTalk(System.Int32)
 void Utils_NpcTalk_m7054 (Object_t * __this/* static, unused */, int32_t ___npcId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetLayerIncludeChild(UnityEngine.GameObject,Games.GlobeDefine.GameDefine_Globe/ESceneLayer)
 void Utils_SetLayerIncludeChild_m7055 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetActive(UnityEngine.GameObject,System.Boolean)
 void Utils_SetActive_m7056 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetXpSKillIndex(System.Int32)
 int32_t Utils_GetXpSKillIndex_m7057 (Object_t * __this/* static, unused */, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Utils::GetNpcNameBySceneNpcId(System.Int32)
 String_t* Utils_GetNpcNameBySceneNpcId_m7058 (Object_t * __this/* static, unused */, int32_t ___nSceneNpcId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetBelleMatrixFlagByBit(System.Int32)
 void Utils_SetBelleMatrixFlagByBit_m7059 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char GCGame.Utils::GetBelleMatrixFlagByBit(System.Int32)
 uint16_t Utils_GetBelleMatrixFlagByBit_m7060 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::GetAllBelleMatrixFlagHasTip()
 bool Utils_GetAllBelleMatrixFlagHasTip_m7061 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> GCGame.Utils::GetWayIdByWayIds(System.String)
 List_1_t90 * Utils_GetWayIdByWayIds_m7062 (Object_t * __this/* static, unused */, String_t* ___wayIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsPVESkill(System.Int32)
 bool Utils_IsPVESkill_m7063 (Object_t * __this/* static, unused */, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsPVPSkill(System.Int32)
 bool Utils_IsPVPSkill_m7064 (Object_t * __this/* static, unused */, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsPvESkill(GCGame.Table.Tab_SkillBase)
 bool Utils_IsPvESkill_m7065 (Object_t * __this/* static, unused */, Tab_SkillBase_t637 * ____skillBase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Utils::IsPvPSkill(GCGame.Table.Tab_SkillBase)
 bool Utils_IsPvPSkill_m7066 (Object_t * __this/* static, unused */, Tab_SkillBase_t637 * ____skillBase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Utils::GetSkillIndexBySkillId(System.Int32)
 int32_t Utils_GetSkillIndexBySkillId_m7067 (Object_t * __this/* static, unused */, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::SetPVXSkillIndexByProfession(System.Int32)
 void Utils_SetPVXSkillIndexByProfession_m7068 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Utils::CleanUpPvxSkillIndex(System.Int32)
 void Utils_CleanUpPvxSkillIndex_m7069 (Object_t * __this/* static, unused */, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
