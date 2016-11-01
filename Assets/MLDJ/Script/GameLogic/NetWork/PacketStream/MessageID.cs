//This code create by CodeEngine ,don't modify

using System;
 public enum MessageID :ushort
 {
 PACKET_NONE = 0 , // 0，空
 PACKET_CG_LOGIN = 1, //client ask login 
 PACKET_GC_LOGIN_RET =2, //client login result 
 PACKET_CG_CONNECTED_HEARTBEAT,	//client connected heartbeat
PACKET_GC_CONNECTED_HEARTBEAT,	//server connected heartbeat
PACKET_GC_NOTICE,	//notice from server
PACKET_GC_MISSION_SYNC_MISSIONLIST,	//server send mission list to client
PACKET_CG_ACCEPTMISSION,	//ask to accept mission
PACKET_GC_ACCEPTMISSION_RET,	//result of accept mission
PACKET_CG_COMPLETEMISSION,	//ask to complete mission
PACKET_GC_COMPLETEMISSION_RET,	//result of complete mission
PACKET_CG_ABANDONMISSION,	//ask to abandon mission
PACKET_GC_ABANDONMISSION_RET,	//result of abandon mission
PACKET_GC_MISSION_STATE,	//update mission state
PACKET_GC_MISSION_PARAM,	//upstate mission param
PACKET_CG_REQ_CHANGE_SCENE,	//Request Change Scene
PACKET_GC_ENTER_SCENE,	//Enter Scene
PACKET_CG_ENTER_SCENE_OK,	//Client Enter Scene OK
PACKET_GC_CREATE_PLAYER,	//Create Player
PACKET_GC_DELETE_OBJ,	//Delete Player
PACKET_CG_SYNC_POS,	//Sync Position to Server
PACKET_GC_SYNC_POS,	//Sync Position to Client
PACKET_CG_MOVE,	//Player Move
PACKET_GC_MOVE,	//Notify Character Move
PACKET_GC_STOP,	//Notify Character Stop
PACKET_CG_SYSTEMSHOP_VIEW,	//client ask view systemshop
PACKET_CG_SYSTEMSHOP_BUY,	//client buy from systemshop
PACKET_CG_SYSTEMSHOP_BUYBACK,	//client buy back from systemshop
PACKET_CG_SYSTEMSHOP_SELL,	//client sell to systemshop
PACKET_GC_SYSTEMSHOP_MERCHANDISELIST,	//Server send MerchandiseList to client
PACKET_GC_UPDATENOTICEDATA,	//server send NoticeData to client
PACKET_GC_UPDATEITEM,	//server send item to client
PACKET_CG_REQ_TEAM_INVITE,	//client request invite other player join team
PACKET_CG_REQ_TEAM_JOIN,	//client request join other player team
PACKET_CG_REQ_TEAM_LEAVE,	//client request leave team
PACKET_CG_REQ_TEAM_KICK_MEMBER,	//client req kick team member
PACKET_CG_REQ_TEAM_CHANGE_LEADER,	//client req change leader
PACKET_GC_TEAM_LEAVE,	//client leave team
PACKET_GC_TEAM_SYNC_TEAMINFO,	//server send full team info to client
PACKET_GC_TEAM_SYNC_MEMBERINFO,	//server send member info to client
PACKET_GC_JOIN_TEAM_INVITE,	//server send join team invite to client
PACKET_CG_JOIN_TEAM_INVITE_RESULT,	//client send join team invite result to server
PACKET_GC_JOIN_TEAM_REQUEST,	//server send join team request to client
PACKET_CG_JOIN_TEAM_REQUEST_RESULT,	//client send join team request result to server
PACKET_CG_REQ_NEAR_LIST,	//client require nearby player list
PACKET_GC_NEAR_PLAYERLIST,	//server send nearby player list to client
PACKET_GC_NEAR_TEAMLIST,	//server send nearby team list to client
PACKET_CG_USE_ITEM,	//client send use item
PACKET_CG_EQUIP_ITEM,	//client send equip item
PACKET_CG_UNEQUIP_ITEM,	//client send unequip item
PACKET_CG_CREATEROLE,	//client send createRole
PACKET_GC_CREATEROLE_RET,	//server send create role result
PACKET_CG_SELECTROLE,	//client send selectRole
PACKET_GC_SELECTROLE_RET,	//server send select role result
PACKET_CG_SKILL_USE,	//client send use skill
PACKET_GC_CDTIME_UPDATE,	//Server Update CDTime
PACKET_GC_BROADCAST_ATTR,	//Server Broadcast Attr
PACKET_GC_SYN_ATTR,	//Server Syn Attr
PACKET_CG_THROW_ITEM,	//client send throw item
PACKET_GC_BELLE_DATA,	//server send bell data
PACKET_CG_BELLE_CLOSE,	//client send belle close
PACKET_GC_BELLE_CLOSE_RET,	//server ret belle close
PACKET_CG_BELLE_EVOLUTION,	//client send belle evolution
PACKET_GC_BELLE_EVOLUTION_RET,	//server send belle evolution ret
PACKET_CG_BELLE_EVOLUTIONRAPID,	//client send belle evolution rapid
PACKET_GC_BELLE_EVOLUTIONRAPID_RET,	//server send belle evolution rapid ret
PACKET_CG_BELLE_BATTLE,	//client send belle battle
PACKET_GC_BELLE_BATTLE_RET,	//server send belle battle ret
PACKET_CG_BELLE_REST,	//client send belle rest
PACKET_GC_BELLE_REST_RET,	//server send belle rest ret
PACKET_CG_BELLE_ACTIVEMATRIX,	//client send belle Matrix active
PACKET_GC_BELLE_ACTIVEMATRIX_RET,	//server send belle Matrix Active ret
PACKET_GC_BELLE_ACTIVE,	//server send belle Active
PACKET_GC_UPDATE_ALL_TITLEINVESTITIVE,	//Server Update All TitleInvestitive
PACKET_CG_ACTIVE_TITLE,	//Client Active Title
PACKET_CG_DELETE_TITLE,	//Client Delete Title
PACKET_GC_GAIN_TITLE,	//Server Gain Title
PACKET_GC_DELETE_TITLE,	//Server Delete Title
PACKET_GC_ACTIVE_TITLE,	//Server Active Title
PACKET_GC_SYNC_ACTIVETITLE,	//Server Active Title
PACKET_GC_MOUNTCOLLECTED_FLAG,	//Sync MountCollected flag
PACKET_GC_MOUNT_DATA,	//Sync Mount Status
PACKET_CG_MOUNT_MARK,	//client send Mount MarkAutoMoutID
PACKET_GC_MOUNT_MARK_RET,	//server send Mount MarkAutoMoutID ret
PACKET_CG_MOUNT_MOUNT,	//client send Mount ride mount
PACKET_CG_MOUNT_UNMOUNT,	//client send Mount unmount
PACKET_CG_EQUIP_ENCHANCE,	//client send Equip enchance
PACKET_CG_EQUIP_STAR,	//client send Equip star
PACKET_GC_EQUIP_ENCHANCE_RET,	//server send Equip enchance Result
PACKET_GC_EQUIP_STAR_RET,	//server send Equip star Result
PACKET_CG_CHAT,	//Client send chat info
PACKET_GC_CHAT,	//Server send chat info
PACKET_CG_ADDFRIEND,	//Client Req Add Friend
PACKET_GC_ADDFRIEND,	//Server Ret Add Friend
PACKET_CG_DELFRIEND,	//Client Req Del Friend
PACKET_CG_REQ_FRIEND_USERINFO,	//Client Req Update Friend UserInfo
PACKET_GC_RET_FRIEND_USERINFO,	//Server Ret Update Friend UserInfo
PACKET_GC_DELFRIEND,	//Server Ret Del Friend
PACKET_GC_NOTICE_ADDED_FRIEND,	//Server Notice Client be added by Other Player
PACKET_GC_SYC_FRIEND_STATE,	//Server Syc One Friend State
PACKET_GC_SYC_FRIEND_INFO,	//Server Syc One Friend Info
PACKET_GC_SYC_FULL_FRIEND_LIST,	//Server Syc Full Friends List
PACKET_CG_ADDBLACKLIST,	//Client Req Add BlackList
PACKET_GC_ADDBLACKLIST,	//Server Ret Add BlackList
PACKET_GC_SYC_FULL_BLACK_LIST,	//Server Syc Full Black List
PACKET_CG_DELBLACKLIST,	//Client Req Del BlackList
PACKET_GC_DELBLACKLIST,	//Server Ret Del BlackList
PACKET_CG_FINDPLAYER,	//Client Req Find Player
PACKET_GC_FINDPLAYER,	//Server Ret Find Player Result
PACKET_GC_SYNSELTRAGET_ATTR,	//Server Syn SelectObj Attr
PACKET_GC_CREATE_NPC,	//Create npc
PACKET_CG_GMCOMMAND,	//send gm command
PACKET_GC_PLAYSTORY,	//send client playstory
PACKET_CG_PLAYSTORY_OVER,	//send server playstory over
PACKET_CG_ASK_RELIVE,	//send Ask Relive
PACKET_GC_RET_RELIVE,	//send Ret Relive
PACKET_GC_DROPITEM_INFO,	//send DropInfo
PACKET_CG_ASK_PICKUP_ITEM,	//send Ask PickupItem
PACKET_GC_RET_PICKUP_ITEM,	//send ret Pickup Item
PACKET_GC_UPDATE_FELLOW,	//send update fellow
PACKET_GC_SERVER_SERIOUSERROR,	//send server error
PACKET_GC_ADDITIONINFO_UPDATE,	//send addition info
PACKET_CG_ASK_SELOBJ_INFO,	//ask current select obj Info
PACKET_GC_RET_SELOBJ_INFO,	//send ret current select obj Info
PACKET_GC_RET_USE_SKILL,	//Use Skill ret
PACKET_GC_CREATE_FELLOW,	//Create fellow
PACKET_CG_ASK_ROLE_DATA,	//ask role data
PACKET_GC_RET_ROLE_DATA,	//ret role data
PACKET_CG_CALL_FELLOW,	//Call Fellow
PACKET_GC_CALL_FELLOW_RET,	//Call Fellow Ret
PACKET_CG_UNCALL_FELLOW,	//
PACKET_GC_UNCALL_FELLOW_RET,	//UnCall Fellow Ret
PACKET_CG_ASK_NEWSERVERAWARD,	//client ask to get NewServerAward
PACKET_GC_NEWSERVERAWARD_DATA,	//Send NewServerAward Data to client
PACKET_CG_ASK_DAYAWARD,	//client ask to get DayAward
PACKET_GC_DAYAWARD_DATA,	//Send DayAward Data to client
PACKET_CG_ASK_ONLINEAWARD,	//client ask to get OnlineAward
PACKET_GC_ONLINEAWARD_DATA,	//Send OnlineAward Data to client
PACKET_CG_ASK_ACTIVENESSAWARD,	//client ask to get ACTIVENESSAWARD
PACKET_GC_ASK_ACTIVENESSAWARD_RET,	//Send ACTIVENESSAWARD ret to client
PACKET_GC_SYNC_ACTIVENESSAWARD,	//Sync ACTIVENESSAWARD Data to client
PACKET_GC_DAMAGEBOARD_INFO,	//Send DamageBoard Info to client
PACKET_CG_OPEN_COPYSCENE,	//Send Open CopyScene Req to Server
PACKET_GC_COPYSCENE_INVITE,	//Send CopyScene Invite Req to Client
PACKET_CG_COPYSCENE_INVITE_RET,	//Send CopyScene Invite Ret to Server
PACKET_GC_COPYSCENE_RESULT,	//Send CopySceneResult to client
PACKET_CG_ASK_COPYSCENE_REWARD,	//Send CopySceneReward to Server
PACKET_GC_RET_COPYSCENE_REWARD,	//Send CopySceneReward to Client
PACKET_CG_ASK_COPYSCENE_SWEEP,	//Send CopySceneSweep to Server
PACKET_GC_RET_COPYSCENE_SWEEP,	//Send CopySceneSweep to Client
PACKET_GC_MISSION_IGNOREMISSIONPREFLAG,	//Send ignoremissionpreflag to client
PACKET_CG_COMBATVALUE_ASK,	//Client Ask Player CombatValue From Server
PACKET_GC_COMBATVALUE_RET,	//Server Send Player CombatValue To Client
PACKET_GC_PLAY_EFFECT,	//Server Send Player Use Tool
PACKET_CG_ASK_PKINFO,	//Ask PK Info
PACKET_GC_RET_PKINFO,	//Ret PK Info
PACKET_CG_CHANGE_PKMODLE,	//ask change PK Modle
PACKET_GC_RET_CHANGE_PKMODLE,	//Ret change PK Modle
PACKET_GC_CHANGE_PKLIST,	// change PKList
PACKET_GC_MAIL_UPDATE,	//server update mail
PACKET_GC_MAIL_DELETE,	//server del mail
PACKET_CG_MAIL_SEND,	//client send mail
PACKET_CG_MAIL_OPERATION,	//client op mail
PACKET_GC_OP_TELEPORT,	//Server Op CopyScene Teleport
PACKET_GC_OP_QINGGONGPOINT,	//Server Op CopyScene QingGongPoint
PACKET_GC_CHALLENGE_MYDATA,	//challenge rank's data
PACKET_CG_RANDOM_OPPONENT,	//request opponent list
PACKET_GC_OPPONENT_LIST,	// opponent list
PACKET_CG_CHALLENGERANKLIST_REQ,	//request challenge rank list
PACKET_GC_CHALLENGERANKLIST,	// challenge rank list
PACKET_CG_REQ_CHALLENGE,	//request PK somebody
PACKET_GC_CREATE_ZOMBIEUSER,	//Create zombie user
PACKET_GC_CHALLENGE_REWARD,	//Challenge rank reward
PACKET_GC_CHALLENGE_HISTORY,	//Challenge history
PACKET_GC_UI_OPERATION,	// ui operation
PACKET_GC_SCENE_TIMESCALE,	// Server Change Scene Time Scale
PACKET_CG_LEAVE_COPYSCENE,	// Client Leave Copyscene
PACKET_GC_SKILL_FINISH,	// Server Skill Finish
PACKET_GC_SHOW_EQUIPREMIND,	// Server Send Client EquipRemind
PACKET_CG_USER_BEHAVIOR,	//client send behavior
PACKET_GC_UI_NEWPLAYERGUIDE,	// Server Send Client NewPlayerGuide
PACKET_GC_SKILL_STUDY,	// Server Send StudyInfo
PACKET_GC_PLAY_MODELSOTRY,	//Server Send Client 3D Story
PACKET_GC_SYN_SKILLINFO,	//Server Syn Skill Info
PACKET_GC_UPDATE_SCENE_INSTACTIVATION,	//Update Scene InstActivation
PACKET_GC_UPDATE_ANIMATION_STATE,	//Update Animation state
PACKET_GC_UPDATE_HITPONIT,	//Update HitPoint
PACKET_GC_TELEMOVE,	//TeleMove
PACKET_GC_PLAYSHANDIANLIANEFFECT,	//shandianlian Effect
PACKET_GC_REMOVEEFFECT,	//remove Effect
PACKET_GC_ATTACKFLY,	//Attak fly
PACKET_GC_COUNTDOWN,	//show countdown
PACKET_CG_ASK_LEVELUPSKILL,	//Ask LevelUpSkill
PACKET_CG_BACKPACK_UNLOCK,	//Unlock BackPack
PACKET_GC_BACKPACK_RESIZE,	//Update BackPack Size
PACKET_GC_USE_ITEM_RET,	//UseItem Ret
PACKET_GC_USERTIP,	//Server Send Client Tip
PACKET_CG_MONEYTREE_ASKAWARD,	//MoneyTree client ask server award
PACKET_GC_MONEYTREE_DATA,	//Server sync moneytree data to client
PACKET_CG_CHANGE_MAJORCITY,	//Request Change Major City
PACKET_CG_ASK_QUIT_GAME,	//Ask Change Game Selece Scene
PACKET_GC_RET_QUIT_GAME,	//Ret Change Game Selece
PACKET_CG_LOCK_FELLOW,	//Lock Fellow
PACKET_CG_UNLOCK_FELLOW,	//UnLock Fellow
PACKET_CG_RESOLVE_FELLOW,	//Resolve Fellow
PACKET_GC_RESOLVE_FELLOW_RET,	//Resolve Fellow Ret
PACKET_GC_SYNC_REACHEDSCENE,	//Send Reached Scene
PACKET_GC_UPDATE_ACTIVE_FELLOWSKILL,	//Update Fellow Active Skill
PACKET_CG_EQUIP_FELLOW_SKILL,	//Equip Fellow Skill
PACKET_GC_EQUIP_FELLOW_SKILL_RET,	//Equip Fellow Skill Ret
PACKET_CG_UNEQUIP_FELLOW_SKILL,	//UnEquip Fellow Skill
PACKET_GC_UNEQUIP_FELLOW_SKILL_RET,	//UnEquip Fellow Skill Ret
PACKET_CG_LEVELUP_FELLOW_SKILL,	//LevelUp Fellow Skill
PACKET_GC_LEVELUP_FELLOW_SKILL_RET,	//LevelUp Fellow Skill Ret
PACKET_GC_FORCE_SETPOS,	//Server Force Set Player Pos
PACKET_GC_DEBUG_MY_POS,	//Server Debug Player Pos
PACKET_GC_PLAY_SOUNDS,	//Server PlaySounds
PACKET_CG_DAILYMISSION_UPDATE,	//Ask to update DailyMission
PACKET_GC_DAILYMISSION_UPDATE_RET,	//Send DailyMission UpdateData
PACKET_CG_ASK_LOUDSPEAKER_POOL,	//Client Ask LoudSpeaker Pool
PACKET_GC_ASK_LOUDSPEAKER_CONTENT,	//Server Ask Client LoudSpeaker Content
PACKET_CG_ASK_GAIN_FELLOW,	//Client Ask Gain Fellow
PACKET_GC_ASK_GAIN_FELLOW_RET,	//Ask Gain Fellow Ret
PACKET_GC_UPDATE_GAIN_FELLOW_COUNT,	//Update Gain Fellow Count
PACKET_CG_HUASHAN_PVP_REGISTER,	//regiser for HUASHAN PvP
PACKET_CG_HUASHAN_PVP_MEMBERLIST,	//HuaShan PvP Member list request
PACKET_GC_HUASHAN_PVP_MEMBERLIST,	//HuaShan PvP Member list
PACKET_GC_HUASHAN_PVP_STATE,	//HuaShan PvP state
PACKET_GC_HUASHAN_PVP_SELFPOSITION,	//HuaShan PvP self position
PACKET_GC_HUASHAN_PVP_SHOWSEARCH,	//HuaShan PvP search opponent
PACKET_GC_HUASHAN_PVP_OPPONENTVIEW,	//HuaShan PvP Opponent View
PACKET_GC_HUASHAN_PVP_ASSIST_STATE,	//HuaShan PvP assist disable or enable
PACKET_CG_HUASHAN_ASSIST_REQ,	//HuaShan PvP assist request
PACKET_CG_DUEL_REQUEST,	//request duel somebody
PACKET_GC_DUEL_REQUESTU,	//somebody request duel with U
PACKET_CG_DUEL_RESPONSE,	//response duel
PACKET_GC_DUEL_STATE,	//duel state
PACKET_CG_MERCENARY_LIST_REQ,	//request mercenary list
PACKET_GC_MERCENARY_LIST_RES,	//response mercenary list
PACKET_GC_MERCENARY_LEFTTIMES,	//mercenary left times
PACKET_GC_MERCENARY_EMPLOYLIST,	//response mercenary employed  list
PACKET_CG_MERCENARY_REQ,	//request mercenary
PACKET_GC_WORLDBOSS_DEAD,	//notify world boss is dead
PACKET_CG_WORLDBOSS_TEAMLIST_REQ,	//request world boss team list
PACKET_GC_WORLDBOSS_TEAMLIST,	//world boss team rank list
PACKET_GC_WORLDBOSS_OPEN,	//world boss is ready
PACKET_CG_WORLDBOSS_CHALLENGE,	//request challenge boss team
PACKET_CG_WORLDBOSS_JOIN,	//request kill world boss
PACKET_CG_CONSIGNSALEITEM,	//ConsignSale SaleItem
PACKET_CG_CANCELCONSIGNSALEITEM,	//ConsignSale  CancelSaleItem
PACKET_CG_ASK_MYCONSIGNSALEITEM,	//ConsignSale  Ask My ConsignSale Items
PACKET_GC_RET_MYCONSIGNSALEITEM,	//ConsignSale  Ret My ConsignSale Items
PACKET_CG_ASK_CONSIGNSALEITEMINFO,	//ConsignSale  Ask ConsignSale Items
PACKET_GC_RET_CONSIGNSALEITEMINFO,	//ConsignSale  Ret  ConsignSale Items
PACKET_CG_BUY_CONSIGNSALEITEMINFO,	//ConsignSale  buy ConsignSale Item
PACKET_GC_SYNC_COMMONDATA,	//Sync CommonData to Client
PACKET_GC_SYNC_COMMONFLAG,	//Sync CommonFlag to Client
PACKET_CG_ASK_SETCOMMONFLAG,	//Client ask to set Commonflag
PACKET_GC_ASK_COMMONFLAG_RET,	//Sync CommonFlag to Client
PACKET_CG_DAILYLUCKYDRAW_DRAW,	//DailyLuckyDraw  CG_DAILYLUCKYDRAW_DRAW
PACKET_GC_DAILYLUCKYDRAW_GAINBONUS,	//DailyLuckyDraw  GC_DAILYLUCKYDRAW_GAINBONUS
PACKET_GC_DAILYLUCKYDRAW_UPDATE,	//DailyLuckyDraw  GC_DAILYLUCKYDRAW_UPDATE
PACKET_GC_DAILYLUCKYDRAW_FAIL,	//DailyLuckyDraw  GC_DAILYLUCKYDRAW_FAIL
PACKET_GC_UPDATE_GEM_INFO,	//Update Gem Info
PACKET_CG_PUT_GEM,	//Ask Put Gem
PACKET_GC_PUT_GEM_RET,	//Ask Put Gem Ret
PACKET_CG_TAKE_GEM,	//Ask Take Gem
PACKET_GC_TAKE_GEM_RET,	//Ask Take Gem Ret
PACKET_GC_SYNC_ACTIVENESS,	//Sync Activeness to Client
PACKET_CG_BUY_FASHION,	//Client Buy Fashion
PACKET_GC_SEND_FASHIONINFO,	//Server Send Fshion Info
PACKET_GC_SYNC_FASHION,	//Server Sync All Fshion
PACKET_CG_WEAR_FASHION,	//Client Wear Fashion
PACKET_CG_TAKEOFF_FASHION,	//Client Wear Fashion
PACKET_GC_SEND_CURFASHION,	//Server Send Cur FashionID
PACKET_CG_ASK_TEAMPLATFORMINFO,	// Send TeamPlatform to Server
PACKET_GC_RET_TEAMPLATFORMINFO,	// Send TeamPlatform to Client
PACKET_CG_ASK_AUTOTEAM,	// Send AutoTeam to Server
PACKET_GC_RET_AUTOTEAM,	// Send AutoTeam to Client
PACKET_CG_FELLOW_STAR,	//Fellow Star
PACKET_GC_FELLOW_STAR_RET,	//Fellow Star Ret
PACKET_CG_FELLOW_ENCHANCE,	//Fellow Enchance
PACKET_GC_FELLOW_ENCHANCE_RET,	//Fellow Enchance Ret
PACKET_CG_FELLOW_APPLY_POINT,	//Fellow Apply Point
PACKET_GC_FELLOW_APPLY_POINT_RET,	//Fellow Apply Point Ret
PACKET_CG_GUILD_REQ_LIST,	//Guild Client Req All Server Guild Info
PACKET_GC_GUILD_RET_LIST,	//Guild Server Ret All Server Guild Info
PACKET_CG_GUILD_REQ_INFO,	//Guild Client Req Self Guild Info
PACKET_GC_GUILD_RET_INFO,	//Guild Server Ret Self Guild Info
PACKET_CG_GUILD_REQ_CHANGE_NOTICE,	//Guild Client Req Change Guild Notice
PACKET_CG_GUILD_CREATE,	//Guild Client Req Create Guild
PACKET_GC_GUILD_CREATE,	//Guild Server Ret Create Guild
PACKET_CG_GUILD_JOIN,	//Guild Client Req Join Guild
PACKET_GC_GUILD_JOIN,	//Guild Server Ret Join Guild
PACKET_CG_GUILD_LEAVE,	//Guild Client Req Leave Guild
PACKET_GC_GUILD_LEAVE,	//Guild Server Ret Leave Guild
PACKET_CG_GUILD_KICK,	//Guild Client Req Kick Guild
PACKET_CG_GUILD_JOB_CHANGE,	//Guild Client Req Change Member Job
PACKET_CG_GUILD_APPROVE_RESERVE,	//Guild Client Req Approve Reserve Member
PACKET_CG_GUILD_REQ_LEVELUP,	//Guild Client Req Guild Level Up
PACKET_GC_GUILD_RET_LEVELUP,	//Guild Server Ret Guild Level Up
PACKET_GC_DYNAMICOBSTACLE_OPT,	//Sever commond Create dynamic obstacle
PACKET_CG_FELLOW_CHANGE_NAME,	//client send change fellow name
PACKET_GC_FELLOW_CHANGE_NAME_RET,	//client send change fellow name ret
PACKET_CG_BUY_YUANBAOGOODS,	//Client Buy YuanBaoShop Goods
PACKET_CG_BUY_GUILDGOODS,	//Client Buy GuildShop Goods
PACKET_GC_UPDATE_NEEDIMPACTINFO,	//syn need Impact Info
PACKET_CG_MASTER_REQ_LIST,	//Client Req All Server Master Info
PACKET_GC_MASTER_RET_LIST,	//Server Ret All Server Master Info
PACKET_CG_MASTER_REQ_INFO,	//Client Req Master Info
PACKET_GC_MASTER_RET_INFO,	//Server Ret Master Info
PACKET_CG_MASTER_REQ_CHANGE_NOTICE,	//Client Req Change Master Notice
PACKET_CG_MASTER_CREATE,	//Client Req Create Master
PACKET_GC_MASTER_CREATE,	//Server Ret Create Master
PACKET_CG_MASTER_JOIN,	//Client Req Join Master
PACKET_GC_MASTER_JOIN,	//Server Ret Join Master
PACKET_CG_MASTER_LEAVE,	//Client Req Leave Master
PACKET_GC_MASTER_LEAVE,	//Server Ret Leave Master
PACKET_CG_MASTER_KICK,	//Client Req Kick Master
PACKET_GC_MASTER_KICK,	//Server Ret Kick Master
PACKET_CG_MASTER_APPROVE_RESERVE,	//Client Req Approve Reserve Member
PACKET_GC_MASTER_APPROVE_RESERVE,	//Server Ret Approve Reserve Member
PACKET_CG_MASTER_ACTIVE_SKILL,	//Client Req Learn Skill
PACKET_GC_MASTER_LEARN_SKILL,	//Server Ret Learn Skill
PACKET_CG_MASTER_FORGET_SKILL,	//Client Req Forget Skill
PACKET_GC_MASTER_FORGET_SKILL,	//Server Ret Forget Skill
PACKET_CG_MASTER_LEARN_SKILL,	//Client Req Active Skill
PACKET_GC_MASTER_ACTIVE_SKILL,	//Server Ret Active Skill
PACKET_CG_ASK_RANK,	// Ask Rank To Server
PACKET_GC_RET_RANK,	// Ret Rank to Client
PACKET_GC_RESTAURANT_UPDATE,	// server send restaurant data
PACKET_GC_RESTAURANT_DESTUPDATE,	// server send restaurant desk data
PACKET_GC_RESTAURANT_LEVELUPDATE,	// server send restaurant level data
PACKET_CG_RESTAURANT_PREPAREFOOD,	//client send prepare food data
PACKET_CG_RESTAURANT_BILLINGALL,	//client send billing
PACKET_CG_RESTAURANT_FINISHPREPARE,	//client send finish prepare
PACKET_CG_RESTAURANT_ACTIVEDESK,	//client send active dest
PACKET_CG_RESTAURANT_VISITFRIEND,	//
PACKET_CG_SCENE_CHANGEINST,	//client send change channle request
PACKET_GC_SYNC_COPYSCENENUMBER,	//Sync CopySceneNumber to Client
PACKET_CG_COPYSCENERESET,	//Sync CopySceneReset to Client
PACKET_CG_CHANGE_SHOWFASHION,	//Client Change ShowFashion
PACKET_GC_CHANGE_SHOWFASHION,	//Server Change ShowFashion
PACKET_CG_USE_LIVINGSKILL,	//Client Use LivingSkill Formula
PACKET_GC_CREATE_SNARE,	//Create SnareObj
PACKET_CG_PRELIMINARY_APPLYGUILDWAR,	//Apply preliminary GuildWar
PACKET_CG_ASK_PRELIMINARY_WARINFO,	//Ask  preliminary war info
PACKET_GC_RET_PRELIMINARY_WARINFO,	//Ret preliminary war info
PACKET_GC_SYN_TORCH_VALUE,	//Syn Torch Value
PACKET_CG_ASK_TORCH_VALUE,	//Ask Torch Value
PACKET_GC_ASK_STARTGUILDWAR,	//Ask  Star war
PACKET_CG_RET_STARTWAR,	//Ret Star war
PACKET_GC_SHOW_PRELIMINARY_WARRET,	//Show preliminary war Ret info
PACKET_CG_QIANKUNDAI_COMBINE,	//Client Combine QianKunDai Formula
PACKET_GC_QIANKUNDAI_PRODUCT,	//Server Send Combine Product
PACKET_CG_ACTIVE_FELLOW_SKILL,	//Client Ask Active Fellow Skill
PACKET_CG_BUY_STAMINA,	//Client Buy Stamina
PACKET_CG_FIGHTGUILDWARPOINT,	//Client Fight GuildWar Point
PACKET_CG_ASK_FINALGUILDWARGROUPINFO,	//Client Ask FinalGuildWar GroupInfo
PACKET_CG_ASK_FINALGUILDWARPOINTINFO,	//Client Ask FinalGuildWar PointInfo
PACKET_GC_RET_FINALGUILDWARGROUPINFO,	//Ret  FinalGuildWar Group Info
PACKET_GC_RET_FINALGUILDWARPOINTINFO,	//Ret FinalGuildWar Point Info
PACKET_GC_UPDATE_STAMINA_TIME,	//Server Sync Stamina Remain Time
PACKET_GC_LOGIN_QUEUE_STATUS,	//login queue status
PACKET_CG_ASK_YUANBAOSHOP_OPEN,	//Client Ask YuanBaoShop Open
PACKET_GC_RET_YUANBAOSHOP_OPEN,	//Server Ret YuanBaoShop Open
PACKET_GC_SHOW_BLACKMARKET,	//Server Show YuanBaoShop BlackMarket
PACKET_GC_OPENFUNCTION,	//Server Open function
PACKET_CG_ASK_OTHERROLE_DATA,	//client ask other player data
PACKET_GC_RET_OTHERROLE_DATA,	//server send other plater data to client
PACKET_CG_ASK_HIDE_FELLOW,	//Client Ask Hide Fellow
PACKET_CG_ASK_SHOW_FELLOW,	//Client Ask Show Fellow
PACKET_GC_SHOW_ITEMREMIND,	//Server Remind New Item
PACKET_GC_RET_PUT_GEM,	//Server Ret Put Gem
PACKET_CG_CYPAY_SUCCESS,	//Client Send pay success
PACKET_CG_VISIT_SWORDSMAN,	//Client Send  SwordsMan
PACKET_CG_SWORDSMAN_LEVELUP,	//Client Send  SwordsMan levelup
PACKET_CG_BUY_SWORDSMAN,	//Client Send  buy SwordsMan
PACKET_CG_EQUIP_SWORDSMAN,	//Client Send EquipSwordsMan
PACKET_CG_UNEQUIP_SWORDSMAN,	//Client Send UnEquipSwordsMan
PACKET_GC_UPDATE_SWORDSMAN,	//Server update SwordsMan
PACKET_GC_UPDATE_SWORDSMAN_VISITSTATE,	//Server update SwordsManstate
PACKET_GC_ACTIVITYNOTICE,	//Server send ActivityNotice
PACKET_CG_FELLOW_RESET_POINT,	//Client Ask Reset Fellow Point
PACKET_GC_RET_FELLOW_RESET_POINT,	//Server Ret Reset Fellow Point
PACKET_CG_REQ_POWERUP,	//Client power up
PACKET_GC_RES_POWERUP,	//Server send power up
PACKET_GC_POWERUP_LIST,	//Server send power up list
PACKET_GC_BUY_GUILDGOODS,	//Server Send Buy GuildShop Goods Result
PACKET_GC_SYNC_AWARDTABLE,	//Server send OnlineAwardTable to Client
PACKET_CG_REQ_RANDOMNAME,	//Client Request Random Name
PACKET_GC_RET_RANDOMNAME,	//Server ret randomname
PACKET_GC_GUILD_NEWRESERVE,	//Server send Guild Chief And Vice-Chief that their guild have new reserver member
PACKET_GC_SHOW_SKILLNAME,	//Server Show Skill Name
PACKET_CG_ASK_CURGUILDWARTYPE,	//Ask current guidwarType
PACKET_GC_RET_CURGUILDWARTYPE,	//Ret current guidwarType
PACKET_CG_SET_DEATH_PUSH,	//set death push flag
PACKET_GC_SWORDSMANPACK_RESIZE,	//Update SwordsManPack Size,上一次消息包名字错了
PACKET_GC_RET_VISIT_SWORDSMAN,	//RET_VISITSWORDSMAN
PACKET_GC_RET_LEVELUP_SWORDSMAN,	//return levelup
PACKET_CG_REQ_MARRAGE,	//Client ask about marrage
PACKET_GC_RET_MARRAGE,	//Server Ret about marrage
PACKET_CG_ASK_CHALLENGEGUILDWAR,	//Ask ChallengeGuildWar
PACKET_CG_LOCK_SWORDSMAN,	//Client Send LockSwordsMan
PACKET_CG_UNLOCK_SWORDSMAN,	//Client Send UnLockSwordsMan
PACKET_CG_ASK_HUASHANPVP_STATE,	//Request state
PACKET_GC_SYN_LOVERINFO,	//Server Syn Lover Info
PACKET_CG_SNS_INVITE_CODE,	//SNS Invite code
PACKET_GC_SNS_INVITE_CODE_RESPONSE,	//SNS Invite code response
PACKET_GC_SNS_ACTIVE_SHOW,	//SNS active show
PACKET_CG_SNS_SHARE,	//SNS share ok
PACKET_GC_PUSH_NOTIFICATION,	//server send NoticeData to client
PACKET_GC_SHOW_USEITEMREMIND,	// Server Send Client UseItemRemind
PACKET_CG_ASK_NEWONLINEAWARD,	//client ask to get NewOnlineAward
PACKET_GC_NEWONLINEAWARD_DATA,	//Send NewOnlineAward Data to client
PACKET_GC_SYNC_NEWONLINEAWARDTABLE,	//Server send OnlineAwardTable to Client
PACKET_CG_ASK_GAIN_10_FELLOW,	//Client Ask Gain 10 Fellow
PACKET_GC_ASK_GAIN_10_FELLOW_RET,	//Ask Gain 10 Fellow Ret
PACKET_CG_GUILD_INVITE,	//Invite Player Join Main Player's Guild
PACKET_GC_GUILD_INVITE_CONFIRM,	//receive Invite Guild Confirm
PACKET_CG_GUILD_INVITE_CONFIRM,	//send Invite Guild Confirm
PACKET_GC_SYNC_PAY_ACTIVITY_DATA,	//Sync Payment Activity Data
PACKET_CG_ASK_PAY_ACTIVITY_PRIZE,	//Ask Pay Activity Prize
PACKET_GC_ASK_PAY_ACTIVITY_PRIZE_RET,	//Ask Pay Activity Prize Ret
PACKET_CG_ASK_LOCK_TITLE,	//Client Ask Lock Title
PACKET_GC_RET_LOCK_TITLE,	//Server Ret Lock Title
PACKET_CG_REQUEST_CDKEY,	//Client Use CDKey
PACKET_CG_ASK_UPDATE_STORAGEPACK,	//Client Ask Update StoragePack
PACKET_GC_UPDATE_STORAGEPACK,	//Server Update StoragePack
PACKET_GC_ASK_UPDATE_STORAGEPACK_RET,	//Server Ask Update StoragePack Ret
PACKET_CG_PUT_ITEM_STORAGEPACK,	//StoragePack Put Item
PACKET_GC_PUT_ITEM_STORAGEPACK_RET,	//StoragePack Put Item Ret
PACKET_CG_TAKE_ITEM_STORAGEPACK,	//StoragePack Take Item
PACKET_GC_TAKE_ITEM_STORAGEPACK_RET,	//StoragePack Take Item Ret
PACKET_CG_STORAGEPACK_UNLOCK,	//StoragePack Ask Unlock
PACKET_CG_REQ_CHANGENAME,	//Req_ChangeName
PACKET_GC_RET_CHANGENAME,	//Ret_ChangeName
PACKET_GC_WORLDBOSS_SOMECHALL_ME,	//answer_WORLDBOSS_Challenge
PACKET_CG_WORLDBOSS_CHALL_RESPONSE,	//response battle
PACKET_GC_SYNC_MASTER_SKILL_NAME,	//Sync Master Skill Name
PACKET_GC_SYNC_COPYSCENEEXTRANUMBER,	//Sync CopySceneExtraNumber to Client
PACKET_GC_CHANGENAME,	//ChangeName
PACKET_CG_ASK_BLACKMARKETITEMINFO,	//Ask BlackMarket Item info
PACKET_GC_RET_BLACKMARKETITEMINFO,	//Ret BlackMarket Item info
PACKET_CG_BUY_BLACKMARKETITEM,	//Buy BlackMarket Item
PACKET_GC_CLOSE_BLACKMARKET,	//Close BlackMarket Item
PACKET_GC_WORLDBOSS_CHALLEGE_RES,	//worldboss challenge
PACKET_CG_REQ_HUASHAN_PKINFO,	//HuaShan PK Info  request
PACKET_GC_RET_HUASHAN_PKINFO,	//HuaShan PKInfo
PACKET_GC_PLAY_YANHUA,	//YanHua
PACKET_GC_CREATE_YANHUA,	//Create YanHuaObj
PACKET_GC_SYC_FULL_HATE_LIST,	//Server Syc Full Hate List
PACKET_CG_DELHATELIST,	//Client Req Del HateList
PACKET_GC_DELHATELIST,	//Server Ret Del HateList
PACKET_CG_ASK_TRAIL,	//Client Ask Trail Player
PACKET_GC_RET_TRAIL,	//Server Ret Trail Player
PACKET_GC_ADDHATELIST,	//Server Add Hate List
PACKET_GC_UPDATE_DEF_TITLE,	//Update Def Title
PACKET_GC_SERVER_CONFIG,	//server Config 
PACKET_CG_GUILD_JOIN_OTHERPLAYER,	//Guild Client Req Join OtherPlayer Guild
PACKET_GC_OPEN_SHAREWINDOW,	//server send OpenShareWindow to client
PACKET_CG_MASTERSHOP_BUY,	//Client Buy MasterShop Goods
PACKET_GC_MASTERSHOP_BUY,	//Server Send Buy MasterShop Goods Result
PACKET_GC_UPDATE_RECHARGESTATE,	//server send isenable recharge
PACKET_CG_ASK_ISRECHARGE_ENABLE,	//client req is reacharge enable
PACKET_CG_ASK_GUILDWILDWAR,	//Ask GuildWildWar
PACKET_CG_ASK_ENEMYGUILDINFO,	//Ask Enemy Guild Info
PACKET_GC_RET_ENEMYGUILDINFO,	//Ret Enemy Guild Info
PACKET_GC_RET_ISWILDENEMY2USER,	//IsEnemy2User
PACKET_GC_RESTAURANT_VISITFRIENDINFO,	//server send visit friend info
PACKET_GC_SHOWPKNOTICE,	//show PK Notice
PACKET_GC_GUILDACTIVITY_BOSSDATA,	//Update GuildActivity UI
PACKET_CG_ASK_NEW7DAYONLINEAWARD,	//client ask to get New7DayOnlineAward
PACKET_GC_NEW7DAYONLINEAWARD_DATA,	//Send New7DayOnlineAward Data to client
PACKET_GC_SYNC_NEW7DAYONLINEAWARDTABLE,	//Server send New7DayOnlineAwardTable to Client
PACKET_GC_SERVERFLAGS,	//Server send flags when client login
PACKET_CG_ASK_SPECIALAWARD,	//Client Ask For SpecialAward
PACKET_GC_TODAY_FIRST_LOGIN,	//Server Send Today First Login 
PACKET_CG_ASK_RECOVER,	//Client Ask to recover
PACKET_CG_VOICE_CHAT,	//Client Send Voice Chat
PACKET_GC_VOICE_CHAT,	//Server Send Voice Chat
PACKET_CG_ASK_MONEYTREE_YUANBAOAWARD_FACTOR,	//Client Ask Yuanbao factor
PACKET_GC_MONEYTREE_YUANBAOAWARD_FACTOR,	//Server Send Yuanbao factor
PACKET_GC_GAMESERVER_CONFIG,	//
PACKET_CG_ASK_PAOSHANG_ACCEPT,	//Client Ask to Accept PaoShang
PACKET_CG_ASSIGN_PAOSHANG_TIME,	//Client Ask Assign PaoShang Times
PACKET_CG_GUILD_SHOP_ITEM_LIST,	//Client Refresh Guild Shop Item
PACKET_GC_GUILD_SHOP_ITEM_LIST,	//Server Response Guild Shop Item
PACKET_CG_ASK_CHRISTMASTREE,	//Ask Christmas Tree Info
PACKET_GC_RET_CHRISTMASTREE,	//Server response  Christmas Tree
PACKET_CG_ASK_DECORATE_TREE,	//Ask Decorate Christmas Tree 
PACKET_GC_RET_DECORATE_TREE,	//Server ret Decorate Christmas Tree
PACKET_CG_GUILD_SHOP_ITEM_MAKE_LIST,	//Client Ask to guild shop item make list
PACKET_GC_GUILD_SHOP_ITEM_MAKE_LIST,	//Server ret guild shop item make list
PACKET_CG_GUILD_SHOP_ITEM_MAKE,	//Client Ask to guild shop item make
PACKET_GC_GUILD_SHOP_ITEM_MAKE,	//Server ret guild shop item make
PACKET_CG_ASK_PLAYER_DECORATION_INFO,	//Ask Player Decoration Rank
PACKET_GC_RET_PLAYER_DECORATION_INFO,	//Server ret Player Decorattion Rank 
PACKET_CG_SEND_GUILDMAIL,	//Client Send GuildMail
PACKET_GC_FILTER_ABUSE,	//Server send Abuse
PACKET_GC_BROADCASTPSSTATE,	//Server Broadcast PaoShang State
PACKET_CG_USE_LIGHT_SKILL,	//Client Send Using Light Skill
PACKET_GC_USE_LIGHT_SKILL,	//Server Broad Using Light Skill
PACKET_GC_LEARN_LIGHT_SKILL,	//Server Send Client Learn Light Skill
PACKET_CG_ASK_PAOSHANGINFO,	//Client Ask PaoShang Info
PACKET_GC_RET_PAOSHANGINFO,	//Ret PaoShang Info
PACKET_CG_ASK_SETAUTOASSIGNPSTIMES,	//Client set Auto  Assign PaoShang
PACKET_CG_WISHINGWELL_WISH,	//Client ask about wishingwell
PACKET_CG_WISHINGWELL_FETCH,	//
PACKET_GC_MONEYTREE_VIP_RET,	//Server Send moneytree vip ret to client
PACKET_CG_PING,	//Client send ping
PACKET_GC_RET_PING,	//sever return ping
PACKET_GC_WISHINGWELL_SYNC,	//server send mission list to client
PACKET_GC_UPDATE_POS,	//server send Pos to client
PACKET_GC_SYNC_MONTHMULTIPLE,	//Server Sync Month Multiple
PACKET_CG_REQ_MONTHMULTIPLE,	//Client Req Month Multiple Info
PACKET_CG_ASK_SIGNININFO,	//
PACKET_GC_RET_SIGNININFO,	//Server Send signinInfo ret to client
PACKET_GC_RET_ACCUMULATESIGNININFO,	//Server Send accumulate signinInfo ret to client
PACKET_CG_ASK_GETREWARDFORSIGNIN,	//Client get signInReward
PACKET_GC_RET_GETREWARDFORSIGNIN,	//sever return ping
PACKET_CG_ASK_GETREWARDFORACCUMULATESIGNIN,	//Client get accumulate signin reward 
PACKET_GC_RET_GETREWARDFORACCUMULATESIGNIN,	//sever return ping
PACKET_GC_SYNC_SHOPPINGLIST_PRESENT,	//Server Sync Present ShoppingList
PACKET_CG_ADD_SHOPPINGLIST_PRESENT,	//Client Add Present ShoppingList
PACKET_GC_ADD_SHOPPINGLIST_PRESENT,	//Server Add Present ShoppingList
PACKET_CG_RECEIVE_SHOPPINGLIST_PRESENT,	//Client Receive Present ShoppingList
PACKET_GC_RECEIVE_SHOPPINGLIST_PRESENT,	//Server Receive Present ShoppingList
PACKET_GC_SYNC_SHOPPINGLIST_WAITPAY,	//Server Sync WaitPay ShoppingList
PACKET_CG_ADD_SHOPPINGLIST_WAITPAY,	//Client Add WaitPay ShoppingList
PACKET_GC_ADD_SHOPPINGLIST_WAITPAY,	//Server Add WaitPay ShoppingList
PACKET_CG_PAY_SHOPPINGLIST_WAITPAY,	//Client Pay WaitPay ShoppingList
PACKET_GC_PAY_SHOPPINGLIST_WAITPAY,	//Server Pay WaitPay ShoppingList
PACKET_CG_REFUSE_SHOPPINGLIST_WAITPAY,	//Client Refuse WaitPay ShoppingList
PACKET_GC_REFUSE_SHOPPINGLIST_WAITPAY,	//Server Refuse WaitPay ShoppingList
PACKET_GC_DEL_SHOPPINGLIST_PRESENTOVERDUE,	//Server Del Present Overdue
PACKET_GC_DEL_SHOPPINGLIST_WAITPAYOVERDUE,	//Server Del WaitPay Overdue
PACKET_CG_TEAM_INVITEFOLLOW,	//leader ask teammember to follow
PACKET_GC_TEAM_INVITEFOLLOW,	//Server send team follow msg to client
PACKET_CG_TEAM_INVITEFOLLOW_RESULT,	//teammemmber send follow result
PACKET_CG_ASK_QUITFOLLOW,	//teammemmber ask quit following
PACKET_GC_UPDATE_FOLLOWSTATE,	//server update player followstate to client
PACKET_CG_WULIN_REGISTER,	//regiser for Wu Lin
PACKET_CG_WULIN_MEMBERLIST,	//WuLin Member list request
PACKET_GC_WULIN_MEMBERLIST,	//WuLin Member list
PACKET_CG_ASK_WULIN_STATE,	//Request state
PACKET_GC_WULIN_STATE,	//WuLin state
PACKET_GC_WULIN_SHOWSEARCH,	//WuLin search opponent
PACKET_GC_WULIN_OPPONENTVIEW,	//WuLin Opponent View
PACKET_CG_TEAM_CALLMEMBER,	//leader ask Call Member
PACKET_GC_TEAM_CALLMEMBER,	//Server send team call member msg to client
PACKET_CG_TEAM_CALLMEMBER_RESULT,	//teammemmber send call member result
PACKET_GC_UPDATE_COST_REBATE_INFO,	//update cost rebate info
PACKET_CG_ASK_COST_REBATE_PRIZE,	//ask cost rebate prize
PACKET_GC_RET_COST_REBATE_PRIZE,	//ret cost rebate prize
PACKET_GC_WULIN_HEROS_LIST,	//wulin heros in history 
PACKET_GC_VILLAIN_INFO,	//villain 
PACKET_CG_OPEN_VILLAINCOPYSCENE,	//
PACKET_GC_ISOPEN_SIGNINANDOLDLOGIN,	//
PACKET_CG_SHENQI_WASHATTR,	//wash shenqi 
PACKET_CG_SHENQI_SKILLLEVELUP,	//LevelUp ShenQiSkill
PACKET_CG_ASK_VILLAIN_INFO,	//ask villain
PACKET_GC_SYNC_ACTIVITYREWARDTABLE,	//Server send ActivityRewardTable to Client
PACKET_GC_SYNC_JOINNUMREWARD,	//Server send JoinNumRewardTable to Client
PACKET_CG_RECEIVE_ACTIVITYREWARD,	//receive activity reward
PACKET_GC_RECEIVE_ACTIVITYREWARD_RESULT,	//Server send ReceiveActivityRewardResult to Client
PACKET_CG_ASK_DOWNLOAD_VOICECHAT,	//Client Ask Download VoiceChat
PACKET_GC_RET_DOWNLOAD_VOICECHAT,	//Server Ret Download VoiceChat
PACKET_CG_SHENQI_SAVEATTR,	// Save ShenQi Attr
PACKET_GC_SHENQI_SHOWNEWATTR,	//ShenQi Show New Attr
PACKET_CG_ASK_HONGBAO_SEND,	// Ask to Send HongBao
PACKET_CG_ASK_HONGBAO_ROB,	// Ask to rob HongBao
PACKET_CG_ASK_HONGBAO_UPDATEROBLIST,	// Ask to Update HongBaolist
PACKET_GC_RET_HONGBAO_UPDATEROBLIST,	// Ask to Update HongBaolist
PACKET_CG_ASK_USEROSE,	// Ask to Server User Rose
PACKET_CG_ASK_USEKEEPSAKE,	// Ask to Server User keepsake
PACKET_CG_REVIEW_RESULT,	// Update Review Result
PACKET_CG_RECEIVE_JOINNUMREWARD,	//receive JoinNum reward
PACKET_GC_RECEIVE_JOINNUMREWARD_RESULT,	//Server send Receive JoinNumResult to Client
PACKET_GC_REVIEW_RESULT,	// Update Review Result
PACKET_GC_NIANSHOU_INFO,	//
PACKET_CG_OPEN_NIANSHOUCOPYSCENE,	//
PACKET_CG_ASK_NIANSHOU_INFO,	//ask nianshou
PACKET_CG_DAILYMISSION_UPDATE_NEW,	//Ask to update DailyMission by item
PACKET_GC_DAILYMISSION_UPDATE_NEW_RET,	//Send DailyMission UpdateData by item
PACKET_GC_VILLAIN_MONSTER_INFO,	//GC_VILLAIN_MONSTER
PACKET_CG_GONGJISHOP_BUY,	//Client Buy GongJi Goods
PACKET_GC_GONGJISHOP_BUY,	//Server Send Buy GongJiShop Goods Result
PACKET_CG_GIVE_CHARMITEM,	//Client send give charm item
PACKET_GC_SYNC_BUYBACKCOPYSCENENUMBER,	//Sync BuybackCopySceneNumber to Client
PACKET_CG_BUYBACK_COPYSCENENUMBER,	//Client send Buyback CopyScene Number
PACKET_GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO,	//update pay rebate info
PACKET_CG_ASK_SPECIALTIME_PAY_REBATE_PRIZE,	//ask pay rebate prize
PACKET_GC_RET_SPECIALTIME_PAY_REBATE_PRIZE,	//ret pay rebate prize
PACKET_GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO,	//update pay rebate rank info
PACKET_CG_APPLY_HEROCODE,	//Client Apply New Hero Code
PACKET_GC_RET_HEROCODE,	//Server Ret New Hero Code
PACKET_CG_USE_HEROCODE,	//Client Use Hero Code
PACKET_GC_RET_USE_HEROCODE,	//Server Ret Use Hero Code
PACKET_CG_ASK_JUYILING_ITEM,	//Client Ask JuYiLing Item
PACKET_CG_ASK_JUYI_AWARD,	//Client Ask JuYi Award
PACKET_GC_SYNC_JUYI_INFO,	//Server Sync JuYi Info
PACKET_CG_ASK_GUIDMISSION_OPEN,	// Ask Open Guild Mission
PACKET_CG_ASK_GUIDMISSION_DATA,	// Ask GuildMission Data
PACKET_GC_RET_GUIDMISSION_DATA,	//Server Send  GuildMission Data
PACKET_CG_ASK_GUIDMISSION_ACCEPT,	// Ask GuildMission to accept
PACKET_CG_REQ_GONGZHAN,	//Client Send GongZhan Team Req
PACKET_CG_ASK_GONGZHAN_REWARD,	//Client Ask GongZhan Reward
PACKET_CG_REQ_HATE_USERINFO,	//Client Req Update Hate UserInfo
PACKET_GC_RET_HATE_USERINFO,	//Server Ret Update Hate UserInfo
PACKET_CG_REQ_BLACK_USERINFO,	//Client Req Update Black UserInfo
PACKET_GC_RET_BLACK_USERINFO,	//Server Ret Update Black UserInfo
PACKET_GC_SYNC_CSACTIVITY,	//Sync CopySceneActivity to Client
PACKET_CG_REQ_UPGRADETRAINING,	//UpgradeTrainng
PACKET_GC_APPLY_STAGE_CHANGE,	//Apply Stage Change
PACKET_GC_SET_GUIDE_DIR_SIGN_DEST,	//Set GuideDirSign Destination
PACKET_CG_CUTSCENE_RFC,	//Remot Function Call From Cutscene
PACKET_GC_PLAY_CUTSCENE,	//Play Cutscene
PACKET_CG_CLEAN_CACHE_SKILL,	//CleanCacheSkill
PACKET_GC_SYNC_FLY_ANIMATION_STATE,	//Fly Control Animation Sync
PACKET_CG_FELLOW_REBIRTH,	//Fellow Rebirth
PACKET_CG_FELLOW_XISUI,	//Fellow XiSui
PACKET_CG_FELLOW_ELEMENTSKILL_LEVELUP,	//Fellow Element Skill Level Up
PACKET_CG_FELLOW_ELEMENTSKILL_LEARN,	//Fellow Learn New Element Skill
PACKET_CG_GET_BELLE,	//Get a belle
PACKET_GC_RET_GET_BELLE,	//Return get belle result
PACKET_CG_GET_NEWSERVERMOUNT,	//Get New Server Activity Bonus Mount
PACKET_CG_FELLOW_TALENTSKILL_LEVELUP,	//Fellow Talent Skill Level Up
PACKET_CG_FELLOW_BREEDING_LOCK,	//Fellow Lock Breeding
PACKET_CG_FELLOW_BREEDING_UNLOCK,	//Fellow UnLock Breeding
PACKET_GC_FELLOW_FRIEND_BREEDING,	//Sync Fellow To Friend Breeding
PACKET_CG_FELLOW_BREEDING_BEGIN,	//Fellow Begin Breeding
PACKET_CG_FELLOW_BREEDING_SPEED,	//Fellow Speed Breeding
PACKET_GC_SYNC_FELLOW_BREEDINGINFO,	//Sync Fellow Breeding info
PACKET_CG_FELLOW_BREEDING_RECEIVE,	//Fellow Receive Alien
PACKET_CG_OPEN_STORYCOPYSCENE,	//Send Open StoryCopyScene Req to Server
PACKET_CG_REQ_STORYCOPYSCENE_CHAPTERAWARD,	//Send StoryCopyScene chapter award req to server
PACKET_GC_RET_STORYCOPYSCENE_CHAPTERAWARD,	//Return CG_REQ_STORYCOPYSCENE_CHAPTERAWARD result
PACKET_GC_SYNC_STORYCOPYSCENEINFO,	//Sync StoryCopySceneInfo to Client
PACKET_GC_SYNC_STORYCOPYSCENEAWARDINFO,	//Sync StoryCopyScene ChapterAwardInfo to Client
PACKET_GC_FELLOW_BREEDING_LOCK,	//Ret Fellow Lock Breeding
PACKET_GC_FELLOW_BREEDING_UNLOCK,	//Ret Fellow UnLock Breeding
PACKET_CG_TEAM_TRANS,	//Client Team Trans
PACKET_GC_TEAM_TRANS_EFFECT,	//Play Team Trans Effect
PACKET_GC_STORYCOPYSCENERESULT,	//StoryCopySceneResult
PACKET_GC_SYNC_OTHEROBJ_CHANGEMODESTATE,	//RET_CHANGESTATE
PACKET_GC_SHOW_PICGUIDE,	//Server Show PicGuide
PACKET_GC_FELLOW_REBIRTH,	//Server Ret Fellow Rebirth
PACKET_GC_UPDATE_NEWSERVERMOUNT,	//ret New Server Mount
PACKET_CG_TRIGGER_ENTER,	//Client Obj Enter Trigger
PACKET_CG_GUILD_SET_AUTHORITY,	//Guild Chief Set Authority
PACKET_CG_GUILD_CHANGE_JOBNAME,	//Guild Chief Change Job Name
PACKET_CG_SKILL_LEVELUP_TO_MAX,	//SkillLevelUp one key 
PACKET_CG_GUILD_REQ_WEEKREWARD,	//Guild Member Req Week Reward
PACKET_GC_UPDATE_LASTWEEKCONTRI,	//Server Update Player LastWeek Contribute
PACKET_GC_CREATE_TRIGGER,	//tell client to create trigger
PACKET_GC_GUILD_RESERVE_LIST,	//Guild Server Ret Player Reserve List
PACKET_CG_PLAYCUTSCENE_OVER,	//Cutscene play over
PACKET_CG_CJG_EXTRA_REWARD_REQ,	//Send CangJingGe Extra Reward Req to Server
PACKET_GC_CJG_EXTRA_REWARD_RET,	//Send CangJingGe Extra Reward Ret to Client
PACKET_CG_GUILD_SEARCH,	//Client Search Guild
PACKET_GC_GUILD_SEARCH,	//Server Ret Guild Search Result
PACKET_CG_GUILD_JOINREQ,	//Client Change Guild Join Req
PACKET_GC_GUILD_JOINREQ,	//Server Ret Change Guild Join Req
PACKET_GC_GUILD_CHANGE_JOBNAME,	//Guild Ret Change Job Name
PACKET_GC_GUILD_SET_AUTHORITY,	//Guild Ret Set Authority
PACKET_CG_GUILD_REQ_CHANGE_DECLARATION,	//Guild Client Req Change Guild Declaration
PACKET_CG_GUILD_INVITE_MAIL,	//Guild Invite Friend Mail
PACKET_GC_PAOHUAN_SYNC_INFO,	//Paohuan Sync Info
PACKET_CG_PAOHUAN_REQ_REFRESH,	//Paohuan Req Refresh
PACKET_GC_SYNC_VITALITY,	//Sync Vitatliy
PACKET_CG_GUILD_OPEN_HIDEANDSEEK,	//Guild Open HideAndSeek
PACKET_GC_GUILD_SYNC_HIDEANDSEEK,	//Update Guild HideAndSeek Info
PACKET_CG_GUILD_FIND_HIDEANDSEEK,	//Guild Find HideAndSeek Npc
PACKET_CG_ASK_COLLECTBORNMONSTER,	//CollectBornMonster
PACKET_CG_REQ_STORYCOPYSCENE_CHAPTERLEVELAWARD,	//Send StoryCopyScene chapter level award req to server
PACKET_GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD,	//Return CG_REQ_STORYCOPYSCENE_CHAPTERLEVELAWARD result
PACKET_CG_ASK_EQUIPFLYWING,	//FLYWING
PACKET_GC_EQUIPFLYWING_RESULT,	//FLYWING_RETURN
PACKET_GC_GOLD_MONEY_SHOP_ITEM_LIST,	//Server Response Gold Money Shop Item
PACKET_CG_BUY_GOLDMONEYSHOPGOODS,	//Client Buy GoldMoneyShop Goods
PACKET_GC_UPDATE_GOLDMONEYSHOPTIME,	//ret Gold Moeny Shop Time
PACKET_CG_ASK_GOLDMONEYSHOPTIME,	//Client AskTime
PACKET_CG_LEVELUP_SKILLBOOK,	//Client ItemSkill LevelUp
PACKET_GC_RESTAURANT_GIFTINFO,	//
PACKET_GC_PVP_TIME_INFO,	//
PACKET_GC_PVP_TIME_JIFEN_INFO,	//
PACKET_GC_SYNC_OBJ_IS_VISIABLE,	//
PACKET_CG_PVPSHOP_OPEN,	//
PACKET_CG_PVPSHOP_BRUSH,	//
PACKET_CG_PVPSHOP_GET_JIFEN,	//
PACKET_GC_PVPSHOP_BLOCK,	//
PACKET_GC_PVPSHOP_ITEM_LEFTCOUNT,	//
PACKET_GC_PVPSHOP_GET_JIFEN,	//
PACKET_CG_PVPSHOP_BUY,	//
PACKET_GC_PVPSHOP_BUY_RESULT,	//
PACKET_GC_PVPSHOP_BRUSH_RESULT,	//
PACKET_CM_PACKET,	//gm客户端和gm服务器通讯的协议,,GM服务器简称为M
PACKET_MC_PACKET,	//
PACKET_MG_PACKET,	//gm服务器到游戏服务器之间的协议,,GM服务器简称为M
PACKET_GM_PACKET,	//
PACKET_CG_ASK_STORYCOPYSCENE_SWEEP,	//Send StoryCopySceneSweep Ask to Server
PACKET_GC_RET_STORYCOPYSCENE_SWEEP,	//Send StoryCopySceneSweep Result to Client
PACKET_GC_SYNCALLCARNIVALGOAL,	//Server Sync all 7days carnival goal flag
PACKET_GC_SYNCSINGLECARNIVALGOAL,	//Server Sync 7days carnival goal flag
PACKET_CG_REQUESTCARNIVALAWARD,	//Client Request 7days carnival award
PACKET_GC_RETCARNIVALAWARD,	//Server Ret 7days carnival award
PACKET_CG_REQUESTCARNIVALGOAL_DATA,	//Server request 7days carnival goal data
PACKET_CG_GETVIPREWARD,	//Client Get Vip Reward
PACKET_GC_CONTINUELOGINAWARD_DATA,	//Server Continue Login Award Data
PACKET_CG_ASK_CONTINUELOGIN_AWARD,	//client ask continue login award
PACKET_CG_ASK_LEVELAWARD,	//client ask level award
PACKET_CG_ASK_COMBATVALUEAWARD,	//client ask combatvalue award
PACKET_GC_LEVELAWARD_DATA,	//Server Level Award Data
PACKET_GC_COMBATVALUEAWARD_DATA,	//Server Combat Value Award Data
PACKET_GC_BEGINENTERBREEDING,	//Server Begin Enter Fellow Breeding
PACKET_GC_BROADCAST_BELLEDATA,	//Server broadcast belle data
PACKET_CG_ASK_ABSORB_BELLEPIECE,	//client ask absorb belle piece
PACKET_GC_RET_ABSORB_BELLEPIECE,	//server  absorb belle  piece ret
PACKET_CG_EQUIPBACK_GEM_COMBINE,	//client ask equipback combine
PACKET_GC_RET_EQUIPBACK_GEM_COMBINE,	//server  equipback gem combine ret

 PACKET_SIZE
 }
