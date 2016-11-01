//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Belle
{ private const string TAB_FILE_DATA = "Tables/Belle.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_INTRODUCTION,
ID_QUALITY,
ID_WAYIDS,
ID_NATURE,
ID_BIGTEXNAME_1,
ID_BIGTEXNAME_2,
ID_BIGTEXNAME_3,
ID_ICONTEXNAME,
ID_ATTRTYPE_1,
ID_ATTRVALUE_1,
ID_ATTRTYPE_2,
ID_ATTRVALUE_2,
ID_ATTRTYPE_3,
ID_ATTRVALUE_3,
ID_ATTRTYPE_4,
ID_ATTRVALUE_4,
ID_ATTRTYPE_5,
ID_ATTRVALUE_5,
ID_ATTRTYPE_6,
ID_ATTRVALUE_6,
ID_AFFECTIONNAME_1,
ID_AFFECTIONDESC_1,
ID_AFFECTIONCONDITONTYPE_1,
ID_AFFECTIONCONDITONVALUE_1,
ID_AFFECTIONGAINSTYPE_1,
ID_AFFECTIONGAINSVALUE_1,
ID_AFFECTIONNAME_2,
ID_AFFECTIONDESC_2,
ID_AFFECTIONCONDITONTYPE_2,
ID_AFFECTIONCONDITONVALUE_2,
ID_AFFECTIONGAINSTYPE_2,
ID_AFFECTIONGAINSVALUE_2,
ID_AFFECTIONNAME_3,
ID_AFFECTIONDESC_3,
ID_AFFECTIONCONDITONTYPE_3,
ID_AFFECTIONCONDITONVALUE_3,
ID_AFFECTIONGAINSTYPE_3,
ID_AFFECTIONGAINSVALUE_3,
ID_CLOSEADDATTRTYPE,
ID_BELLEITEMID,
ID_BELLEITEMCOUNT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

public int getAffectionConditonTypeCount() { return 3; } 
 private int[] m_AffectionConditonType = new int[3];
 public int GetAffectionConditonTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionConditonType[idx];
 return -1;
 }

public int getAffectionConditonValueCount() { return 3; } 
 private int[] m_AffectionConditonValue = new int[3];
 public int GetAffectionConditonValuebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionConditonValue[idx];
 return -1;
 }

public int getAffectionDescCount() { return 3; } 
 private string[] m_AffectionDesc = new string[3];
 public string GetAffectionDescbyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionDesc[idx];
 return "";
 }

public int getAffectionGainsTypeCount() { return 3; } 
 private int[] m_AffectionGainsType = new int[3];
 public int GetAffectionGainsTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionGainsType[idx];
 return -1;
 }

public int getAffectionGainsValueCount() { return 3; } 
 private int[] m_AffectionGainsValue = new int[3];
 public int GetAffectionGainsValuebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionGainsValue[idx];
 return -1;
 }

public int getAffectionNameCount() { return 3; } 
 private string[] m_AffectionName = new string[3];
 public string GetAffectionNamebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_AffectionName[idx];
 return "";
 }

public int getAttrTypeCount() { return 6; } 
 private int[] m_AttrType = new int[6];
 public int GetAttrTypebyIndex(int idx) {
 if(idx>=0 && idx<6) return m_AttrType[idx];
 return -1;
 }

public int getAttrValueCount() { return 6; } 
 private int[] m_AttrValue = new int[6];
 public int GetAttrValuebyIndex(int idx) {
 if(idx>=0 && idx<6) return m_AttrValue[idx];
 return -1;
 }

private int m_BelleItemCount;
 public int BelleItemCount { get{ return m_BelleItemCount;}}

private int m_BelleItemID;
 public int BelleItemID { get{ return m_BelleItemID;}}

public int getBigTexNameCount() { return 3; } 
 private string[] m_BigTexName = new string[3];
 public string GetBigTexNamebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_BigTexName[idx];
 return "";
 }

private int m_CloseAddAttrType;
 public int CloseAddAttrType { get{ return m_CloseAddAttrType;}}

private string m_IconTexName;
 public string IconTexName { get{ return m_IconTexName;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Introduction;
 public string Introduction { get{ return m_Introduction;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private int m_Nature;
 public int Nature { get{ return m_Nature;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private string m_WayIdS;
 public string WayIdS { get{ return m_WayIdS;}}

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
 Tab_Belle _values = new Tab_Belle();
 _values.m_AffectionConditonType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONTYPE_1] as string);
_values.m_AffectionConditonType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONTYPE_2] as string);
_values.m_AffectionConditonType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONTYPE_3] as string);
_values.m_AffectionConditonValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONVALUE_1] as string);
_values.m_AffectionConditonValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONVALUE_2] as string);
_values.m_AffectionConditonValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONCONDITONVALUE_3] as string);
_values.m_AffectionDesc [ 0 ] =  valuesList[(int)_ID.ID_AFFECTIONDESC_1] as string;
_values.m_AffectionDesc [ 1 ] =  valuesList[(int)_ID.ID_AFFECTIONDESC_2] as string;
_values.m_AffectionDesc [ 2 ] =  valuesList[(int)_ID.ID_AFFECTIONDESC_3] as string;
_values.m_AffectionGainsType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSTYPE_1] as string);
_values.m_AffectionGainsType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSTYPE_2] as string);
_values.m_AffectionGainsType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSTYPE_3] as string);
_values.m_AffectionGainsValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSVALUE_1] as string);
_values.m_AffectionGainsValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSVALUE_2] as string);
_values.m_AffectionGainsValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_AFFECTIONGAINSVALUE_3] as string);
_values.m_AffectionName [ 0 ] =  valuesList[(int)_ID.ID_AFFECTIONNAME_1] as string;
_values.m_AffectionName [ 1 ] =  valuesList[(int)_ID.ID_AFFECTIONNAME_2] as string;
_values.m_AffectionName [ 2 ] =  valuesList[(int)_ID.ID_AFFECTIONNAME_3] as string;
_values.m_AttrType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_1] as string);
_values.m_AttrType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_2] as string);
_values.m_AttrType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_3] as string);
_values.m_AttrType [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_4] as string);
_values.m_AttrType [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_5] as string);
_values.m_AttrType [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRTYPE_6] as string);
_values.m_AttrValue [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_1] as string);
_values.m_AttrValue [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_2] as string);
_values.m_AttrValue [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_3] as string);
_values.m_AttrValue [ 3 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_4] as string);
_values.m_AttrValue [ 4 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_5] as string);
_values.m_AttrValue [ 5 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_ATTRVALUE_6] as string);
_values.m_BelleItemCount =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLEITEMCOUNT] as string);
_values.m_BelleItemID =  Convert.ToInt32(valuesList[(int)_ID.ID_BELLEITEMID] as string);
_values.m_BigTexName [ 0 ] =  valuesList[(int)_ID.ID_BIGTEXNAME_1] as string;
_values.m_BigTexName [ 1 ] =  valuesList[(int)_ID.ID_BIGTEXNAME_2] as string;
_values.m_BigTexName [ 2 ] =  valuesList[(int)_ID.ID_BIGTEXNAME_3] as string;
_values.m_CloseAddAttrType =  Convert.ToInt32(valuesList[(int)_ID.ID_CLOSEADDATTRTYPE] as string);
_values.m_IconTexName =  valuesList[(int)_ID.ID_ICONTEXNAME] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Introduction =  valuesList[(int)_ID.ID_INTRODUCTION] as string;
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Nature =  Convert.ToInt32(valuesList[(int)_ID.ID_NATURE] as string);
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_WayIdS =  valuesList[(int)_ID.ID_WAYIDS] as string;

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

