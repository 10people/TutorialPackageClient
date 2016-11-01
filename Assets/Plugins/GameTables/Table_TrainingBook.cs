//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_TrainingBook
{ private const string TAB_FILE_DATA = "Tables/TrainingBook.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_BRANCH,
ID_LIMITLEVEL,
ID_COST,
ID_MAXHP,
ID_MAXMP,
ID_MAXXP,
ID_PYSATTACK,
ID_MAGATTACK,
ID_PYSDEF,
ID_MAGDEF,
ID_HIT,
ID_DODGE,
ID_CRITICAL,
ID_DECRITICAL,
ID_STRIKE,
ID_DUCTICAL,
ID_CRITIADD,
ID_CRITIMIS,
ID_MOVESPEED,
ID_ATTACKSPEED,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AttackSpeed;
 public int AttackSpeed { get{ return m_AttackSpeed;}}

private int m_Branch;
 public int Branch { get{ return m_Branch;}}

private int m_Cost;
 public int Cost { get{ return m_Cost;}}

private int m_CritiAdd;
 public int CritiAdd { get{ return m_CritiAdd;}}

private int m_CritiMis;
 public int CritiMis { get{ return m_CritiMis;}}

private int m_Critical;
 public int Critical { get{ return m_Critical;}}

private int m_Decritical;
 public int Decritical { get{ return m_Decritical;}}

private int m_Dodge;
 public int Dodge { get{ return m_Dodge;}}

private int m_Ductical;
 public int Ductical { get{ return m_Ductical;}}

private int m_Hit;
 public int Hit { get{ return m_Hit;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_LimitLevel;
 public int LimitLevel { get{ return m_LimitLevel;}}

private int m_MagAttack;
 public int MagAttack { get{ return m_MagAttack;}}

private int m_MagDef;
 public int MagDef { get{ return m_MagDef;}}

private int m_MaxHP;
 public int MaxHP { get{ return m_MaxHP;}}

private int m_MaxMP;
 public int MaxMP { get{ return m_MaxMP;}}

private int m_MaxXP;
 public int MaxXP { get{ return m_MaxXP;}}

private int m_MoveSpeed;
 public int MoveSpeed { get{ return m_MoveSpeed;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_PysAttack;
 public int PysAttack { get{ return m_PysAttack;}}

private int m_PysDef;
 public int PysDef { get{ return m_PysDef;}}

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
 Tab_TrainingBook _values = new Tab_TrainingBook();
 _values.m_AttackSpeed =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTACKSPEED] as string);
_values.m_Branch =  Convert.ToInt32(valuesList[(int)_ID.ID_BRANCH] as string);
_values.m_Cost =  Convert.ToInt32(valuesList[(int)_ID.ID_COST] as string);
_values.m_CritiAdd =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIADD] as string);
_values.m_CritiMis =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIMIS] as string);
_values.m_Critical =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITICAL] as string);
_values.m_Decritical =  Convert.ToInt32(valuesList[(int)_ID.ID_DECRITICAL] as string);
_values.m_Dodge =  Convert.ToInt32(valuesList[(int)_ID.ID_DODGE] as string);
_values.m_Ductical =  Convert.ToInt32(valuesList[(int)_ID.ID_DUCTICAL] as string);
_values.m_Hit =  Convert.ToInt32(valuesList[(int)_ID.ID_HIT] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LimitLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_LIMITLEVEL] as string);
_values.m_MagAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_MAGATTACK] as string);
_values.m_MagDef =  Convert.ToInt32(valuesList[(int)_ID.ID_MAGDEF] as string);
_values.m_MaxHP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXHP] as string);
_values.m_MaxMP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXMP] as string);
_values.m_MaxXP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXXP] as string);
_values.m_MoveSpeed =  Convert.ToInt32(valuesList[(int)_ID.ID_MOVESPEED] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_PysAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_PYSATTACK] as string);
_values.m_PysDef =  Convert.ToInt32(valuesList[(int)_ID.ID_PYSDEF] as string);
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

