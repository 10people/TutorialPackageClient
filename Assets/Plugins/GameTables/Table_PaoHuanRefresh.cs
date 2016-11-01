//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_PaoHuanRefresh
{ private const string TAB_FILE_DATA = "Tables/PaoHuanRefresh.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_FREEREFRESHTIMELIMIT=2,
ID_FREEREFRESHCD,
ID_PAIDREFRESHTIMELIMIT,
ID_PAIDREFRESHPRICE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_FreeRefreshCD;
 public int FreeRefreshCD { get{ return m_FreeRefreshCD;}}

private int m_FreeRefreshTimeLimit;
 public int FreeRefreshTimeLimit { get{ return m_FreeRefreshTimeLimit;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_PaidRefreshPrice;
 public int PaidRefreshPrice { get{ return m_PaidRefreshPrice;}}

private int m_PaidRefreshTimeLimit;
 public int PaidRefreshTimeLimit { get{ return m_PaidRefreshTimeLimit;}}

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
 Tab_PaoHuanRefresh _values = new Tab_PaoHuanRefresh();
 _values.m_FreeRefreshCD =  Convert.ToInt32(valuesList[(int)_ID.ID_FREEREFRESHCD] as string);
_values.m_FreeRefreshTimeLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_FREEREFRESHTIMELIMIT] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_PaidRefreshPrice =  Convert.ToInt32(valuesList[(int)_ID.ID_PAIDREFRESHPRICE] as string);
_values.m_PaidRefreshTimeLimit =  Convert.ToInt32(valuesList[(int)_ID.ID_PAIDREFRESHTIMELIMIT] as string);

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

