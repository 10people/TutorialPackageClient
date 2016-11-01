#region
/*************************************************************************************
   * filename:          EffectDefine
   * date:              5/20/2015 10:36:27 AM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using GCGame.Table;
using UnityEngine;
/// <summary>
/// 特效 播放目标点类型
/// </summary>
public enum EEffectBindTargetType
{
    TYPE_CHARACTER = 0,
    TYPE_MOUNT = 1,
    TYPE_WEAPON = 2,
    TYPE_UI,
}

public class PlayEffectData
{
    public PlayEffectData(string effectPath, GameObject parentObj, Vector3 effectPos, Vector3 effectRot, float duration, float delay = 0)
    {
        _effectPath = effectPath;
        _parentObj = parentObj;
        _effectPos = effectPos;
        _effectRot = effectRot;
        _duration = duration;
        _delay = delay;
    }

    public string _effectPath;
    public GameObject _parentObj;
    public Vector3 _effectPos;
    public Vector3 _effectRot;
    public float _duration;
    public float _delay;
}

public class AddEffectData
{
    public AddEffectData(GameObject parentObj, Tab_Effect effectData, PlayEffectDelegate delPlayEffect, object param)
    {
        _parentObj = parentObj;
        _effectData = effectData;
        _delPlayEffect = delPlayEffect;
        _param = param;
    }

    public GameObject _parentObj;
    public Tab_Effect _effectData;
    public PlayEffectDelegate _delPlayEffect;
    public object _param;

}

public enum EEffectChangeType
{
    TYPE_NORMAL = 0,
    TYPE_CHANGEMODEL = 1,
    TYPE_CHANGBLUE = 2,//材质变蓝
    TYPE_CHANGRED = 3,//材质变红
    TYPE_TARGETAREA = 4,//由目标确定的区域特效
}


public delegate void PlayEffectDelegate(GameObject effectObj, object param);