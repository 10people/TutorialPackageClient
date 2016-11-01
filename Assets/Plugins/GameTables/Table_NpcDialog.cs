//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_NpcDialog
{ private const string TAB_FILE_DATA = "Tables/NpcDialog.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_DIALOG=2,
ID_OPTIONDIALOGID,
ID_OPTIONDIALOGTYPE,
ID_MISSIONID1,
ID_MISSIONID2,
ID_MISSIONID3,
ID_MISSIONID4,
ID_MISSIONID5,
ID_MISSIONID6,
ID_MISSIONID7,
ID_MISSIONID8,
ID_MISSIONID9,
ID_MISSIONID10,
ID_MISSIONID11,
ID_MISSIONID12,
ID_MISSIONID13,
ID_MISSIONID14,
ID_MISSIONID15,
ID_MISSIONID16,
ID_MISSIONID17,
ID_MISSIONID18,
ID_MISSIONID19,
ID_MISSIONID20,
ID_MISSIONID21,
ID_MISSIONID22,
ID_MISSIONID23,
ID_MISSIONID24,
ID_MISSIONID25,
ID_MISSIONID26,
ID_MISSIONID27,
ID_MISSIONID28,
ID_MISSIONID29,
ID_MISSIONID30,
ID_MISSIONID31,
ID_MISSIONID32,
ID_MISSIONID33,
ID_MISSIONID34,
ID_MISSIONID35,
ID_MISSIONID36,
ID_MISSIONID37,
ID_MISSIONID38,
ID_MISSIONID39,
ID_MISSIONID40,
ID_MISSIONID41,
ID_MISSIONID42,
ID_MISSIONID43,
ID_MISSIONID44,
ID_MISSIONID45,
ID_MISSIONID46,
ID_MISSIONID47,
ID_MISSIONID48,
ID_MISSIONID49,
ID_MISSIONID50,
ID_TALKID,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_Dialog;
 public string Dialog { get{ return m_Dialog;}}

private short m_Id;
 public short Id { get{ return m_Id;}}

public int getMissionIDCount() { return 50; } 
 private short[] m_MissionID = new short[50];
 public short GetMissionIDbyIndex(int idx) {
 if(idx>=0 && idx<50) return m_MissionID[idx];
 return -1;
 }

private short m_OptionDialogId;
 public short OptionDialogId { get{ return m_OptionDialogId;}}

private short m_OptionDialogType;
 public short OptionDialogType { get{ return m_OptionDialogType;}}

private short m_TalkID;
 public short TalkID { get{ return m_TalkID;}}

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
 Tab_NpcDialog _values = new Tab_NpcDialog();
 _values.m_Dialog =  valuesList[(int)_ID.ID_DIALOG] as string;
_values.m_Id =  Convert.ToInt16(valuesList[(int)_ID.ID_ID] as string);
_values.m_MissionID [ 0 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID1] as string);
_values.m_MissionID [ 1 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID2] as string);
_values.m_MissionID [ 2 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID3] as string);
_values.m_MissionID [ 3 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID4] as string);
_values.m_MissionID [ 4 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID5] as string);
_values.m_MissionID [ 5 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID6] as string);
_values.m_MissionID [ 6 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID7] as string);
_values.m_MissionID [ 7 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID8] as string);
_values.m_MissionID [ 8 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID9] as string);
_values.m_MissionID [ 9 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID10] as string);
_values.m_MissionID [ 10 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID11] as string);
_values.m_MissionID [ 11 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID12] as string);
_values.m_MissionID [ 12 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID13] as string);
_values.m_MissionID [ 13 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID14] as string);
_values.m_MissionID [ 14 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID15] as string);
_values.m_MissionID [ 15 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID16] as string);
_values.m_MissionID [ 16 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID17] as string);
_values.m_MissionID [ 17 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID18] as string);
_values.m_MissionID [ 18 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID19] as string);
_values.m_MissionID [ 19 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID20] as string);
_values.m_MissionID [ 20 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID21] as string);
_values.m_MissionID [ 21 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID22] as string);
_values.m_MissionID [ 22 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID23] as string);
_values.m_MissionID [ 23 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID24] as string);
_values.m_MissionID [ 24 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID25] as string);
_values.m_MissionID [ 25 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID26] as string);
_values.m_MissionID [ 26 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID27] as string);
_values.m_MissionID [ 27 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID28] as string);
_values.m_MissionID [ 28 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID29] as string);
_values.m_MissionID [ 29 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID30] as string);
_values.m_MissionID [ 30 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID31] as string);
_values.m_MissionID [ 31 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID32] as string);
_values.m_MissionID [ 32 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID33] as string);
_values.m_MissionID [ 33 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID34] as string);
_values.m_MissionID [ 34 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID35] as string);
_values.m_MissionID [ 35 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID36] as string);
_values.m_MissionID [ 36 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID37] as string);
_values.m_MissionID [ 37 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID38] as string);
_values.m_MissionID [ 38 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID39] as string);
_values.m_MissionID [ 39 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID40] as string);
_values.m_MissionID [ 40 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID41] as string);
_values.m_MissionID [ 41 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID42] as string);
_values.m_MissionID [ 42 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID43] as string);
_values.m_MissionID [ 43 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID44] as string);
_values.m_MissionID [ 44 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID45] as string);
_values.m_MissionID [ 45 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID46] as string);
_values.m_MissionID [ 46 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID47] as string);
_values.m_MissionID [ 47 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID48] as string);
_values.m_MissionID [ 48 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID49] as string);
_values.m_MissionID [ 49 ] =  Convert.ToInt16(valuesList[(int)_ID.ID_MISSIONID50] as string);
_values.m_OptionDialogId =  Convert.ToInt16(valuesList[(int)_ID.ID_OPTIONDIALOGID] as string);
_values.m_OptionDialogType =  Convert.ToInt16(valuesList[(int)_ID.ID_OPTIONDIALOGTYPE] as string);
_values.m_TalkID =  Convert.ToInt16(valuesList[(int)_ID.ID_TALKID] as string);

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

