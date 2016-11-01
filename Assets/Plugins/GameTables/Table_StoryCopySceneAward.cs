//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_StoryCopySceneAward
{ private const string TAB_FILE_DATA = "Tables/StoryCopySceneAward.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_COIN=2,
ID_EXP,
ID_FELLOWEXP,
ID_BINDYUANBAO,
ID_ITEMID1,
ID_ITEMNUM1,
ID_ITEMID2,
ID_ITEMNUM2,
ID_ITEMID3,
ID_ITEMNUM3,
ID_ITEMID4,
ID_ITEMNUM4,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanBao;
 public int BindYuanBao { get{ return m_BindYuanBao;}}

private int m_Coin;
 public int Coin { get{ return m_Coin;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_FellowExp;
 public int FellowExp { get{ return m_FellowExp;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getItemIDCount() { return 4; } 
 private int[] m_ItemID = new int[4];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemID[idx];
 return -1;
 }

public int getItemNumCount() { return 4; } 
 private int[] m_ItemNum = new int[4];
 public int GetItemNumbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_ItemNum[idx];
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
 Tab_StoryCopySceneAward _values = new Tab_StoryCopySceneAward();
 _values.m_BindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_Coin =  Convert.ToInt32(valuesList[(int)_ID.ID_COIN] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_FellowExp =  Convert.ToInt32(valuesList[(int)_ID.ID_FELLOWEXP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID4] as string);
_values.m_ItemNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM1] as string);
_values.m_ItemNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM2] as string);
_values.m_ItemNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM3] as string);
_values.m_ItemNum [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM4] as string);

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

