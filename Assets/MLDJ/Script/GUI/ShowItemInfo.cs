using UnityEngine;
using System.Collections;
using Games.Item;
using GCGame.Table;
using Games.GlobeDefine;

public class ShowItemInfo : MonoBehaviour
{
    EquipStrengthenItemLogic itemLogic;
    public GameItem m_item;
    public EquipStrengthenItemLogic.Type m_type;
    public UILabel countLabel;
    public GameObject equipInfoPart;
    public GameObject materialInfoPart;
    public UILabel materialLevel;
    public UILabel materialExp;

    public UILabel equipStarNum;
    public UILabel zhanLiNum;
    public UILabel useLevelNum;

    public UILabel baseInfoName;
    public UILabel baseInfoCount;
    public UISprite baseInfoIcon;
    public UISprite baseInfoQuality;

    public GameObject[] m_AttrWhole;
    public UILabel[] m_Attr;
    public UILabel[] m_AttrValue;
    public UILabel[] m_EnchanceAttr;

    int curCount = 1;

    public void UpdateItemInfo(EquipStrengthenItemLogic itemLogic)
    {
        if (itemLogic != null)
        {
            this.itemLogic = itemLogic;

            m_item = itemLogic.getGameItem();
            m_type = itemLogic.GetMType();

            if (m_type == EquipStrengthenItemLogic.Type.TYPE_ENC_EQUIP_BACKPACK)//如果是装备，则设置对应信息
            {
                UpdateEquipInfo(itemLogic);
            }
            else if (m_type == EquipStrengthenItemLogic.Type.TYPE_ENC_METARIAL_BACKPACK)//如果是材料，则显示对应信息
            {
                UpdateMaterialInfo(itemLogic);

            }
            SetBaseInfo(itemLogic);
            RefreshCountLabel(1);

        }
    }

    public void OnPreButtonClick()
    {
        RefreshCountLabel(curCount - 1);
    }

    public void OnNextButtonClick()
    {
        RefreshCountLabel(curCount + 1);
    }

    private void RefreshCountLabel(int count)
    {
        if (count < 1)
        {
            count = 1;
        }

        if (count > m_item.StackCount)
        {
            count = m_item.StackCount;
        }

        curCount = count;
        countLabel.text = curCount.ToString();
        itemLogic.SetSelectedCount(count);
        SetExpNum(m_item.GetMaterialExp(), count);
    }

    void UpdateEquipInfo(EquipStrengthenItemLogic itemLogic)
    {
        NGUITools.SetActive(equipInfoPart, true);
        NGUITools.SetActive(materialInfoPart, false);

        equipStarNum.text = itemLogic.getGameItem().StarLevel.ToString();
        zhanLiNum.text = itemLogic.getGameItem().GetCombatValue().ToString();
        useLevelNum.text = itemLogic.getGameItem().GetEquipLevel().ToString();

        ShowEquipAttrInfo(itemLogic);
    }

    void UpdateMaterialInfo(EquipStrengthenItemLogic itemLogic)
    {
        NGUITools.SetActive(materialInfoPart, true);
        NGUITools.SetActive(equipInfoPart, false);
        if (materialLevel != null)
        {
            materialLevel.text = "Lv." + itemLogic.getGameItem().GetEquipLevel().ToString();
        }
        SetExpNum(itemLogic.getGameItem().GetMaterialExp(), 1);
    }

    void SetExpNum(int exp, int count)
    {
        materialExp.text ="+" + (exp * count).ToString();
    }

    void SetBaseInfo(EquipStrengthenItemLogic itemLogic)
    {
        baseInfoName.text = itemLogic.getGameItem().GetName();
        baseInfoCount.text = itemLogic.getGameItem().StackCount.ToString();
        baseInfoIcon.spriteName = itemLogic.getGameItem().GetIcon();
        baseInfoQuality.spriteName = itemLogic.getGameItem().GetQualityFrame();
    }

