//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_RestaurantGuest
{ private const string TAB_FILE_DATA = "Tables/RestaurantGuest.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_QUALITY,
ID_ADDITIONPRECENT,
ID_WEIGHT,
ID_ICON,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AdditionPrecent;
 public float AdditionPrecent { get{ return m_AdditionPrecent;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private int m_Weight;
 public int Weight { get{ return m_Weight;}}

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
 Tab_RestaurantGuest _values = new Tab_RestaurantGuest();
 _values.m_AdditionPrecent =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDITIONPRECENT] as string );
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_Weight =  Convert.ToInt32(valuesList[(int)_ID.ID_WEIGHT] as string);

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

