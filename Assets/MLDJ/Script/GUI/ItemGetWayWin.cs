using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using GCGame;
using Games.LogicObj;

public class ItemGetWayWin : MonoBehaviour
{
    public Tab_SkillEx m_SelectSkillEx;
    public UIGrid m_itemGrid;
    public GameObject m_itemObj;
    public List<Tab_ItemGetWay> m_itemGetWayList = new List<Tab_ItemGetWay>();
    // Use this for initialization
    void Start()
    {
        
    }

    void OnEnable()
    {
        if (SkillLevelUpRoot.Instance() != null)
        {
          m_SelectSkillEx =  SkillLevelUpRoot.Instance().SelectSkillEx;
        }

        SetGetItemWinData();
    }
    // Update is called once per frame
    void Update()
    {

    }

    public void SetGetItemWinData()
    {
        if (null == m_itemGetWayList)
        {
            m_itemGetWayList = new List<Tab_ItemGetWay>();
        }
        else
        {
            m_itemGetWayList.Clear();
        }

        if (null == m_SelectSkillEx)
        {
            return;
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == _mainPlayer)
        {
            return;
        }


        int nSkillActiveCount = TableManager.GetSkillActive().Count;
        int nUsebelItemId = -1;
        for (int i = 0; i <= nSkillActiveCount; i++)
        {
            Tab_SkillActive _skillActive = TableManager.GetSkillActiveByID(i, 0);
            if (null != _skillActive && _skillActive.Profession == _mainPlayer.Profession && m_SelectSkillEx.SkillExID == _skillActive.SkillId)
            {
                nUsebelItemId = _skillActive.SkillItemID;
                break;
            }
        }

        Tab_UsableItem _useAbleItem = TableManager.GetUsableItemByID(nUsebelItemId, 0);
        if (null == _useAbleItem)
        {
            return;
        }

        List<int> wayIdList = Utils.GetWayIdByWayIds(_useAbleItem.UseParamE.ToString());

        for (int i = 0; wayIdList != null && i < wayIdList.Count; i++)
        {
            Tab_ItemGetWay _itemGetWay = TableManager.GetItemGetWayByID(wayIdList[i], 0);

            if (null != _itemGetWay)
            {
                m_itemGetWayList.Add(_itemGetWay);
            }
        }

        Utils.CleanGrid(m_itemGrid.gameObject);

        for (int i = 0; i < m_itemGetWayList.Count; i++)
        {
            Tab_ItemGetWay _tabItemGetWay = m_itemGetWayList[i];
            if (null != _tabItemGetWay)
            {
               GameObject obj =  Utils.BindObjToParent(m_itemObj, m_itemGrid.gameObject, _tabItemGetWay.Id.ToString());
               if (obj != null)
               {
                   ItemGetWayItem itemGetWayItem = obj.GetComponent<ItemGetWayItem>();
                   if (null != itemGetWayItem)
                   {
                       itemGetWayItem.SetData(_tabItemGetWay);
                   }
                }
            }
        }

        m_itemGrid.Reposition();
    }
}
