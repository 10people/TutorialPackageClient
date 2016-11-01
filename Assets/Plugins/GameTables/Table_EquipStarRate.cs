//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EquipStarRate
{ private const string TAB_FILE_DATA = "Tables/EquipStarRate.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_STARLEVEL=2,
ID_MINTIMES,
ID_MAXTIMES,
ID_SUCCESSRATE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_MaxTimes;
 public int MaxTimes { get{ return m_MaxTimes;}}

private int m_MinTimes;
 public int MinTimes { get{ return m_MinTimes;}}

private int m_StarLevel;
 public int StarLevel { get{ return m_StarLevel;}}

private float m_SuccessRate;
 public float SuccessRate { get{ return m_SuccessRate;}}

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
 Tab_EquipStarRate _values = new Tab_EquipStarRate();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_MaxTimes =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXTIMES] as string);
_values.m_MinTimes =  Convert.ToInt32(valuesList[(int)_ID.ID_MINTIMES] as string);
_values.m_StarLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_STARLEVEL] as string);
_values.m_SuccessRate =  Convert.ToSingle(valuesList[(int)_ID.ID_SUCCESSRATE] as string );

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

