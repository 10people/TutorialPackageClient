//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SkillBase
{ private const string TAB_FILE_DATA = "Tables/SkillBase.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ISSHOWSKILLNAME,
ID_ISAUTOSELECTTAR,
ID_ISMOVETOTARINAUTOCOMBAT,
ID_ICON ,
ID_PROFESSIONID,
ID_ISNEEDWEAPON,
ID_PRIORITYAUTOFIGHT,
ID_SKILLCLASS,
ID_USETYPE,
ID_ISMOVE,
ID_ISMOVEBREAK,
ID_ISSKILLBREAK,
ID_ISBREAKBEATTACKED,
ID_TARGETTYPE,
ID_SELLOGIC,
ID_PLAYATTACKSOUND,
ID_ISNEEDSTOPEFFECTID1,
ID_ISNEEDSTOPEFFECTID2,
ID_NEXTINDEX,
ID_CHANGEMODE0,
ID_CHANGEMODE1,
ID_CHANGEMODE2,
ID_CHANGEMODE3,
ID_FIRSTINDEX,
ID_HASPUBLICCD,
ID_LEVELUPINDEX,
ID_SKILLINTRO,
ID_XPSKILLINDEX,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getChangeModeCount() { return 4; } 
 private int[] m_ChangeMode = new int[4];
 public int GetChangeModebyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ChangeMode[idx];
 return -1;
 }

private int m_FirstIndex;
 public int FirstIndex { get{ return m_FirstIndex;}}

private int m_HasPublicCd;
 public int HasPublicCd { get{ return m_HasPublicCd;}}

private string m_Icon ;
 public string Icon  { get{ return m_Icon ;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsAutoSelectTar;
 public int IsAutoSelectTar { get{ return m_IsAutoSelectTar;}}

private int m_IsBreakBeAttacked;
 public int IsBreakBeAttacked { get{ return m_IsBreakBeAttacked;}}

private int m_IsMove;
 public int IsMove { get{ return m_IsMove;}}

private int m_IsMoveBreak;
 public int IsMoveBreak { get{ return m_IsMoveBreak;}}

private int m_IsMoveToTarInAutoCombat;
 public int IsMoveToTarInAutoCombat { get{ return m_IsMoveToTarInAutoCombat;}}

public int getIsNeedStopEffectIdCount() { return 2; } 
 private int[] m_IsNeedStopEffectId = new int[2];
 public int GetIsNeedStopEffectIdbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_IsNeedStopEffectId[idx];
 return -1;
 }

private int m_IsNeedWeapon;
 public int IsNeedWeapon { get{ return m_IsNeedWeapon;}}

private int m_IsShowSkillName;
 public int IsShowSkillName { get{ return m_IsShowSkillName;}}

private int m_IsSkillBreak;
 public int IsSkillBreak { get{ return m_IsSkillBreak;}}

private int m_LevelUpIndex;
 public int LevelUpIndex { get{ return m_LevelUpIndex;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_NextIndex;
 public int NextIndex { get{ return m_NextIndex;}}

private int m_PlayAttackSound;
 public int PlayAttackSound { get{ return m_PlayAttackSound;}}

private int m_PriorityAutoFight;
 public int PriorityAutoFight { get{ return m_PriorityAutoFight;}}

private int m_ProfessionId;
 public int ProfessionId { get{ return m_ProfessionId;}}

private int m_SelLogic;
 public int SelLogic { get{ return m_SelLogic;}}

private int m_SkillClass;
 public int SkillClass { get{ return m_SkillClass;}}

private string m_SkillIntro;
 public string SkillIntro { get{ return m_SkillIntro;}}

private int m_TargetType;
 public int TargetType { get{ return m_TargetType;}}

private int m_UseType;
 public int UseType { get{ return m_UseType;}}

private int m_XpSkillIndex;
 public int XpSkillIndex { get{ return m_XpSkillIndex;}}

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
 Tab_SkillBase _values = new Tab_SkillBase();
 _values.m_ChangeMode [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODE0] as string);
_values.m_ChangeMode [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODE1] as string);
_values.m_ChangeMode [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODE2] as string);
_values.m_ChangeMode [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_CHANGEMODE3] as string);
_values.m_FirstIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_FIRSTINDEX] as string);
_values.m_HasPublicCd =  Convert.ToInt32(valuesList[(int)_ID.ID_HASPUBLICCD] as string);
_values.m_Icon  =  valuesList[(int)_ID.ID_ICON ] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsAutoSelectTar =  Convert.ToInt32(valuesList[(int)_ID.ID_ISAUTOSELECTTAR] as string);
_values.m_IsBreakBeAttacked =  Convert.ToInt32(valuesList[(int)_ID.ID_ISBREAKBEATTACKED] as string);
_values.m_IsMove =  Convert.ToInt32(valuesList[(int)_ID.ID_ISMOVE] as string);
_values.m_IsMoveBreak =  Convert.ToInt32(valuesList[(int)_ID.ID_ISMOVEBREAK] as string);
_values.m_IsMoveToTarInAutoCombat =  Convert.ToInt32(valuesList[(int)_ID.ID_ISMOVETOTARINAUTOCOMBAT] as string);
_values.m_IsNeedStopEffectId [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISNEEDSTOPEFFECTID1] as string);
_values.m_IsNeedStopEffectId [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ISNEEDSTOPEFFECTID2] as string);
_values.m_IsNeedWeapon =  Convert.ToInt32(valuesList[(int)_ID.ID_ISNEEDWEAPON] as string);
_values.m_IsShowSkillName =  Convert.ToInt32(valuesList[(int)_ID.ID_ISSHOWSKILLNAME] as string);
_values.m_IsSkillBreak =  Convert.ToInt32(valuesList[(int)_ID.ID_ISSKILLBREAK] as string);
_values.m_LevelUpIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPINDEX] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_NextIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_NEXTINDEX] as string);
_values.m_PlayAttackSound =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYATTACKSOUND] as string);
_values.m_PriorityAutoFight =  Convert.ToInt32(valuesList[(int)_ID.ID_PRIORITYAUTOFIGHT] as string);
_values.m_ProfessionId =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONID] as string);
_values.m_SelLogic =  Convert.ToInt32(valuesList[(int)_ID.ID_SELLOGIC] as string);
_values.m_SkillClass =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLCLASS] as string);
_values.m_SkillIntro =  valuesList[(int)_ID.ID_SKILLINTRO] as string;
_values.m_TargetType =  Convert.ToInt32(valuesList[(int)_ID.ID_TARGETTYPE] as string);
_values.m_UseType =  Convert.ToInt32(valuesList[(int)_ID.ID_USETYPE] as string);
_values.m_XpSkillIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_XPSKILLINDEX] as string);

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

