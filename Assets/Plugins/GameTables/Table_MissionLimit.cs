//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionLimit
{ private const string TAB_FILE_DATA = "Tables/MissionLimit.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_LOWLEVEL=2,
ID_PREMISSION,
ID_ITEMNEED,
ID_ITEMCOUNT,
ID_ISLOOP,
ID_PREMISSION2,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_IsLoop;
 public int IsLoop { get{ return m_IsLoop;}}

private int m_ItemCount;
 public int ItemCount { get{ return m_ItemCount;}}

private int m_ItemNeed;
 public int ItemNeed { get{ return m_ItemNeed;}}

private int m_LowLevel;
 public int LowLevel { get{ return m_LowLevel;}}

public int getPreMissionCount() { return 2; } 
 private int[] m_PreMission = new int[2];
 public int GetPreMissionbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_PreMission[idx];
 return -1;
 }

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
 Tab_MissionLimit _values = new Tab_MissionLimit();
 _values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_IsLoop =  Convert.ToInt32(valuesList[(int)_ID.ID_ISLOOP] as string);
_values.m_ItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMCOUNT] as string);
_values.m_ItemNeed =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNEED] as string);
_values.m_LowLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_LOWLEVEL] as string);
_values.m_PreMission [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PREMISSION] as string);
_values.m_PreMission [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PREMISSION2] as string);

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

