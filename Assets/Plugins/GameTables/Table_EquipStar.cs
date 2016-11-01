//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EquipStar
{ private const string TAB_FILE_DATA = "Tables/EquipStar.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_LEVEL,
ID_CONSUMETYPE=2,
ID_CONSUMESUBTYPE,
ID_CONSUMENUM,
ID_NEEDCOIN,
ID_ATTRRATE,
ID_SHOWRATE,
ID_MAXSATRTIMES,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AttrRate;
 public float AttrRate { get{ return m_AttrRate;}}

private int m_ConsumeNum;
 public int ConsumeNum { get{ return m_ConsumeNum;}}

private int m_ConsumeSubType;
 public int ConsumeSubType { get{ return m_ConsumeSubType;}}

private int m_ConsumeType;
 public int ConsumeType { get{ return m_ConsumeType;}}

private int m_Level;
 public int Level { get{ return m_Level;}}

private int m_MaxSatrTimes;
 public int MaxSatrTimes { get{ return m_MaxSatrTimes;}}

private int m_NeedCoin;
 public int NeedCoin { get{ return m_NeedCoin;}}

private float m_ShowRate;
 public float ShowRate { get{ return m_ShowRate;}}

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
 Tab_EquipStar _values = new Tab_EquipStar();
 _values.m_AttrRate =  Convert.ToSingle(valuesList[(int)_ID.ID_ATTRRATE] as string );
_values.m_ConsumeNum =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMENUM] as string);
_values.m_ConsumeSubType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMESUBTYPE] as string);
_values.m_ConsumeType =  Convert.ToInt32(valuesList[(int)_ID.ID_CONSUMETYPE] as string);
_values.m_Level =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVEL] as string);
_values.m_MaxSatrTimes =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXSATRTIMES] as string);
_values.m_NeedCoin =  Convert.ToInt32(valuesList[(int)_ID.ID_NEEDCOIN] as string);
_values.m_ShowRate =  Convert.ToSingle(valuesList[(int)_ID.ID_SHOWRATE] as string );

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

