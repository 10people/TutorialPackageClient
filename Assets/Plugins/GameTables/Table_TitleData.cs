//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_TitleData
{ private const string TAB_FILE_DATA = "Tables/TitleData.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TYPE=2,
ID_INVESTITIVEDESCRIPTION,
ID_INVESTITIVENAME,
ID_ISIMMOTILE,
ID_PRIOIRITY,
ID_COLORLEVEL,
ID_CANDELETEBYPLAYER,
ID_OWNERTIME,
ID_BROADCASTDIC,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BroadCastDic;
 public int BroadCastDic { get{ return m_BroadCastDic;}}

private int m_CanDeleteByPlayer;
 public int CanDeleteByPlayer { get{ return m_CanDeleteByPlayer;}}

private int m_ColorLevel;
 public int ColorLevel { get{ return m_ColorLevel;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_InvestitiveDescription;
 public string InvestitiveDescription { get{ return m_InvestitiveDescription;}}

private string m_InvestitiveName;
 public string InvestitiveName { get{ return m_InvestitiveName;}}

private int m_IsImmotile;
 public int IsImmotile { get{ return m_IsImmotile;}}

private int m_OwnerTime;
 public int OwnerTime { get{ return m_OwnerTime;}}

private int m_Prioirity;
 public int Prioirity { get{ return m_Prioirity;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

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
 Tab_TitleData _values = new Tab_TitleData();
 _values.m_BroadCastDic =  Convert.ToInt32(valuesList[(int)_ID.ID_BROADCASTDIC] as string);
_values.m_CanDeleteByPlayer =  Convert.ToInt32(valuesList[(int)_ID.ID_CANDELETEBYPLAYER] as string);
_values.m_ColorLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_COLORLEVEL] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_InvestitiveDescription =  valuesList[(int)_ID.ID_INVESTITIVEDESCRIPTION] as string;
_values.m_InvestitiveName =  valuesList[(int)_ID.ID_INVESTITIVENAME] as string;
_values.m_IsImmotile =  Convert.ToInt32(valuesList[(int)_ID.ID_ISIMMOTILE] as string);
_values.m_OwnerTime =  Convert.ToInt32(valuesList[(int)_ID.ID_OWNERTIME] as string);
_values.m_Prioirity =  Convert.ToInt32(valuesList[(int)_ID.ID_PRIOIRITY] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);

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

