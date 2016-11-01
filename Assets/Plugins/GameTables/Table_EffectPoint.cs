//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_EffectPoint
{ private const string TAB_FILE_DATA = "Tables/EffectPoint.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_MODELTYPEID,
ID_CENTERPOINTPATH=2,
ID_HEADPOINTPATH,
ID_LHANDPOINTPATH,
ID_RHANDPOINTPATH,
ID_LFOOTPOINTPATH,
ID_RFOOTPOINTPATH,
ID_HEADTOPPOINTPATH,
ID_LSHOULDERPOINTPATH,
ID_RSHOULDERPOINTPATH,
ID_LHANDBACKPOINTPATH,
ID_RHANDBACKPOINTPATH,
ID_TAILPOINTPATH,
ID_ADDONSITEM,
ID_SPECIALWEAPONPOINT,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_AddOnsItem;
 public string AddOnsItem { get{ return m_AddOnsItem;}}

private string m_CenterPointPath;
 public string CenterPointPath { get{ return m_CenterPointPath;}}

private string m_HeadPointPath;
 public string HeadPointPath { get{ return m_HeadPointPath;}}

private string m_HeadTopPointPath;
 public string HeadTopPointPath { get{ return m_HeadTopPointPath;}}

private string m_LFootPointPath;
 public string LFootPointPath { get{ return m_LFootPointPath;}}

private string m_LHandBackPointPath;
 public string LHandBackPointPath { get{ return m_LHandBackPointPath;}}

private string m_LHandPointPath;
 public string LHandPointPath { get{ return m_LHandPointPath;}}

private string m_LShoulderPointPath;
 public string LShoulderPointPath { get{ return m_LShoulderPointPath;}}

private int m_ModelTypeId;
 public int ModelTypeId { get{ return m_ModelTypeId;}}

private string m_RFootPointPath;
 public string RFootPointPath { get{ return m_RFootPointPath;}}

private string m_RHandBackPointPath;
 public string RHandBackPointPath { get{ return m_RHandBackPointPath;}}

private string m_RHandPointPath;
 public string RHandPointPath { get{ return m_RHandPointPath;}}

private string m_RShoulderPointPath;
 public string RShoulderPointPath { get{ return m_RShoulderPointPath;}}

private string m_SpecialWeaponPoint;
 public string SpecialWeaponPoint { get{ return m_SpecialWeaponPoint;}}

private string m_TailPointPath;
 public string TailPointPath { get{ return m_TailPointPath;}}

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
 Tab_EffectPoint _values = new Tab_EffectPoint();
 _values.m_AddOnsItem =  valuesList[(int)_ID.ID_ADDONSITEM] as string;
_values.m_CenterPointPath =  valuesList[(int)_ID.ID_CENTERPOINTPATH] as string;
_values.m_HeadPointPath =  valuesList[(int)_ID.ID_HEADPOINTPATH] as string;
_values.m_HeadTopPointPath =  valuesList[(int)_ID.ID_HEADTOPPOINTPATH] as string;
_values.m_LFootPointPath =  valuesList[(int)_ID.ID_LFOOTPOINTPATH] as string;
_values.m_LHandBackPointPath =  valuesList[(int)_ID.ID_LHANDBACKPOINTPATH] as string;
_values.m_LHandPointPath =  valuesList[(int)_ID.ID_LHANDPOINTPATH] as string;
_values.m_LShoulderPointPath =  valuesList[(int)_ID.ID_LSHOULDERPOINTPATH] as string;
_values.m_ModelTypeId =  Convert.ToInt32(valuesList[(int)_ID.ID_MODELTYPEID] as string);
_values.m_RFootPointPath =  valuesList[(int)_ID.ID_RFOOTPOINTPATH] as string;
_values.m_RHandBackPointPath =  valuesList[(int)_ID.ID_RHANDBACKPOINTPATH] as string;
_values.m_RHandPointPath =  valuesList[(int)_ID.ID_RHANDPOINTPATH] as string;
_values.m_RShoulderPointPath =  valuesList[(int)_ID.ID_RSHOULDERPOINTPATH] as string;
_values.m_SpecialWeaponPoint =  valuesList[(int)_ID.ID_SPECIALWEAPONPOINT] as string;
_values.m_TailPointPath =  valuesList[(int)_ID.ID_TAILPOINTPATH] as string;

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

