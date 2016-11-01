#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.TableManager
struct TableManager_t332;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// GCGame.Table.SerializableTable
struct SerializableTable_t334;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>
struct List_1_t336;
// GCGame.Table.Tab_AchieveNotice
struct Tab_AchieveNotice_t337;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>
struct Dictionary_2_t143;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>
struct List_1_t338;
// GCGame.Table.Tab_ActivenessAward
struct Tab_ActivenessAward_t339;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>>
struct Dictionary_2_t144;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Animation>
struct List_1_t340;
// GCGame.Table.Tab_Animation
struct Tab_Animation_t341;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Animation>>
struct Dictionary_2_t145;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AnimationCurve>
struct List_1_t342;
// GCGame.Table.Tab_AnimationCurve
struct Tab_AnimationCurve_t343;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AnimationCurve>>
struct Dictionary_2_t146;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AutoSearch>
struct List_1_t344;
// GCGame.Table.Tab_AutoSearch
struct Tab_AutoSearch_t345;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AutoSearch>>
struct Dictionary_2_t147;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>
struct List_1_t346;
// GCGame.Table.Tab_BackPackUnlock
struct Tab_BackPackUnlock_t347;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>>
struct Dictionary_2_t148;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BePowerLevel>
struct List_1_t348;
// GCGame.Table.Tab_BePowerLevel
struct Tab_BePowerLevel_t349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BePowerLevel>>
struct Dictionary_2_t149;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Belle>
struct List_1_t350;
// GCGame.Table.Tab_Belle
struct Tab_Belle_t351;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Belle>>
struct Dictionary_2_t150;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAddition>
struct List_1_t352;
// GCGame.Table.Tab_BelleAddition
struct Tab_BelleAddition_t353;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAddition>>
struct Dictionary_2_t151;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAward>
struct List_1_t354;
// GCGame.Table.Tab_BelleAward
struct Tab_BelleAward_t355;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAward>>
struct Dictionary_2_t152;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseCost>
struct List_1_t356;
// GCGame.Table.Tab_BelleCloseCost
struct Tab_BelleCloseCost_t357;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseCost>>
struct Dictionary_2_t153;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>
struct List_1_t358;
// GCGame.Table.Tab_BelleCloseLevel
struct Tab_BelleCloseLevel_t359;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>>
struct Dictionary_2_t154;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay>
struct List_1_t360;
// GCGame.Table.Tab_BelleGetItemWay
struct Tab_BelleGetItemWay_t361;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay>>
struct Dictionary_2_t155;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleLevelup>
struct List_1_t362;
// GCGame.Table.Tab_BelleLevelup
struct Tab_BelleLevelup_t363;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleLevelup>>
struct Dictionary_2_t156;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrix>
struct List_1_t364;
// GCGame.Table.Tab_BelleMatrix
struct Tab_BelleMatrix_t365;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrix>>
struct Dictionary_2_t157;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrixAddition>
struct List_1_t366;
// GCGame.Table.Tab_BelleMatrixAddition
struct Tab_BelleMatrixAddition_t367;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrixAddition>>
struct Dictionary_2_t158;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BiographyItem>
struct List_1_t368;
// GCGame.Table.Tab_BiographyItem
struct Tab_BiographyItem_t369;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BiographyItem>>
struct Dictionary_2_t159;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowAttr>
struct List_1_t370;
// GCGame.Table.Tab_CabalFellowAttr
struct Tab_CabalFellowAttr_t371;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowAttr>>
struct Dictionary_2_t160;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkill>
struct List_1_t372;
// GCGame.Table.Tab_CabalFellowElementSkill
struct Tab_CabalFellowElementSkill_t373;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkill>>
struct Dictionary_2_t161;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook>
struct List_1_t374;
// GCGame.Table.Tab_CabalFellowElementSkillBook
struct Tab_CabalFellowElementSkillBook_t375;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook>>
struct Dictionary_2_t162;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>
struct List_1_t376;
// GCGame.Table.Tab_CabalFellowStar
struct Tab_CabalFellowStar_t377;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>>
struct Dictionary_2_t163;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkill>
struct List_1_t378;
// GCGame.Table.Tab_CabalFellowTallentSkill
struct Tab_CabalFellowTallentSkill_t379;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkill>>
struct Dictionary_2_t164;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkillBook>
struct List_1_t380;
// GCGame.Table.Tab_CabalFellowTallentSkillBook
struct Tab_CabalFellowTallentSkillBook_t381;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkillBook>>
struct Dictionary_2_t165;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CameraRock>
struct List_1_t382;
// GCGame.Table.Tab_CameraRock
struct Tab_CameraRock_t383;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CameraRock>>
struct Dictionary_2_t166;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeExtraReward>
struct List_1_t384;
// GCGame.Table.Tab_CangJingGeExtraReward
struct Tab_CangJingGeExtraReward_t385;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeExtraReward>>
struct Dictionary_2_t167;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>
struct List_1_t386;
// GCGame.Table.Tab_CangJingGeInfo
struct Tab_CangJingGeInfo_t387;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>>
struct Dictionary_2_t168;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>
struct List_1_t388;
// GCGame.Table.Tab_CangKuUnlock
struct Tab_CangKuUnlock_t389;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>>
struct Dictionary_2_t169;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharModel>
struct List_1_t390;
// GCGame.Table.Tab_CharModel
struct Tab_CharModel_t391;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharModel>>
struct Dictionary_2_t170;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharMount>
struct List_1_t392;
// GCGame.Table.Tab_CharMount
struct Tab_CharMount_t393;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharMount>>
struct Dictionary_2_t171;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharmItem>
struct List_1_t394;
// GCGame.Table.Tab_CharmItem
struct Tab_CharmItem_t395;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharmItem>>
struct Dictionary_2_t172;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasMeterialItem>
struct List_1_t396;
// GCGame.Table.Tab_ChristmasMeterialItem
struct Tab_ChristmasMeterialItem_t397;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasMeterialItem>>
struct Dictionary_2_t173;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasTreeLevelUp>
struct List_1_t398;
// GCGame.Table.Tab_ChristmasTreeLevelUp
struct Tab_ChristmasTreeLevelUp_t399;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasTreeLevelUp>>
struct Dictionary_2_t174;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ClientStoryTable>
struct List_1_t400;
// GCGame.Table.Tab_ClientStoryTable
struct Tab_ClientStoryTable_t401;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ClientStoryTable>>
struct Dictionary_2_t175;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CollectBornMonster>
struct List_1_t402;
// GCGame.Table.Tab_CollectBornMonster
struct Tab_CollectBornMonster_t403;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectBornMonster>>
struct Dictionary_2_t176;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>
struct List_1_t404;
// GCGame.Table.Tab_CollectItem
struct Tab_CollectItem_t405;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>>
struct Dictionary_2_t177;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CommonItem>
struct List_1_t406;
// GCGame.Table.Tab_CommonItem
struct Tab_CommonItem_t407;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CommonItem>>
struct Dictionary_2_t178;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CoolDownTime>
struct List_1_t408;
// GCGame.Table.Tab_CoolDownTime
struct Tab_CoolDownTime_t409;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CoolDownTime>>
struct Dictionary_2_t179;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopyScene>
struct List_1_t410;
// GCGame.Table.Tab_CopyScene
struct Tab_CopyScene_t411;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopyScene>>
struct Dictionary_2_t180;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneRule>
struct List_1_t412;
// GCGame.Table.Tab_CopySceneRule
struct Tab_CopySceneRule_t413;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneRule>>
struct Dictionary_2_t181;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneScoreCalc>
struct List_1_t414;
// GCGame.Table.Tab_CopySceneScoreCalc
struct Tab_CopySceneScoreCalc_t415;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneScoreCalc>>
struct Dictionary_2_t182;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>
struct List_1_t416;
// GCGame.Table.Tab_DailyLuckyDrawBonusInfo
struct Tab_DailyLuckyDrawBonusInfo_t417;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>>
struct Dictionary_2_t183;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawPoolInfo>
struct List_1_t418;
// GCGame.Table.Tab_DailyLuckyDrawPoolInfo
struct Tab_DailyLuckyDrawPoolInfo_t419;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawPoolInfo>>
struct Dictionary_2_t184;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMission>
struct List_1_t420;
// GCGame.Table.Tab_DailyMission
struct Tab_DailyMission_t421;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMission>>
struct Dictionary_2_t185;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMissionQuality>
struct List_1_t422;
// GCGame.Table.Tab_DailyMissionQuality
struct Tab_DailyMissionQuality_t423;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMissionQuality>>
struct Dictionary_2_t186;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType>
struct List_1_t424;
// GCGame.Table.Tab_DamageBoardType
struct Tab_DamageBoardType_t425;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType>>
struct Dictionary_2_t187;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DayAward>
struct List_1_t426;
// GCGame.Table.Tab_DayAward
struct Tab_DayAward_t427;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DayAward>>
struct Dictionary_2_t188;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DropNotify>
struct List_1_t428;
// GCGame.Table.Tab_DropNotify
struct Tab_DropNotify_t429;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DropNotify>>
struct Dictionary_2_t189;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>
struct List_1_t430;
// GCGame.Table.Tab_DynamicObstacle
struct Tab_DynamicObstacle_t431;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>>
struct Dictionary_2_t190;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Effect>
struct List_1_t432;
// GCGame.Table.Tab_Effect
struct Tab_Effect_t433;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Effect>>
struct Dictionary_2_t191;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>
struct List_1_t434;
// GCGame.Table.Tab_EffectPoint
struct Tab_EffectPoint_t435;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>>
struct Dictionary_2_t192;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipAttr>
struct List_1_t436;
// GCGame.Table.Tab_EquipAttr
struct Tab_EquipAttr_t437;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipAttr>>
struct Dictionary_2_t193;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipEnchance>
struct List_1_t438;
// GCGame.Table.Tab_EquipEnchance
struct Tab_EquipEnchance_t439;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipEnchance>>
struct Dictionary_2_t194;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>
struct List_1_t440;
// GCGame.Table.Tab_EquipSet
struct Tab_EquipSet_t441;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>>
struct Dictionary_2_t195;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSetTransfer>
struct List_1_t442;
// GCGame.Table.Tab_EquipSetTransfer
struct Tab_EquipSetTransfer_t443;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSetTransfer>>
struct Dictionary_2_t196;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStar>
struct List_1_t444;
// GCGame.Table.Tab_EquipStar
struct Tab_EquipStar_t445;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStar>>
struct Dictionary_2_t197;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarLimit>
struct List_1_t446;
// GCGame.Table.Tab_EquipStarLimit
struct Tab_EquipStarLimit_t447;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarLimit>>
struct Dictionary_2_t198;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarRate>
struct List_1_t448;
// GCGame.Table.Tab_EquipStarRate
struct Tab_EquipStarRate_t449;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarRate>>
struct Dictionary_2_t199;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FakeObject>
struct List_1_t450;
// GCGame.Table.Tab_FakeObject
struct Tab_FakeObject_t451;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FakeObject>>
struct Dictionary_2_t200;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>
struct List_1_t452;
// GCGame.Table.Tab_FashionData
struct Tab_FashionData_t453;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>>
struct Dictionary_2_t201;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>
struct List_1_t454;
// GCGame.Table.Tab_FellowGainCost
struct Tab_FellowGainCost_t455;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>>
struct Dictionary_2_t202;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainRate>
struct List_1_t456;
// GCGame.Table.Tab_FellowGainRate
struct Tab_FellowGainRate_t457;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainRate>>
struct Dictionary_2_t203;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>
struct List_1_t458;
// GCGame.Table.Tab_FlyWing
struct Tab_FlyWing_t459;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>>
struct Dictionary_2_t204;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWingClient>
struct List_1_t460;
// GCGame.Table.Tab_FlyWingClient
struct Tab_FlyWingClient_t461;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWingClient>>
struct Dictionary_2_t205;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemAttr>
struct List_1_t462;
// GCGame.Table.Tab_GemAttr
struct Tab_GemAttr_t463;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemAttr>>
struct Dictionary_2_t206;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemMount>
struct List_1_t464;
// GCGame.Table.Tab_GemMount
struct Tab_GemMount_t465;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemMount>>
struct Dictionary_2_t207;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>
struct List_1_t466;
// GCGame.Table.Tab_GemOpenLimit
struct Tab_GemOpenLimit_t467;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>>
struct Dictionary_2_t208;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GoldMoneyShop>
struct List_1_t468;
// GCGame.Table.Tab_GoldMoneyShop
struct Tab_GoldMoneyShop_t469;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GoldMoneyShop>>
struct Dictionary_2_t209;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GongJiShop>
struct List_1_t470;
// GCGame.Table.Tab_GongJiShop
struct Tab_GongJiShop_t471;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GongJiShop>>
struct Dictionary_2_t210;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GongZhanReward>
struct List_1_t472;
// GCGame.Table.Tab_GongZhanReward
struct Tab_GongZhanReward_t473;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GongZhanReward>>
struct Dictionary_2_t211;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>
struct List_1_t474;
// GCGame.Table.Tab_GuildActivityBoss
struct Tab_GuildActivityBoss_t475;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>>
struct Dictionary_2_t212;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>
struct List_1_t476;
// GCGame.Table.Tab_GuildAttrAddition
struct Tab_GuildAttrAddition_t477;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>>
struct Dictionary_2_t213;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAutoLevelUp>
struct List_1_t478;
// GCGame.Table.Tab_GuildAutoLevelUp
struct Tab_GuildAutoLevelUp_t479;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAutoLevelUp>>
struct Dictionary_2_t214;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMission>
struct List_1_t480;
// GCGame.Table.Tab_GuildMission
struct Tab_GuildMission_t481;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMission>>
struct Dictionary_2_t215;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionAward>
struct List_1_t482;
// GCGame.Table.Tab_GuildMissionAward
struct Tab_GuildMissionAward_t483;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionAward>>
struct Dictionary_2_t216;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionGuild>
struct List_1_t484;
// GCGame.Table.Tab_GuildMissionGuild
struct Tab_GuildMissionGuild_t485;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionGuild>>
struct Dictionary_2_t217;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildPaoShang>
struct List_1_t486;
// GCGame.Table.Tab_GuildPaoShang
struct Tab_GuildPaoShang_t487;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildPaoShang>>
struct Dictionary_2_t218;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildRule>
struct List_1_t488;
// GCGame.Table.Tab_GuildRule
struct Tab_GuildRule_t489;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildRule>>
struct Dictionary_2_t219;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>
struct List_1_t490;
// GCGame.Table.Tab_GuildShop
struct Tab_GuildShop_t491;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>>
struct Dictionary_2_t220;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildWealthItemMake>
struct List_1_t492;
// GCGame.Table.Tab_GuildWealthItemMake
struct Tab_GuildWealthItemMake_t493;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildWealthItemMake>>
struct Dictionary_2_t221;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem>
struct List_1_t494;
// GCGame.Table.Tab_HelpItem
struct Tab_HelpItem_t495;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem>>
struct Dictionary_2_t222;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HongBaoRankAwardInfo>
struct List_1_t496;
// GCGame.Table.Tab_HongBaoRankAwardInfo
struct Tab_HongBaoRankAwardInfo_t497;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HongBaoRankAwardInfo>>
struct Dictionary_2_t223;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanReward>
struct List_1_t498;
// GCGame.Table.Tab_HuaShanReward
struct Tab_HuaShanReward_t499;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanReward>>
struct Dictionary_2_t224;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanRewardItem>
struct List_1_t500;
// GCGame.Table.Tab_HuaShanRewardItem
struct Tab_HuaShanRewardItem_t501;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanRewardItem>>
struct Dictionary_2_t225;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Impact>
struct List_1_t502;
// GCGame.Table.Tab_Impact
struct Tab_Impact_t503;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Impact>>
struct Dictionary_2_t226;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>
struct List_1_t504;
// GCGame.Table.Tab_ImpactConsume
struct Tab_ImpactConsume_t505;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>>
struct Dictionary_2_t227;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ItemGetWay>
struct List_1_t506;
// GCGame.Table.Tab_ItemGetWay
struct Tab_ItemGetWay_t507;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ItemGetWay>>
struct Dictionary_2_t228;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ItemVisual>
struct List_1_t508;
// GCGame.Table.Tab_ItemVisual
struct Tab_ItemVisual_t509;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ItemVisual>>
struct Dictionary_2_t229;
// System.Collections.Generic.List`1<GCGame.Table.Tab_JuYiReward>
struct List_1_t510;
// GCGame.Table.Tab_JuYiReward
struct Tab_JuYiReward_t511;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_JuYiReward>>
struct Dictionary_2_t230;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUp>
struct List_1_t512;
// GCGame.Table.Tab_LevelUp
struct Tab_LevelUp_t513;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUp>>
struct Dictionary_2_t231;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUpLimit>
struct List_1_t514;
// GCGame.Table.Tab_LevelUpLimit
struct Tab_LevelUpLimit_t515;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUpLimit>>
struct Dictionary_2_t232;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LightSkill>
struct List_1_t516;
// GCGame.Table.Tab_LightSkill
struct Tab_LightSkill_t517;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LightSkill>>
struct Dictionary_2_t233;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkill>
struct List_1_t518;
// GCGame.Table.Tab_LivingSkill
struct Tab_LivingSkill_t519;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkill>>
struct Dictionary_2_t234;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkillStuff>
struct List_1_t520;
// GCGame.Table.Tab_LivingSkillStuff
struct Tab_LivingSkillStuff_t521;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkillStuff>>
struct Dictionary_2_t235;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>
struct List_1_t522;
// GCGame.Table.Tab_MapConnection
struct Tab_MapConnection_t523;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>>
struct Dictionary_2_t236;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterShop>
struct List_1_t524;
// GCGame.Table.Tab_MasterShop
struct Tab_MasterShop_t525;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterShop>>
struct Dictionary_2_t237;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkill>
struct List_1_t526;
// GCGame.Table.Tab_MasterSkill
struct Tab_MasterSkill_t527;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkill>>
struct Dictionary_2_t238;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkillLimit>
struct List_1_t528;
// GCGame.Table.Tab_MasterSkillLimit
struct Tab_MasterSkillLimit_t529;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkillLimit>>
struct Dictionary_2_t239;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBase>
struct List_1_t530;
// GCGame.Table.Tab_MissionBase
struct Tab_MissionBase_t531;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBase>>
struct Dictionary_2_t240;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBonus>
struct List_1_t532;
// GCGame.Table.Tab_MissionBonus
struct Tab_MissionBonus_t533;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBonus>>
struct Dictionary_2_t241;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCollectItem>
struct List_1_t534;
// GCGame.Table.Tab_MissionCollectItem
struct Tab_MissionCollectItem_t535;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCollectItem>>
struct Dictionary_2_t242;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCopyScene>
struct List_1_t536;
// GCGame.Table.Tab_MissionCopyScene
struct Tab_MissionCopyScene_t537;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCopyScene>>
struct Dictionary_2_t243;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDelivery>
struct List_1_t538;
// GCGame.Table.Tab_MissionDelivery
struct Tab_MissionDelivery_t539;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDelivery>>
struct Dictionary_2_t244;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDictionary>
struct List_1_t540;
// GCGame.Table.Tab_MissionDictionary
struct Tab_MissionDictionary_t541;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDictionary>>
struct Dictionary_2_t245;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionEnterArea>
struct List_1_t542;
// GCGame.Table.Tab_MissionEnterArea
struct Tab_MissionEnterArea_t543;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionEnterArea>>
struct Dictionary_2_t246;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionKillMonster>
struct List_1_t544;
// GCGame.Table.Tab_MissionKillMonster
struct Tab_MissionKillMonster_t545;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionKillMonster>>
struct Dictionary_2_t247;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLevelUp>
struct List_1_t546;
// GCGame.Table.Tab_MissionLevelUp
struct Tab_MissionLevelUp_t547;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLevelUp>>
struct Dictionary_2_t248;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLimit>
struct List_1_t548;
// GCGame.Table.Tab_MissionLimit
struct Tab_MissionLimit_t549;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLimit>>
struct Dictionary_2_t249;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLootItem>
struct List_1_t550;
// GCGame.Table.Tab_MissionLootItem
struct Tab_MissionLootItem_t551;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLootItem>>
struct Dictionary_2_t250;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionOperationNum>
struct List_1_t552;
// GCGame.Table.Tab_MissionOperationNum
struct Tab_MissionOperationNum_t553;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionOperationNum>>
struct Dictionary_2_t251;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionUseItem>
struct List_1_t554;
// GCGame.Table.Tab_MissionUseItem
struct Tab_MissionUseItem_t555;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionUseItem>>
struct Dictionary_2_t252;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTree>
struct List_1_t556;
// GCGame.Table.Tab_MoneyTree
struct Tab_MoneyTree_t557;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTree>>
struct Dictionary_2_t253;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTreeVIP>
struct List_1_t558;
// GCGame.Table.Tab_MoneyTreeVIP
struct Tab_MoneyTreeVIP_t559;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTreeVIP>>
struct Dictionary_2_t254;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MountBase>
struct List_1_t560;
// GCGame.Table.Tab_MountBase
struct Tab_MountBase_t561;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MountBase>>
struct Dictionary_2_t255;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NewServerAward>
struct List_1_t562;
// GCGame.Table.Tab_NewServerAward
struct Tab_NewServerAward_t563;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NewServerAward>>
struct Dictionary_2_t256;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NianShouNpcScence>
struct List_1_t564;
// GCGame.Table.Tab_NianShouNpcScence
struct Tab_NianShouNpcScence_t565;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NianShouNpcScence>>
struct Dictionary_2_t257;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NpcDialog>
struct List_1_t566;
// GCGame.Table.Tab_NpcDialog
struct Tab_NpcDialog_t567;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcDialog>>
struct Dictionary_2_t258;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>
struct List_1_t568;
// GCGame.Table.Tab_NpcOptionDialog
struct Tab_NpcOptionDialog_t569;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>>
struct Dictionary_2_t259;
// System.Collections.Generic.List`1<GCGame.Table.Tab_OffLineExp>
struct List_1_t570;
// GCGame.Table.Tab_OffLineExp
struct Tab_OffLineExp_t571;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_OffLineExp>>
struct Dictionary_2_t260;
// System.Collections.Generic.List`1<GCGame.Table.Tab_OnlineTimeRankReward>
struct List_1_t572;
// GCGame.Table.Tab_OnlineTimeRankReward
struct Tab_OnlineTimeRankReward_t573;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_OnlineTimeRankReward>>
struct Dictionary_2_t261;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>
struct List_1_t574;
// GCGame.Table.Tab_PVPRule
struct Tab_PVPRule_t575;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>>
struct Dictionary_2_t262;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanBonus>
struct List_1_t576;
// GCGame.Table.Tab_PaoHuanBonus
struct Tab_PaoHuanBonus_t577;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanBonus>>
struct Dictionary_2_t263;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanMission>
struct List_1_t578;
// GCGame.Table.Tab_PaoHuanMission
struct Tab_PaoHuanMission_t579;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanMission>>
struct Dictionary_2_t264;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanRefresh>
struct List_1_t580;
// GCGame.Table.Tab_PaoHuanRefresh
struct Tab_PaoHuanRefresh_t581;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanRefresh>>
struct Dictionary_2_t265;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>
struct List_1_t582;
// GCGame.Table.Tab_PatrolPoint
struct Tab_PatrolPoint_t583;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>>
struct Dictionary_2_t266;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionConmmon>
struct List_1_t584;
// GCGame.Table.Tab_ProfessionConmmon
struct Tab_ProfessionConmmon_t585;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionConmmon>>
struct Dictionary_2_t267;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionReputationReward>
struct List_1_t586;
// GCGame.Table.Tab_ProfessionReputationReward
struct Tab_ProfessionReputationReward_t587;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionReputationReward>>
struct Dictionary_2_t268;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PublicConfig>
struct List_1_t588;
// GCGame.Table.Tab_PublicConfig
struct Tab_PublicConfig_t589;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PublicConfig>>
struct Dictionary_2_t269;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>
struct List_1_t590;
// GCGame.Table.Tab_PushNotification
struct Tab_PushNotification_t591;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>>
struct Dictionary_2_t270;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpAward>
struct List_1_t592;
// GCGame.Table.Tab_PvpAward
struct Tab_PvpAward_t593;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpAward>>
struct Dictionary_2_t271;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>
struct List_1_t594;
// GCGame.Table.Tab_PvpRank
struct Tab_PvpRank_t595;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>>
struct Dictionary_2_t272;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpShop>
struct List_1_t596;
// GCGame.Table.Tab_PvpShop
struct Tab_PvpShop_t597;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpShop>>
struct Dictionary_2_t273;
// System.Collections.Generic.List`1<GCGame.Table.Tab_QianKunDaiFormula>
struct List_1_t598;
// GCGame.Table.Tab_QianKunDaiFormula
struct Tab_QianKunDaiFormula_t599;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_QianKunDaiFormula>>
struct Dictionary_2_t274;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RankReward>
struct List_1_t600;
// GCGame.Table.Tab_RankReward
struct Tab_RankReward_t601;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RankReward>>
struct Dictionary_2_t275;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Recharge>
struct List_1_t602;
// GCGame.Table.Tab_Recharge
struct Tab_Recharge_t603;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Recharge>>
struct Dictionary_2_t276;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Relation>
struct List_1_t604;
// GCGame.Table.Tab_Relation
struct Tab_Relation_t605;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Relation>>
struct Dictionary_2_t277;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>
struct List_1_t606;
// GCGame.Table.Tab_RestaurantDesk
struct Tab_RestaurantDesk_t607;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>>
struct Dictionary_2_t278;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood>
struct List_1_t608;
// GCGame.Table.Tab_RestaurantFood
struct Tab_RestaurantFood_t609;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood>>
struct Dictionary_2_t279;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantGuest>
struct List_1_t610;
// GCGame.Table.Tab_RestaurantGuest
struct Tab_RestaurantGuest_t611;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantGuest>>
struct Dictionary_2_t280;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantLevel>
struct List_1_t612;
// GCGame.Table.Tab_RestaurantLevel
struct Tab_RestaurantLevel_t613;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantLevel>>
struct Dictionary_2_t281;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RoleBaseAttr>
struct List_1_t614;
// GCGame.Table.Tab_RoleBaseAttr
struct Tab_RoleBaseAttr_t615;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RoleBaseAttr>>
struct Dictionary_2_t282;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RoleName>
struct List_1_t616;
// GCGame.Table.Tab_RoleName
struct Tab_RoleName_t617;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RoleName>>
struct Dictionary_2_t283;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SNSReward>
struct List_1_t618;
// GCGame.Table.Tab_SNSReward
struct Tab_SNSReward_t619;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SNSReward>>
struct Dictionary_2_t284;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>
struct List_1_t620;
// GCGame.Table.Tab_SceneClass
struct Tab_SceneClass_t621;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>>
struct Dictionary_2_t285;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneFightPos>
struct List_1_t622;
// GCGame.Table.Tab_SceneFightPos
struct Tab_SceneFightPos_t623;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneFightPos>>
struct Dictionary_2_t286;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneNpc>
struct List_1_t624;
// GCGame.Table.Tab_SceneNpc
struct Tab_SceneNpc_t625;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneNpc>>
struct Dictionary_2_t287;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShareReward>
struct List_1_t626;
// GCGame.Table.Tab_ShareReward
struct Tab_ShareReward_t627;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShareReward>>
struct Dictionary_2_t288;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiInfo>
struct List_1_t628;
// GCGame.Table.Tab_ShenQiInfo
struct Tab_ShenQiInfo_t629;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiInfo>>
struct Dictionary_2_t289;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>
struct List_1_t630;
// GCGame.Table.Tab_ShenQiSkillInfo
struct Tab_ShenQiSkillInfo_t631;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>>
struct Dictionary_2_t290;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShouHuaAwardInfo>
struct List_1_t632;
// GCGame.Table.Tab_ShouHuaAwardInfo
struct Tab_ShouHuaAwardInfo_t633;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShouHuaAwardInfo>>
struct Dictionary_2_t291;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillActive>
struct List_1_t634;
// GCGame.Table.Tab_SkillActive
struct Tab_SkillActive_t635;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillActive>>
struct Dictionary_2_t292;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillBase>
struct List_1_t636;
// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillBase>>
struct Dictionary_2_t293;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillEx>
struct List_1_t638;
// GCGame.Table.Tab_SkillEx
struct Tab_SkillEx_t639;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillEx>>
struct Dictionary_2_t294;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>
struct List_1_t640;
// GCGame.Table.Tab_SkillLevelUp
struct Tab_SkillLevelUp_t641;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>>
struct Dictionary_2_t295;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SnareObjInfo>
struct List_1_t642;
// GCGame.Table.Tab_SnareObjInfo
struct Tab_SnareObjInfo_t643;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SnareObjInfo>>
struct Dictionary_2_t296;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SongHuaAwardInfo>
struct List_1_t644;
// GCGame.Table.Tab_SongHuaAwardInfo
struct Tab_SongHuaAwardInfo_t645;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SongHuaAwardInfo>>
struct Dictionary_2_t297;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Sounds>
struct List_1_t646;
// GCGame.Table.Tab_Sounds
struct Tab_Sounds_t647;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Sounds>>
struct Dictionary_2_t298;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StaminaBuyRule>
struct List_1_t648;
// GCGame.Table.Tab_StaminaBuyRule
struct Tab_StaminaBuyRule_t649;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StaminaBuyRule>>
struct Dictionary_2_t299;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StarCondition>
struct List_1_t650;
// GCGame.Table.Tab_StarCondition
struct Tab_StarCondition_t651;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StarCondition>>
struct Dictionary_2_t300;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopyScene>
struct List_1_t652;
// GCGame.Table.Tab_StoryCopyScene
struct Tab_StoryCopyScene_t653;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopyScene>>
struct Dictionary_2_t301;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneAward>
struct List_1_t654;
// GCGame.Table.Tab_StoryCopySceneAward
struct Tab_StoryCopySceneAward_t655;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneAward>>
struct Dictionary_2_t302;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>
struct List_1_t656;
// GCGame.Table.Tab_StoryCopySceneChapter
struct Tab_StoryCopySceneChapter_t657;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>>
struct Dictionary_2_t303;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneFlow>
struct List_1_t658;
// GCGame.Table.Tab_StoryCopySceneFlow
struct Tab_StoryCopySceneFlow_t659;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneFlow>>
struct Dictionary_2_t304;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneNpc>
struct List_1_t660;
// GCGame.Table.Tab_StoryCopySceneNpc
struct Tab_StoryCopySceneNpc_t661;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneNpc>>
struct Dictionary_2_t305;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>
struct List_1_t662;
// GCGame.Table.Tab_StoryTable
struct Tab_StoryTable_t663;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>>
struct Dictionary_2_t306;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StrDictionary>
struct List_1_t664;
// GCGame.Table.Tab_StrDictionary
struct Tab_StrDictionary_t665;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StrDictionary>>
struct Dictionary_2_t307;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StrFilter>
struct List_1_t666;
// GCGame.Table.Tab_StrFilter
struct Tab_StrFilter_t667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StrFilter>>
struct Dictionary_2_t308;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsEquipPackUnlock>
struct List_1_t668;
// GCGame.Table.Tab_SwordsEquipPackUnlock
struct Tab_SwordsEquipPackUnlock_t669;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsEquipPackUnlock>>
struct Dictionary_2_t309;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManAttr>
struct List_1_t670;
// GCGame.Table.Tab_SwordsManAttr
struct Tab_SwordsManAttr_t671;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManAttr>>
struct Dictionary_2_t310;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManGainRata>
struct List_1_t672;
// GCGame.Table.Tab_SwordsManGainRata
struct Tab_SwordsManGainRata_t673;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManGainRata>>
struct Dictionary_2_t311;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManLevelUp>
struct List_1_t674;
// GCGame.Table.Tab_SwordsManLevelUp
struct Tab_SwordsManLevelUp_t675;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManLevelUp>>
struct Dictionary_2_t312;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManScoreShop>
struct List_1_t676;
// GCGame.Table.Tab_SwordsManScoreShop
struct Tab_SwordsManScoreShop_t677;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManScoreShop>>
struct Dictionary_2_t313;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SystemShop>
struct List_1_t678;
// GCGame.Table.Tab_SystemShop
struct Tab_SystemShop_t679;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SystemShop>>
struct Dictionary_2_t314;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Teleport>
struct List_1_t680;
// GCGame.Table.Tab_Teleport
struct Tab_Teleport_t681;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Teleport>>
struct Dictionary_2_t315;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TestTable>
struct List_1_t682;
// GCGame.Table.Tab_TestTable
struct Tab_TestTable_t683;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TestTable>>
struct Dictionary_2_t316;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TitleData>
struct List_1_t684;
// GCGame.Table.Tab_TitleData
struct Tab_TitleData_t685;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleData>>
struct Dictionary_2_t317;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>
struct List_1_t686;
// GCGame.Table.Tab_TitleType
struct Tab_TitleType_t687;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>>
struct Dictionary_2_t318;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingBook>
struct List_1_t688;
// GCGame.Table.Tab_TrainingBook
struct Tab_TrainingBook_t689;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingBook>>
struct Dictionary_2_t319;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingPic>
struct List_1_t690;
// GCGame.Table.Tab_TrainingPic
struct Tab_TrainingPic_t691;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingPic>>
struct Dictionary_2_t320;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>
struct List_1_t692;
// GCGame.Table.Tab_Trigger
struct Tab_Trigger_t693;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>>
struct Dictionary_2_t321;
// System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>
struct List_1_t694;
// GCGame.Table.Tab_UIPath
struct Tab_UIPath_t695;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>>
struct Dictionary_2_t322;
// System.Collections.Generic.List`1<GCGame.Table.Tab_UsableItem>
struct List_1_t696;
// GCGame.Table.Tab_UsableItem
struct Tab_UsableItem_t697;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UsableItem>>
struct Dictionary_2_t323;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VIPShop>
struct List_1_t698;
// GCGame.Table.Tab_VIPShop
struct Tab_VIPShop_t699;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VIPShop>>
struct Dictionary_2_t324;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VillainGuideNpc>
struct List_1_t700;
// GCGame.Table.Tab_VillainGuideNpc
struct Tab_VillainGuideNpc_t701;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainGuideNpc>>
struct Dictionary_2_t325;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>
struct List_1_t702;
// GCGame.Table.Tab_VillainScene
struct Tab_VillainScene_t703;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>>
struct Dictionary_2_t326;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VipBook>
struct List_1_t704;
// GCGame.Table.Tab_VipBook
struct Tab_VipBook_t705;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VipBook>>
struct Dictionary_2_t327;
// System.Collections.Generic.List`1<GCGame.Table.Tab_WeaponModel>
struct List_1_t706;
// GCGame.Table.Tab_WeaponModel
struct Tab_WeaponModel_t707;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_WeaponModel>>
struct Dictionary_2_t328;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>
struct List_1_t708;
// GCGame.Table.Tab_Xiaozhitiao
struct Tab_Xiaozhitiao_t709;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>
struct Dictionary_2_t329;
// System.Collections.Generic.List`1<GCGame.Table.Tab_YanHua>
struct List_1_t710;
// GCGame.Table.Tab_YanHua
struct Tab_YanHua_t711;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_YanHua>>
struct Dictionary_2_t330;
// System.Collections.Generic.List`1<GCGame.Table.Tab_YuanBaoShop>
struct List_1_t712;
// GCGame.Table.Tab_YuanBaoShop
struct Tab_YuanBaoShop_t713;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_YuanBaoShop>>
struct Dictionary_2_t331;

