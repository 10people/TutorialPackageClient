//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_MissionBonus
{ private const string TAB_FILE_DATA = "Tables/MissionBonus.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_MONEY=2,
ID_BINDYUANBAO,
ID_EXP,
ID_FELLOWEXP,
ID_TOOLID1,
ID_TOOLNUM1,
ID_TOOLID2,
ID_TOOLNUM2,
ID_PROFESSIONITEMID1,
ID_PROFESSIONNUM1,
ID_PROFESSIONITEMID2,
ID_PROFESSIONNUM2,
ID_PROFESSIONITEMID3,
ID_PROFESSIONNUM3,
ID_PROFESSIONITEMID4,
ID_PROFESSIONNUM4,
ID_PROFESSIONITEMID5,
ID_PROFESSIONNUM5,
ID_CHOOSEDITEMNUM,
ID_ITEMID1,
ID_ITEMNUM1,
ID_ITEMID2,
ID_ITEMNUM2,
ID_ITEMID3,
ID_ITEMNUM3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BindYuanBao;
 public int BindYuanBao { get{ return m_BindYuanBao;}}

private int m_ChoosedItemNum;
 public int ChoosedItemNum { get{ return m_ChoosedItemNum;}}

private int m_Exp;
 public int Exp { get{ return m_Exp;}}

private int m_FellowExp;
 public int FellowExp { get{ return m_FellowExp;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getItemIDCount() { return 3; } 
 private int[] m_ItemID = new int[3];
 public int GetItemIDbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ItemID[idx];
 return -1;
 }

public int getItemNumCount() { return 3; } 
 private int[] m_ItemNum = new int[3];
 public int GetItemNumbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ItemNum[idx];
 return -1;
 }

private int m_Money;
 public int Money { get{ return m_Money;}}

public int getProfessionItemIDCount() { return 5; } 
 private int[] m_ProfessionItemID = new int[5];
 public int GetProfessionItemIDbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ProfessionItemID[idx];
 return -1;
 }

public int getProfessionNumCount() { return 5; } 
 private int[] m_ProfessionNum = new int[5];
 public int GetProfessionNumbyIndex(int idx) {
 if(idx>=0 && idx<5) return m_ProfessionNum[idx];
 return -1;
 }

public int getToolIDCount() { return 2; } 
 private int[] m_ToolID = new int[2];
 public int GetToolIDbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ToolID[idx];
 return -1;
 }

public int getToolNumCount() { return 2; } 
 private int[] m_ToolNum = new int[2];
 public int GetToolNumbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_ToolNum[idx];
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
 Tab_MissionBonus _values = new Tab_MissionBonus();
 _values.m_BindYuanBao =  Convert.ToInt32(valuesList[(int)_ID.ID_BINDYUANBAO] as string);
_values.m_ChoosedItemNum =  Convert.ToInt32(valuesList[(int)_ID.ID_CHOOSEDITEMNUM] as string);
_values.m_Exp =  Convert.ToInt32(valuesList[(int)_ID.ID_EXP] as string);
_values.m_FellowExp =  Convert.ToInt32(valuesList[(int)_ID.ID_FELLOWEXP] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_ItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID1] as string);
_values.m_ItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID2] as string);
_values.m_ItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMID3] as string);
_values.m_ItemNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM1] as string);
_values.m_ItemNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM2] as string);
_values.m_ItemNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ITEMNUM3] as string);
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_ProfessionItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONITEMID1] as string);
_values.m_ProfessionItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONITEMID2] as string);
_values.m_ProfessionItemID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONITEMID3] as string);
_values.m_ProfessionItemID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONITEMID4] as string);
_values.m_ProfessionItemID [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONITEMID5] as string);
_values.m_ProfessionNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONNUM1] as string);
_values.m_ProfessionNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONNUM2] as string);
_values.m_ProfessionNum [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONNUM3] as string);
_values.m_ProfessionNum [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONNUM4] as string);
_values.m_ProfessionNum [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_PROFESSIONNUM5] as string);
_values.m_ToolID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TOOLID1] as string);
_values.m_ToolID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TOOLID2] as string);
_values.m_ToolNum [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TOOLNUM1] as string);
_values.m_ToolNum [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_TOOLNUM2] as string);

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

