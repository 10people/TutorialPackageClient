//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_RestaurantFood
{ private const string TAB_FILE_DATA = "Tables/RestaurantFood.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_COOKDURATION,
ID_OPENLEVEL,
ID_REWARDITEMID_1,
ID_REWARDITEMNUM_1,
ID_REWARDITEMID_2,
ID_REWARDITEMNUM_2,
ID_REWARDITEMID_3,
ID_REWARDITEMNUM_3,
ID_MONEY,
ID_BINDYUANBAO,
ID_PLAYEREXP,
ID_RESTAURANTEXP,
ID_COSTYUANBAO,
ID_ICON,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanBao;
 public int BindYuanBao { get{ return m_BindYuanBao;}}

private int m_CookDuration;
 public int CookDuration { get{ return m_CookDuration;}}

private int m_CostYuanBao;
 public int CostYuanBao { get{ return m_CostYuanBao;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_OpenLevel;
 public int OpenLevel { get{ return m_OpenLevel;}}

private int m_PlayerExp;
 public int PlayerExp { get{ return m_PlayerExp;}}

private int m_RestaurantExp;
 public int RestaurantExp { get{ return m_RestaurantExp;}}

public int getRewardItemIDCount() { return 3; } 
 private int[] m_RewardItemID = new int[3];
 public int GetRewardItemIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_RewardItemID[idx];
 return -1;
 }

public int getRewardItemNumCount() { return 3; } 
 private int[] m_RewardItemNum = new int[3];
 public int GetRewardItemNumbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_RewardItemNum[idx];
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
 Tab_RestaurantFood _values = new Tab_RestaurantFood();
 _values.m_BindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_CookDuration =  Convert.ToInt32(valuesList[(int)_ID.ID_COOKDURATION] as string);
_values.m_CostYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_COSTYUANBAO] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_OpenLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_OPENLEVEL] as string);
_values.m_PlayerExp =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYEREXP] as string);
_values.m_RestaurantExp =  Convert.ToInt32(valuesList[(int)_ID.ID_RESTAURANTEXP] as string);
_values.m_RewardItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMID_1] as string);
_values.m_RewardItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMID_2] as string);
_values.m_RewardItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMID_3] as string);
_values.m_RewardItemNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMNUM_1] as string);
_values.m_RewardItemNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMNUM_2] as string);
_values.m_RewardItemNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_REWARDITEMNUM_3] as string);

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

