//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_SceneClass
{ private const string TAB_FILE_DATA = "Tables/SceneClass.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_SCENEID,
ID_NAME=2,
ID_RESNAME,
ID_TYPE,
ID_LENGTH,
ID_WIDTH,
ID_OBSTACLE,
ID_TERRAINHEIGHTMAX,
ID_TERRAINHEIGHTMAPLENGTH,
ID_TERRAINHEIGHTMAPWIDTH,
ID_BGMUSIC,
ID_PVPRULE,
ID_RELIVETYPE_1,
ID_RELIVETYPE_2,
ID_RELIVETYPE_3,
ID_ENTRY_X,
ID_ENTRY_Z,
ID_SAFE_X,
ID_SAFE_Z,
ID_DEADPUNISHRULE,
ID_COPYSCENEID,
ID_PLAYERSMAXA,
ID_PLAYERSMAXB,
ID_ISCANUSEXP,
ID_ISCANUSELIGHT,
ID_SCENEMAPTEXTURE,
ID_SCENEMAPWIDTH,
ID_SCENEMAPHEIGHT,
ID_SCENEMAPLOGICWIDTH,
ID_PLAYERVIEWRADIUS,
ID_ISCANTEAMFOLLOW,
ID_ISCANCALLTEAM,
ID_ISCANRIDE,
ID_DISTORTIONTEXTURE,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_BGMusic;
 public int BGMusic { get{ return m_BGMusic;}}

private int m_CopySceneID;
 public int CopySceneID { get{ return m_CopySceneID;}}

private int m_DeadPunishRule;
 public int DeadPunishRule { get{ return m_DeadPunishRule;}}

private string m_DistortionTexture;
 public string DistortionTexture { get{ return m_DistortionTexture;}}

private float m_EntryX;
 public float EntryX { get{ return m_EntryX;}}

private float m_EntryZ;
 public float EntryZ { get{ return m_EntryZ;}}

private int m_IsCanCallTeam;
 public int IsCanCallTeam { get{ return m_IsCanCallTeam;}}

private int m_IsCanRide;
 public int IsCanRide { get{ return m_IsCanRide;}}

private int m_IsCanTeamFollow;
 public int IsCanTeamFollow { get{ return m_IsCanTeamFollow;}}

private int m_IsCanUseLight;
 public int IsCanUseLight { get{ return m_IsCanUseLight;}}

private int m_IsCanUseXp;
 public int IsCanUseXp { get{ return m_IsCanUseXp;}}

private int m_Length;
 public int Length { get{ return m_Length;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private string m_Obstacle;
 public string Obstacle { get{ return m_Obstacle;}}

private int m_PVPRule;
 public int PVPRule { get{ return m_PVPRule;}}

private float m_PlayerViewRadius;
 public float PlayerViewRadius { get{ return m_PlayerViewRadius;}}

private int m_PlayersMaxA;
 public int PlayersMaxA { get{ return m_PlayersMaxA;}}

private int m_PlayersMaxB;
 public int PlayersMaxB { get{ return m_PlayersMaxB;}}

public int getReliveTypeCount() { return 3; } 
 private int[] m_ReliveType = new int[3];
 public int GetReliveTypebyIndex(int idx) {
 if(idx>=0 && idx<3) return m_ReliveType[idx];
 return -1;
 }

private string m_ResName;
 public string ResName { get{ return m_ResName;}}

private float m_SafeX;
 public float SafeX { get{ return m_SafeX;}}

private float m_SafeZ;
 public float SafeZ { get{ return m_SafeZ;}}

private int m_SceneID;
 public int SceneID { get{ return m_SceneID;}}

private int m_SceneMapHeight;
 public int SceneMapHeight { get{ return m_SceneMapHeight;}}

private int m_SceneMapLogicWidth;
 public int SceneMapLogicWidth { get{ return m_SceneMapLogicWidth;}}

private string m_SceneMapTexture;
 public string SceneMapTexture { get{ return m_SceneMapTexture;}}

private int m_SceneMapWidth;
 public int SceneMapWidth { get{ return m_SceneMapWidth;}}

private int m_TerrainHeightMapLength;
 public int TerrainHeightMapLength { get{ return m_TerrainHeightMapLength;}}

private int m_TerrainHeightMapWidth;
 public int TerrainHeightMapWidth { get{ return m_TerrainHeightMapWidth;}}

private int m_TerrainHeightMax;
 public int TerrainHeightMax { get{ return m_TerrainHeightMax;}}

private int m_Type;
 public int Type { get{ return m_Type;}}

private int m_Width;
 public int Width { get{ return m_Width;}}

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
 Tab_SceneClass _values = new Tab_SceneClass();
 _values.m_BGMusic =  Convert.ToInt32(valuesList[(int)_ID.ID_BGMUSIC] as string);
_values.m_CopySceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_COPYSCENEID] as string);
_values.m_DeadPunishRule =  Convert.ToInt32(valuesList[(int)_ID.ID_DEADPUNISHRULE] as string);
_values.m_DistortionTexture =  valuesList[(int)_ID.ID_DISTORTIONTEXTURE] as string;
_values.m_EntryX =  Convert.ToSingle(valuesList[(int)_ID.ID_ENTRY_X] as string );
_values.m_EntryZ =  Convert.ToSingle(valuesList[(int)_ID.ID_ENTRY_Z] as string );
_values.m_IsCanCallTeam =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANCALLTEAM] as string);
_values.m_IsCanRide =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANRIDE] as string);
_values.m_IsCanTeamFollow =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANTEAMFOLLOW] as string);
_values.m_IsCanUseLight =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANUSELIGHT] as string);
_values.m_IsCanUseXp =  Convert.ToInt32(valuesList[(int)_ID.ID_ISCANUSEXP] as string);
_values.m_Length =  Convert.ToInt32(valuesList[(int)_ID.ID_LENGTH] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_Obstacle =  valuesList[(int)_ID.ID_OBSTACLE] as string;
_values.m_PVPRule =  Convert.ToInt32(valuesList[(int)_ID.ID_PVPRULE] as string);
_values.m_PlayerViewRadius =  Convert.ToSingle(valuesList[(int)_ID.ID_PLAYERVIEWRADIUS] as string );
_values.m_PlayersMaxA =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYERSMAXA] as string);
_values.m_PlayersMaxB =  Convert.ToInt32(valuesList[(int)_ID.ID_PLAYERSMAXB] as string);
_values.m_ReliveType [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELIVETYPE_1] as string);
_values.m_ReliveType [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELIVETYPE_2] as string);
_values.m_ReliveType [ 2 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_RELIVETYPE_3] as string);
_values.m_ResName =  valuesList[(int)_ID.ID_RESNAME] as string;
_values.m_SafeX =  Convert.ToSingle(valuesList[(int)_ID.ID_SAFE_X] as string );
_values.m_SafeZ =  Convert.ToSingle(valuesList[(int)_ID.ID_SAFE_Z] as string );
_values.m_SceneID =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEID] as string);
_values.m_SceneMapHeight =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEMAPHEIGHT] as string);
_values.m_SceneMapLogicWidth =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEMAPLOGICWIDTH] as string);
_values.m_SceneMapTexture =  valuesList[(int)_ID.ID_SCENEMAPTEXTURE] as string;
_values.m_SceneMapWidth =  Convert.ToInt32(valuesList[(int)_ID.ID_SCENEMAPWIDTH] as string);
_values.m_TerrainHeightMapLength =  Convert.ToInt32(valuesList[(int)_ID.ID_TERRAINHEIGHTMAPLENGTH] as string);
_values.m_TerrainHeightMapWidth =  Convert.ToInt32(valuesList[(int)_ID.ID_TERRAINHEIGHTMAPWIDTH] as string);
_values.m_TerrainHeightMax =  Convert.ToInt32(valuesList[(int)_ID.ID_TERRAINHEIGHTMAX] as string);
_values.m_Type =  Convert.ToInt32(valuesList[(int)_ID.ID_TYPE] as string);
_values.m_Width =  Convert.ToInt32(valuesList[(int)_ID.ID_WIDTH] as string);

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

