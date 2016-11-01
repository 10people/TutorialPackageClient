//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_RoleBaseAttr
{ private const string TAB_FILE_DATA = "Tables/RoleBaseAttr.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_CHARMODELID=2,
ID_NAME,
ID_SEX,
ID_NPCTYPE,
ID_LEVEL,
ID_ATTACKTYPE,
ID_ATTACKDISTYPE,
ID_SKILLSTRATEGYINDEX,
ID_MAXHP,
ID_MAXMP,
ID_MAXXP,
ID_PDEFENSE,
ID_PATTACK,
ID_MDEFENSE,
ID_MATTACK,
ID_HIT,
ID_DODGE,
ID_CRITICAL,
ID_DECRITICAL,
ID_STRIKE,
ID_DUCTICAL,
ID_CRITIADD,
ID_CRITIMIS,
ID_ATTACKTIME,
ID_MOVESPEED,
ID_CAMP,
ID_PATHRADIUS,
ID_ALERTRADIUS,
ID_ISRANBDMOVE,
ID_RANDMOVEDIS,
ID_CORPSETIME,
ID_REVIVETIME,
ID_DIALOGID,
ID_DIALOGRADIUS,
ID_DROPITEMID,
ID_EXP,
ID_ISATTACKFLY,
ID_BORNEFFCTID,
ID_DIEEFFECTID,
ID_RAMPTYPE,
ID_ENHANCEID,
ID_BELONGTYPE,
ID_ISIMMUNEJT,
ID_COMBATNPC,
ID_MISSIONNPCFLAG,
ID_HPCOUNT,
ID_SHOWBORNEFFECT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AlertRadius;
 public float AlertRadius { get{ return m_AlertRadius;}}

private int m_AttackDisType;
 public int AttackDisType { get{ return m_AttackDisType;}}

private int m_AttackTime;
 public int AttackTime { get{ return m_AttackTime;}}

private int m_AttackType;
 public int AttackType { get{ return m_AttackType;}}

private int m_BelongType;
 public int BelongType { get{ return m_BelongType;}}

private int m_BornEffctID;
 public int BornEffctID { get{ return m_BornEffctID;}}

private int m_Camp;
 public int Camp { get{ return m_Camp;}}

private int m_CharModelID;
 public int CharModelID { get{ return m_CharModelID;}}

private int m_CombatNPC;
 public int CombatNPC { get{ return m_CombatNPC;}}

private int m_CorpseTime;
 public int CorpseTime { get{ return m_CorpseTime;}}

private int m_CritiAdd;
 public int CritiAdd { get{ return m_CritiAdd;}}

private int m_CritiMis;
 public int CritiMis { get{ return m_CritiMis;}}

private int m_Critical;
 public int Critical { get{ return m_Critical;}}

private int m_DeCritical;
 public int DeCritical { get{ return m_DeCritical;}}

private int m_DialogID;
 public int DialogID { get{ return m_DialogID;}}

private float m_DialogRadius;
 public float DialogRadius { get{ return m_DialogRadius;}}

private int m_DieEffectID;
 public int DieEffectID { get{ return m_DieEffectID;}}

private int m_Dodge;
 public int Dodge { get{ return m_Dodge;}}

private int m_DropItemId;
 public int DropItemId { get{ return m_DropItemId;}}

private int m_Ductical;
 public int Ductical { get{ return m_Ductical;}}

private int m_EnhanceID;
 public int EnhanceID { get{ return m_EnhanceID;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_Hit;
 public int Hit { get{ return m_Hit;}}

private int m_HpCount;
 public int HpCount { get{ return m_HpCount;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsAttackFly;
 public int IsAttackFly { get{ return m_IsAttackFly;}}

private int m_IsImmuneJT;
 public int IsImmuneJT { get{ return m_IsImmuneJT;}}

private int m_IsRanbdMove;
 public int IsRanbdMove { get{ return m_IsRanbdMove;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_MAttack;
 public int MAttack { get{ return m_MAttack;}}

private int m_MDefense;
 public int MDefense { get{ return m_MDefense;}}

private int m_MaxHP;
 public int MaxHP { get{ return m_MaxHP;}}

private int m_MaxMP;
 public int MaxMP { get{ return m_MaxMP;}}

private int m_MaxXP;
 public int MaxXP { get{ return m_MaxXP;}}

private int m_MissionNpcFlag;
 public int MissionNpcFlag { get{ return m_MissionNpcFlag;}}

private int m_MoveSpeed;
 public int MoveSpeed { get{ return m_MoveSpeed;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_NpcType;
 public int NpcType { get{ return m_NpcType;}}

private int m_PAttack;
 public int PAttack { get{ return m_PAttack;}}

private int m_PDefense;
 public int PDefense { get{ return m_PDefense;}}

private float m_PathRadius;
 public float PathRadius { get{ return m_PathRadius;}}

private int m_RampType;
 public int RampType { get{ return m_RampType;}}

private float m_RandMoveDis;
 public float RandMoveDis { get{ return m_RandMoveDis;}}

private int m_ReviveTime;
 public int ReviveTime { get{ return m_ReviveTime;}}

private int m_Sex;
 public int Sex { get{ return m_Sex;}}

private int m_ShowBornEffect;
 public int ShowBornEffect { get{ return m_ShowBornEffect;}}

private int m_SkillstrategyIndex;
 public int SkillstrategyIndex { get{ return m_SkillstrategyIndex;}}

private int m_Strike;
 public int Strike { get{ return m_Strike;}}

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
 Tab_RoleBaseAttr _values = new Tab_RoleBaseAttr();
 _values.m_AlertRadius =  Convert.ToSingle(valuesList[(int)_ID.ID_ALERTRADIUS] as string );
_values.m_AttackDisType =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACKDISTYPE] as string);
_values.m_AttackTime =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACKTIME] as string);
_values.m_AttackType =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACKTYPE] as string);
_values.m_BelongType =  Convert.ToInt32(valuesList[(int)_ID.ID_BELONGTYPE] as string);
_values.m_BornEffctID =  Convert.ToInt32(valuesList[(int)_ID.ID_BORNEFFCTID] as string);
_values.m_Camp =  Convert.ToInt32(valuesList[(int)_ID.ID_CAMP] as string);
_values.m_CharModelID =  Convert.ToInt32(valuesList[(int)_ID.ID_CHARMODELID] as string);
_values.m_CombatNPC =  Convert.ToInt32(valuesList[(int)_ID.ID_COMBATNPC] as string);
_values.m_CorpseTime =  Convert.ToInt32(valuesList[(int)_ID.ID_CORPSETIME] as string);
_values.m_CritiAdd =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIADD] as string);
_values.m_CritiMis =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIMIS] as string);
_values.m_Critical =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITICAL] as string);
_values.m_DeCritical =  Convert.ToInt32(valuesList[(int)_ID.ID_DECRITICAL] as string);
_values.m_DialogID =  Convert.ToInt32(valuesList[(int)_ID.ID_DIALOGID] as string);
_values.m_DialogRadius =  Convert.ToSingle(valuesList[(int)_ID.ID_DIALOGRADIUS] as string );
_values.m_DieEffectID =  Convert.ToInt32(valuesList[(int)_ID.ID_DIEEFFECTID] as string);
_values.m_Dodge =  Convert.ToInt32(valuesList[(int)_ID.ID_DODGE] as string);
_values.m_DropItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_DROPITEMID] as string);
_values.m_Ductical =  Convert.ToInt32(valuesList[(int)_ID.ID_DUCTICAL] as string);
_values.m_EnhanceID =  Convert.ToInt32(valuesList[(int)_ID.ID_ENHANCEID] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_Hit =  Convert.ToInt32(valuesList[(int)_ID.ID_HIT] as string);
_values.m_HpCount =  Convert.ToInt32(valuesList[(int)_ID.ID_HPCOUNT] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsAttackFly =  Convert.ToInt32(valuesList[(int)_ID.ID_ISATTACKFLY] as string);
_values.m_IsImmuneJT =  Convert.ToInt32(valuesList[(int)_ID.ID_ISIMMUNEJT] as string);
_values.m_IsRanbdMove =  Convert.ToInt32(valuesList[(int)_ID.ID_ISRANBDMOVE] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_MATTACK] as string);
_values.m_MDefense =  Convert.ToInt32(valuesList[(int)_ID.ID_MDEFENSE] as string);
_values.m_MaxHP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXHP] as string);
_values.m_MaxMP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXMP] as string);
_values.m_MaxXP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXXP] as string);
_values.m_MissionNpcFlag =  Convert.ToInt32(valuesList[(int)_ID.ID_MISSIONNPCFLAG] as string);
_values.m_MoveSpeed =  Convert.ToInt32(valuesList[(int)_ID.ID_MOVESPEED] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_NpcType =  Convert.ToInt32(valuesList[(int)_ID.ID_NPCTYPE] as string);
_values.m_PAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_PATTACK] as string);
_values.m_PDefense =  Convert.ToInt32(valuesList[(int)_ID.ID_PDEFENSE] as string);
_values.m_PathRadius =  Convert.ToSingle(valuesList[(int)_ID.ID_PATHRADIUS] as string );
_values.m_RampType =  Convert.ToInt32(valuesList[(int)_ID.ID_RAMPTYPE] as string);
_values.m_RandMoveDis =  Convert.ToSingle(valuesList[(int)_ID.ID_RANDMOVEDIS] as string );
_values.m_ReviveTime =  Convert.ToInt32(valuesList[(int)_ID.ID_REVIVETIME] as string);
_values.m_Sex =  Convert.ToInt32(valuesList[(int)_ID.ID_SEX] as string);
_values.m_ShowBornEffect =  Convert.ToInt32(valuesList[(int)_ID.ID_SHOWBORNEFFECT] as string);
_values.m_SkillstrategyIndex =  Convert.ToInt32(valuesList[(int)_ID.ID_SKILLSTRATEGYINDEX] as string);
_values.m_Strike =  Convert.ToInt32(valuesList[(int)_ID.ID_STRIKE] as string);

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

