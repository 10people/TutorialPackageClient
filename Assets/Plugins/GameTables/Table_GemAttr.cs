//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GemAttr
{ private const string TAB_FILE_DATA = "Tables/GemAttr.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_LEVEL,
ID_BASECLASS,
ID_ATTRCLASS,
ID_MAXHP,
ID_MAXMP,
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
ID_EFFECTID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_AttrClass;
 public int AttrClass { get{ return m_AttrClass;}}

private int m_BaseClass;
 public int BaseClass { get{ return m_BaseClass;}}

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

private int m_EffectID;
 public int EffectID { get{ return m_EffectID;}}

private int m_Hit;
 public int Hit { get{ return m_Hit;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_MagAttack;
 public int MagAttack { get{ return m_MagAttack;}}

private int m_MagDef;
 public int MagDef { get{ return m_MagDef;}}

private int m_MaxHP;
 public int MaxHP { get{ return m_MaxHP;}}

private int m_MaxMP;
 public int MaxMP { get{ return m_MaxMP;}}

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
 Tab_GemAttr _values = new Tab_GemAttr();
 _values.m_AttrClass =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRCLASS] as string);
_values.m_BaseClass =  Convert.ToInt32(valuesList[(int)_ID.ID_BASECLASS] as string);
_values.m_CritiAdd =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIADD] as string);
_values.m_CritiMis =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITIMIS] as string);
_values.m_Critical =  Convert.ToInt32(valuesList[(int)_ID.ID_CRITICAL] as string);
_values.m_Decritical =  Convert.ToInt32(valuesList[(int)_ID.ID_DECRITICAL] as string);
_values.m_Dodge =  Convert.ToInt32(valuesList[(int)_ID.ID_DODGE] as string);
_values.m_Ductical =  Convert.ToInt32(valuesList[(int)_ID.ID_DUCTICAL] as string);
_values.m_EffectID =  Convert.ToInt32(valuesList[(int)_ID.ID_EFFECTID] as string);
_values.m_Hit =  Convert.ToInt32(valuesList[(int)_ID.ID_HIT] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MagAttack =  Convert.ToInt32(valuesList[(int)_ID.ID_MAGATTACK] as string);
_values.m_MagDef =  Convert.ToInt32(valuesList[(int)_ID.ID_MAGDEF] as string);
_values.m_MaxHP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXHP] as string);
_values.m_MaxMP =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXMP] as string);
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