    void ShowEquipAttrInfo(EquipStrengthenItemLogic itemLogic)
    {
        ClearInfo();
        int itemId = itemLogic.getGameItem().DataID;
        Tab_EquipAttr line = TableManager.GetEquipAttrByID(itemId, 0);
        if (line != null)
        {
            int index = 0;
            //血上限
            if (line.HP > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.HP, "HP");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAXHP);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.HP * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.HP);
                ++index;
            }
            //血上限(百分比)
            if (line.HPPer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.HPPer, "HPPer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAXHP);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.HPPer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //蓝上限
            if (line.MP > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MP, "MP");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAXMP);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.MP * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.MP);
                ++index;
            }
            //蓝上限(百分比)
            if (line.MPPer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MPPer, "MPPer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAXMP);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.MPPer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //物理攻击
            if (line.PhysicsAttack > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.PhysicsAttack, "PhysicsAttack");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.PYSATTACK);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.PhysicsAttack * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.PhysicsAttack);
                ++index;
            }
            //物理攻击(百分比)
            if (line.PhysicsAttackPer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.PhysicsAttackPer, "PhysicsAttackPer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.PYSATTACK);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.PhysicsAttackPer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //法术攻击
            if (line.MagicAttack > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MagicAttack, "MagicAttack");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAGATTACK);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.MagicAttack * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.MagicAttack);
                ++index;
            }
            //法术攻击(百分比)
            if (line.MagicAttackPer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MagicAttackPer, "MagicAttackPer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAGATTACK);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.MagicAttackPer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //物理防御
            if (line.PhysicsDefence > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.PhysicsDefence, "PhysicsDefence");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.PYSDEF);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.PhysicsDefence * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.PhysicsDefence);
                ++index;
            }
            //物理防御(百分比)
            if (line.PhysicsDefencePer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.PhysicsDefencePer, "PhysicsDefencePer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.PYSDEF);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.PhysicsDefencePer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //法术防御
            if (line.MagicDefence > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MagicDefence, "MagicDefence");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAGDEF);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.MagicDefence * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.MagicDefence);
                ++index;
            }
            //法术防御(百分比)
            if (line.MagicDefencePer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.MagicDefencePer, "MagicDefencePer");
                m_Attr[index].text = ItemTool.ConvertAttrToString(COMBATATTE.MAGDEF);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.MagicDefencePer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //全攻击
            if (line.AllAttack > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.AllAttack, "AllAttack");
                m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)1000);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.AllAttack * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.AllAttack);
                ++index;
            }
            //全攻击(百分比)
            if (line.AllAttackPer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.AllAttackPer, "AllAttackPer");
                m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)1000);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.AllAttackPer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //全防御
            if (line.AllDefence > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.AllDefence, "AllDefence");
                m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)1001);
                m_AttrValue[index].text = string.Format("+{0}", (int)(line.AllDefence * itemLogic.getGameItem().GetAttrFactorRefix()));
                m_AttrWhole[index].SetActive(true);
                //强化
                //SetEnchanceAndStarAttr(item, index, line.AllDefence);
                ++index;
            }
            //全防御(百分比)
            if (line.AllDefencePer > 0 && index < m_Attr.Length && index >= 0)
            {
                //string strColor = GetAttrColor(bUnEquiped, compareEquip, line.AllDefencePer, "AllDefencePer");
                m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)1001);
                m_AttrValue[index].text = string.Format("+{0}%", (int)(line.AllDefencePer * 100));
                m_AttrWhole[index].SetActive(true);
                ++index;
            }
            //附加属性
            for (int attrIndex = 0; attrIndex < line.getAddAttrTypeCount(); ++attrIndex)
            {
                int attrType = line.GetAddAttrTypebyIndex(attrIndex);
                float attrValue = line.GetAddAttrValuebyIndex(attrIndex);
                if ((attrType >= (int)COMBATATTE.MAXHP && attrType < (int)COMBATATTE.COMBATATTE_MAXNUM) || attrType == 1000 || attrType == 1001)
                {
                    if (attrValue > 0)
                    {
                        if (index < m_Attr.Length && index >= 0)
                        {
                            //策划要求隐藏装备攻速属性
                            if (attrType == (int)COMBATATTE.ATTACKSPEED)
                            {
                                continue;
                            }

                            //string strColor = GetAttrColor(bUnEquiped, compareEquip, attrValue, "AddAttr", attrIndex);
                            m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)attrType);
                            m_AttrValue[index].text = string.Format("+{0}", (int)attrValue);
                            m_AttrWhole[index].SetActive(true);
                            if (attrType != (int)COMBATATTE.ATTACKSPEED) //策划要求 攻速不受强化和打星影响
                            {
                                //强化
                                //SetEnchanceAndStarAttr(item, index, attrValue, true);
                                //策划要求 附加属性不受打星影响
                            }
                            ++index;
                        }
                    }
                }
            }
            //附加属性(百分比)
            for (int attrIndex = 0; attrIndex < line.getAddAttrTypeCount(); ++attrIndex)
            {
                int attrType = line.GetAddAttrTypebyIndex(attrIndex);
                float attrPer = line.GetAddAttrPerbyIndex(attrIndex);
                if (attrType >= (int)COMBATATTE.MAXHP && attrType < (int)COMBATATTE.COMBATATTE_MAXNUM && attrPer > 0)
                {
                    if (index < m_Attr.Length && index >= 0)
                    {
                        //string strColor = GetAttrColor(bUnEquiped, compareEquip, attrPer, "AddAttrPer", attrIndex);

                        m_Attr[index].text = ItemTool.ConvertAttrToString((COMBATATTE)attrIndex);
                        m_AttrValue[index].text = string.Format("+{0}%", (int)(attrPer * 100));
                        m_AttrWhole[index].SetActive(true);
                        ++index;
                    }
                }
            }
        }
    }

    public void ClearInfo()
    {
        for (int i = 0; i < m_Attr.Length; ++i)
        {
            m_Attr[i].text = "";
            m_EnchanceAttr[i].text = "";
            m_AttrValue[i].text = "";
            m_AttrWhole[i].SetActive(false);
        }
    }
}