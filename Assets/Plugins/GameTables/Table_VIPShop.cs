//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_VIPShop
{ private const string TAB_FILE_DATA = "Tables/VIPShop.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_SHOWLEVELREQ=2,
ID_BUYLEVELREQ,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BuyLevelReq;
 public int BuyLevelReq { get{ return m_BuyLevelReq;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_ShowLevelReq;
 public int ShowLevelReq { get{ return m_ShowLevelReq;}}

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
 Tab_VIPShop _values = new Tab_VIPShop();
 _values.m_BuyLevelReq =  Convert.ToInt32(valuesList[(int)_ID.ID_BUYLEVELREQ] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ShowLevelReq =  Convert.ToInt32(valuesList[(int)_ID.ID_SHOWLEVELREQ] as string);

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

