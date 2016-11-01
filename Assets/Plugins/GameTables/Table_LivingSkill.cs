//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_LivingSkill
{ private const string TAB_FILE_DATA = "Tables/LivingSkill.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_INFO,
ID_ICON,
ID_TYPE,
ID_OPENLEVEL,
ID_PRODUCTGROUP,
ID_STATICPRODUCTITEMID,
ID_MONEY,
ID_STAMINA,
ID_STUFFID1,
ID_STUFFCOUNT1,
ID_STUFFID2,
ID_STUFFCOUNT2,
ID_STUFFID3,
ID_STUFFCOUNT3,
ID_STUFFID4,
ID_STUFFCOUNT4,
ID_SORTID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Info;
 public string Info { get{ return m_Info;}}

private int m_Money;
 public int Money { get{ return m_Money;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_OpenLevel;
 public int OpenLevel { get{ return m_OpenLevel;}}

private int m_ProductGroup;
 public int ProductGroup { get{ return m_ProductGroup;}}

private int m_SortID;
 public int SortID { get{ return m_SortID;}}

private int m_Stamina;
 public int Stamina { get{ return m_Stamina;}}

private int m_StaticProductItemId;
 public int StaticProductItemId { get{ return m_StaticProductItemId;}}

public int getStuffCountCount() { return 4; } 
 private int[] m_StuffCount = new int[4];
 public int GetStuffCountbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_StuffCount[idx];
 return -1;
 }

public int getStuffIDCount() { return 4; } 
 private int[] m_StuffID = new int[4];
 public int GetStuffIDbyIndex(int idx) {
 if(idx>=0 && idx<4) return m_StuffID[idx];
 return -1;
 }

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
 Tab_LivingSkill _values = new Tab_LivingSkill();
 _values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Info =  valuesList[(int)_ID.ID_INFO] as string;
_values.m_Money =  Convert.ToInt32(valuesList[(int)_ID.ID_MONEY] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_OpenLevel =  Convert.ToInt32(valuesList[(int)_ID.ID_OPENLEVEL] as string);
_values.m_ProductGroup =  Convert.ToInt32(valuesList[(int)_ID.ID_PRODUCTGROUP] as string);
_values.m_SortID =  Convert.ToInt32(valuesList[(int)_ID.ID_SORTID] as string);
_values.m_Stamina =  Convert.ToInt32(valuesList[(int)_ID.ID_STAMINA] as string);
_values.m_StaticProductItemId =  Convert.ToInt32(valuesList[(int)_ID.ID_STATICPRODUCTITEMID] as string);
_values.m_StuffCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT1] as string);
_values.m_StuffCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT2] as string);
_values.m_StuffCount [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT3] as string);
_values.m_StuffCount [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFCOUNT4] as string);
_values.m_StuffID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID1] as string);
_values.m_StuffID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID2] as string);
_values.m_StuffID [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID3] as string);
_values.m_StuffID [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_STUFFID4] as string);
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

