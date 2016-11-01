//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_Teleport
{ private const string TAB_FILE_DATA = "Tables/Teleport.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_TELEPORTNAME=2,
ID_SRCSCENEID,
ID_SRCPOSX,
ID_SRCPOSZ,
ID_DSTSCENEID,
ID_DSTPOSX,
ID_DSTPOSZ,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_DstPosX;
 public int DstPosX { get{ return m_DstPosX;}}

private int m_DstPosZ;
 public int DstPosZ { get{ return m_DstPosZ;}}

private int m_DstSceneID;
 public int DstSceneID { get{ return m_DstSceneID;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private int m_SrcPosX;
 public int SrcPosX { get{ return m_SrcPosX;}}

private int m_SrcPosZ;
 public int SrcPosZ { get{ return m_SrcPosZ;}}

private int m_SrcSceneID;
 public int SrcSceneID { get{ return m_SrcSceneID;}}

private string m_TeleportName;
 public string TeleportName { get{ return m_TeleportName;}}

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
 Tab_Teleport _values = new Tab_Teleport();
 _values.m_DstPosX =  Convert.ToInt32(valuesList[(int)_ID.ID_DSTPOSX] as string);
_values.m_DstPosZ =  Convert.ToInt32(valuesList[(int)_ID.ID_DSTPOSZ] as string);
_values.m_DstSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_DSTSCENEID] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_SrcPosX =  Convert.ToInt32(valuesList[(int)_ID.ID_SRCPOSX] as string);
_values.m_SrcPosZ =  Convert.ToInt32(valuesList[(int)_ID.ID_SRCPOSZ] as string);
_values.m_SrcSceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_SRCSCENEID] as string);
_values.m_TeleportName =  valuesList[(int)_ID.ID_TELEPORTNAME] as string;

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