// System.Void GCGame.Table.TableManager::.ctor()
 void TableManager__ctor_m448 (TableManager_t332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.TableManager::.cctor()
 void TableManager__cctor_m449 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.TableManager::GetLoadPath(System.String)
 String_t* TableManager_GetLoadPath_m450 (Object_t * __this/* static, unused */, String_t* ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GCGame.Table.TableManager::MySplit(System.String,System.String[],System.String)
 StringU5BU5D_t333* TableManager_MySplit_m451 (Object_t * __this/* static, unused */, String_t* ___str, StringU5BU5D_t333* ___nTypeList, String_t* ___regix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::ReaderPList(System.String,GCGame.Table.SerializableTable,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool TableManager_ReaderPList_m452 (Object_t * __this/* static, unused */, String_t* ___xmlFile, SerializableTable_t334 * ____fun, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_AchieveNotice()
 bool TableManager_InitTable_AchieveNotice_m453 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ActivenessAward()
 bool TableManager_InitTable_ActivenessAward_m454 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Animation()
 bool TableManager_InitTable_Animation_m455 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_AnimationCurve()
 bool TableManager_InitTable_AnimationCurve_m456 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_AutoSearch()
 bool TableManager_InitTable_AutoSearch_m457 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BackPackUnlock()
 bool TableManager_InitTable_BackPackUnlock_m458 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BePowerLevel()
 bool TableManager_InitTable_BePowerLevel_m459 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Belle()
 bool TableManager_InitTable_Belle_m460 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleAddition()
 bool TableManager_InitTable_BelleAddition_m461 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleAward()
 bool TableManager_InitTable_BelleAward_m462 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleCloseCost()
 bool TableManager_InitTable_BelleCloseCost_m463 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleCloseLevel()
 bool TableManager_InitTable_BelleCloseLevel_m464 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleGetItemWay()
 bool TableManager_InitTable_BelleGetItemWay_m465 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleLevelup()
 bool TableManager_InitTable_BelleLevelup_m466 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleMatrix()
 bool TableManager_InitTable_BelleMatrix_m467 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BelleMatrixAddition()
 bool TableManager_InitTable_BelleMatrixAddition_m468 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_BiographyItem()
 bool TableManager_InitTable_BiographyItem_m469 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowAttr()
 bool TableManager_InitTable_CabalFellowAttr_m470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowElementSkill()
 bool TableManager_InitTable_CabalFellowElementSkill_m471 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowElementSkillBook()
 bool TableManager_InitTable_CabalFellowElementSkillBook_m472 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowStar()
 bool TableManager_InitTable_CabalFellowStar_m473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowTallentSkill()
 bool TableManager_InitTable_CabalFellowTallentSkill_m474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CabalFellowTallentSkillBook()
 bool TableManager_InitTable_CabalFellowTallentSkillBook_m475 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CameraRock()
 bool TableManager_InitTable_CameraRock_m476 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CangJingGeExtraReward()
 bool TableManager_InitTable_CangJingGeExtraReward_m477 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CangJingGeInfo()
 bool TableManager_InitTable_CangJingGeInfo_m478 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CangKuUnlock()
 bool TableManager_InitTable_CangKuUnlock_m479 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CharModel()
 bool TableManager_InitTable_CharModel_m480 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CharMount()
 bool TableManager_InitTable_CharMount_m481 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CharmItem()
 bool TableManager_InitTable_CharmItem_m482 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ChristmasMeterialItem()
 bool TableManager_InitTable_ChristmasMeterialItem_m483 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ChristmasTreeLevelUp()
 bool TableManager_InitTable_ChristmasTreeLevelUp_m484 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ClientStoryTable()
 bool TableManager_InitTable_ClientStoryTable_m485 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CollectBornMonster()
 bool TableManager_InitTable_CollectBornMonster_m486 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CollectItem()
 bool TableManager_InitTable_CollectItem_m487 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CommonItem()
 bool TableManager_InitTable_CommonItem_m488 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CoolDownTime()
 bool TableManager_InitTable_CoolDownTime_m489 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CopyScene()
 bool TableManager_InitTable_CopyScene_m490 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CopySceneRule()
 bool TableManager_InitTable_CopySceneRule_m491 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_CopySceneScoreCalc()
 bool TableManager_InitTable_CopySceneScoreCalc_m492 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DailyLuckyDrawBonusInfo()
 bool TableManager_InitTable_DailyLuckyDrawBonusInfo_m493 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DailyLuckyDrawPoolInfo()
 bool TableManager_InitTable_DailyLuckyDrawPoolInfo_m494 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DailyMission()
 bool TableManager_InitTable_DailyMission_m495 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DailyMissionQuality()
 bool TableManager_InitTable_DailyMissionQuality_m496 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DamageBoardType()
 bool TableManager_InitTable_DamageBoardType_m497 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DayAward()
 bool TableManager_InitTable_DayAward_m498 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DropNotify()
 bool TableManager_InitTable_DropNotify_m499 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_DynamicObstacle()
 bool TableManager_InitTable_DynamicObstacle_m500 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Effect()
 bool TableManager_InitTable_Effect_m501 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EffectPoint()
 bool TableManager_InitTable_EffectPoint_m502 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipAttr()
 bool TableManager_InitTable_EquipAttr_m503 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipEnchance()
 bool TableManager_InitTable_EquipEnchance_m504 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipSet()
 bool TableManager_InitTable_EquipSet_m505 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipSetTransfer()
 bool TableManager_InitTable_EquipSetTransfer_m506 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipStar()
 bool TableManager_InitTable_EquipStar_m507 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipStarLimit()
 bool TableManager_InitTable_EquipStarLimit_m508 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_EquipStarRate()
 bool TableManager_InitTable_EquipStarRate_m509 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FakeObject()
 bool TableManager_InitTable_FakeObject_m510 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FashionData()
 bool TableManager_InitTable_FashionData_m511 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FellowGainCost()
 bool TableManager_InitTable_FellowGainCost_m512 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FellowGainRate()
 bool TableManager_InitTable_FellowGainRate_m513 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FlyWing()
 bool TableManager_InitTable_FlyWing_m514 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_FlyWingClient()
 bool TableManager_InitTable_FlyWingClient_m515 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GemAttr()
 bool TableManager_InitTable_GemAttr_m516 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GemMount()
 bool TableManager_InitTable_GemMount_m517 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GemOpenLimit()
 bool TableManager_InitTable_GemOpenLimit_m518 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GoldMoneyShop()
 bool TableManager_InitTable_GoldMoneyShop_m519 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GongJiShop()
 bool TableManager_InitTable_GongJiShop_m520 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GongZhanReward()
 bool TableManager_InitTable_GongZhanReward_m521 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildActivityBoss()
 bool TableManager_InitTable_GuildActivityBoss_m522 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildAttrAddition()
 bool TableManager_InitTable_GuildAttrAddition_m523 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildAutoLevelUp()
 bool TableManager_InitTable_GuildAutoLevelUp_m524 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildMission()
 bool TableManager_InitTable_GuildMission_m525 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildMissionAward()
 bool TableManager_InitTable_GuildMissionAward_m526 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildMissionGuild()
 bool TableManager_InitTable_GuildMissionGuild_m527 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildPaoShang()
 bool TableManager_InitTable_GuildPaoShang_m528 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildRule()
 bool TableManager_InitTable_GuildRule_m529 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildShop()
 bool TableManager_InitTable_GuildShop_m530 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_GuildWealthItemMake()
 bool TableManager_InitTable_GuildWealthItemMake_m531 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_HelpItem()
 bool TableManager_InitTable_HelpItem_m532 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_HongBaoRankAwardInfo()
 bool TableManager_InitTable_HongBaoRankAwardInfo_m533 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_HuaShanReward()
 bool TableManager_InitTable_HuaShanReward_m534 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_HuaShanRewardItem()
 bool TableManager_InitTable_HuaShanRewardItem_m535 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Impact()
 bool TableManager_InitTable_Impact_m536 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ImpactConsume()
 bool TableManager_InitTable_ImpactConsume_m537 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ItemGetWay()
 bool TableManager_InitTable_ItemGetWay_m538 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ItemVisual()
 bool TableManager_InitTable_ItemVisual_m539 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_JuYiReward()
 bool TableManager_InitTable_JuYiReward_m540 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_LevelUp()
 bool TableManager_InitTable_LevelUp_m541 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_LevelUpLimit()
 bool TableManager_InitTable_LevelUpLimit_m542 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_LightSkill()
 bool TableManager_InitTable_LightSkill_m543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_LivingSkill()
 bool TableManager_InitTable_LivingSkill_m544 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_LivingSkillStuff()
 bool TableManager_InitTable_LivingSkillStuff_m545 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MapConnection()
 bool TableManager_InitTable_MapConnection_m546 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MasterShop()
 bool TableManager_InitTable_MasterShop_m547 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MasterSkill()
 bool TableManager_InitTable_MasterSkill_m548 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MasterSkillLimit()
 bool TableManager_InitTable_MasterSkillLimit_m549 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionBase()
 bool TableManager_InitTable_MissionBase_m550 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionBonus()
 bool TableManager_InitTable_MissionBonus_m551 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionCollectItem()
 bool TableManager_InitTable_MissionCollectItem_m552 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionCopyScene()
 bool TableManager_InitTable_MissionCopyScene_m553 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionDelivery()
 bool TableManager_InitTable_MissionDelivery_m554 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionDictionary()
 bool TableManager_InitTable_MissionDictionary_m555 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionEnterArea()
 bool TableManager_InitTable_MissionEnterArea_m556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionKillMonster()
 bool TableManager_InitTable_MissionKillMonster_m557 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionLevelUp()
 bool TableManager_InitTable_MissionLevelUp_m558 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionLimit()
 bool TableManager_InitTable_MissionLimit_m559 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionLootItem()
 bool TableManager_InitTable_MissionLootItem_m560 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionOperationNum()
 bool TableManager_InitTable_MissionOperationNum_m561 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MissionUseItem()
 bool TableManager_InitTable_MissionUseItem_m562 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MoneyTree()
 bool TableManager_InitTable_MoneyTree_m563 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MoneyTreeVIP()
 bool TableManager_InitTable_MoneyTreeVIP_m564 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_MountBase()
 bool TableManager_InitTable_MountBase_m565 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_NewServerAward()
 bool TableManager_InitTable_NewServerAward_m566 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_NianShouNpcScence()
 bool TableManager_InitTable_NianShouNpcScence_m567 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_NpcDialog()
 bool TableManager_InitTable_NpcDialog_m568 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_NpcOptionDialog()
 bool TableManager_InitTable_NpcOptionDialog_m569 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_OffLineExp()
 bool TableManager_InitTable_OffLineExp_m570 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_OnlineTimeRankReward()
 bool TableManager_InitTable_OnlineTimeRankReward_m571 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PVPRule()
 bool TableManager_InitTable_PVPRule_m572 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PaoHuanBonus()
 bool TableManager_InitTable_PaoHuanBonus_m573 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PaoHuanMission()
 bool TableManager_InitTable_PaoHuanMission_m574 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PaoHuanRefresh()
 bool TableManager_InitTable_PaoHuanRefresh_m575 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PatrolPoint()
 bool TableManager_InitTable_PatrolPoint_m576 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ProfessionConmmon()
 bool TableManager_InitTable_ProfessionConmmon_m577 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ProfessionReputationReward()
 bool TableManager_InitTable_ProfessionReputationReward_m578 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PublicConfig()
 bool TableManager_InitTable_PublicConfig_m579 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PushNotification()
 bool TableManager_InitTable_PushNotification_m580 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PvpAward()
 bool TableManager_InitTable_PvpAward_m581 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PvpRank()
 bool TableManager_InitTable_PvpRank_m582 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_PvpShop()
 bool TableManager_InitTable_PvpShop_m583 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_QianKunDaiFormula()
 bool TableManager_InitTable_QianKunDaiFormula_m584 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RankReward()
 bool TableManager_InitTable_RankReward_m585 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Recharge()
 bool TableManager_InitTable_Recharge_m586 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Relation()
 bool TableManager_InitTable_Relation_m587 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RestaurantDesk()
 bool TableManager_InitTable_RestaurantDesk_m588 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RestaurantFood()
 bool TableManager_InitTable_RestaurantFood_m589 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RestaurantGuest()
 bool TableManager_InitTable_RestaurantGuest_m590 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RestaurantLevel()
 bool TableManager_InitTable_RestaurantLevel_m591 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RoleBaseAttr()
 bool TableManager_InitTable_RoleBaseAttr_m592 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_RoleName()
 bool TableManager_InitTable_RoleName_m593 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SNSReward()
 bool TableManager_InitTable_SNSReward_m594 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SceneClass()
 bool TableManager_InitTable_SceneClass_m595 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SceneFightPos()
 bool TableManager_InitTable_SceneFightPos_m596 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SceneNpc()
 bool TableManager_InitTable_SceneNpc_m597 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ShareReward()
 bool TableManager_InitTable_ShareReward_m598 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ShenQiInfo()
 bool TableManager_InitTable_ShenQiInfo_m599 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ShenQiSkillInfo()
 bool TableManager_InitTable_ShenQiSkillInfo_m600 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_ShouHuaAwardInfo()
 bool TableManager_InitTable_ShouHuaAwardInfo_m601 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SkillActive()
 bool TableManager_InitTable_SkillActive_m602 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SkillBase()
 bool TableManager_InitTable_SkillBase_m603 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SkillEx()
 bool TableManager_InitTable_SkillEx_m604 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SkillLevelUp()
 bool TableManager_InitTable_SkillLevelUp_m605 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SnareObjInfo()
 bool TableManager_InitTable_SnareObjInfo_m606 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SongHuaAwardInfo()
 bool TableManager_InitTable_SongHuaAwardInfo_m607 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Sounds()
 bool TableManager_InitTable_Sounds_m608 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StaminaBuyRule()
 bool TableManager_InitTable_StaminaBuyRule_m609 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StarCondition()
 bool TableManager_InitTable_StarCondition_m610 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryCopyScene()
 bool TableManager_InitTable_StoryCopyScene_m611 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryCopySceneAward()
 bool TableManager_InitTable_StoryCopySceneAward_m612 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryCopySceneChapter()
 bool TableManager_InitTable_StoryCopySceneChapter_m613 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryCopySceneFlow()
 bool TableManager_InitTable_StoryCopySceneFlow_m614 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryCopySceneNpc()
 bool TableManager_InitTable_StoryCopySceneNpc_m615 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StoryTable()
 bool TableManager_InitTable_StoryTable_m616 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StrDictionary()
 bool TableManager_InitTable_StrDictionary_m617 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_StrFilter()
 bool TableManager_InitTable_StrFilter_m618 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SwordsEquipPackUnlock()
 bool TableManager_InitTable_SwordsEquipPackUnlock_m619 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SwordsManAttr()
 bool TableManager_InitTable_SwordsManAttr_m620 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SwordsManGainRata()
 bool TableManager_InitTable_SwordsManGainRata_m621 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SwordsManLevelUp()
 bool TableManager_InitTable_SwordsManLevelUp_m622 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SwordsManScoreShop()
 bool TableManager_InitTable_SwordsManScoreShop_m623 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_SystemShop()
 bool TableManager_InitTable_SystemShop_m624 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Teleport()
 bool TableManager_InitTable_Teleport_m625 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_TestTable()
 bool TableManager_InitTable_TestTable_m626 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_TitleData()
 bool TableManager_InitTable_TitleData_m627 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_TitleType()
 bool TableManager_InitTable_TitleType_m628 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_TrainingBook()
 bool TableManager_InitTable_TrainingBook_m629 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_TrainingPic()
 bool TableManager_InitTable_TrainingPic_m630 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Trigger()
 bool TableManager_InitTable_Trigger_m631 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_UIPath()
 bool TableManager_InitTable_UIPath_m632 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_UsableItem()
 bool TableManager_InitTable_UsableItem_m633 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_VIPShop()
 bool TableManager_InitTable_VIPShop_m634 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_VillainGuideNpc()
 bool TableManager_InitTable_VillainGuideNpc_m635 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_VillainScene()
 bool TableManager_InitTable_VillainScene_m636 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_VipBook()
 bool TableManager_InitTable_VipBook_m637 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_WeaponModel()
 bool TableManager_InitTable_WeaponModel_m638 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_Xiaozhitiao()
 bool TableManager_InitTable_Xiaozhitiao_m639 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_YanHua()
 bool TableManager_InitTable_YanHua_m640 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable_YuanBaoShop()
 bool TableManager_InitTable_YuanBaoShop_m641 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.TableManager::InitTable()
 bool TableManager_InitTable_m642 (TableManager_t332 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice> GCGame.Table.TableManager::GetAchieveNoticeByID(System.Int32)
 List_1_t336 * TableManager_GetAchieveNoticeByID_m643 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_AchieveNotice GCGame.Table.TableManager::GetAchieveNoticeByID(System.Int32,System.Int32)
 Tab_AchieveNotice_t337 * TableManager_GetAchieveNoticeByID_m644 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>> GCGame.Table.TableManager::GetAchieveNotice()
 Dictionary_2_t143 * TableManager_GetAchieveNotice_m645 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward> GCGame.Table.TableManager::GetActivenessAwardByID(System.Int32)
 List_1_t338 * TableManager_GetActivenessAwardByID_m646 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ActivenessAward GCGame.Table.TableManager::GetActivenessAwardByID(System.Int32,System.Int32)
 Tab_ActivenessAward_t339 * TableManager_GetActivenessAwardByID_m647 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ActivenessAward>> GCGame.Table.TableManager::GetActivenessAward()
 Dictionary_2_t144 * TableManager_GetActivenessAward_m648 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Animation> GCGame.Table.TableManager::GetAnimationByID(System.Int32)
 List_1_t340 * TableManager_GetAnimationByID_m649 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Animation GCGame.Table.TableManager::GetAnimationByID(System.Int32,System.Int32)
 Tab_Animation_t341 * TableManager_GetAnimationByID_m650 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Animation>> GCGame.Table.TableManager::GetAnimation()
 Dictionary_2_t145 * TableManager_GetAnimation_m651 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AnimationCurve> GCGame.Table.TableManager::GetAnimationCurveByID(System.Int32)
 List_1_t342 * TableManager_GetAnimationCurveByID_m652 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_AnimationCurve GCGame.Table.TableManager::GetAnimationCurveByID(System.Int32,System.Int32)
 Tab_AnimationCurve_t343 * TableManager_GetAnimationCurveByID_m653 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AnimationCurve>> GCGame.Table.TableManager::GetAnimationCurve()
 Dictionary_2_t146 * TableManager_GetAnimationCurve_m654 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AutoSearch> GCGame.Table.TableManager::GetAutoSearchByID(System.Int32)
 List_1_t344 * TableManager_GetAutoSearchByID_m655 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_AutoSearch GCGame.Table.TableManager::GetAutoSearchByID(System.Int32,System.Int32)
 Tab_AutoSearch_t345 * TableManager_GetAutoSearchByID_m656 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AutoSearch>> GCGame.Table.TableManager::GetAutoSearch()
 Dictionary_2_t147 * TableManager_GetAutoSearch_m657 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock> GCGame.Table.TableManager::GetBackPackUnlockByID(System.Int32)
 List_1_t346 * TableManager_GetBackPackUnlockByID_m658 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BackPackUnlock GCGame.Table.TableManager::GetBackPackUnlockByID(System.Int32,System.Int32)
 Tab_BackPackUnlock_t347 * TableManager_GetBackPackUnlockByID_m659 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BackPackUnlock>> GCGame.Table.TableManager::GetBackPackUnlock()
 Dictionary_2_t148 * TableManager_GetBackPackUnlock_m660 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BePowerLevel> GCGame.Table.TableManager::GetBePowerLevelByID(System.Int32)
 List_1_t348 * TableManager_GetBePowerLevelByID_m661 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BePowerLevel GCGame.Table.TableManager::GetBePowerLevelByID(System.Int32,System.Int32)
 Tab_BePowerLevel_t349 * TableManager_GetBePowerLevelByID_m662 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BePowerLevel>> GCGame.Table.TableManager::GetBePowerLevel()
 Dictionary_2_t149 * TableManager_GetBePowerLevel_m663 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Belle> GCGame.Table.TableManager::GetBelleByID(System.Int32)
 List_1_t350 * TableManager_GetBelleByID_m664 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Belle GCGame.Table.TableManager::GetBelleByID(System.Int32,System.Int32)
 Tab_Belle_t351 * TableManager_GetBelleByID_m665 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Belle>> GCGame.Table.TableManager::GetBelle()
 Dictionary_2_t150 * TableManager_GetBelle_m666 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAddition> GCGame.Table.TableManager::GetBelleAdditionByID(System.Int32)
 List_1_t352 * TableManager_GetBelleAdditionByID_m667 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleAddition GCGame.Table.TableManager::GetBelleAdditionByID(System.Int32,System.Int32)
 Tab_BelleAddition_t353 * TableManager_GetBelleAdditionByID_m668 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAddition>> GCGame.Table.TableManager::GetBelleAddition()
 Dictionary_2_t151 * TableManager_GetBelleAddition_m669 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAward> GCGame.Table.TableManager::GetBelleAwardByID(System.Int32)
 List_1_t354 * TableManager_GetBelleAwardByID_m670 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleAward GCGame.Table.TableManager::GetBelleAwardByID(System.Int32,System.Int32)
 Tab_BelleAward_t355 * TableManager_GetBelleAwardByID_m671 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleAward>> GCGame.Table.TableManager::GetBelleAward()
 Dictionary_2_t152 * TableManager_GetBelleAward_m672 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseCost> GCGame.Table.TableManager::GetBelleCloseCostByID(System.Int32)
 List_1_t356 * TableManager_GetBelleCloseCostByID_m673 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleCloseCost GCGame.Table.TableManager::GetBelleCloseCostByID(System.Int32,System.Int32)
 Tab_BelleCloseCost_t357 * TableManager_GetBelleCloseCostByID_m674 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseCost>> GCGame.Table.TableManager::GetBelleCloseCost()
 Dictionary_2_t153 * TableManager_GetBelleCloseCost_m675 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel> GCGame.Table.TableManager::GetBelleCloseLevelByID(System.Int32)
 List_1_t358 * TableManager_GetBelleCloseLevelByID_m676 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleCloseLevel GCGame.Table.TableManager::GetBelleCloseLevelByID(System.Int32,System.Int32)
 Tab_BelleCloseLevel_t359 * TableManager_GetBelleCloseLevelByID_m677 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleCloseLevel>> GCGame.Table.TableManager::GetBelleCloseLevel()
 Dictionary_2_t154 * TableManager_GetBelleCloseLevel_m678 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay> GCGame.Table.TableManager::GetBelleGetItemWayByID(System.Int32)
 List_1_t360 * TableManager_GetBelleGetItemWayByID_m679 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleGetItemWay GCGame.Table.TableManager::GetBelleGetItemWayByID(System.Int32,System.Int32)
 Tab_BelleGetItemWay_t361 * TableManager_GetBelleGetItemWayByID_m680 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay>> GCGame.Table.TableManager::GetBelleGetItemWay()
 Dictionary_2_t155 * TableManager_GetBelleGetItemWay_m681 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleLevelup> GCGame.Table.TableManager::GetBelleLevelupByID(System.Int32)
 List_1_t362 * TableManager_GetBelleLevelupByID_m682 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleLevelup GCGame.Table.TableManager::GetBelleLevelupByID(System.Int32,System.Int32)
 Tab_BelleLevelup_t363 * TableManager_GetBelleLevelupByID_m683 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleLevelup>> GCGame.Table.TableManager::GetBelleLevelup()
 Dictionary_2_t156 * TableManager_GetBelleLevelup_m684 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrix> GCGame.Table.TableManager::GetBelleMatrixByID(System.Int32)
 List_1_t364 * TableManager_GetBelleMatrixByID_m685 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleMatrix GCGame.Table.TableManager::GetBelleMatrixByID(System.Int32,System.Int32)
 Tab_BelleMatrix_t365 * TableManager_GetBelleMatrixByID_m686 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrix>> GCGame.Table.TableManager::GetBelleMatrix()
 Dictionary_2_t157 * TableManager_GetBelleMatrix_m687 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrixAddition> GCGame.Table.TableManager::GetBelleMatrixAdditionByID(System.Int32)
 List_1_t366 * TableManager_GetBelleMatrixAdditionByID_m688 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BelleMatrixAddition GCGame.Table.TableManager::GetBelleMatrixAdditionByID(System.Int32,System.Int32)
 Tab_BelleMatrixAddition_t367 * TableManager_GetBelleMatrixAdditionByID_m689 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BelleMatrixAddition>> GCGame.Table.TableManager::GetBelleMatrixAddition()
 Dictionary_2_t158 * TableManager_GetBelleMatrixAddition_m690 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BiographyItem> GCGame.Table.TableManager::GetBiographyItemByID(System.Int32)
 List_1_t368 * TableManager_GetBiographyItemByID_m691 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_BiographyItem GCGame.Table.TableManager::GetBiographyItemByID(System.Int32,System.Int32)
 Tab_BiographyItem_t369 * TableManager_GetBiographyItemByID_m692 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_BiographyItem>> GCGame.Table.TableManager::GetBiographyItem()
 Dictionary_2_t159 * TableManager_GetBiographyItem_m693 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowAttr> GCGame.Table.TableManager::GetCabalFellowAttrByID(System.Int32)
 List_1_t370 * TableManager_GetCabalFellowAttrByID_m694 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowAttr GCGame.Table.TableManager::GetCabalFellowAttrByID(System.Int32,System.Int32)
 Tab_CabalFellowAttr_t371 * TableManager_GetCabalFellowAttrByID_m695 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowAttr>> GCGame.Table.TableManager::GetCabalFellowAttr()
 Dictionary_2_t160 * TableManager_GetCabalFellowAttr_m696 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkill> GCGame.Table.TableManager::GetCabalFellowElementSkillByID(System.Int32)
 List_1_t372 * TableManager_GetCabalFellowElementSkillByID_m697 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowElementSkill GCGame.Table.TableManager::GetCabalFellowElementSkillByID(System.Int32,System.Int32)
 Tab_CabalFellowElementSkill_t373 * TableManager_GetCabalFellowElementSkillByID_m698 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkill>> GCGame.Table.TableManager::GetCabalFellowElementSkill()
 Dictionary_2_t161 * TableManager_GetCabalFellowElementSkill_m699 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook> GCGame.Table.TableManager::GetCabalFellowElementSkillBookByID(System.Int32)
 List_1_t374 * TableManager_GetCabalFellowElementSkillBookByID_m700 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowElementSkillBook GCGame.Table.TableManager::GetCabalFellowElementSkillBookByID(System.Int32,System.Int32)
 Tab_CabalFellowElementSkillBook_t375 * TableManager_GetCabalFellowElementSkillBookByID_m701 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowElementSkillBook>> GCGame.Table.TableManager::GetCabalFellowElementSkillBook()
 Dictionary_2_t162 * TableManager_GetCabalFellowElementSkillBook_m702 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar> GCGame.Table.TableManager::GetCabalFellowStarByID(System.Int32)
 List_1_t376 * TableManager_GetCabalFellowStarByID_m703 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowStar GCGame.Table.TableManager::GetCabalFellowStarByID(System.Int32,System.Int32)
 Tab_CabalFellowStar_t377 * TableManager_GetCabalFellowStarByID_m704 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowStar>> GCGame.Table.TableManager::GetCabalFellowStar()
 Dictionary_2_t163 * TableManager_GetCabalFellowStar_m705 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkill> GCGame.Table.TableManager::GetCabalFellowTallentSkillByID(System.Int32)
 List_1_t378 * TableManager_GetCabalFellowTallentSkillByID_m706 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowTallentSkill GCGame.Table.TableManager::GetCabalFellowTallentSkillByID(System.Int32,System.Int32)
 Tab_CabalFellowTallentSkill_t379 * TableManager_GetCabalFellowTallentSkillByID_m707 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkill>> GCGame.Table.TableManager::GetCabalFellowTallentSkill()
 Dictionary_2_t164 * TableManager_GetCabalFellowTallentSkill_m708 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkillBook> GCGame.Table.TableManager::GetCabalFellowTallentSkillBookByID(System.Int32)
 List_1_t380 * TableManager_GetCabalFellowTallentSkillBookByID_m709 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CabalFellowTallentSkillBook GCGame.Table.TableManager::GetCabalFellowTallentSkillBookByID(System.Int32,System.Int32)
 Tab_CabalFellowTallentSkillBook_t381 * TableManager_GetCabalFellowTallentSkillBookByID_m710 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CabalFellowTallentSkillBook>> GCGame.Table.TableManager::GetCabalFellowTallentSkillBook()
 Dictionary_2_t165 * TableManager_GetCabalFellowTallentSkillBook_m711 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CameraRock> GCGame.Table.TableManager::GetCameraRockByID(System.Int32)
 List_1_t382 * TableManager_GetCameraRockByID_m712 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CameraRock GCGame.Table.TableManager::GetCameraRockByID(System.Int32,System.Int32)
 Tab_CameraRock_t383 * TableManager_GetCameraRockByID_m713 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CameraRock>> GCGame.Table.TableManager::GetCameraRock()
 Dictionary_2_t166 * TableManager_GetCameraRock_m714 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeExtraReward> GCGame.Table.TableManager::GetCangJingGeExtraRewardByID(System.Int32)
 List_1_t384 * TableManager_GetCangJingGeExtraRewardByID_m715 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CangJingGeExtraReward GCGame.Table.TableManager::GetCangJingGeExtraRewardByID(System.Int32,System.Int32)
 Tab_CangJingGeExtraReward_t385 * TableManager_GetCangJingGeExtraRewardByID_m716 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeExtraReward>> GCGame.Table.TableManager::GetCangJingGeExtraReward()
 Dictionary_2_t167 * TableManager_GetCangJingGeExtraReward_m717 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo> GCGame.Table.TableManager::GetCangJingGeInfoByID(System.Int32)
 List_1_t386 * TableManager_GetCangJingGeInfoByID_m718 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CangJingGeInfo GCGame.Table.TableManager::GetCangJingGeInfoByID(System.Int32,System.Int32)
 Tab_CangJingGeInfo_t387 * TableManager_GetCangJingGeInfoByID_m719 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangJingGeInfo>> GCGame.Table.TableManager::GetCangJingGeInfo()
 Dictionary_2_t168 * TableManager_GetCangJingGeInfo_m720 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock> GCGame.Table.TableManager::GetCangKuUnlockByID(System.Int32)
 List_1_t388 * TableManager_GetCangKuUnlockByID_m721 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CangKuUnlock GCGame.Table.TableManager::GetCangKuUnlockByID(System.Int32,System.Int32)
 Tab_CangKuUnlock_t389 * TableManager_GetCangKuUnlockByID_m722 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CangKuUnlock>> GCGame.Table.TableManager::GetCangKuUnlock()
 Dictionary_2_t169 * TableManager_GetCangKuUnlock_m723 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharModel> GCGame.Table.TableManager::GetCharModelByID(System.Int32)
 List_1_t390 * TableManager_GetCharModelByID_m724 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CharModel GCGame.Table.TableManager::GetCharModelByID(System.Int32,System.Int32)
 Tab_CharModel_t391 * TableManager_GetCharModelByID_m725 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharModel>> GCGame.Table.TableManager::GetCharModel()
 Dictionary_2_t170 * TableManager_GetCharModel_m726 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharMount> GCGame.Table.TableManager::GetCharMountByID(System.Int32)
 List_1_t392 * TableManager_GetCharMountByID_m727 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CharMount GCGame.Table.TableManager::GetCharMountByID(System.Int32,System.Int32)
 Tab_CharMount_t393 * TableManager_GetCharMountByID_m728 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharMount>> GCGame.Table.TableManager::GetCharMount()
 Dictionary_2_t171 * TableManager_GetCharMount_m729 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CharmItem> GCGame.Table.TableManager::GetCharmItemByID(System.Int32)
 List_1_t394 * TableManager_GetCharmItemByID_m730 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CharmItem GCGame.Table.TableManager::GetCharmItemByID(System.Int32,System.Int32)
 Tab_CharmItem_t395 * TableManager_GetCharmItemByID_m731 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CharmItem>> GCGame.Table.TableManager::GetCharmItem()
 Dictionary_2_t172 * TableManager_GetCharmItem_m732 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasMeterialItem> GCGame.Table.TableManager::GetChristmasMeterialItemByID(System.Int32)
 List_1_t396 * TableManager_GetChristmasMeterialItemByID_m733 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ChristmasMeterialItem GCGame.Table.TableManager::GetChristmasMeterialItemByID(System.Int32,System.Int32)
 Tab_ChristmasMeterialItem_t397 * TableManager_GetChristmasMeterialItemByID_m734 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasMeterialItem>> GCGame.Table.TableManager::GetChristmasMeterialItem()
 Dictionary_2_t173 * TableManager_GetChristmasMeterialItem_m735 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasTreeLevelUp> GCGame.Table.TableManager::GetChristmasTreeLevelUpByID(System.Int32)
 List_1_t398 * TableManager_GetChristmasTreeLevelUpByID_m736 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ChristmasTreeLevelUp GCGame.Table.TableManager::GetChristmasTreeLevelUpByID(System.Int32,System.Int32)
 Tab_ChristmasTreeLevelUp_t399 * TableManager_GetChristmasTreeLevelUpByID_m737 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ChristmasTreeLevelUp>> GCGame.Table.TableManager::GetChristmasTreeLevelUp()
 Dictionary_2_t174 * TableManager_GetChristmasTreeLevelUp_m738 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ClientStoryTable> GCGame.Table.TableManager::GetClientStoryTableByID(System.Int32)
 List_1_t400 * TableManager_GetClientStoryTableByID_m739 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ClientStoryTable GCGame.Table.TableManager::GetClientStoryTableByID(System.Int32,System.Int32)
 Tab_ClientStoryTable_t401 * TableManager_GetClientStoryTableByID_m740 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ClientStoryTable>> GCGame.Table.TableManager::GetClientStoryTable()
 Dictionary_2_t175 * TableManager_GetClientStoryTable_m741 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CollectBornMonster> GCGame.Table.TableManager::GetCollectBornMonsterByID(System.Int32)
 List_1_t402 * TableManager_GetCollectBornMonsterByID_m742 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CollectBornMonster GCGame.Table.TableManager::GetCollectBornMonsterByID(System.Int32,System.Int32)
 Tab_CollectBornMonster_t403 * TableManager_GetCollectBornMonsterByID_m743 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectBornMonster>> GCGame.Table.TableManager::GetCollectBornMonster()
 Dictionary_2_t176 * TableManager_GetCollectBornMonster_m744 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem> GCGame.Table.TableManager::GetCollectItemByID(System.Int32)
 List_1_t404 * TableManager_GetCollectItemByID_m745 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CollectItem GCGame.Table.TableManager::GetCollectItemByID(System.Int32,System.Int32)
 Tab_CollectItem_t405 * TableManager_GetCollectItemByID_m746 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CollectItem>> GCGame.Table.TableManager::GetCollectItem()
 Dictionary_2_t177 * TableManager_GetCollectItem_m747 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CommonItem> GCGame.Table.TableManager::GetCommonItemByID(System.Int32)
 List_1_t406 * TableManager_GetCommonItemByID_m748 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CommonItem GCGame.Table.TableManager::GetCommonItemByID(System.Int32,System.Int32)
 Tab_CommonItem_t407 * TableManager_GetCommonItemByID_m749 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CommonItem>> GCGame.Table.TableManager::GetCommonItem()
 Dictionary_2_t178 * TableManager_GetCommonItem_m750 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CoolDownTime> GCGame.Table.TableManager::GetCoolDownTimeByID(System.Int32)
 List_1_t408 * TableManager_GetCoolDownTimeByID_m751 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CoolDownTime GCGame.Table.TableManager::GetCoolDownTimeByID(System.Int32,System.Int32)
 Tab_CoolDownTime_t409 * TableManager_GetCoolDownTimeByID_m752 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CoolDownTime>> GCGame.Table.TableManager::GetCoolDownTime()
 Dictionary_2_t179 * TableManager_GetCoolDownTime_m753 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopyScene> GCGame.Table.TableManager::GetCopySceneByID(System.Int32)
 List_1_t410 * TableManager_GetCopySceneByID_m754 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CopyScene GCGame.Table.TableManager::GetCopySceneByID(System.Int32,System.Int32)
 Tab_CopyScene_t411 * TableManager_GetCopySceneByID_m755 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopyScene>> GCGame.Table.TableManager::GetCopyScene()
 Dictionary_2_t180 * TableManager_GetCopyScene_m756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneRule> GCGame.Table.TableManager::GetCopySceneRuleByID(System.Int32)
 List_1_t412 * TableManager_GetCopySceneRuleByID_m757 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CopySceneRule GCGame.Table.TableManager::GetCopySceneRuleByID(System.Int32,System.Int32)
 Tab_CopySceneRule_t413 * TableManager_GetCopySceneRuleByID_m758 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneRule>> GCGame.Table.TableManager::GetCopySceneRule()
 Dictionary_2_t181 * TableManager_GetCopySceneRule_m759 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneScoreCalc> GCGame.Table.TableManager::GetCopySceneScoreCalcByID(System.Int32)
 List_1_t414 * TableManager_GetCopySceneScoreCalcByID_m760 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_CopySceneScoreCalc GCGame.Table.TableManager::GetCopySceneScoreCalcByID(System.Int32,System.Int32)
 Tab_CopySceneScoreCalc_t415 * TableManager_GetCopySceneScoreCalcByID_m761 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_CopySceneScoreCalc>> GCGame.Table.TableManager::GetCopySceneScoreCalc()
 Dictionary_2_t182 * TableManager_GetCopySceneScoreCalc_m762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo> GCGame.Table.TableManager::GetDailyLuckyDrawBonusInfoByID(System.Int32)
 List_1_t416 * TableManager_GetDailyLuckyDrawBonusInfoByID_m763 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DailyLuckyDrawBonusInfo GCGame.Table.TableManager::GetDailyLuckyDrawBonusInfoByID(System.Int32,System.Int32)
 Tab_DailyLuckyDrawBonusInfo_t417 * TableManager_GetDailyLuckyDrawBonusInfoByID_m764 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawBonusInfo>> GCGame.Table.TableManager::GetDailyLuckyDrawBonusInfo()
 Dictionary_2_t183 * TableManager_GetDailyLuckyDrawBonusInfo_m765 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawPoolInfo> GCGame.Table.TableManager::GetDailyLuckyDrawPoolInfoByID(System.Int32)
 List_1_t418 * TableManager_GetDailyLuckyDrawPoolInfoByID_m766 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DailyLuckyDrawPoolInfo GCGame.Table.TableManager::GetDailyLuckyDrawPoolInfoByID(System.Int32,System.Int32)
 Tab_DailyLuckyDrawPoolInfo_t419 * TableManager_GetDailyLuckyDrawPoolInfoByID_m767 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyLuckyDrawPoolInfo>> GCGame.Table.TableManager::GetDailyLuckyDrawPoolInfo()
 Dictionary_2_t184 * TableManager_GetDailyLuckyDrawPoolInfo_m768 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMission> GCGame.Table.TableManager::GetDailyMissionByID(System.Int32)
 List_1_t420 * TableManager_GetDailyMissionByID_m769 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DailyMission GCGame.Table.TableManager::GetDailyMissionByID(System.Int32,System.Int32)
 Tab_DailyMission_t421 * TableManager_GetDailyMissionByID_m770 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMission>> GCGame.Table.TableManager::GetDailyMission()
 Dictionary_2_t185 * TableManager_GetDailyMission_m771 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMissionQuality> GCGame.Table.TableManager::GetDailyMissionQualityByID(System.Int32)
 List_1_t422 * TableManager_GetDailyMissionQualityByID_m772 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DailyMissionQuality GCGame.Table.TableManager::GetDailyMissionQualityByID(System.Int32,System.Int32)
 Tab_DailyMissionQuality_t423 * TableManager_GetDailyMissionQualityByID_m773 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DailyMissionQuality>> GCGame.Table.TableManager::GetDailyMissionQuality()
 Dictionary_2_t186 * TableManager_GetDailyMissionQuality_m774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType> GCGame.Table.TableManager::GetDamageBoardTypeByID(System.Int32)
 List_1_t424 * TableManager_GetDamageBoardTypeByID_m775 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DamageBoardType GCGame.Table.TableManager::GetDamageBoardTypeByID(System.Int32,System.Int32)
 Tab_DamageBoardType_t425 * TableManager_GetDamageBoardTypeByID_m776 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType>> GCGame.Table.TableManager::GetDamageBoardType()
 Dictionary_2_t187 * TableManager_GetDamageBoardType_m777 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DayAward> GCGame.Table.TableManager::GetDayAwardByID(System.Int32)
 List_1_t426 * TableManager_GetDayAwardByID_m778 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DayAward GCGame.Table.TableManager::GetDayAwardByID(System.Int32,System.Int32)
 Tab_DayAward_t427 * TableManager_GetDayAwardByID_m779 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DayAward>> GCGame.Table.TableManager::GetDayAward()
 Dictionary_2_t188 * TableManager_GetDayAward_m780 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DropNotify> GCGame.Table.TableManager::GetDropNotifyByID(System.Int32)
 List_1_t428 * TableManager_GetDropNotifyByID_m781 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DropNotify GCGame.Table.TableManager::GetDropNotifyByID(System.Int32,System.Int32)
 Tab_DropNotify_t429 * TableManager_GetDropNotifyByID_m782 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DropNotify>> GCGame.Table.TableManager::GetDropNotify()
 Dictionary_2_t189 * TableManager_GetDropNotify_m783 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle> GCGame.Table.TableManager::GetDynamicObstacleByID(System.Int32)
 List_1_t430 * TableManager_GetDynamicObstacleByID_m784 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_DynamicObstacle GCGame.Table.TableManager::GetDynamicObstacleByID(System.Int32,System.Int32)
 Tab_DynamicObstacle_t431 * TableManager_GetDynamicObstacleByID_m785 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DynamicObstacle>> GCGame.Table.TableManager::GetDynamicObstacle()
 Dictionary_2_t190 * TableManager_GetDynamicObstacle_m786 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Effect> GCGame.Table.TableManager::GetEffectByID(System.Int32)
 List_1_t432 * TableManager_GetEffectByID_m787 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Effect GCGame.Table.TableManager::GetEffectByID(System.Int32,System.Int32)
 Tab_Effect_t433 * TableManager_GetEffectByID_m788 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Effect>> GCGame.Table.TableManager::GetEffect()
 Dictionary_2_t191 * TableManager_GetEffect_m789 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint> GCGame.Table.TableManager::GetEffectPointByID(System.Int32)
 List_1_t434 * TableManager_GetEffectPointByID_m790 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EffectPoint GCGame.Table.TableManager::GetEffectPointByID(System.Int32,System.Int32)
 Tab_EffectPoint_t435 * TableManager_GetEffectPointByID_m791 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EffectPoint>> GCGame.Table.TableManager::GetEffectPoint()
 Dictionary_2_t192 * TableManager_GetEffectPoint_m792 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipAttr> GCGame.Table.TableManager::GetEquipAttrByID(System.Int32)
 List_1_t436 * TableManager_GetEquipAttrByID_m793 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipAttr GCGame.Table.TableManager::GetEquipAttrByID(System.Int32,System.Int32)
 Tab_EquipAttr_t437 * TableManager_GetEquipAttrByID_m794 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipAttr>> GCGame.Table.TableManager::GetEquipAttr()
 Dictionary_2_t193 * TableManager_GetEquipAttr_m795 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipEnchance> GCGame.Table.TableManager::GetEquipEnchanceByID(System.Int32)
 List_1_t438 * TableManager_GetEquipEnchanceByID_m796 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipEnchance GCGame.Table.TableManager::GetEquipEnchanceByID(System.Int32,System.Int32)
 Tab_EquipEnchance_t439 * TableManager_GetEquipEnchanceByID_m797 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipEnchance>> GCGame.Table.TableManager::GetEquipEnchance()
 Dictionary_2_t194 * TableManager_GetEquipEnchance_m798 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet> GCGame.Table.TableManager::GetEquipSetByID(System.Int32)
 List_1_t440 * TableManager_GetEquipSetByID_m799 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipSet GCGame.Table.TableManager::GetEquipSetByID(System.Int32,System.Int32)
 Tab_EquipSet_t441 * TableManager_GetEquipSetByID_m800 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSet>> GCGame.Table.TableManager::GetEquipSet()
 Dictionary_2_t195 * TableManager_GetEquipSet_m801 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSetTransfer> GCGame.Table.TableManager::GetEquipSetTransferByID(System.Int32)
 List_1_t442 * TableManager_GetEquipSetTransferByID_m802 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipSetTransfer GCGame.Table.TableManager::GetEquipSetTransferByID(System.Int32,System.Int32)
 Tab_EquipSetTransfer_t443 * TableManager_GetEquipSetTransferByID_m803 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipSetTransfer>> GCGame.Table.TableManager::GetEquipSetTransfer()
 Dictionary_2_t196 * TableManager_GetEquipSetTransfer_m804 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStar> GCGame.Table.TableManager::GetEquipStarByID(System.Int32)
 List_1_t444 * TableManager_GetEquipStarByID_m805 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipStar GCGame.Table.TableManager::GetEquipStarByID(System.Int32,System.Int32)
 Tab_EquipStar_t445 * TableManager_GetEquipStarByID_m806 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStar>> GCGame.Table.TableManager::GetEquipStar()
 Dictionary_2_t197 * TableManager_GetEquipStar_m807 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarLimit> GCGame.Table.TableManager::GetEquipStarLimitByID(System.Int32)
 List_1_t446 * TableManager_GetEquipStarLimitByID_m808 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipStarLimit GCGame.Table.TableManager::GetEquipStarLimitByID(System.Int32,System.Int32)
 Tab_EquipStarLimit_t447 * TableManager_GetEquipStarLimitByID_m809 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarLimit>> GCGame.Table.TableManager::GetEquipStarLimit()
 Dictionary_2_t198 * TableManager_GetEquipStarLimit_m810 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarRate> GCGame.Table.TableManager::GetEquipStarRateByID(System.Int32)
 List_1_t448 * TableManager_GetEquipStarRateByID_m811 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_EquipStarRate GCGame.Table.TableManager::GetEquipStarRateByID(System.Int32,System.Int32)
 Tab_EquipStarRate_t449 * TableManager_GetEquipStarRateByID_m812 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_EquipStarRate>> GCGame.Table.TableManager::GetEquipStarRate()
 Dictionary_2_t199 * TableManager_GetEquipStarRate_m813 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FakeObject> GCGame.Table.TableManager::GetFakeObjectByID(System.Int32)
 List_1_t450 * TableManager_GetFakeObjectByID_m814 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FakeObject GCGame.Table.TableManager::GetFakeObjectByID(System.Int32,System.Int32)
 Tab_FakeObject_t451 * TableManager_GetFakeObjectByID_m815 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FakeObject>> GCGame.Table.TableManager::GetFakeObject()
 Dictionary_2_t200 * TableManager_GetFakeObject_m816 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData> GCGame.Table.TableManager::GetFashionDataByID(System.Int32)
 List_1_t452 * TableManager_GetFashionDataByID_m817 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FashionData GCGame.Table.TableManager::GetFashionDataByID(System.Int32,System.Int32)
 Tab_FashionData_t453 * TableManager_GetFashionDataByID_m818 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FashionData>> GCGame.Table.TableManager::GetFashionData()
 Dictionary_2_t201 * TableManager_GetFashionData_m819 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost> GCGame.Table.TableManager::GetFellowGainCostByID(System.Int32)
 List_1_t454 * TableManager_GetFellowGainCostByID_m820 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FellowGainCost GCGame.Table.TableManager::GetFellowGainCostByID(System.Int32,System.Int32)
 Tab_FellowGainCost_t455 * TableManager_GetFellowGainCostByID_m821 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainCost>> GCGame.Table.TableManager::GetFellowGainCost()
 Dictionary_2_t202 * TableManager_GetFellowGainCost_m822 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainRate> GCGame.Table.TableManager::GetFellowGainRateByID(System.Int32)
 List_1_t456 * TableManager_GetFellowGainRateByID_m823 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FellowGainRate GCGame.Table.TableManager::GetFellowGainRateByID(System.Int32,System.Int32)
 Tab_FellowGainRate_t457 * TableManager_GetFellowGainRateByID_m824 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FellowGainRate>> GCGame.Table.TableManager::GetFellowGainRate()
 Dictionary_2_t203 * TableManager_GetFellowGainRate_m825 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing> GCGame.Table.TableManager::GetFlyWingByID(System.Int32)
 List_1_t458 * TableManager_GetFlyWingByID_m826 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FlyWing GCGame.Table.TableManager::GetFlyWingByID(System.Int32,System.Int32)
 Tab_FlyWing_t459 * TableManager_GetFlyWingByID_m827 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWing>> GCGame.Table.TableManager::GetFlyWing()
 Dictionary_2_t204 * TableManager_GetFlyWing_m828 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWingClient> GCGame.Table.TableManager::GetFlyWingClientByID(System.Int32)
 List_1_t460 * TableManager_GetFlyWingClientByID_m829 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_FlyWingClient GCGame.Table.TableManager::GetFlyWingClientByID(System.Int32,System.Int32)
 Tab_FlyWingClient_t461 * TableManager_GetFlyWingClientByID_m830 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_FlyWingClient>> GCGame.Table.TableManager::GetFlyWingClient()
 Dictionary_2_t205 * TableManager_GetFlyWingClient_m831 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemAttr> GCGame.Table.TableManager::GetGemAttrByID(System.Int32)
 List_1_t462 * TableManager_GetGemAttrByID_m832 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GemAttr GCGame.Table.TableManager::GetGemAttrByID(System.Int32,System.Int32)
 Tab_GemAttr_t463 * TableManager_GetGemAttrByID_m833 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemAttr>> GCGame.Table.TableManager::GetGemAttr()
 Dictionary_2_t206 * TableManager_GetGemAttr_m834 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemMount> GCGame.Table.TableManager::GetGemMountByID(System.Int32)
 List_1_t464 * TableManager_GetGemMountByID_m835 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GemMount GCGame.Table.TableManager::GetGemMountByID(System.Int32,System.Int32)
 Tab_GemMount_t465 * TableManager_GetGemMountByID_m836 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemMount>> GCGame.Table.TableManager::GetGemMount()
 Dictionary_2_t207 * TableManager_GetGemMount_m837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit> GCGame.Table.TableManager::GetGemOpenLimitByID(System.Int32)
 List_1_t466 * TableManager_GetGemOpenLimitByID_m838 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GemOpenLimit GCGame.Table.TableManager::GetGemOpenLimitByID(System.Int32,System.Int32)
 Tab_GemOpenLimit_t467 * TableManager_GetGemOpenLimitByID_m839 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GemOpenLimit>> GCGame.Table.TableManager::GetGemOpenLimit()
 Dictionary_2_t208 * TableManager_GetGemOpenLimit_m840 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GoldMoneyShop> GCGame.Table.TableManager::GetGoldMoneyShopByID(System.Int32)
 List_1_t468 * TableManager_GetGoldMoneyShopByID_m841 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GoldMoneyShop GCGame.Table.TableManager::GetGoldMoneyShopByID(System.Int32,System.Int32)
 Tab_GoldMoneyShop_t469 * TableManager_GetGoldMoneyShopByID_m842 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GoldMoneyShop>> GCGame.Table.TableManager::GetGoldMoneyShop()
 Dictionary_2_t209 * TableManager_GetGoldMoneyShop_m843 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GongJiShop> GCGame.Table.TableManager::GetGongJiShopByID(System.Int32)
 List_1_t470 * TableManager_GetGongJiShopByID_m844 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GongJiShop GCGame.Table.TableManager::GetGongJiShopByID(System.Int32,System.Int32)
 Tab_GongJiShop_t471 * TableManager_GetGongJiShopByID_m845 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GongJiShop>> GCGame.Table.TableManager::GetGongJiShop()
 Dictionary_2_t210 * TableManager_GetGongJiShop_m846 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GongZhanReward> GCGame.Table.TableManager::GetGongZhanRewardByID(System.Int32)
 List_1_t472 * TableManager_GetGongZhanRewardByID_m847 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GongZhanReward GCGame.Table.TableManager::GetGongZhanRewardByID(System.Int32,System.Int32)
 Tab_GongZhanReward_t473 * TableManager_GetGongZhanRewardByID_m848 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GongZhanReward>> GCGame.Table.TableManager::GetGongZhanReward()
 Dictionary_2_t211 * TableManager_GetGongZhanReward_m849 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss> GCGame.Table.TableManager::GetGuildActivityBossByID(System.Int32)
 List_1_t474 * TableManager_GetGuildActivityBossByID_m850 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildActivityBoss GCGame.Table.TableManager::GetGuildActivityBossByID(System.Int32,System.Int32)
 Tab_GuildActivityBoss_t475 * TableManager_GetGuildActivityBossByID_m851 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildActivityBoss>> GCGame.Table.TableManager::GetGuildActivityBoss()
 Dictionary_2_t212 * TableManager_GetGuildActivityBoss_m852 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition> GCGame.Table.TableManager::GetGuildAttrAdditionByID(System.Int32)
 List_1_t476 * TableManager_GetGuildAttrAdditionByID_m853 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildAttrAddition GCGame.Table.TableManager::GetGuildAttrAdditionByID(System.Int32,System.Int32)
 Tab_GuildAttrAddition_t477 * TableManager_GetGuildAttrAdditionByID_m854 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAttrAddition>> GCGame.Table.TableManager::GetGuildAttrAddition()
 Dictionary_2_t213 * TableManager_GetGuildAttrAddition_m855 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAutoLevelUp> GCGame.Table.TableManager::GetGuildAutoLevelUpByID(System.Int32)
 List_1_t478 * TableManager_GetGuildAutoLevelUpByID_m856 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildAutoLevelUp GCGame.Table.TableManager::GetGuildAutoLevelUpByID(System.Int32,System.Int32)
 Tab_GuildAutoLevelUp_t479 * TableManager_GetGuildAutoLevelUpByID_m857 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildAutoLevelUp>> GCGame.Table.TableManager::GetGuildAutoLevelUp()
 Dictionary_2_t214 * TableManager_GetGuildAutoLevelUp_m858 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMission> GCGame.Table.TableManager::GetGuildMissionByID(System.Int32)
 List_1_t480 * TableManager_GetGuildMissionByID_m859 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildMission GCGame.Table.TableManager::GetGuildMissionByID(System.Int32,System.Int32)
 Tab_GuildMission_t481 * TableManager_GetGuildMissionByID_m860 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMission>> GCGame.Table.TableManager::GetGuildMission()
 Dictionary_2_t215 * TableManager_GetGuildMission_m861 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionAward> GCGame.Table.TableManager::GetGuildMissionAwardByID(System.Int32)
 List_1_t482 * TableManager_GetGuildMissionAwardByID_m862 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildMissionAward GCGame.Table.TableManager::GetGuildMissionAwardByID(System.Int32,System.Int32)
 Tab_GuildMissionAward_t483 * TableManager_GetGuildMissionAwardByID_m863 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionAward>> GCGame.Table.TableManager::GetGuildMissionAward()
 Dictionary_2_t216 * TableManager_GetGuildMissionAward_m864 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionGuild> GCGame.Table.TableManager::GetGuildMissionGuildByID(System.Int32)
 List_1_t484 * TableManager_GetGuildMissionGuildByID_m865 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildMissionGuild GCGame.Table.TableManager::GetGuildMissionGuildByID(System.Int32,System.Int32)
 Tab_GuildMissionGuild_t485 * TableManager_GetGuildMissionGuildByID_m866 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildMissionGuild>> GCGame.Table.TableManager::GetGuildMissionGuild()
 Dictionary_2_t217 * TableManager_GetGuildMissionGuild_m867 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildPaoShang> GCGame.Table.TableManager::GetGuildPaoShangByID(System.Int32)
 List_1_t486 * TableManager_GetGuildPaoShangByID_m868 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildPaoShang GCGame.Table.TableManager::GetGuildPaoShangByID(System.Int32,System.Int32)
 Tab_GuildPaoShang_t487 * TableManager_GetGuildPaoShangByID_m869 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildPaoShang>> GCGame.Table.TableManager::GetGuildPaoShang()
 Dictionary_2_t218 * TableManager_GetGuildPaoShang_m870 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildRule> GCGame.Table.TableManager::GetGuildRuleByID(System.Int32)
 List_1_t488 * TableManager_GetGuildRuleByID_m871 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildRule GCGame.Table.TableManager::GetGuildRuleByID(System.Int32,System.Int32)
 Tab_GuildRule_t489 * TableManager_GetGuildRuleByID_m872 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildRule>> GCGame.Table.TableManager::GetGuildRule()
 Dictionary_2_t219 * TableManager_GetGuildRule_m873 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop> GCGame.Table.TableManager::GetGuildShopByID(System.Int32)
 List_1_t490 * TableManager_GetGuildShopByID_m874 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildShop GCGame.Table.TableManager::GetGuildShopByID(System.Int32,System.Int32)
 Tab_GuildShop_t491 * TableManager_GetGuildShopByID_m875 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildShop>> GCGame.Table.TableManager::GetGuildShop()
 Dictionary_2_t220 * TableManager_GetGuildShop_m876 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_GuildWealthItemMake> GCGame.Table.TableManager::GetGuildWealthItemMakeByID(System.Int32)
 List_1_t492 * TableManager_GetGuildWealthItemMakeByID_m877 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_GuildWealthItemMake GCGame.Table.TableManager::GetGuildWealthItemMakeByID(System.Int32,System.Int32)
 Tab_GuildWealthItemMake_t493 * TableManager_GetGuildWealthItemMakeByID_m878 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_GuildWealthItemMake>> GCGame.Table.TableManager::GetGuildWealthItemMake()
 Dictionary_2_t221 * TableManager_GetGuildWealthItemMake_m879 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem> GCGame.Table.TableManager::GetHelpItemByID(System.Int32)
 List_1_t494 * TableManager_GetHelpItemByID_m880 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_HelpItem GCGame.Table.TableManager::GetHelpItemByID(System.Int32,System.Int32)
 Tab_HelpItem_t495 * TableManager_GetHelpItemByID_m881 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem>> GCGame.Table.TableManager::GetHelpItem()
 Dictionary_2_t222 * TableManager_GetHelpItem_m882 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HongBaoRankAwardInfo> GCGame.Table.TableManager::GetHongBaoRankAwardInfoByID(System.Int32)
 List_1_t496 * TableManager_GetHongBaoRankAwardInfoByID_m883 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_HongBaoRankAwardInfo GCGame.Table.TableManager::GetHongBaoRankAwardInfoByID(System.Int32,System.Int32)
 Tab_HongBaoRankAwardInfo_t497 * TableManager_GetHongBaoRankAwardInfoByID_m884 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HongBaoRankAwardInfo>> GCGame.Table.TableManager::GetHongBaoRankAwardInfo()
 Dictionary_2_t223 * TableManager_GetHongBaoRankAwardInfo_m885 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanReward> GCGame.Table.TableManager::GetHuaShanRewardByID(System.Int32)
 List_1_t498 * TableManager_GetHuaShanRewardByID_m886 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_HuaShanReward GCGame.Table.TableManager::GetHuaShanRewardByID(System.Int32,System.Int32)
 Tab_HuaShanReward_t499 * TableManager_GetHuaShanRewardByID_m887 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanReward>> GCGame.Table.TableManager::GetHuaShanReward()
 Dictionary_2_t224 * TableManager_GetHuaShanReward_m888 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanRewardItem> GCGame.Table.TableManager::GetHuaShanRewardItemByID(System.Int32)
 List_1_t500 * TableManager_GetHuaShanRewardItemByID_m889 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_HuaShanRewardItem GCGame.Table.TableManager::GetHuaShanRewardItemByID(System.Int32,System.Int32)
 Tab_HuaShanRewardItem_t501 * TableManager_GetHuaShanRewardItemByID_m890 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_HuaShanRewardItem>> GCGame.Table.TableManager::GetHuaShanRewardItem()
 Dictionary_2_t225 * TableManager_GetHuaShanRewardItem_m891 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Impact> GCGame.Table.TableManager::GetImpactByID(System.Int32)
 List_1_t502 * TableManager_GetImpactByID_m892 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Impact GCGame.Table.TableManager::GetImpactByID(System.Int32,System.Int32)
 Tab_Impact_t503 * TableManager_GetImpactByID_m893 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Impact>> GCGame.Table.TableManager::GetImpact()
 Dictionary_2_t226 * TableManager_GetImpact_m894 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume> GCGame.Table.TableManager::GetImpactConsumeByID(System.Int32)
 List_1_t504 * TableManager_GetImpactConsumeByID_m895 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ImpactConsume GCGame.Table.TableManager::GetImpactConsumeByID(System.Int32,System.Int32)
 Tab_ImpactConsume_t505 * TableManager_GetImpactConsumeByID_m896 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ImpactConsume>> GCGame.Table.TableManager::GetImpactConsume()
 Dictionary_2_t227 * TableManager_GetImpactConsume_m897 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ItemGetWay> GCGame.Table.TableManager::GetItemGetWayByID(System.Int32)
 List_1_t506 * TableManager_GetItemGetWayByID_m898 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ItemGetWay GCGame.Table.TableManager::GetItemGetWayByID(System.Int32,System.Int32)
 Tab_ItemGetWay_t507 * TableManager_GetItemGetWayByID_m899 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ItemGetWay>> GCGame.Table.TableManager::GetItemGetWay()
 Dictionary_2_t228 * TableManager_GetItemGetWay_m900 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ItemVisual> GCGame.Table.TableManager::GetItemVisualByID(System.Int32)
 List_1_t508 * TableManager_GetItemVisualByID_m901 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ItemVisual GCGame.Table.TableManager::GetItemVisualByID(System.Int32,System.Int32)
 Tab_ItemVisual_t509 * TableManager_GetItemVisualByID_m902 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ItemVisual>> GCGame.Table.TableManager::GetItemVisual()
 Dictionary_2_t229 * TableManager_GetItemVisual_m903 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_JuYiReward> GCGame.Table.TableManager::GetJuYiRewardByID(System.Int32)
 List_1_t510 * TableManager_GetJuYiRewardByID_m904 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_JuYiReward GCGame.Table.TableManager::GetJuYiRewardByID(System.Int32,System.Int32)
 Tab_JuYiReward_t511 * TableManager_GetJuYiRewardByID_m905 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_JuYiReward>> GCGame.Table.TableManager::GetJuYiReward()
 Dictionary_2_t230 * TableManager_GetJuYiReward_m906 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUp> GCGame.Table.TableManager::GetLevelUpByID(System.Int32)
 List_1_t512 * TableManager_GetLevelUpByID_m907 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_LevelUp GCGame.Table.TableManager::GetLevelUpByID(System.Int32,System.Int32)
 Tab_LevelUp_t513 * TableManager_GetLevelUpByID_m908 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUp>> GCGame.Table.TableManager::GetLevelUp()
 Dictionary_2_t231 * TableManager_GetLevelUp_m909 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUpLimit> GCGame.Table.TableManager::GetLevelUpLimitByID(System.Int32)
 List_1_t514 * TableManager_GetLevelUpLimitByID_m910 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_LevelUpLimit GCGame.Table.TableManager::GetLevelUpLimitByID(System.Int32,System.Int32)
 Tab_LevelUpLimit_t515 * TableManager_GetLevelUpLimitByID_m911 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LevelUpLimit>> GCGame.Table.TableManager::GetLevelUpLimit()
 Dictionary_2_t232 * TableManager_GetLevelUpLimit_m912 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LightSkill> GCGame.Table.TableManager::GetLightSkillByID(System.Int32)
 List_1_t516 * TableManager_GetLightSkillByID_m913 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_LightSkill GCGame.Table.TableManager::GetLightSkillByID(System.Int32,System.Int32)
 Tab_LightSkill_t517 * TableManager_GetLightSkillByID_m914 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LightSkill>> GCGame.Table.TableManager::GetLightSkill()
 Dictionary_2_t233 * TableManager_GetLightSkill_m915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkill> GCGame.Table.TableManager::GetLivingSkillByID(System.Int32)
 List_1_t518 * TableManager_GetLivingSkillByID_m916 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_LivingSkill GCGame.Table.TableManager::GetLivingSkillByID(System.Int32,System.Int32)
 Tab_LivingSkill_t519 * TableManager_GetLivingSkillByID_m917 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkill>> GCGame.Table.TableManager::GetLivingSkill()
 Dictionary_2_t234 * TableManager_GetLivingSkill_m918 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkillStuff> GCGame.Table.TableManager::GetLivingSkillStuffByID(System.Int32)
 List_1_t520 * TableManager_GetLivingSkillStuffByID_m919 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_LivingSkillStuff GCGame.Table.TableManager::GetLivingSkillStuffByID(System.Int32,System.Int32)
 Tab_LivingSkillStuff_t521 * TableManager_GetLivingSkillStuffByID_m920 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_LivingSkillStuff>> GCGame.Table.TableManager::GetLivingSkillStuff()
 Dictionary_2_t235 * TableManager_GetLivingSkillStuff_m921 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection> GCGame.Table.TableManager::GetMapConnectionByID(System.Int32)
 List_1_t522 * TableManager_GetMapConnectionByID_m922 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MapConnection GCGame.Table.TableManager::GetMapConnectionByID(System.Int32,System.Int32)
 Tab_MapConnection_t523 * TableManager_GetMapConnectionByID_m923 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MapConnection>> GCGame.Table.TableManager::GetMapConnection()
 Dictionary_2_t236 * TableManager_GetMapConnection_m924 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterShop> GCGame.Table.TableManager::GetMasterShopByID(System.Int32)
 List_1_t524 * TableManager_GetMasterShopByID_m925 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MasterShop GCGame.Table.TableManager::GetMasterShopByID(System.Int32,System.Int32)
 Tab_MasterShop_t525 * TableManager_GetMasterShopByID_m926 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterShop>> GCGame.Table.TableManager::GetMasterShop()
 Dictionary_2_t237 * TableManager_GetMasterShop_m927 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkill> GCGame.Table.TableManager::GetMasterSkillByID(System.Int32)
 List_1_t526 * TableManager_GetMasterSkillByID_m928 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MasterSkill GCGame.Table.TableManager::GetMasterSkillByID(System.Int32,System.Int32)
 Tab_MasterSkill_t527 * TableManager_GetMasterSkillByID_m929 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkill>> GCGame.Table.TableManager::GetMasterSkill()
 Dictionary_2_t238 * TableManager_GetMasterSkill_m930 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkillLimit> GCGame.Table.TableManager::GetMasterSkillLimitByID(System.Int32)
 List_1_t528 * TableManager_GetMasterSkillLimitByID_m931 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MasterSkillLimit GCGame.Table.TableManager::GetMasterSkillLimitByID(System.Int32,System.Int32)
 Tab_MasterSkillLimit_t529 * TableManager_GetMasterSkillLimitByID_m932 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MasterSkillLimit>> GCGame.Table.TableManager::GetMasterSkillLimit()
 Dictionary_2_t239 * TableManager_GetMasterSkillLimit_m933 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBase> GCGame.Table.TableManager::GetMissionBaseByID(System.Int32)
 List_1_t530 * TableManager_GetMissionBaseByID_m934 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionBase GCGame.Table.TableManager::GetMissionBaseByID(System.Int32,System.Int32)
 Tab_MissionBase_t531 * TableManager_GetMissionBaseByID_m935 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBase>> GCGame.Table.TableManager::GetMissionBase()
 Dictionary_2_t240 * TableManager_GetMissionBase_m936 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBonus> GCGame.Table.TableManager::GetMissionBonusByID(System.Int32)
 List_1_t532 * TableManager_GetMissionBonusByID_m937 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionBonus GCGame.Table.TableManager::GetMissionBonusByID(System.Int32,System.Int32)
 Tab_MissionBonus_t533 * TableManager_GetMissionBonusByID_m938 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionBonus>> GCGame.Table.TableManager::GetMissionBonus()
 Dictionary_2_t241 * TableManager_GetMissionBonus_m939 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCollectItem> GCGame.Table.TableManager::GetMissionCollectItemByID(System.Int32)
 List_1_t534 * TableManager_GetMissionCollectItemByID_m940 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionCollectItem GCGame.Table.TableManager::GetMissionCollectItemByID(System.Int32,System.Int32)
 Tab_MissionCollectItem_t535 * TableManager_GetMissionCollectItemByID_m941 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCollectItem>> GCGame.Table.TableManager::GetMissionCollectItem()
 Dictionary_2_t242 * TableManager_GetMissionCollectItem_m942 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCopyScene> GCGame.Table.TableManager::GetMissionCopySceneByID(System.Int32)
 List_1_t536 * TableManager_GetMissionCopySceneByID_m943 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionCopyScene GCGame.Table.TableManager::GetMissionCopySceneByID(System.Int32,System.Int32)
 Tab_MissionCopyScene_t537 * TableManager_GetMissionCopySceneByID_m944 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionCopyScene>> GCGame.Table.TableManager::GetMissionCopyScene()
 Dictionary_2_t243 * TableManager_GetMissionCopyScene_m945 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDelivery> GCGame.Table.TableManager::GetMissionDeliveryByID(System.Int32)
 List_1_t538 * TableManager_GetMissionDeliveryByID_m946 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionDelivery GCGame.Table.TableManager::GetMissionDeliveryByID(System.Int32,System.Int32)
 Tab_MissionDelivery_t539 * TableManager_GetMissionDeliveryByID_m947 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDelivery>> GCGame.Table.TableManager::GetMissionDelivery()
 Dictionary_2_t244 * TableManager_GetMissionDelivery_m948 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDictionary> GCGame.Table.TableManager::GetMissionDictionaryByID(System.Int32)
 List_1_t540 * TableManager_GetMissionDictionaryByID_m949 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionDictionary GCGame.Table.TableManager::GetMissionDictionaryByID(System.Int32,System.Int32)
 Tab_MissionDictionary_t541 * TableManager_GetMissionDictionaryByID_m950 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionDictionary>> GCGame.Table.TableManager::GetMissionDictionary()
 Dictionary_2_t245 * TableManager_GetMissionDictionary_m951 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionEnterArea> GCGame.Table.TableManager::GetMissionEnterAreaByID(System.Int32)
 List_1_t542 * TableManager_GetMissionEnterAreaByID_m952 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionEnterArea GCGame.Table.TableManager::GetMissionEnterAreaByID(System.Int32,System.Int32)
 Tab_MissionEnterArea_t543 * TableManager_GetMissionEnterAreaByID_m953 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionEnterArea>> GCGame.Table.TableManager::GetMissionEnterArea()
 Dictionary_2_t246 * TableManager_GetMissionEnterArea_m954 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionKillMonster> GCGame.Table.TableManager::GetMissionKillMonsterByID(System.Int32)
 List_1_t544 * TableManager_GetMissionKillMonsterByID_m955 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionKillMonster GCGame.Table.TableManager::GetMissionKillMonsterByID(System.Int32,System.Int32)
 Tab_MissionKillMonster_t545 * TableManager_GetMissionKillMonsterByID_m956 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionKillMonster>> GCGame.Table.TableManager::GetMissionKillMonster()
 Dictionary_2_t247 * TableManager_GetMissionKillMonster_m957 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLevelUp> GCGame.Table.TableManager::GetMissionLevelUpByID(System.Int32)
 List_1_t546 * TableManager_GetMissionLevelUpByID_m958 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionLevelUp GCGame.Table.TableManager::GetMissionLevelUpByID(System.Int32,System.Int32)
 Tab_MissionLevelUp_t547 * TableManager_GetMissionLevelUpByID_m959 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLevelUp>> GCGame.Table.TableManager::GetMissionLevelUp()
 Dictionary_2_t248 * TableManager_GetMissionLevelUp_m960 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLimit> GCGame.Table.TableManager::GetMissionLimitByID(System.Int32)
 List_1_t548 * TableManager_GetMissionLimitByID_m961 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionLimit GCGame.Table.TableManager::GetMissionLimitByID(System.Int32,System.Int32)
 Tab_MissionLimit_t549 * TableManager_GetMissionLimitByID_m962 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLimit>> GCGame.Table.TableManager::GetMissionLimit()
 Dictionary_2_t249 * TableManager_GetMissionLimit_m963 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLootItem> GCGame.Table.TableManager::GetMissionLootItemByID(System.Int32)
 List_1_t550 * TableManager_GetMissionLootItemByID_m964 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionLootItem GCGame.Table.TableManager::GetMissionLootItemByID(System.Int32,System.Int32)
 Tab_MissionLootItem_t551 * TableManager_GetMissionLootItemByID_m965 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionLootItem>> GCGame.Table.TableManager::GetMissionLootItem()
 Dictionary_2_t250 * TableManager_GetMissionLootItem_m966 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionOperationNum> GCGame.Table.TableManager::GetMissionOperationNumByID(System.Int32)
 List_1_t552 * TableManager_GetMissionOperationNumByID_m967 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionOperationNum GCGame.Table.TableManager::GetMissionOperationNumByID(System.Int32,System.Int32)
 Tab_MissionOperationNum_t553 * TableManager_GetMissionOperationNumByID_m968 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionOperationNum>> GCGame.Table.TableManager::GetMissionOperationNum()
 Dictionary_2_t251 * TableManager_GetMissionOperationNum_m969 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MissionUseItem> GCGame.Table.TableManager::GetMissionUseItemByID(System.Int32)
 List_1_t554 * TableManager_GetMissionUseItemByID_m970 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MissionUseItem GCGame.Table.TableManager::GetMissionUseItemByID(System.Int32,System.Int32)
 Tab_MissionUseItem_t555 * TableManager_GetMissionUseItemByID_m971 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MissionUseItem>> GCGame.Table.TableManager::GetMissionUseItem()
 Dictionary_2_t252 * TableManager_GetMissionUseItem_m972 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTree> GCGame.Table.TableManager::GetMoneyTreeByID(System.Int32)
 List_1_t556 * TableManager_GetMoneyTreeByID_m973 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MoneyTree GCGame.Table.TableManager::GetMoneyTreeByID(System.Int32,System.Int32)
 Tab_MoneyTree_t557 * TableManager_GetMoneyTreeByID_m974 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTree>> GCGame.Table.TableManager::GetMoneyTree()
 Dictionary_2_t253 * TableManager_GetMoneyTree_m975 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTreeVIP> GCGame.Table.TableManager::GetMoneyTreeVIPByID(System.Int32)
 List_1_t558 * TableManager_GetMoneyTreeVIPByID_m976 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MoneyTreeVIP GCGame.Table.TableManager::GetMoneyTreeVIPByID(System.Int32,System.Int32)
 Tab_MoneyTreeVIP_t559 * TableManager_GetMoneyTreeVIPByID_m977 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MoneyTreeVIP>> GCGame.Table.TableManager::GetMoneyTreeVIP()
 Dictionary_2_t254 * TableManager_GetMoneyTreeVIP_m978 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_MountBase> GCGame.Table.TableManager::GetMountBaseByID(System.Int32)
 List_1_t560 * TableManager_GetMountBaseByID_m979 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_MountBase GCGame.Table.TableManager::GetMountBaseByID(System.Int32,System.Int32)
 Tab_MountBase_t561 * TableManager_GetMountBaseByID_m980 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_MountBase>> GCGame.Table.TableManager::GetMountBase()
 Dictionary_2_t255 * TableManager_GetMountBase_m981 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NewServerAward> GCGame.Table.TableManager::GetNewServerAwardByID(System.Int32)
 List_1_t562 * TableManager_GetNewServerAwardByID_m982 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_NewServerAward GCGame.Table.TableManager::GetNewServerAwardByID(System.Int32,System.Int32)
 Tab_NewServerAward_t563 * TableManager_GetNewServerAwardByID_m983 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NewServerAward>> GCGame.Table.TableManager::GetNewServerAward()
 Dictionary_2_t256 * TableManager_GetNewServerAward_m984 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NianShouNpcScence> GCGame.Table.TableManager::GetNianShouNpcScenceByID(System.Int32)
 List_1_t564 * TableManager_GetNianShouNpcScenceByID_m985 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_NianShouNpcScence GCGame.Table.TableManager::GetNianShouNpcScenceByID(System.Int32,System.Int32)
 Tab_NianShouNpcScence_t565 * TableManager_GetNianShouNpcScenceByID_m986 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NianShouNpcScence>> GCGame.Table.TableManager::GetNianShouNpcScence()
 Dictionary_2_t257 * TableManager_GetNianShouNpcScence_m987 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NpcDialog> GCGame.Table.TableManager::GetNpcDialogByID(System.Int32)
 List_1_t566 * TableManager_GetNpcDialogByID_m988 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_NpcDialog GCGame.Table.TableManager::GetNpcDialogByID(System.Int32,System.Int32)
 Tab_NpcDialog_t567 * TableManager_GetNpcDialogByID_m989 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcDialog>> GCGame.Table.TableManager::GetNpcDialog()
 Dictionary_2_t258 * TableManager_GetNpcDialog_m990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog> GCGame.Table.TableManager::GetNpcOptionDialogByID(System.Int32)
 List_1_t568 * TableManager_GetNpcOptionDialogByID_m991 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_NpcOptionDialog GCGame.Table.TableManager::GetNpcOptionDialogByID(System.Int32,System.Int32)
 Tab_NpcOptionDialog_t569 * TableManager_GetNpcOptionDialogByID_m992 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_NpcOptionDialog>> GCGame.Table.TableManager::GetNpcOptionDialog()
 Dictionary_2_t259 * TableManager_GetNpcOptionDialog_m993 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_OffLineExp> GCGame.Table.TableManager::GetOffLineExpByID(System.Int32)
 List_1_t570 * TableManager_GetOffLineExpByID_m994 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_OffLineExp GCGame.Table.TableManager::GetOffLineExpByID(System.Int32,System.Int32)
 Tab_OffLineExp_t571 * TableManager_GetOffLineExpByID_m995 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_OffLineExp>> GCGame.Table.TableManager::GetOffLineExp()
 Dictionary_2_t260 * TableManager_GetOffLineExp_m996 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_OnlineTimeRankReward> GCGame.Table.TableManager::GetOnlineTimeRankRewardByID(System.Int32)
 List_1_t572 * TableManager_GetOnlineTimeRankRewardByID_m997 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_OnlineTimeRankReward GCGame.Table.TableManager::GetOnlineTimeRankRewardByID(System.Int32,System.Int32)
 Tab_OnlineTimeRankReward_t573 * TableManager_GetOnlineTimeRankRewardByID_m998 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_OnlineTimeRankReward>> GCGame.Table.TableManager::GetOnlineTimeRankReward()
 Dictionary_2_t261 * TableManager_GetOnlineTimeRankReward_m999 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule> GCGame.Table.TableManager::GetPVPRuleByID(System.Int32)
 List_1_t574 * TableManager_GetPVPRuleByID_m1000 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PVPRule GCGame.Table.TableManager::GetPVPRuleByID(System.Int32,System.Int32)
 Tab_PVPRule_t575 * TableManager_GetPVPRuleByID_m1001 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PVPRule>> GCGame.Table.TableManager::GetPVPRule()
 Dictionary_2_t262 * TableManager_GetPVPRule_m1002 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanBonus> GCGame.Table.TableManager::GetPaoHuanBonusByID(System.Int32)
 List_1_t576 * TableManager_GetPaoHuanBonusByID_m1003 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PaoHuanBonus GCGame.Table.TableManager::GetPaoHuanBonusByID(System.Int32,System.Int32)
 Tab_PaoHuanBonus_t577 * TableManager_GetPaoHuanBonusByID_m1004 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanBonus>> GCGame.Table.TableManager::GetPaoHuanBonus()
 Dictionary_2_t263 * TableManager_GetPaoHuanBonus_m1005 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanMission> GCGame.Table.TableManager::GetPaoHuanMissionByID(System.Int32)
 List_1_t578 * TableManager_GetPaoHuanMissionByID_m1006 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PaoHuanMission GCGame.Table.TableManager::GetPaoHuanMissionByID(System.Int32,System.Int32)
 Tab_PaoHuanMission_t579 * TableManager_GetPaoHuanMissionByID_m1007 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanMission>> GCGame.Table.TableManager::GetPaoHuanMission()
 Dictionary_2_t264 * TableManager_GetPaoHuanMission_m1008 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanRefresh> GCGame.Table.TableManager::GetPaoHuanRefreshByID(System.Int32)
 List_1_t580 * TableManager_GetPaoHuanRefreshByID_m1009 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PaoHuanRefresh GCGame.Table.TableManager::GetPaoHuanRefreshByID(System.Int32,System.Int32)
 Tab_PaoHuanRefresh_t581 * TableManager_GetPaoHuanRefreshByID_m1010 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PaoHuanRefresh>> GCGame.Table.TableManager::GetPaoHuanRefresh()
 Dictionary_2_t265 * TableManager_GetPaoHuanRefresh_m1011 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint> GCGame.Table.TableManager::GetPatrolPointByID(System.Int32)
 List_1_t582 * TableManager_GetPatrolPointByID_m1012 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PatrolPoint GCGame.Table.TableManager::GetPatrolPointByID(System.Int32,System.Int32)
 Tab_PatrolPoint_t583 * TableManager_GetPatrolPointByID_m1013 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PatrolPoint>> GCGame.Table.TableManager::GetPatrolPoint()
 Dictionary_2_t266 * TableManager_GetPatrolPoint_m1014 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionConmmon> GCGame.Table.TableManager::GetProfessionConmmonByID(System.Int32)
 List_1_t584 * TableManager_GetProfessionConmmonByID_m1015 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ProfessionConmmon GCGame.Table.TableManager::GetProfessionConmmonByID(System.Int32,System.Int32)
 Tab_ProfessionConmmon_t585 * TableManager_GetProfessionConmmonByID_m1016 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionConmmon>> GCGame.Table.TableManager::GetProfessionConmmon()
 Dictionary_2_t267 * TableManager_GetProfessionConmmon_m1017 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionReputationReward> GCGame.Table.TableManager::GetProfessionReputationRewardByID(System.Int32)
 List_1_t586 * TableManager_GetProfessionReputationRewardByID_m1018 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ProfessionReputationReward GCGame.Table.TableManager::GetProfessionReputationRewardByID(System.Int32,System.Int32)
 Tab_ProfessionReputationReward_t587 * TableManager_GetProfessionReputationRewardByID_m1019 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ProfessionReputationReward>> GCGame.Table.TableManager::GetProfessionReputationReward()
 Dictionary_2_t268 * TableManager_GetProfessionReputationReward_m1020 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PublicConfig> GCGame.Table.TableManager::GetPublicConfigByID(System.Int32)
 List_1_t588 * TableManager_GetPublicConfigByID_m1021 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PublicConfig GCGame.Table.TableManager::GetPublicConfigByID(System.Int32,System.Int32)
 Tab_PublicConfig_t589 * TableManager_GetPublicConfigByID_m1022 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PublicConfig>> GCGame.Table.TableManager::GetPublicConfig()
 Dictionary_2_t269 * TableManager_GetPublicConfig_m1023 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification> GCGame.Table.TableManager::GetPushNotificationByID(System.Int32)
 List_1_t590 * TableManager_GetPushNotificationByID_m1024 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PushNotification GCGame.Table.TableManager::GetPushNotificationByID(System.Int32,System.Int32)
 Tab_PushNotification_t591 * TableManager_GetPushNotificationByID_m1025 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PushNotification>> GCGame.Table.TableManager::GetPushNotification()
 Dictionary_2_t270 * TableManager_GetPushNotification_m1026 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpAward> GCGame.Table.TableManager::GetPvpAwardByID(System.Int32)
 List_1_t592 * TableManager_GetPvpAwardByID_m1027 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PvpAward GCGame.Table.TableManager::GetPvpAwardByID(System.Int32,System.Int32)
 Tab_PvpAward_t593 * TableManager_GetPvpAwardByID_m1028 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpAward>> GCGame.Table.TableManager::GetPvpAward()
 Dictionary_2_t271 * TableManager_GetPvpAward_m1029 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank> GCGame.Table.TableManager::GetPvpRankByID(System.Int32)
 List_1_t594 * TableManager_GetPvpRankByID_m1030 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PvpRank GCGame.Table.TableManager::GetPvpRankByID(System.Int32,System.Int32)
 Tab_PvpRank_t595 * TableManager_GetPvpRankByID_m1031 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpRank>> GCGame.Table.TableManager::GetPvpRank()
 Dictionary_2_t272 * TableManager_GetPvpRank_m1032 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_PvpShop> GCGame.Table.TableManager::GetPvpShopByID(System.Int32)
 List_1_t596 * TableManager_GetPvpShopByID_m1033 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_PvpShop GCGame.Table.TableManager::GetPvpShopByID(System.Int32,System.Int32)
 Tab_PvpShop_t597 * TableManager_GetPvpShopByID_m1034 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_PvpShop>> GCGame.Table.TableManager::GetPvpShop()
 Dictionary_2_t273 * TableManager_GetPvpShop_m1035 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_QianKunDaiFormula> GCGame.Table.TableManager::GetQianKunDaiFormulaByID(System.Int32)
 List_1_t598 * TableManager_GetQianKunDaiFormulaByID_m1036 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_QianKunDaiFormula GCGame.Table.TableManager::GetQianKunDaiFormulaByID(System.Int32,System.Int32)
 Tab_QianKunDaiFormula_t599 * TableManager_GetQianKunDaiFormulaByID_m1037 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_QianKunDaiFormula>> GCGame.Table.TableManager::GetQianKunDaiFormula()
 Dictionary_2_t274 * TableManager_GetQianKunDaiFormula_m1038 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RankReward> GCGame.Table.TableManager::GetRankRewardByID(System.Int32)
 List_1_t600 * TableManager_GetRankRewardByID_m1039 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RankReward GCGame.Table.TableManager::GetRankRewardByID(System.Int32,System.Int32)
 Tab_RankReward_t601 * TableManager_GetRankRewardByID_m1040 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RankReward>> GCGame.Table.TableManager::GetRankReward()
 Dictionary_2_t275 * TableManager_GetRankReward_m1041 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Recharge> GCGame.Table.TableManager::GetRechargeByID(System.Int32)
 List_1_t602 * TableManager_GetRechargeByID_m1042 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Recharge GCGame.Table.TableManager::GetRechargeByID(System.Int32,System.Int32)
 Tab_Recharge_t603 * TableManager_GetRechargeByID_m1043 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Recharge>> GCGame.Table.TableManager::GetRecharge()
 Dictionary_2_t276 * TableManager_GetRecharge_m1044 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Relation> GCGame.Table.TableManager::GetRelationByID(System.Int32)
 List_1_t604 * TableManager_GetRelationByID_m1045 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Relation GCGame.Table.TableManager::GetRelationByID(System.Int32,System.Int32)
 Tab_Relation_t605 * TableManager_GetRelationByID_m1046 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Relation>> GCGame.Table.TableManager::GetRelation()
 Dictionary_2_t277 * TableManager_GetRelation_m1047 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk> GCGame.Table.TableManager::GetRestaurantDeskByID(System.Int32)
 List_1_t606 * TableManager_GetRestaurantDeskByID_m1048 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RestaurantDesk GCGame.Table.TableManager::GetRestaurantDeskByID(System.Int32,System.Int32)
 Tab_RestaurantDesk_t607 * TableManager_GetRestaurantDeskByID_m1049 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantDesk>> GCGame.Table.TableManager::GetRestaurantDesk()
 Dictionary_2_t278 * TableManager_GetRestaurantDesk_m1050 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood> GCGame.Table.TableManager::GetRestaurantFoodByID(System.Int32)
 List_1_t608 * TableManager_GetRestaurantFoodByID_m1051 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RestaurantFood GCGame.Table.TableManager::GetRestaurantFoodByID(System.Int32,System.Int32)
 Tab_RestaurantFood_t609 * TableManager_GetRestaurantFoodByID_m1052 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood>> GCGame.Table.TableManager::GetRestaurantFood()
 Dictionary_2_t279 * TableManager_GetRestaurantFood_m1053 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantGuest> GCGame.Table.TableManager::GetRestaurantGuestByID(System.Int32)
 List_1_t610 * TableManager_GetRestaurantGuestByID_m1054 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RestaurantGuest GCGame.Table.TableManager::GetRestaurantGuestByID(System.Int32,System.Int32)
 Tab_RestaurantGuest_t611 * TableManager_GetRestaurantGuestByID_m1055 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantGuest>> GCGame.Table.TableManager::GetRestaurantGuest()
 Dictionary_2_t280 * TableManager_GetRestaurantGuest_m1056 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantLevel> GCGame.Table.TableManager::GetRestaurantLevelByID(System.Int32)
 List_1_t612 * TableManager_GetRestaurantLevelByID_m1057 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RestaurantLevel GCGame.Table.TableManager::GetRestaurantLevelByID(System.Int32,System.Int32)
 Tab_RestaurantLevel_t613 * TableManager_GetRestaurantLevelByID_m1058 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantLevel>> GCGame.Table.TableManager::GetRestaurantLevel()
 Dictionary_2_t281 * TableManager_GetRestaurantLevel_m1059 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RoleBaseAttr> GCGame.Table.TableManager::GetRoleBaseAttrByID(System.Int32)
 List_1_t614 * TableManager_GetRoleBaseAttrByID_m1060 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RoleBaseAttr GCGame.Table.TableManager::GetRoleBaseAttrByID(System.Int32,System.Int32)
 Tab_RoleBaseAttr_t615 * TableManager_GetRoleBaseAttrByID_m1061 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RoleBaseAttr>> GCGame.Table.TableManager::GetRoleBaseAttr()
 Dictionary_2_t282 * TableManager_GetRoleBaseAttr_m1062 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RoleName> GCGame.Table.TableManager::GetRoleNameByID(System.Int32)
 List_1_t616 * TableManager_GetRoleNameByID_m1063 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_RoleName GCGame.Table.TableManager::GetRoleNameByID(System.Int32,System.Int32)
 Tab_RoleName_t617 * TableManager_GetRoleNameByID_m1064 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_RoleName>> GCGame.Table.TableManager::GetRoleName()
 Dictionary_2_t283 * TableManager_GetRoleName_m1065 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SNSReward> GCGame.Table.TableManager::GetSNSRewardByID(System.Int32)
 List_1_t618 * TableManager_GetSNSRewardByID_m1066 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SNSReward GCGame.Table.TableManager::GetSNSRewardByID(System.Int32,System.Int32)
 Tab_SNSReward_t619 * TableManager_GetSNSRewardByID_m1067 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SNSReward>> GCGame.Table.TableManager::GetSNSReward()
 Dictionary_2_t284 * TableManager_GetSNSReward_m1068 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass> GCGame.Table.TableManager::GetSceneClassByID(System.Int32)
 List_1_t620 * TableManager_GetSceneClassByID_m1069 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SceneClass GCGame.Table.TableManager::GetSceneClassByID(System.Int32,System.Int32)
 Tab_SceneClass_t621 * TableManager_GetSceneClassByID_m1070 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneClass>> GCGame.Table.TableManager::GetSceneClass()
 Dictionary_2_t285 * TableManager_GetSceneClass_m1071 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneFightPos> GCGame.Table.TableManager::GetSceneFightPosByID(System.Int32)
 List_1_t622 * TableManager_GetSceneFightPosByID_m1072 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SceneFightPos GCGame.Table.TableManager::GetSceneFightPosByID(System.Int32,System.Int32)
 Tab_SceneFightPos_t623 * TableManager_GetSceneFightPosByID_m1073 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneFightPos>> GCGame.Table.TableManager::GetSceneFightPos()
 Dictionary_2_t286 * TableManager_GetSceneFightPos_m1074 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SceneNpc> GCGame.Table.TableManager::GetSceneNpcByID(System.Int32)
 List_1_t624 * TableManager_GetSceneNpcByID_m1075 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SceneNpc GCGame.Table.TableManager::GetSceneNpcByID(System.Int32,System.Int32)
 Tab_SceneNpc_t625 * TableManager_GetSceneNpcByID_m1076 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SceneNpc>> GCGame.Table.TableManager::GetSceneNpc()
 Dictionary_2_t287 * TableManager_GetSceneNpc_m1077 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShareReward> GCGame.Table.TableManager::GetShareRewardByID(System.Int32)
 List_1_t626 * TableManager_GetShareRewardByID_m1078 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ShareReward GCGame.Table.TableManager::GetShareRewardByID(System.Int32,System.Int32)
 Tab_ShareReward_t627 * TableManager_GetShareRewardByID_m1079 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShareReward>> GCGame.Table.TableManager::GetShareReward()
 Dictionary_2_t288 * TableManager_GetShareReward_m1080 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiInfo> GCGame.Table.TableManager::GetShenQiInfoByID(System.Int32)
 List_1_t628 * TableManager_GetShenQiInfoByID_m1081 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ShenQiInfo GCGame.Table.TableManager::GetShenQiInfoByID(System.Int32,System.Int32)
 Tab_ShenQiInfo_t629 * TableManager_GetShenQiInfoByID_m1082 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiInfo>> GCGame.Table.TableManager::GetShenQiInfo()
 Dictionary_2_t289 * TableManager_GetShenQiInfo_m1083 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo> GCGame.Table.TableManager::GetShenQiSkillInfoByID(System.Int32)
 List_1_t630 * TableManager_GetShenQiSkillInfoByID_m1084 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ShenQiSkillInfo GCGame.Table.TableManager::GetShenQiSkillInfoByID(System.Int32,System.Int32)
 Tab_ShenQiSkillInfo_t631 * TableManager_GetShenQiSkillInfoByID_m1085 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShenQiSkillInfo>> GCGame.Table.TableManager::GetShenQiSkillInfo()
 Dictionary_2_t290 * TableManager_GetShenQiSkillInfo_m1086 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_ShouHuaAwardInfo> GCGame.Table.TableManager::GetShouHuaAwardInfoByID(System.Int32)
 List_1_t632 * TableManager_GetShouHuaAwardInfoByID_m1087 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_ShouHuaAwardInfo GCGame.Table.TableManager::GetShouHuaAwardInfoByID(System.Int32,System.Int32)
 Tab_ShouHuaAwardInfo_t633 * TableManager_GetShouHuaAwardInfoByID_m1088 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_ShouHuaAwardInfo>> GCGame.Table.TableManager::GetShouHuaAwardInfo()
 Dictionary_2_t291 * TableManager_GetShouHuaAwardInfo_m1089 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillActive> GCGame.Table.TableManager::GetSkillActiveByID(System.Int32)
 List_1_t634 * TableManager_GetSkillActiveByID_m1090 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillActive GCGame.Table.TableManager::GetSkillActiveByID(System.Int32,System.Int32)
 Tab_SkillActive_t635 * TableManager_GetSkillActiveByID_m1091 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillActive>> GCGame.Table.TableManager::GetSkillActive()
 Dictionary_2_t292 * TableManager_GetSkillActive_m1092 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillBase> GCGame.Table.TableManager::GetSkillBaseByID(System.Int32)
 List_1_t636 * TableManager_GetSkillBaseByID_m1093 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillBase GCGame.Table.TableManager::GetSkillBaseByID(System.Int32,System.Int32)
 Tab_SkillBase_t637 * TableManager_GetSkillBaseByID_m1094 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillBase>> GCGame.Table.TableManager::GetSkillBase()
 Dictionary_2_t293 * TableManager_GetSkillBase_m1095 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillEx> GCGame.Table.TableManager::GetSkillExByID(System.Int32)
 List_1_t638 * TableManager_GetSkillExByID_m1096 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillEx GCGame.Table.TableManager::GetSkillExByID(System.Int32,System.Int32)
 Tab_SkillEx_t639 * TableManager_GetSkillExByID_m1097 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillEx>> GCGame.Table.TableManager::GetSkillEx()
 Dictionary_2_t294 * TableManager_GetSkillEx_m1098 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp> GCGame.Table.TableManager::GetSkillLevelUpByID(System.Int32)
 List_1_t640 * TableManager_GetSkillLevelUpByID_m1099 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillLevelUp GCGame.Table.TableManager::GetSkillLevelUpByID(System.Int32,System.Int32)
 Tab_SkillLevelUp_t641 * TableManager_GetSkillLevelUpByID_m1100 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SkillLevelUp>> GCGame.Table.TableManager::GetSkillLevelUp()
 Dictionary_2_t295 * TableManager_GetSkillLevelUp_m1101 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SnareObjInfo> GCGame.Table.TableManager::GetSnareObjInfoByID(System.Int32)
 List_1_t642 * TableManager_GetSnareObjInfoByID_m1102 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SnareObjInfo GCGame.Table.TableManager::GetSnareObjInfoByID(System.Int32,System.Int32)
 Tab_SnareObjInfo_t643 * TableManager_GetSnareObjInfoByID_m1103 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SnareObjInfo>> GCGame.Table.TableManager::GetSnareObjInfo()
 Dictionary_2_t296 * TableManager_GetSnareObjInfo_m1104 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SongHuaAwardInfo> GCGame.Table.TableManager::GetSongHuaAwardInfoByID(System.Int32)
 List_1_t644 * TableManager_GetSongHuaAwardInfoByID_m1105 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SongHuaAwardInfo GCGame.Table.TableManager::GetSongHuaAwardInfoByID(System.Int32,System.Int32)
 Tab_SongHuaAwardInfo_t645 * TableManager_GetSongHuaAwardInfoByID_m1106 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SongHuaAwardInfo>> GCGame.Table.TableManager::GetSongHuaAwardInfo()
 Dictionary_2_t297 * TableManager_GetSongHuaAwardInfo_m1107 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Sounds> GCGame.Table.TableManager::GetSoundsByID(System.Int32)
 List_1_t646 * TableManager_GetSoundsByID_m1108 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Sounds GCGame.Table.TableManager::GetSoundsByID(System.Int32,System.Int32)
 Tab_Sounds_t647 * TableManager_GetSoundsByID_m1109 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Sounds>> GCGame.Table.TableManager::GetSounds()
 Dictionary_2_t298 * TableManager_GetSounds_m1110 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StaminaBuyRule> GCGame.Table.TableManager::GetStaminaBuyRuleByID(System.Int32)
 List_1_t648 * TableManager_GetStaminaBuyRuleByID_m1111 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StaminaBuyRule GCGame.Table.TableManager::GetStaminaBuyRuleByID(System.Int32,System.Int32)
 Tab_StaminaBuyRule_t649 * TableManager_GetStaminaBuyRuleByID_m1112 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StaminaBuyRule>> GCGame.Table.TableManager::GetStaminaBuyRule()
 Dictionary_2_t299 * TableManager_GetStaminaBuyRule_m1113 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StarCondition> GCGame.Table.TableManager::GetStarConditionByID(System.Int32)
 List_1_t650 * TableManager_GetStarConditionByID_m1114 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StarCondition GCGame.Table.TableManager::GetStarConditionByID(System.Int32,System.Int32)
 Tab_StarCondition_t651 * TableManager_GetStarConditionByID_m1115 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StarCondition>> GCGame.Table.TableManager::GetStarCondition()
 Dictionary_2_t300 * TableManager_GetStarCondition_m1116 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopyScene> GCGame.Table.TableManager::GetStoryCopySceneByID(System.Int32)
 List_1_t652 * TableManager_GetStoryCopySceneByID_m1117 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryCopyScene GCGame.Table.TableManager::GetStoryCopySceneByID(System.Int32,System.Int32)
 Tab_StoryCopyScene_t653 * TableManager_GetStoryCopySceneByID_m1118 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopyScene>> GCGame.Table.TableManager::GetStoryCopyScene()
 Dictionary_2_t301 * TableManager_GetStoryCopyScene_m1119 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneAward> GCGame.Table.TableManager::GetStoryCopySceneAwardByID(System.Int32)
 List_1_t654 * TableManager_GetStoryCopySceneAwardByID_m1120 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryCopySceneAward GCGame.Table.TableManager::GetStoryCopySceneAwardByID(System.Int32,System.Int32)
 Tab_StoryCopySceneAward_t655 * TableManager_GetStoryCopySceneAwardByID_m1121 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneAward>> GCGame.Table.TableManager::GetStoryCopySceneAward()
 Dictionary_2_t302 * TableManager_GetStoryCopySceneAward_m1122 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter> GCGame.Table.TableManager::GetStoryCopySceneChapterByID(System.Int32)
 List_1_t656 * TableManager_GetStoryCopySceneChapterByID_m1123 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryCopySceneChapter GCGame.Table.TableManager::GetStoryCopySceneChapterByID(System.Int32,System.Int32)
 Tab_StoryCopySceneChapter_t657 * TableManager_GetStoryCopySceneChapterByID_m1124 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneChapter>> GCGame.Table.TableManager::GetStoryCopySceneChapter()
 Dictionary_2_t303 * TableManager_GetStoryCopySceneChapter_m1125 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneFlow> GCGame.Table.TableManager::GetStoryCopySceneFlowByID(System.Int32)
 List_1_t658 * TableManager_GetStoryCopySceneFlowByID_m1126 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryCopySceneFlow GCGame.Table.TableManager::GetStoryCopySceneFlowByID(System.Int32,System.Int32)
 Tab_StoryCopySceneFlow_t659 * TableManager_GetStoryCopySceneFlowByID_m1127 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneFlow>> GCGame.Table.TableManager::GetStoryCopySceneFlow()
 Dictionary_2_t304 * TableManager_GetStoryCopySceneFlow_m1128 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneNpc> GCGame.Table.TableManager::GetStoryCopySceneNpcByID(System.Int32)
 List_1_t660 * TableManager_GetStoryCopySceneNpcByID_m1129 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryCopySceneNpc GCGame.Table.TableManager::GetStoryCopySceneNpcByID(System.Int32,System.Int32)
 Tab_StoryCopySceneNpc_t661 * TableManager_GetStoryCopySceneNpcByID_m1130 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryCopySceneNpc>> GCGame.Table.TableManager::GetStoryCopySceneNpc()
 Dictionary_2_t305 * TableManager_GetStoryCopySceneNpc_m1131 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable> GCGame.Table.TableManager::GetStoryTableByID(System.Int32)
 List_1_t662 * TableManager_GetStoryTableByID_m1132 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StoryTable GCGame.Table.TableManager::GetStoryTableByID(System.Int32,System.Int32)
 Tab_StoryTable_t663 * TableManager_GetStoryTableByID_m1133 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StoryTable>> GCGame.Table.TableManager::GetStoryTable()
 Dictionary_2_t306 * TableManager_GetStoryTable_m1134 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StrDictionary> GCGame.Table.TableManager::GetStrDictionaryByID(System.Int32)
 List_1_t664 * TableManager_GetStrDictionaryByID_m1135 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StrDictionary GCGame.Table.TableManager::GetStrDictionaryByID(System.Int32,System.Int32)
 Tab_StrDictionary_t665 * TableManager_GetStrDictionaryByID_m1136 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StrDictionary>> GCGame.Table.TableManager::GetStrDictionary()
 Dictionary_2_t307 * TableManager_GetStrDictionary_m1137 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_StrFilter> GCGame.Table.TableManager::GetStrFilterByID(System.Int32)
 List_1_t666 * TableManager_GetStrFilterByID_m1138 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_StrFilter GCGame.Table.TableManager::GetStrFilterByID(System.Int32,System.Int32)
 Tab_StrFilter_t667 * TableManager_GetStrFilterByID_m1139 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_StrFilter>> GCGame.Table.TableManager::GetStrFilter()
 Dictionary_2_t308 * TableManager_GetStrFilter_m1140 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsEquipPackUnlock> GCGame.Table.TableManager::GetSwordsEquipPackUnlockByID(System.Int32)
 List_1_t668 * TableManager_GetSwordsEquipPackUnlockByID_m1141 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SwordsEquipPackUnlock GCGame.Table.TableManager::GetSwordsEquipPackUnlockByID(System.Int32,System.Int32)
 Tab_SwordsEquipPackUnlock_t669 * TableManager_GetSwordsEquipPackUnlockByID_m1142 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsEquipPackUnlock>> GCGame.Table.TableManager::GetSwordsEquipPackUnlock()
 Dictionary_2_t309 * TableManager_GetSwordsEquipPackUnlock_m1143 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManAttr> GCGame.Table.TableManager::GetSwordsManAttrByID(System.Int32)
 List_1_t670 * TableManager_GetSwordsManAttrByID_m1144 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SwordsManAttr GCGame.Table.TableManager::GetSwordsManAttrByID(System.Int32,System.Int32)
 Tab_SwordsManAttr_t671 * TableManager_GetSwordsManAttrByID_m1145 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManAttr>> GCGame.Table.TableManager::GetSwordsManAttr()
 Dictionary_2_t310 * TableManager_GetSwordsManAttr_m1146 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManGainRata> GCGame.Table.TableManager::GetSwordsManGainRataByID(System.Int32)
 List_1_t672 * TableManager_GetSwordsManGainRataByID_m1147 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SwordsManGainRata GCGame.Table.TableManager::GetSwordsManGainRataByID(System.Int32,System.Int32)
 Tab_SwordsManGainRata_t673 * TableManager_GetSwordsManGainRataByID_m1148 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManGainRata>> GCGame.Table.TableManager::GetSwordsManGainRata()
 Dictionary_2_t311 * TableManager_GetSwordsManGainRata_m1149 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManLevelUp> GCGame.Table.TableManager::GetSwordsManLevelUpByID(System.Int32)
 List_1_t674 * TableManager_GetSwordsManLevelUpByID_m1150 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SwordsManLevelUp GCGame.Table.TableManager::GetSwordsManLevelUpByID(System.Int32,System.Int32)
 Tab_SwordsManLevelUp_t675 * TableManager_GetSwordsManLevelUpByID_m1151 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManLevelUp>> GCGame.Table.TableManager::GetSwordsManLevelUp()
 Dictionary_2_t312 * TableManager_GetSwordsManLevelUp_m1152 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManScoreShop> GCGame.Table.TableManager::GetSwordsManScoreShopByID(System.Int32)
 List_1_t676 * TableManager_GetSwordsManScoreShopByID_m1153 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SwordsManScoreShop GCGame.Table.TableManager::GetSwordsManScoreShopByID(System.Int32,System.Int32)
 Tab_SwordsManScoreShop_t677 * TableManager_GetSwordsManScoreShopByID_m1154 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SwordsManScoreShop>> GCGame.Table.TableManager::GetSwordsManScoreShop()
 Dictionary_2_t313 * TableManager_GetSwordsManScoreShop_m1155 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_SystemShop> GCGame.Table.TableManager::GetSystemShopByID(System.Int32)
 List_1_t678 * TableManager_GetSystemShopByID_m1156 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SystemShop GCGame.Table.TableManager::GetSystemShopByID(System.Int32,System.Int32)
 Tab_SystemShop_t679 * TableManager_GetSystemShopByID_m1157 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_SystemShop>> GCGame.Table.TableManager::GetSystemShop()
 Dictionary_2_t314 * TableManager_GetSystemShop_m1158 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Teleport> GCGame.Table.TableManager::GetTeleportByID(System.Int32)
 List_1_t680 * TableManager_GetTeleportByID_m1159 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Teleport GCGame.Table.TableManager::GetTeleportByID(System.Int32,System.Int32)
 Tab_Teleport_t681 * TableManager_GetTeleportByID_m1160 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Teleport>> GCGame.Table.TableManager::GetTeleport()
 Dictionary_2_t315 * TableManager_GetTeleport_m1161 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TestTable> GCGame.Table.TableManager::GetTestTableByID(System.Int32)
 List_1_t682 * TableManager_GetTestTableByID_m1162 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_TestTable GCGame.Table.TableManager::GetTestTableByID(System.Int32,System.Int32)
 Tab_TestTable_t683 * TableManager_GetTestTableByID_m1163 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TestTable>> GCGame.Table.TableManager::GetTestTable()
 Dictionary_2_t316 * TableManager_GetTestTable_m1164 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TitleData> GCGame.Table.TableManager::GetTitleDataByID(System.Int32)
 List_1_t684 * TableManager_GetTitleDataByID_m1165 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_TitleData GCGame.Table.TableManager::GetTitleDataByID(System.Int32,System.Int32)
 Tab_TitleData_t685 * TableManager_GetTitleDataByID_m1166 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleData>> GCGame.Table.TableManager::GetTitleData()
 Dictionary_2_t317 * TableManager_GetTitleData_m1167 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType> GCGame.Table.TableManager::GetTitleTypeByID(System.Int32)
 List_1_t686 * TableManager_GetTitleTypeByID_m1168 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_TitleType GCGame.Table.TableManager::GetTitleTypeByID(System.Int32,System.Int32)
 Tab_TitleType_t687 * TableManager_GetTitleTypeByID_m1169 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TitleType>> GCGame.Table.TableManager::GetTitleType()
 Dictionary_2_t318 * TableManager_GetTitleType_m1170 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingBook> GCGame.Table.TableManager::GetTrainingBookByID(System.Int32)
 List_1_t688 * TableManager_GetTrainingBookByID_m1171 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_TrainingBook GCGame.Table.TableManager::GetTrainingBookByID(System.Int32,System.Int32)
 Tab_TrainingBook_t689 * TableManager_GetTrainingBookByID_m1172 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingBook>> GCGame.Table.TableManager::GetTrainingBook()
 Dictionary_2_t319 * TableManager_GetTrainingBook_m1173 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingPic> GCGame.Table.TableManager::GetTrainingPicByID(System.Int32)
 List_1_t690 * TableManager_GetTrainingPicByID_m1174 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_TrainingPic GCGame.Table.TableManager::GetTrainingPicByID(System.Int32,System.Int32)
 Tab_TrainingPic_t691 * TableManager_GetTrainingPicByID_m1175 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_TrainingPic>> GCGame.Table.TableManager::GetTrainingPic()
 Dictionary_2_t320 * TableManager_GetTrainingPic_m1176 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger> GCGame.Table.TableManager::GetTriggerByID(System.Int32)
 List_1_t692 * TableManager_GetTriggerByID_m1177 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Trigger GCGame.Table.TableManager::GetTriggerByID(System.Int32,System.Int32)
 Tab_Trigger_t693 * TableManager_GetTriggerByID_m1178 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Trigger>> GCGame.Table.TableManager::GetTrigger()
 Dictionary_2_t321 * TableManager_GetTrigger_m1179 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath> GCGame.Table.TableManager::GetUIPathByID(System.Int32)
 List_1_t694 * TableManager_GetUIPathByID_m1180 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_UIPath GCGame.Table.TableManager::GetUIPathByID(System.Int32,System.Int32)
 Tab_UIPath_t695 * TableManager_GetUIPathByID_m1181 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UIPath>> GCGame.Table.TableManager::GetUIPath()
 Dictionary_2_t322 * TableManager_GetUIPath_m1182 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_UsableItem> GCGame.Table.TableManager::GetUsableItemByID(System.Int32)
 List_1_t696 * TableManager_GetUsableItemByID_m1183 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_UsableItem GCGame.Table.TableManager::GetUsableItemByID(System.Int32,System.Int32)
 Tab_UsableItem_t697 * TableManager_GetUsableItemByID_m1184 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_UsableItem>> GCGame.Table.TableManager::GetUsableItem()
 Dictionary_2_t323 * TableManager_GetUsableItem_m1185 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VIPShop> GCGame.Table.TableManager::GetVIPShopByID(System.Int32)
 List_1_t698 * TableManager_GetVIPShopByID_m1186 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_VIPShop GCGame.Table.TableManager::GetVIPShopByID(System.Int32,System.Int32)
 Tab_VIPShop_t699 * TableManager_GetVIPShopByID_m1187 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VIPShop>> GCGame.Table.TableManager::GetVIPShop()
 Dictionary_2_t324 * TableManager_GetVIPShop_m1188 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VillainGuideNpc> GCGame.Table.TableManager::GetVillainGuideNpcByID(System.Int32)
 List_1_t700 * TableManager_GetVillainGuideNpcByID_m1189 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_VillainGuideNpc GCGame.Table.TableManager::GetVillainGuideNpcByID(System.Int32,System.Int32)
 Tab_VillainGuideNpc_t701 * TableManager_GetVillainGuideNpcByID_m1190 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainGuideNpc>> GCGame.Table.TableManager::GetVillainGuideNpc()
 Dictionary_2_t325 * TableManager_GetVillainGuideNpc_m1191 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene> GCGame.Table.TableManager::GetVillainSceneByID(System.Int32)
 List_1_t702 * TableManager_GetVillainSceneByID_m1192 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_VillainScene GCGame.Table.TableManager::GetVillainSceneByID(System.Int32,System.Int32)
 Tab_VillainScene_t703 * TableManager_GetVillainSceneByID_m1193 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VillainScene>> GCGame.Table.TableManager::GetVillainScene()
 Dictionary_2_t326 * TableManager_GetVillainScene_m1194 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_VipBook> GCGame.Table.TableManager::GetVipBookByID(System.Int32)
 List_1_t704 * TableManager_GetVipBookByID_m1195 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_VipBook GCGame.Table.TableManager::GetVipBookByID(System.Int32,System.Int32)
 Tab_VipBook_t705 * TableManager_GetVipBookByID_m1196 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_VipBook>> GCGame.Table.TableManager::GetVipBook()
 Dictionary_2_t327 * TableManager_GetVipBook_m1197 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_WeaponModel> GCGame.Table.TableManager::GetWeaponModelByID(System.Int32)
 List_1_t706 * TableManager_GetWeaponModelByID_m1198 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_WeaponModel GCGame.Table.TableManager::GetWeaponModelByID(System.Int32,System.Int32)
 Tab_WeaponModel_t707 * TableManager_GetWeaponModelByID_m1199 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_WeaponModel>> GCGame.Table.TableManager::GetWeaponModel()
 Dictionary_2_t328 * TableManager_GetWeaponModel_m1200 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao> GCGame.Table.TableManager::GetXiaozhitiaoByID(System.Int32)
 List_1_t708 * TableManager_GetXiaozhitiaoByID_m1201 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_Xiaozhitiao GCGame.Table.TableManager::GetXiaozhitiaoByID(System.Int32,System.Int32)
 Tab_Xiaozhitiao_t709 * TableManager_GetXiaozhitiaoByID_m1202 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>> GCGame.Table.TableManager::GetXiaozhitiao()
 Dictionary_2_t329 * TableManager_GetXiaozhitiao_m1203 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_YanHua> GCGame.Table.TableManager::GetYanHuaByID(System.Int32)
 List_1_t710 * TableManager_GetYanHuaByID_m1204 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_YanHua GCGame.Table.TableManager::GetYanHuaByID(System.Int32,System.Int32)
 Tab_YanHua_t711 * TableManager_GetYanHuaByID_m1205 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_YanHua>> GCGame.Table.TableManager::GetYanHua()
 Dictionary_2_t330 * TableManager_GetYanHua_m1206 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GCGame.Table.Tab_YuanBaoShop> GCGame.Table.TableManager::GetYuanBaoShopByID(System.Int32)
 List_1_t712 * TableManager_GetYuanBaoShopByID_m1207 (Object_t * __this/* static, unused */, int32_t ___nKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_YuanBaoShop GCGame.Table.TableManager::GetYuanBaoShopByID(System.Int32,System.Int32)
 Tab_YuanBaoShop_t713 * TableManager_GetYuanBaoShopByID_m1208 (Object_t * __this/* static, unused */, int32_t ___nKey, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_YuanBaoShop>> GCGame.Table.TableManager::GetYuanBaoShop()
 Dictionary_2_t331 * TableManager_GetYuanBaoShop_m1209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
