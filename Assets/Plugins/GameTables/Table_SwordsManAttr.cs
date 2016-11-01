//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SwordsManAttr
{ private const string TAB_FILE_DATA = "Tables/SwordsManAttr.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_QUALITY=2,
ID_GAINRATA,
ID_ICON,
ID_NAME,
ID_SWORDSMANEXP,
ID_TIPS,
ID_ADDATTRTYPE1,
ID_ADDATTRVALUE1,
ID_ADDATTRPER1,
ID_ADDATTRTYPE2,
ID_ADDATTRVALUE2,
ID_ADDATTRPER2,
ID_ADDATTRTYPE3,
ID_ADDATTRVALUE3,
ID_ADDATTRPER3,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAddAttrPerCount() { return 3; } 
 private float[] m_AddAttrPer = new float[3];
 public float GetAddAttrPerbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AddAttrPer[idx];
 return 0.0f;
 }

public int getAddAttrTypeCount() { return 3; } 
 private int[] m_AddAttrType = new int[3];
 public int GetAddAttrTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AddAttrType[idx];
 return -1;
 }

public int getAddAttrValueCount() { return 3; } 
 private float[] m_AddAttrValue = new float[3];
 public float GetAddAttrValuebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AddAttrValue[idx];
 return 0.0f;
 }

private int m_GainRata;
 public int GainRata { get{ return m_GainRata;}}

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private int m_SwordsManExp;
 public int SwordsManExp { get{ return m_SwordsManExp;}}

private string m_Tips;
 public string Tips { get{ return m_Tips;}}

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
 Tab_SwordsManAttr _values = new Tab_SwordsManAttr();
 _values.m_AddAttrPer [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER1] as string );
_values.m_AddAttrPer [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER2] as string );
_values.m_AddAttrPer [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRPER3] as string );
_values.m_AddAttrType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE1] as string);
_values.m_AddAttrType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE2] as string);
_values.m_AddAttrType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ADDATTRTYPE3] as string);
_values.m_AddAttrValue [ 0 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE1] as string );
_values.m_AddAttrValue [ 1 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE2] as string );
_values.m_AddAttrValue [ 2 ] =  Convert.ToSingle(valuesList[(int)_ID.ID_ADDATTRVALUE3] as string );
_values.m_GainRata =  Convert.ToInt32(valuesList[(int)_ID.ID_GAINRATA] as string);
_values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_SwordsManExp =  Convert.ToInt32(valuesList[(int)_ID.ID_SWORDSMANEXP] as string);
_values.m_Tips =  valuesList[(int)_ID.ID_TIPS] as string;

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

