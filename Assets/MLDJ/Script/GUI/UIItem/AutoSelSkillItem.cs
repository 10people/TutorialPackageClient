using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.LogicObj;

public class AutoSelSkillItem : MonoBehaviour
{

    public UIToggle m_AutoSkillToggle;
    public UISprite m_AutoSkillSprite;
//    private int m_nSkillID = -1;
    private int m_nOwnIndex = -1;
    // Use this for initialization
    void Start()
    {

    }

    public void OnSkilltoggle()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            if (m_AutoSkillToggle.value == false)
            {
                Singleton<ObjManager>.Instance.MainPlayer.DelAutoSelSkillID(m_nOwnIndex);
            }
            else
            {
                Singleton<ObjManager>.Instance.MainPlayer.SetAutoSelSkillID(m_nOwnIndex);
            }
        } 
    }
    public static AutoSelSkillItem CreateItem(GameObject grid, GameObject resItem, AutoFightLogic parent, int OwnIndex, int nSkillId, bool IsToggle)
    {
        Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nSkillId, 0);
        if (_skillEx != null)
        {
            Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
            if (_skillBase != null && _skillBase.PriorityAutoFight != -1)
            {
                GameObject newItem = Utils.BindObjToParent(resItem, grid, nSkillId.ToString());
                if (null != newItem)
                {
                    AutoSelSkillItem curItemComponent = newItem.GetComponent<AutoSelSkillItem>();
                    if (null != curItemComponent)
                    {
//                        curItemComponent.m_nSkillID = nSkillId;
                        curItemComponent.m_AutoSkillSprite.spriteName = _skillBase.Icon;
                        curItemComponent.m_AutoSkillToggle.value = IsToggle;
                        curItemComponent.m_nOwnIndex = OwnIndex;
                        return curItemComponent;
                    }
                }
            }
        }
        return null;
    }  
}