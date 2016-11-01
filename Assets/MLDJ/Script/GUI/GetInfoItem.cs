using UnityEngine;
using System;
using System.Collections;
using GCGame.Table;

public class GetInfoItem : MonoBehaviour 
{
#region UI ref
    public UISprite sprIcon;
    public UILabel lblInfo;
    public GameObject btnGo;
#endregion
    public Action closeUIHandler;
    Tab_ItemGetWay mWay;

#region functions
    public void SetData(Tab_ItemGetWay way)
    {
        mWay = way;
        sprIcon.spriteName = way.WayIcon;
        lblInfo.text = StrDictionary.GetClientDictionaryString("#{" + way.WayDescDictId + "}");
        UIEventListener.Get(btnGo).onClick = GoToWay;
    }

    void GoToWay(GameObject go)
    {
        switch (mWay.WayType)
        {
            case 1:
                if (UIPathData.m_DicUIName.ContainsKey(mWay.WayValue))
                {
                    UIManager.ShowUI(UIPathData.m_DicUIName[mWay.WayValue]);
                }
                break;
            case 2:
                MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{" + mWay.WayValue + "}"));
                break;
            case 3:
                int sceneId = int.Parse(mWay.WayValue);
                Tab_SceneClass tabSceneClass = TableManager.GetSceneClassByID(sceneId, 0);
                if (tabSceneClass != null)
                {
                    SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.WORLDMAP, 0, sceneId, 0);
                }
                if (closeUIHandler != null)
                {
                    closeUIHandler();
                }
                break;
        }
    }
#endregion
}
