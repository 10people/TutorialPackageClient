//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_DamageBoardType
{ private const string TAB_FILE_DATA = "Tables/DamageBoardType.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_DAMAGEBOARDTYPEID,
ID_ORIGINX=2,
ID_ORIGINY,
ID_VELOCITYX,
ID_VELOCITYY,
ID_ACCELERATIONX,
ID_ACCELERATIONY,
ID_SHOWTIME,
ID_FADETIME,
ID_TEXTCOLOR,
ID_OUTLINECOLOR,
ID_TEXTSIZE,
ID_MAXNUM,
ID_SCALEDELAYTIME,
ID_TEXTSIZEMAX,
ID_SCALEPLUSTIME,
ID_TEXTSIZEOVER,
ID_SCALEMINUSTIME,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private float m_AccelerationX;
 public float AccelerationX { get{ return m_AccelerationX;}}

private float m_AccelerationY;
 public float AccelerationY { get{ return m_AccelerationY;}}

private int m_DamageBoardTypeID;
 public int DamageBoardTypeID { get{ return m_DamageBoardTypeID;}}

private float m_FadeTime;
 public float FadeTime { get{ return m_FadeTime;}}

private int m_MaxNum;
 public int MaxNum { get{ return m_MaxNum;}}

private float m_OriginX;
 public float OriginX { get{ return m_OriginX;}}

private float m_OriginY;
 public float OriginY { get{ return m_OriginY;}}

private string m_OutlineColor;
 public string OutlineColor { get{ return m_OutlineColor;}}

private float m_ScaleDelayTime;
 public float ScaleDelayTime { get{ return m_ScaleDelayTime;}}

private float m_ScaleMinusTime;
 public float ScaleMinusTime { get{ return m_ScaleMinusTime;}}

private float m_ScalePlusTime;
 public float ScalePlusTime { get{ return m_ScalePlusTime;}}

private float m_ShowTime;
 public float ShowTime { get{ return m_ShowTime;}}

private string m_TextColor;
 public string TextColor { get{ return m_TextColor;}}

private float m_TextSize;
 public float TextSize { get{ return m_TextSize;}}

private float m_TextSizeMax;
 public float TextSizeMax { get{ return m_TextSizeMax;}}

private float m_TextSizeOver;
 public float TextSizeOver { get{ return m_TextSizeOver;}}

private float m_VelocityX;
 public float VelocityX { get{ return m_VelocityX;}}

private float m_VelocityY;
 public float VelocityY { get{ return m_VelocityY;}}

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
 Tab_DamageBoardType _values = new Tab_DamageBoardType();
 _values.m_AccelerationX =  Convert.ToSingle(valuesList[(int)_ID.ID_ACCELERATIONX] as string );
_values.m_AccelerationY =  Convert.ToSingle(valuesList[(int)_ID.ID_ACCELERATIONY] as string );
_values.m_DamageBoardTypeID =  Convert.ToInt32(valuesList[(int)_ID.ID_DAMAGEBOARDTYPEID] as string);
_values.m_FadeTime =  Convert.ToSingle(valuesList[(int)_ID.ID_FADETIME] as string );
_values.m_MaxNum =  Convert.ToInt32(valuesList[(int)_ID.ID_MAXNUM] as string);
_values.m_OriginX =  Convert.ToSingle(valuesList[(int)_ID.ID_ORIGINX] as string );
_values.m_OriginY =  Convert.ToSingle(valuesList[(int)_ID.ID_ORIGINY] as string );
_values.m_OutlineColor =  valuesList[(int)_ID.ID_OUTLINECOLOR] as string;
_values.m_ScaleDelayTime =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEDELAYTIME] as string );
_values.m_ScaleMinusTime =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEMINUSTIME] as string );
_values.m_ScalePlusTime =  Convert.ToSingle(valuesList[(int)_ID.ID_SCALEPLUSTIME] as string );
_values.m_ShowTime =  Convert.ToSingle(valuesList[(int)_ID.ID_SHOWTIME] as string );
_values.m_TextColor =  valuesList[(int)_ID.ID_TEXTCOLOR] as string;
_values.m_TextSize =  Convert.ToSingle(valuesList[(int)_ID.ID_TEXTSIZE] as string );
_values.m_TextSizeMax =  Convert.ToSingle(valuesList[(int)_ID.ID_TEXTSIZEMAX] as string );
_values.m_TextSizeOver =  Convert.ToSingle(valuesList[(int)_ID.ID_TEXTSIZEOVER] as string );
_values.m_VelocityX =  Convert.ToSingle(valuesList[(int)_ID.ID_VELOCITYX] as string );
_values.m_VelocityY =  Convert.ToSingle(valuesList[(int)_ID.ID_VELOCITYY] as string );

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

