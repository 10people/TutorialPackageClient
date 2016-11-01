//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_GuildAttrAddition
{ private const string TAB_FILE_DATA = "Tables/GuildAttrAddition.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_BASE1=2,
ID_BASE2,
ID_BASE3,
ID_BASE4,
ID_BASE5,
ID_BASE6,
ID_BASE7,
ID_BASE8,
ID_BASE9,
ID_BASE10,
ID_GROWTH1,
ID_GROWTH2,
ID_GROWTH3,
ID_GROWTH4,
ID_GROWTH5,
ID_GROWTH6,
ID_GROWTH7,
ID_GROWTH8,
ID_GROWTH9,
ID_GROWTH10,
ID_ADDTIONPERCENT1,
ID_ADDTIONPERCENT2,
ID_ADDTIONPERCENT3,
ID_ADDTIONPERCENT4,
ID_ADDTIONPERCENT5,
ID_ADDTIONPERCENT6,
ID_ADDTIONPERCENT7,
ID_ADDTIONPERCENT8,
ID_ADDTIONPERCENT9,
ID_ADDTIONPERCENT10,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAddtionPercentCount() { return 10; } 
 private float[] m_AddtionPercent = new float[10];
 public float GetAddtionPercentbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_AddtionPercent[idx];
 return 0.0f;
 }

public int getBaseCount() { return 10; } 
 private int[] m_Base = new int[10];
 public int GetBasebyIndex(int idx) {
 if(idx>=0 && idx<10) return m_Base[idx];
 return -1;
 }

public int getGrowthCount() { return 10; } 
 private int[] m_Growth = new int[10];
 public int GetGrowthbyIndex(int idx) {
 if(idx>=0 && idx<10) return m_Growth[idx];
 return -1;
 }

private int m_Id;
 public int Id { get{ return m_Id;}}

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
 Tab_GuildAttrAddition _values = new Tab_GuildAttrAddition();
 _values.m_AddtionPercent [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT1] as string );
_values.m_AddtionPercent [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT2] as string );
_values.m_AddtionPercent [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT3] as string );
_values.m_AddtionPercent [ 3 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT4] as string );
_values.m_AddtionPercent [ 4 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT5] as string );
_values.m_AddtionPercent [ 5 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT6] as string );
_values.m_AddtionPercent [ 6 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT7] as string );
_values.m_AddtionPercent [ 7 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT8] as string );
_values.m_AddtionPercent [ 8 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT9] as string );
_values.m_AddtionPercent [ 9 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDTIONPERCENT10] as string );
_values.m_Base [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE1] as string);
_values.m_Base [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE2] as string);
_values.m_Base [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE3] as string);
_values.m_Base [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE4] as string);
_values.m_Base [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE5] as string);
_values.m_Base [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE6] as string);
_values.m_Base [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE7] as string);
_values.m_Base [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE8] as string);
_values.m_Base [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE9] as string);
_values.m_Base [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_BASE10] as string);
_values.m_Growth [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH1] as string);
_values.m_Growth [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH2] as string);
_values.m_Growth [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH3] as string);
_values.m_Growth [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH4] as string);
_values.m_Growth [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH5] as string);
_values.m_Growth [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH6] as string);
_values.m_Growth [ 6 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH7] as string);
_values.m_Growth [ 7 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH8] as string);
_values.m_Growth [ 8 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH9] as string);
_values.m_Growth [ 9 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_GROWTH10] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);

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

