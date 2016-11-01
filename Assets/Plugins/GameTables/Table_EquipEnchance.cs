//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EquipEnchance
{ private const string TAB_FILE_DATA = "Tables/EquipEnchance.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_LEVEL,
ID_WHITEEXP=2,
ID_GREENEXP,
ID_BLUEEXP,
ID_PURPLEEXP,
ID_ORANGEEXP,
ID_REDEXP,
ID_GOLDEXP,
ID_ENCHANCERATE,
ID_HITRATE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BlueExp;
 public int BlueExp { get{ return m_BlueExp;}}

private float m_EnchanceRate;
 public float EnchanceRate { get{ return m_EnchanceRate;}}

private int m_GoldExp;
 public int GoldExp { get{ return m_GoldExp;}}

private int m_GreenExp;
 public int GreenExp { get{ return m_GreenExp;}}

private float m_HitRate;
 public float HitRate { get{ return m_HitRate;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_OrangeExp;
 public int OrangeExp { get{ return m_OrangeExp;}}

private int m_PurpleExp;
 public int PurpleExp { get{ return m_PurpleExp;}}

private int m_RedExp;
 public int RedExp { get{ return m_RedExp;}}

private int m_WhiteExp;
 public int WhiteExp { get{ return m_WhiteExp;}}

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
 Tab_EquipEnchance _values = new Tab_EquipEnchance();
 _values.m_BlueExp =  Convert.ToInt32(valuesList[(int)_ID.ID_BLUEEXP] as string);
_values.m_EnchanceRate =  Convert.ToSingle(valuesList[(int)_ID.ID_ENCHANCERATE] as string );
_values.m_GoldExp =  Convert.ToInt32(valuesList[(int)_ID.ID_GOLDEXP] as string);
_values.m_GreenExp =  Convert.ToInt32(valuesList[(int)_ID.ID_GREENEXP] as string);
_values.m_HitRate =  Convert.ToSingle(valuesList[(int)_ID.ID_HITRATE] as string );
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_OrangeExp =  Convert.ToInt32(valuesList[(int)_ID.ID_ORANGEEXP] as string);
_values.m_PurpleExp =  Convert.ToInt32(valuesList[(int)_ID.ID_PURPLEEXP] as string);
_values.m_RedExp =  Convert.ToInt32(valuesList[(int)_ID.ID_REDEXP] as string);
_values.m_WhiteExp =  Convert.ToInt32(valuesList[(int)_ID.ID_WHITEEXP] as string);

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

