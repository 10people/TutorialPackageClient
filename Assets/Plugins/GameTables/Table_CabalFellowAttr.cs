//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_CabalFellowAttr
{ private const string TAB_FILE_DATA = "Tables/CabalFellowAttr.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ICON,
ID_MODELID,
ID_FAKEOBJID,
ID_FELLOWTYPE,
ID_BABYFELLOWID,
ID_EVOLVELEVEL,
ID_CLASSID,
ID_ELEMENTATTR,
ID_BUYUSEMONEY,
ID_CALLLEVEL,
ID_ATTACKTYPE,
ID_FIRSTSKILLID,
ID_BASEATTACKDOWN_WHITE,
ID_BASEATTACKUP_WHITE,
ID_BASEATTACKDOWN_GREEN,
ID_BASEATTACKUP_GREEN,
ID_BASEATTACKDOWN_BLUE,
ID_BASEATTACKUP_BLUE,
ID_BASEATTACKDOWN_PURPLE,
ID_BASEATTACKUP_PURPLE,
ID_BASEATTACKDOWN_ORANGE,
ID_BASEATTACKUP_ORANGE,
ID_BASEHITDOWN_WHITE,
ID_BASEHITUP_WHITE,
ID_BASEHITDOWN_GREEN,
ID_BASEHITUP_GREEN,
ID_BASEHITDOWN_BLUE,
ID_BASEHITUP_BLUE,
ID_BASEHITDOWN_PURPLE,
ID_BASEHITUP_PURPLE,
ID_BASEHITDOWN_ORANGE,
ID_BASEHITUP_ORANGE,
ID_BASECRITICALDOWN_WHITE,
ID_BASECRITICALUP_WHITE,
ID_BASECRITICALDOWN_GREEN,
ID_BASECRITICALUP_GREEN,
ID_BASECRITICALDOWN_BLUE,
ID_BASECRITICALUP_BLUE,
ID_BASECRITICALDOWN_PURPLE,
ID_BASECRITICALUP_PURPLE,
ID_BASECRITICALDOWN_ORANGE,
ID_BASECRITICALUP_ORANGE,
ID_BASEGUARDDOWN_WHITE,
ID_BASEGUARDUP_WHITE,
ID_BASEGUARDDOWN_GREEN,
ID_BASEGUARDUP_GREEN,
ID_BASEGUARDDOWN_BLUE,
ID_BASEGUARDUP_BLUE,
ID_BASEGUARDDOWN_PURPLE,
ID_BASEGUARDUP_PURPLE,
ID_BASEGUARDDOWN_ORANGE,
ID_BASEGUARDUP_ORANGE,
ID_BASEBLESSDOWN_WHITE,
ID_BASEBLESSUP_WHITE,
ID_BASEBLESSDOWN_GREEN,
ID_BASEBLESSUP_GREEN,
ID_BASEBLESSDOWN_BLUE,
ID_BASEBLESSUP_BLUE,
ID_BASEBLESSDOWN_PURPLE,
ID_BASEBLESSUP_PURPLE,
ID_BASEBLESSDOWN_ORANGE,
ID_BASEBLESSUP_ORANGE,
ID_LEVELADDATTACK,
ID_LEVELADDHIT,
ID_LEVELADDCRITICAL,
ID_LEVELADDGUARD,
ID_LEVELADDBLESS,
ID_ATTACHATTACKOFFSET,
ID_ATTACHHITOFFSET,
ID_ATTACHCRITICALOFFSET,
ID_ATTACHGUARDOFFSET,
ID_ATTACHBLESSOFFSET,
ID_ATTACHATTACKRATIO,
ID_ATTACHHITRATIO,
ID_ATTACHCRITICALRATIO,
ID_ATTACHGUARDRATIO,
ID_ATTACHBLESSRATIO,
ID_STAREXP_WHITE,
ID_STAREXP_GREEN,
ID_STAREXP_BLUE,
ID_STAREXP_PURPLE,
ID_STAREXP_ORANGE,
ID_TALLENTSKILLCOUNT,
ID_TALLENTSKILL1,
ID_TALLENTSKILL2,
ID_TALLENTSKILL3,
ID_TALLENTSKILL4,
ID_TALLENTSKILL5,
ID_VALIBLE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AttachAttackOffset;
 public int AttachAttackOffset { get{ return m_AttachAttackOffset;}}

private int m_AttachAttackRatio;
 public int AttachAttackRatio { get{ return m_AttachAttackRatio;}}

private int m_AttachBlessOffset;
 public int AttachBlessOffset { get{ return m_AttachBlessOffset;}}

private int m_AttachBlessRatio;
 public int AttachBlessRatio { get{ return m_AttachBlessRatio;}}

private int m_AttachCriticalOffset;
 public int AttachCriticalOffset { get{ return m_AttachCriticalOffset;}}

private int m_AttachCriticalRatio;
 public int AttachCriticalRatio { get{ return m_AttachCriticalRatio;}}

private int m_AttachGuardOffset;
 public int AttachGuardOffset { get{ return m_AttachGuardOffset;}}

private int m_AttachGuardRatio;
 public int AttachGuardRatio { get{ return m_AttachGuardRatio;}}

private int m_AttachHitOffset;
 public int AttachHitOffset { get{ return m_AttachHitOffset;}}

private int m_AttachHitRatio;
 public int AttachHitRatio { get{ return m_AttachHitRatio;}}

private int m_AttackType;
 public int AttackType { get{ return m_AttackType;}}

private int m_BabyFellowId;
 public int BabyFellowId { get{ return m_BabyFellowId;}}

private int m_BaseAttackDownBlue;
 public int BaseAttackDownBlue { get{ return m_BaseAttackDownBlue;}}

private int m_BaseAttackDownGreen;
 public int BaseAttackDownGreen { get{ return m_BaseAttackDownGreen;}}

private int m_BaseAttackDownOrange;
 public int BaseAttackDownOrange { get{ return m_BaseAttackDownOrange;}}

private int m_BaseAttackDownPurple;
 public int BaseAttackDownPurple { get{ return m_BaseAttackDownPurple;}}

private int m_BaseAttackDownWhite;
 public int BaseAttackDownWhite { get{ return m_BaseAttackDownWhite;}}

private int m_BaseAttackUpBlue;
 public int BaseAttackUpBlue { get{ return m_BaseAttackUpBlue;}}

private int m_BaseAttackUpGreen;
 public int BaseAttackUpGreen { get{ return m_BaseAttackUpGreen;}}

private int m_BaseAttackUpOrange;
 public int BaseAttackUpOrange { get{ return m_BaseAttackUpOrange;}}

private int m_BaseAttackUpPurple;
 public int BaseAttackUpPurple { get{ return m_BaseAttackUpPurple;}}

private int m_BaseAttackUpWhite;
 public int BaseAttackUpWhite { get{ return m_BaseAttackUpWhite;}}

private int m_BaseBlessDownBlue;
 public int BaseBlessDownBlue { get{ return m_BaseBlessDownBlue;}}

private int m_BaseBlessDownGreen;
 public int BaseBlessDownGreen { get{ return m_BaseBlessDownGreen;}}

private int m_BaseBlessDownOrange;
 public int BaseBlessDownOrange { get{ return m_BaseBlessDownOrange;}}

private int m_BaseBlessDownPurple;
 public int BaseBlessDownPurple { get{ return m_BaseBlessDownPurple;}}

private int m_BaseBlessDownWhite;
 public int BaseBlessDownWhite { get{ return m_BaseBlessDownWhite;}}

private int m_BaseBlessUpBlue;
 public int BaseBlessUpBlue { get{ return m_BaseBlessUpBlue;}}

private int m_BaseBlessUpGreen;
 public int BaseBlessUpGreen { get{ return m_BaseBlessUpGreen;}}

private int m_BaseBlessUpOrange;
 public int BaseBlessUpOrange { get{ return m_BaseBlessUpOrange;}}

private int m_BaseBlessUpPurple;
 public int BaseBlessUpPurple { get{ return m_BaseBlessUpPurple;}}

private int m_BaseBlessUpWhite;
 public int BaseBlessUpWhite { get{ return m_BaseBlessUpWhite;}}

private int m_BaseCriticalDownBlue;
 public int BaseCriticalDownBlue { get{ return m_BaseCriticalDownBlue;}}

private int m_BaseCriticalDownGreen;
 public int BaseCriticalDownGreen { get{ return m_BaseCriticalDownGreen;}}

private int m_BaseCriticalDownOrange;
 public int BaseCriticalDownOrange { get{ return m_BaseCriticalDownOrange;}}

private int m_BaseCriticalDownPurple;
 public int BaseCriticalDownPurple { get{ return m_BaseCriticalDownPurple;}}

private int m_BaseCriticalDownWhite;
 public int BaseCriticalDownWhite { get{ return m_BaseCriticalDownWhite;}}

private int m_BaseCriticalUpBlue;
 public int BaseCriticalUpBlue { get{ return m_BaseCriticalUpBlue;}}

private int m_BaseCriticalUpGreen;
 public int BaseCriticalUpGreen { get{ return m_BaseCriticalUpGreen;}}

private int m_BaseCriticalUpOrange;
 public int BaseCriticalUpOrange { get{ return m_BaseCriticalUpOrange;}}

private int m_BaseCriticalUpPurple;
 public int BaseCriticalUpPurple { get{ return m_BaseCriticalUpPurple;}}

private int m_BaseCriticalUpWhite;
 public int BaseCriticalUpWhite { get{ return m_BaseCriticalUpWhite;}}

private int m_BaseGuardDownBlue;
 public int BaseGuardDownBlue { get{ return m_BaseGuardDownBlue;}}

private int m_BaseGuardDownGreen;
 public int BaseGuardDownGreen { get{ return m_BaseGuardDownGreen;}}

private int m_BaseGuardDownOrange;
 public int BaseGuardDownOrange { get{ return m_BaseGuardDownOrange;}}

private int m_BaseGuardDownPurple;
 public int BaseGuardDownPurple { get{ return m_BaseGuardDownPurple;}}

private int m_BaseGuardDownWhite;
 public int BaseGuardDownWhite { get{ return m_BaseGuardDownWhite;}}

private int m_BaseGuardUpBlue;
 public int BaseGuardUpBlue { get{ return m_BaseGuardUpBlue;}}

private int m_BaseGuardUpGreen;
 public int BaseGuardUpGreen { get{ return m_BaseGuardUpGreen;}}

private int m_BaseGuardUpOrange;
 public int BaseGuardUpOrange { get{ return m_BaseGuardUpOrange;}}

private int m_BaseGuardUpPurple;
 public int BaseGuardUpPurple { get{ return m_BaseGuardUpPurple;}}

private int m_BaseGuardUpWhite;
 public int BaseGuardUpWhite { get{ return m_BaseGuardUpWhite;}}

private int m_BaseHitDownBlue;
 public int BaseHitDownBlue { get{ return m_BaseHitDownBlue;}}

private int m_BaseHitDownGreen;
 public int BaseHitDownGreen { get{ return m_BaseHitDownGreen;}}

private int m_BaseHitDownOrange;
 public int BaseHitDownOrange { get{ return m_BaseHitDownOrange;}}

private int m_BaseHitDownPurple;
 public int BaseHitDownPurple { get{ return m_BaseHitDownPurple;}}

private int m_BaseHitDownWhite;
 public int BaseHitDownWhite { get{ return m_BaseHitDownWhite;}}

private int m_BaseHitUpBlue;
 public int BaseHitUpBlue { get{ return m_BaseHitUpBlue;}}

private int m_BaseHitUpGreen;
 public int BaseHitUpGreen { get{ return m_BaseHitUpGreen;}}

private int m_BaseHitUpOrange;
 public int BaseHitUpOrange { get{ return m_BaseHitUpOrange;}}

private int m_BaseHitUpPurple;
 public int BaseHitUpPurple { get{ return m_BaseHitUpPurple;}}

private int m_BaseHitUpWhite;
 public int BaseHitUpWhite { get{ return m_BaseHitUpWhite;}}

private int m_BuyUseMoney;
 public int BuyUseMoney { get{ return m_BuyUseMoney;}}

private int m_CallLevel;
 public int CallLevel { get{ return m_CallLevel;}}

private int m_ClassId;
 public int ClassId { get{ return m_ClassId;}}

private int m_ElementAttr;
 public int ElementAttr { get{ return m_ElementAttr;}}

private int m_EvolveLevel;
 public int EvolveLevel { get{ return m_EvolveLevel;}}

private int m_FakeObjId;
 public int FakeObjId { get{ return m_FakeObjId;}}

private int m_FellowType;
 public int FellowType { get{ return m_FellowType;}}

private int m_FirstSkillId;
 public int FirstSkillId { get{ return m_FirstSkillId;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_LevelAddAttack;
 public int LevelAddAttack { get{ return m_LevelAddAttack;}}

private int m_LevelAddBless;
 public int LevelAddBless { get{ return m_LevelAddBless;}}

private int m_LevelAddCritical;
 public int LevelAddCritical { get{ return m_LevelAddCritical;}}

private int m_LevelAddGuard;
 public int LevelAddGuard { get{ return m_LevelAddGuard;}}

private int m_LevelAddHit;
 public int LevelAddHit { get{ return m_LevelAddHit;}}

private int m_ModelId;
 public int ModelId { get{ return m_ModelId;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_StarExpBlue;
 public int StarExpBlue { get{ return m_StarExpBlue;}}

private int m_StarExpGreen;
 public int StarExpGreen { get{ return m_StarExpGreen;}}

private int m_StarExpOrange;
 public int StarExpOrange { get{ return m_StarExpOrange;}}

private int m_StarExpPurple;
 public int StarExpPurple { get{ return m_StarExpPurple;}}

private int m_StarExpWhite;
 public int StarExpWhite { get{ return m_StarExpWhite;}}

public int getTallentSkillCount() { return 5; } 
 private int[] m_TallentSkill = new int[5];
 public int GetTallentSkillbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_TallentSkill[idx];
 return -1;
 }

private int m_TallentSkillCount;
 public int TallentSkillCount { get{ return m_TallentSkillCount;}}

private int m_Valible;
 public int Valible { get{ return m_Valible;}}

public static bool LoadTable(Dictionary<int, List<object> > _tab)
 {
 if(!TableManager.ReaderPList(GetInstanceFile(),SerializableTable,_tab))
 {
 throw TableException.ErrorReader("Load File{0} Fail!!!",GetInstanceFile());
 }
 return true;
 }
 public static void SerializableTable(string[] valuesList,int skey,Dictionary<int, List<object> > _hash)
 {
 if ((int)_ID.MAX_RECORD!=valuesList.Length)
 {
 throw TableException.ErrorReader("Load {0} error as CodeSize:{1} not Equal DataSize:{2}", GetInstanceFile(),_ID.MAX_RECORD,valuesList.Length);
 }
 Tab_CabalFellowAttr _values = new Tab_CabalFellowAttr();
 _values.m_AttachAttackOffset =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTACKOFFSET] as string);
_values.m_AttachAttackRatio =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHATTACKRATIO] as string);
_values.m_AttachBlessOffset =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHBLESSOFFSET] as string);
_values.m_AttachBlessRatio =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHBLESSRATIO] as string);
_values.m_AttachCriticalOffset =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHCRITICALOFFSET] as string);
_values.m_AttachCriticalRatio =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHCRITICALRATIO] as string);
_values.m_AttachGuardOffset =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHGUARDOFFSET] as string);
_values.m_AttachGuardRatio =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHGUARDRATIO] as string);
_values.m_AttachHitOffset =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHHITOFFSET] as string);
_values.m_AttachHitRatio =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACHHITRATIO] as string);
_values.m_AttackType =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACKTYPE] as string);
_values.m_BabyFellowId =  Convert.ToInt32(valuesList[(int)_ID.ID_BABYFELLOWID] as string);
_values.m_BaseAttackDownBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKDOWN_BLUE] as string);
_values.m_BaseAttackDownGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKDOWN_GREEN] as string);
_values.m_BaseAttackDownOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKDOWN_ORANGE] as string);
_values.m_BaseAttackDownPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKDOWN_PURPLE] as string);
_values.m_BaseAttackDownWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKDOWN_WHITE] as string);
_values.m_BaseAttackUpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKUP_BLUE] as string);
_values.m_BaseAttackUpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKUP_GREEN] as string);
_values.m_BaseAttackUpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKUP_ORANGE] as string);
_values.m_BaseAttackUpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKUP_PURPLE] as string);
_values.m_BaseAttackUpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEATTACKUP_WHITE] as string);
_values.m_BaseBlessDownBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSDOWN_BLUE] as string);
_values.m_BaseBlessDownGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSDOWN_GREEN] as string);
_values.m_BaseBlessDownOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSDOWN_ORANGE] as string);
_values.m_BaseBlessDownPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSDOWN_PURPLE] as string);
_values.m_BaseBlessDownWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSDOWN_WHITE] as string);
_values.m_BaseBlessUpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSUP_BLUE] as string);
_values.m_BaseBlessUpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSUP_GREEN] as string);
_values.m_BaseBlessUpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSUP_ORANGE] as string);
_values.m_BaseBlessUpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSUP_PURPLE] as string);
_values.m_BaseBlessUpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEBLESSUP_WHITE] as string);
_values.m_BaseCriticalDownBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALDOWN_BLUE] as string);
_values.m_BaseCriticalDownGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALDOWN_GREEN] as string);
_values.m_BaseCriticalDownOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALDOWN_ORANGE] as string);
_values.m_BaseCriticalDownPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALDOWN_PURPLE] as string);
_values.m_BaseCriticalDownWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALDOWN_WHITE] as string);
_values.m_BaseCriticalUpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALUP_BLUE] as string);
_values.m_BaseCriticalUpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALUP_GREEN] as string);
_values.m_BaseCriticalUpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALUP_ORANGE] as string);
_values.m_BaseCriticalUpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALUP_PURPLE] as string);
_values.m_BaseCriticalUpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECRITICALUP_WHITE] as string);
_values.m_BaseGuardDownBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDDOWN_BLUE] as string);
_values.m_BaseGuardDownGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDDOWN_GREEN] as string);
_values.m_BaseGuardDownOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDDOWN_ORANGE] as string);
_values.m_BaseGuardDownPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDDOWN_PURPLE] as string);
_values.m_BaseGuardDownWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDDOWN_WHITE] as string);
_values.m_BaseGuardUpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDUP_BLUE] as string);
_values.m_BaseGuardUpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDUP_GREEN] as string);
_values.m_BaseGuardUpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDUP_ORANGE] as string);
_values.m_BaseGuardUpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDUP_PURPLE] as string);
_values.m_BaseGuardUpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEGUARDUP_WHITE] as string);
_values.m_BaseHitDownBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITDOWN_BLUE] as string);
_values.m_BaseHitDownGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITDOWN_GREEN] as string);
_values.m_BaseHitDownOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITDOWN_ORANGE] as string);
_values.m_BaseHitDownPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITDOWN_PURPLE] as string);
_values.m_BaseHitDownWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITDOWN_WHITE] as string);
_values.m_BaseHitUpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITUP_BLUE] as string);
_values.m_BaseHitUpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITUP_GREEN] as string);
_values.m_BaseHitUpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITUP_ORANGE] as string);
_values.m_BaseHitUpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITUP_PURPLE] as string);
_values.m_BaseHitUpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_BASEHITUP_WHITE] as string);
_values.m_BuyUseMoney =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYUSEMONEY] as string);
_values.m_CallLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_CALLLEVEL] as string);
_values.m_ClassId =  Convert.ToInt32(valuesList[(int)_ID.ID_CLASSID] as string);
_values.m_ElementAttr =  Convert.ToInt32(valuesList[(int)_ID.ID_ELEMENTATTR] as string);
_values.m_EvolveLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_EVOLVELEVEL] as string);
_values.m_FakeObjId =  Convert.ToInt32(valuesList[(int)_ID.ID_FAKEOBJID] as string);
_values.m_FellowType =  Convert.ToInt32(valuesList[(int)_ID.ID_FELLOWTYPE] as string);
_values.m_FirstSkillId =  Convert.ToInt32(valuesList[(int)_ID.ID_FIRSTSKILLID] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LevelAddAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELADDATTACK] as string);
_values.m_LevelAddBless =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELADDBLESS] as string);
_values.m_LevelAddCritical =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELADDCRITICAL] as string);
_values.m_LevelAddGuard =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELADDGUARD] as string);
_values.m_LevelAddHit =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELADDHIT] as string);
_values.m_ModelId =  Convert.ToInt32(valuesList[(int)_ID.ID_MODELID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_StarExpBlue =  Convert.ToInt32(valuesList[(int)_ID.ID_STAREXP_BLUE] as string);
_values.m_StarExpGreen =  Convert.ToInt32(valuesList[(int)_ID.ID_STAREXP_GREEN] as string);
_values.m_StarExpOrange =  Convert.ToInt32(valuesList[(int)_ID.ID_STAREXP_ORANGE] as string);
_values.m_StarExpPurple =  Convert.ToInt32(valuesList[(int)_ID.ID_STAREXP_PURPLE] as string);
_values.m_StarExpWhite =  Convert.ToInt32(valuesList[(int)_ID.ID_STAREXP_WHITE] as string);
_values.m_TallentSkill [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILL1] as string);
_values.m_TallentSkill [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILL2] as string);
_values.m_TallentSkill [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILL3] as string);
_values.m_TallentSkill [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILL4] as string);
_values.m_TallentSkill [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILL5] as string);
_values.m_TallentSkillCount =  Convert.ToInt32(valuesList[(int)_ID.ID_TALLENTSKILLCOUNT] as string);
_values.m_Valible =  Convert.ToInt32(valuesList[(int)_ID.ID_VALIBLE] as string);

 if (_hash.ContainsKey(skey))
 {
 List< object> tList =_hash[skey];
 tList.Add(_values);
 }
 else
 {
 List<object> tList = new List<object>();
 tList.Add(_values); 
 _hash.Add(skey, (List<object>)tList);
 }
 }


}
}

