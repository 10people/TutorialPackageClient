using Games.GlobeDefine;
using Games.Item;
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class SelShenQiStuffItemLogic : MonoBehaviour
{

    public UILabel m_LevelLabel;
    public UILabel m_ItemNameLabel;
    public UILabel m_FightValueLabel;
    public UISprite m_IconSprite;
    public UISprite m_QualityFrameSprite;
    private GameItem m_itemInfo;
    public UIToggle m_SeleToggle;
    
    /// <summary>
    /// 更新上架背包条目信息
    /// </summary>
    /// <param name="item"></param>
    public void UpdateBackPackItem(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            SetItemName(item);
            SetIcon(item);
            SetFightValue(item);
            SetLevel(item);
            SetQualityFrame(item);
            m_itemInfo = item;
            m_SeleToggle.value = false;
        }
    }
    private void SetIcon(GameItem item)
    {
        m_IconSprite.spriteName = TableManager.GetCommonItemByID(item.DataID, 0).Icon;
        m_IconSprite.MakePixelPerfect();
    }

  
    private void SetFightValue(GameItem item)
    {
        int CombatValue = item.GetCombatValue();
        m_FightValueLabel.text = "[ffff69]" + StrDictionary.GetClientDictionaryString("#{1241}", CombatValue);
    }

    private void SetItemName(GameItem item)
    {
        string name = TableManager.GetCommonItemByID(item.DataID, 0).Name;
        m_ItemNameLabel.text = string.Format("[ffff69]{0}", name);
    }

    private void SetLevel(GameItem item)
    {
        int level = TableManager.GetCommonItemByID(item.DataID, 0).MinLevelRequire;
        int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        if (nPlayerLevel >= level)
        {
            m_LevelLabel.text = "[ffff69]";
        }
        else
        {
            m_LevelLabel.text = "[E60012]"; // 红色
        }
        m_LevelLabel.text += StrDictionary.GetClientDictionaryString("#{1242}", level);
    }
    
    public void SetQualityFrame(GameItem item)
    {
        m_QualityFrameSprite.gameObject.SetActive(true);
        m_QualityFrameSprite.spriteName = item.GetQualityFrame();
        m_QualityFrameSprite.MakePixelPerfect();
    }
    /// <summary>
    /// 单击
    /// </summary>
    public void OnItemClick()
    {
        if (LivingSkillLogic.Instance() != null && LivingSkillLogic.Instance().m_SelShenQiStuffObj != null)
        {
            if (LivingSkillLogic.Instance().m_SelShenQiStuffObj.GetComponent<SelShenQiStuffLogic>())
            {
                LivingSkillLogic.Instance().m_SelShenQiStuffObj.GetComponent<SelShenQiStuffLogic>().CleanAllBackItemHighLight();
                LivingSkillLogic.Instance().m_SelShenQiStuffObj.GetComponent<SelShenQiStuffLogic>().SelItemInfo = m_itemInfo;
                m_SeleToggle.value = true;
            }
        }
    }
    public void OnIconClick()
    {
        if (m_itemInfo.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(m_itemInfo, EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.ShowItemTooltip(m_itemInfo, ItemTooltipsLogic.ShowType.Info);
        }
    }
}
