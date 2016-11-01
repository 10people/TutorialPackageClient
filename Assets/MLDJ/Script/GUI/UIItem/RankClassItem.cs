using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame;

public class RankClassItem : MonoBehaviour 
{

    public UILabel      m_NameLabel;
    public GameObject   m_ClickSprite;

    private int m_nClass = (int)PVPData.Rank_Class.INVAILD_TYPE;
   
    public static RankClassItem CreateItem(GameObject grid, GameObject resItem, string name, GameObject _tweenTarget)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null == curItem)
        {
            return null;
        }
        RankClassItem curItemComponent = curItem.GetComponent<RankClassItem>();
        if (null == curItemComponent)
        {
            return null;
        }
        curItem.SetActive(true);
        if (curItem.GetComponent<UIPlayTween>() != null)
        {
            curItem.GetComponent<UIPlayTween>().tweenTarget = _tweenTarget;
            curItem.GetComponent<UIPlayTween>().ifDisabledOnPlay = AnimationOrTween.EnableCondition.DoNothing;
            curItem.GetComponent<UIPlayTween>().disableWhenFinished = AnimationOrTween.DisableCondition.DoNotDisable;
        }
       
        return curItemComponent;
    }

    void Start()
    {
    }

    public void SetData(string strName, int nClass)
    {
        m_NameLabel.text = strName;
        m_nClass = nClass;
        m_ClickSprite.SetActive(false);
    }

    public void ClickClassBt()
    {
        if (null == RankWindow.Instance())
        {
            return;
        }
        Transform GridTrans = null;
        if (GetComponent<UIPlayTween>() != null && GetComponent<UIPlayTween>().tweenTarget != null)
        {
            GridTrans = GetComponent<UIPlayTween>().tweenTarget.transform;
        }
        if (null == GridTrans)
        {
            RankWindow.Instance().OnClickRankClassBt(m_nClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID);
            m_ClickSprite.SetActive(true);
        }
        for (int i = 0; i < GridTrans.childCount; i++)
        {
            if (GridTrans.GetChild(i) != null)
            {
                RankSubClassItem subitem = GridTrans.GetChild(i).GetComponent<RankSubClassItem>();
                if (subitem != null && subitem.gameObject != null && subitem.gameObject.activeInHierarchy)
                {
                    subitem.ClickSubClassBt();
                    return;
                }
            }              
        }
        RankWindow.Instance().OnClickRankClassBt(m_nClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID);
    }

    public void OnCancelSelect()
    {
        if (m_ClickSprite != null)
        {
            m_ClickSprite.SetActive(false);
        }
    }
}
