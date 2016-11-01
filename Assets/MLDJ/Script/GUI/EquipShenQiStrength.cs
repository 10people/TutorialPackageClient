using System;
using Games.GlobeDefine;
using Games.Item;
using GCGame;
using GCGame.Table;
using UnityEngine;
using System.Collections;

public class EquipShenQiStrength : UIControllerBase<EquipShenQiStrength> 
{
    public ItemSlotLogic m_ShenQiSlot;
    public UILabel m_ShenQiNameLable;
    public UILabel m_ShenQiSkillNameLable;
    public UILabel m_ShenQiSkillLevLable;
    public UILabel m_ShenQiSkillDecLable;
    public UILabel m_SheiQiSkillUpSuiPianLabel;
    public UILabel m_CoinNumLabel;
    public UILabel m_YBNumLable;
    public UILabel m_ExpNumLable;
    public UILabel[] m_AttrTypeLable = new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];
    public UILabel[] m_AttrNumLable = new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];
    public UIToggle[] m_AttrToggle = new UIToggle[(int)ShenQiInfo.MAXRANDATTRNUM];

    public UILabel[] m_OldAttrTypeLable =new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];
    public UILabel[] m_OldAttrNumLable = new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];
    public UILabel[] m_NewAttrTypeLable = new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];
    public UILabel[] m_NewAttrNumLable = new UILabel[(int)ShenQiInfo.MAXRANDATTRNUM];

    public UILabel m_ShowLockInfLable;
    public UILabel m_CoinNeedLable;
    public UILabel m_YBNeedLable;
    public UILabel m_ExpNeedLable;
    public GameObject m_ShowNewAttrRoot;
    public UILabel    m_ShenQiCombatValueLable;
    public GameObject m_ShowSkillInfoNextBt;
    public GameObject m_ShowSkillInfoBackBt;
    public UILabel    m_ChangeCombatValueLable;
    public UISprite   m_ChangeCombatValueSpriteUp;
    public UISprite   m_ChangeCombatValueSpriteDown;
    public GameObject m_ShowHelp;
    private GameItem m_ShenQiItem =null;
    private int m_nLockNum =0;
    private int m_nLastWastType = -1;
    private bool m_bOldAttrImport =false;
    private bool m_bNewAttrImport = false;
    void Awake()
    {
        SetInstance(this);
    }
    void OnDestroy()
    {
        SetInstance(null);
    }

    void OnEnable()
    {
        GameItem _item = GameManager.gameManager.PlayerDataPool.EquipPack.GetItem(0);
        if (_item != null && _item.IsValid() && _item.IsShenQiEquipMent())
        {
            m_ShenQiItem = _item;
        }
        m_ShowNewAttrRoot.SetActive(false);
        UpdateShenQiViewInfo();
        UpdateLockShowInfo();
    }
    void ClearnInfo()
    {
        m_ShenQiSlot.InitInfo(ItemSlotLogic.SLOT_TYPE.TYPE_ITEM, -1);
        m_ShenQiNameLable.text = StrDictionary.GetClientDictionaryString("#{4966}");
        m_ShenQiSkillNameLable.text = StrDictionary.GetClientDictionaryString("#{4960}"); //无
        m_ShenQiSkillLevLable.text ="0/0";
        m_ShenQiSkillDecLable.text = StrDictionary.GetClientDictionaryString("#{5235 }"); 
        m_SheiQiSkillUpSuiPianLabel.text ="0";
        //经验 元宝 经验
        m_CoinNumLabel.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        m_YBNumLable.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
        m_ExpNumLable.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Exp);
        for (int i = 0; i < (int) ShenQiInfo.MAXRANDATTRNUM; i++)
        {
            m_AttrTypeLable[i].text = StrDictionary.GetClientDictionaryString("#{4960}"); //无
            m_AttrNumLable[i].gameObject.SetActive(false);
            m_AttrToggle[i].value = false;
            m_AttrToggle[i].gameObject.SetActive(false);
        }
        m_CoinNeedLable.text ="0";
        m_YBNeedLable.text   ="0"; 
        m_ExpNeedLable.text  ="0";
        m_ShenQiCombatValueLable.text = "0";
        m_ShowSkillInfoNextBt.SetActive(false);
        m_ShowSkillInfoBackBt.SetActive(false);
        m_ShowHelp.SetActive(false);
    }

    public void UpdateMoneyShow()
    {
        m_CoinNumLabel.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        m_YBNumLable.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
    }
    public void UpdateExpShow()
    {
        m_ExpNumLable.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Exp);
    }

    public void UpdateShenQiViewInfo()
    {
        ClearnInfo();
        if (m_ShenQiItem==null)
        {
            return;
        }
        if (m_ShenQiItem.IsValid() ==false)
        {
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo ==null)
        {
            return;
        }
        m_ShenQiSlot.InitInfo(ItemSlotLogic.SLOT_TYPE.TYPE_ITEM, m_ShenQiItem.DataID,ShowShenQiTipsInf);
        m_ShenQiNameLable.text = Utils.GetItemNameColor((int)m_ShenQiItem.GetQuality()) + m_ShenQiItem.GetName();//神器名字
        //技能信息
        int SkillInfIndex = (int) ShenQiDyData.SkillId;
        if (SkillInfIndex>=0 && SkillInfIndex<m_ShenQiItem.DynamicData.Length)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(m_ShenQiItem.DynamicData[(int) ShenQiDyData.SkillId], 0);
            if (_skillEx !=null)
            {
                Tab_SkillBase _SkillBase =TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                if (_SkillBase!=null)
                {
                    m_ShenQiSkillNameLable.text =_SkillBase.Name;
                    m_ShenQiSkillLevLable.text  =_skillEx.Level.ToString()+"/"+_ShenQiInfo.MaxSkillLev.ToString();
                    m_ShenQiSkillDecLable.text  =_skillEx.SkillDesc;
                    Tab_ShenQiSkillInfo _ShenQiSkillInfo = TableManager.GetShenQiSkillInfoByID(_skillEx.SkillExID, 0);
                    if (_ShenQiSkillInfo !=null)
                    {
                        int nSuiPianNum = _ShenQiSkillInfo.NeedItemNum;
                        int nSuiPianOwnNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiSkillInfo.NeedItemId);
                        if (nSuiPianNum<=nSuiPianOwnNum)
                        {
                            m_SheiQiSkillUpSuiPianLabel.text  ="[32A100]"+nSuiPianNum;
                        }
                        else
                        {
                            m_SheiQiSkillUpSuiPianLabel.text  ="[FF2222]"+nSuiPianNum;
                        }
                        if (_ShenQiSkillInfo.NextSkillId != -1)
                        {
                            m_ShowSkillInfoNextBt.SetActive(true);
                        }
                    }
                }
            }
        }
        //经验 元宝 经验
        m_CoinNumLabel.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin()); 
        m_YBNumLable.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
        m_ExpNumLable.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Exp);
        //属性条
        for (int i = 0; i < (int) ShenQiInfo.MAXRANDATTRNUM; i++)
        {
            if (i + (int)ShenQiDyData.Attr1Info>=0 && i + (int)ShenQiDyData.Attr1Info < m_ShenQiItem.DynamicData.Length)
            {
                int AttrRandData = m_ShenQiItem.DynamicData[i + (int)ShenQiDyData.Attr1Info];
                if (AttrRandData>0)
                {
                    int AttrType = m_ShenQiItem.GetShenQiRandAttrType(AttrRandData);
                    int AttrNum = m_ShenQiItem.GetShenQiRandAttrNum(AttrRandData);
                    int AttrQuality = m_ShenQiItem.GetShenQiRandAttrQuality(AttrRandData);
                    m_AttrTypeLable[i].text = Utils.GetItemNameColor(AttrQuality+1) + Utils.GetAttrTypeString(AttrType);
                    //if (1+_ShenQiInfo.ShenQiRefixPer>0 && _ShenQiInfo.ShenQiRefixPer>0)
                    //{
                    //    int nBaseAttr = (int) ((AttrNum*1.0f)/(1 + _ShenQiInfo.ShenQiRefixPer));
                    //    int nFixAttr = (int) (AttrNum*_ShenQiInfo.ShenQiRefixPer);
                    //    m_AttrNumLable[i].text = Utils.GetItemNameColor(AttrQuality+1) + "+" + nBaseAttr.ToString() + "+" + nFixAttr.ToString(); 
                    //}
                    //else
                    {
                        int nMaxNum = (int)(_ShenQiInfo.GetAttrMaxValuebyIndex(AttrType)*(1 + _ShenQiInfo.ShenQiRefixPer));
                        m_AttrNumLable[i].text = Utils.GetItemNameColor(AttrQuality + 1) + "+" + AttrNum + "[FF9933]" + StrDictionary.GetClientDictionaryString("#{5217}", nMaxNum);
                    }
                    m_AttrTypeLable[i].gameObject.SetActive(true);
                    m_AttrNumLable[i].gameObject.SetActive(true);
                    m_AttrToggle[i].gameObject.SetActive(true);
                }
                else
                {
                    m_AttrTypeLable[i].gameObject.SetActive(false);
                    m_AttrNumLable[i].gameObject.SetActive(false);
                    m_AttrToggle[i].gameObject.SetActive(false);
                }
            }
        }
        m_CoinNeedLable.text =_ShenQiInfo.CoinCostMoney.ToString();
        m_YBNeedLable.text =_ShenQiInfo.YBCostMoney.ToString();
        m_ExpNeedLable.text =_ShenQiInfo.ExpCostNum.ToString();
        m_ShenQiCombatValueLable.text = m_ShenQiItem.GetCombatValue_ForShenQi().ToString();
    }

    void ShowShenQiTipsInf(int nItemID, ItemSlotLogic.SLOT_TYPE eItemType, string strSlotName)
    {
        if (m_ShenQiItem!=null && m_ShenQiItem.IsValid())
        {
            EquipTooltipsLogic.ShowEquipTooltip(m_ShenQiItem, EquipTooltipsLogic.ShowType.Info);
        }
    }
    public void UpdateNewAttrViewInfo(GC_SHENQI_SHOWNEWATTR pak)
    {
        if (m_ShenQiItem == null )
        {
            return;
        }
        if (m_ShenQiItem.IsShenQiEquipMent() ==false)
        {
            return;
        }
        int nNewAttrCombatValue = 0;
        m_bNewAttrImport = false;
        m_bOldAttrImport = false;
        //属性条
        for (int i = 0; i < (int)ShenQiInfo.MAXRANDATTRNUM; i++)
        {
            m_NewAttrTypeLable[i].gameObject.SetActive(false);
            m_NewAttrNumLable[i].gameObject.SetActive(false);
            m_OldAttrTypeLable[i].gameObject.SetActive(false);
            m_OldAttrNumLable[i].gameObject.SetActive(false);
            if (i >= 0 && i<pak.attrTypeCount)
            {
                int AttrType = pak.GetAttrType(i);
                int AttrNum = pak.GetAttrNum(i);
                int AttrQuality =pak.GetAttrQuality(i);
                if (AttrType >= 0)
                {
                    m_NewAttrTypeLable[i].text =Utils.GetItemNameColor(AttrQuality+1) + Utils.GetAttrTypeString(AttrType);
                    //if (m_ShenQiItem!=null && m_ShenQiItem.IsShenQiEquipMent())
                    //{
                    //    Tab_ShenQiInfo _shenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
                    //    if (_shenQiInfo!=null)
                    //    {
                    //        if (1 + _shenQiInfo.ShenQiRefixPer > 0 && _shenQiInfo.ShenQiRefixPer > 0)
                    //        {
                    //            int nBaseAttr = (int)((AttrNum * 1.0f) / (1 + _shenQiInfo.ShenQiRefixPer));
                    //            int nFixAttr = (int)(AttrNum * _shenQiInfo.ShenQiRefixPer);
                    //            m_NewAttrNumLable[i].text = Utils.GetItemNameColor(AttrQuality+1) +"+"+nBaseAttr.ToString()+"+"+nFixAttr.ToString();
                    //        }
                    //        else
                            {
                                m_NewAttrNumLable[i].text = Utils.GetItemNameColor(AttrQuality+1) + "+" + AttrNum;
                            }
                            m_NewAttrTypeLable[i].gameObject.SetActive(true);
                            m_NewAttrNumLable[i].gameObject.SetActive(true);
                      //  }
                      
                  //  }

                    nNewAttrCombatValue += GameItem.GetCombatValueByAttrTypeAndNum(AttrType, AttrNum);
                    if (AttrQuality >= (int)ShenQiRandAttrQuality.QUALITY_PURPLE && m_AttrToggle[i].value == false)
                    {
                        m_bNewAttrImport = true;
                    }
                }
            }
            if (i + (int)ShenQiDyData.Attr1Info>=0 && i + (int)ShenQiDyData.Attr1Info<m_ShenQiItem.DynamicData.Length)
            {
                int AttrRandData = m_ShenQiItem.DynamicData[i + (int)ShenQiDyData.Attr1Info];
                if (AttrRandData > 0)
                {
                    int AttrType = m_ShenQiItem.GetShenQiRandAttrType(AttrRandData);
                    int AttrNum = m_ShenQiItem.GetShenQiRandAttrNum(AttrRandData);
                    int AttrQuality = m_ShenQiItem.GetShenQiRandAttrQuality(AttrRandData);
                    m_OldAttrTypeLable[i].text = Utils.GetItemNameColor(AttrQuality + 1)+Utils.GetAttrTypeString(AttrType);
                    m_OldAttrNumLable[i].text = Utils.GetItemNameColor(AttrQuality + 1)+"+"+AttrNum;
                    m_OldAttrTypeLable[i].gameObject.SetActive(true);
                    m_OldAttrNumLable[i].gameObject.SetActive(true);
                    if (AttrQuality >= (int) ShenQiRandAttrQuality.QUALITY_PURPLE && m_AttrToggle[i].value == false)
                    {
                        m_bOldAttrImport = true;
                    }
                }
            }
        }
        int nOldAttrCombatVaule = m_ShenQiItem.GetCombatValue_ForShenQiNoSkill();
        if (nNewAttrCombatValue>nOldAttrCombatVaule)
        {
            m_ChangeCombatValueLable.text = "[FF2222]"+StrDictionary.GetClientDictionaryString("#{5212}",nNewAttrCombatValue-nOldAttrCombatVaule);
            m_ChangeCombatValueSpriteDown.gameObject.SetActive(false);
            m_ChangeCombatValueSpriteUp.gameObject.SetActive(true);
        }
        else if (nNewAttrCombatValue == nOldAttrCombatVaule)
        {
            m_ChangeCombatValueLable.text = "[32A100]" + StrDictionary.GetClientDictionaryString("#{5218}");
            m_ChangeCombatValueSpriteUp.gameObject.SetActive(false);
            m_ChangeCombatValueSpriteDown.gameObject.SetActive(false);
        }
        else
        {
            m_ChangeCombatValueLable.text = "[32A100]"+StrDictionary.GetClientDictionaryString("#{5213}",nOldAttrCombatVaule-nNewAttrCombatValue);
            m_ChangeCombatValueSpriteUp.gameObject.SetActive(false);
            m_ChangeCombatValueSpriteDown.gameObject.SetActive(true);
        }
        m_ShowNewAttrRoot.SetActive(true);
    }

    void UpdateLockShowInfo()
    {
        if (m_ShenQiItem == null)
        {
            m_ShowLockInfLable.text = StrDictionary.GetClientDictionaryString("#{4965}", 0, 0);
            return;
        }
        if (m_ShenQiItem.IsValid() ==false)
        {
            m_ShowLockInfLable.text = StrDictionary.GetClientDictionaryString("#{4965}", 0, 0);
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo != null)
        {
            m_ShowLockInfLable.text = StrDictionary.GetClientDictionaryString("#{4965}", m_nLockNum, m_nLockNum*_ShenQiInfo.LockNeedItemNum);
        }
        else
        {
            m_ShowLockInfLable.text = StrDictionary.GetClientDictionaryString("#{4965}", 0, 0);
        }
    }

    private void LevelUpShenQiSkill()
    {
        if (m_ShenQiItem == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        if (m_ShenQiItem.IsValid()==false)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        //技能信息
        int SkillInfIndex = (int) ShenQiDyData.SkillId;
        if (SkillInfIndex >= 0 && SkillInfIndex < m_ShenQiItem.DynamicData.Length)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(m_ShenQiItem.DynamicData[(int) ShenQiDyData.SkillId], 0);
            if (_skillEx != null)
            {
                Tab_ShenQiSkillInfo _ShenQiSkillInfo = TableManager.GetShenQiSkillInfoByID(m_ShenQiItem.DynamicData[(int)ShenQiDyData.SkillId], 0);
                if (_ShenQiSkillInfo != null)
                {
                    //技能已达上限
                    if (_ShenQiSkillInfo.NextSkillId ==-1)
                    {
                        GUIData.AddNotifyData2Client(false, "#{4964}");
                        return;
                    }
                    //技能上限
                    if (_skillEx.Level>=_ShenQiInfo.MaxSkillLev)
                    {
                        GUIData.AddNotifyData2Client(false, "#{4947}");
                        return;
                    }
                    int nSuiPianNum = _ShenQiSkillInfo.NeedItemNum;
                    int nSuiPianOwnNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiSkillInfo.NeedItemId);
                    if (nSuiPianNum > nSuiPianOwnNum)
                    {
                        GUIData.AddNotifyData2Client(false, "#{4946}");
                        return;
                    }
                    //发包升级
                    CG_SHENQI_SKILLLEVELUP packet = (CG_SHENQI_SKILLLEVELUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_SKILLLEVELUP);
                    packet.ShenqiGuid =m_ShenQiItem.Guid;
                    packet.SendPacket();
                }
            }
        }
    }

   

    public void ClickToggleAttr1()
    {
        if (m_AttrToggle[0].value)
        {
            if (m_nLockNum<(int)ShenQiInfo.MAXRANDATTRNUM)
            {
                m_nLockNum++;
            }
        }
        else
        {
            if (m_nLockNum>0)
            {
                m_nLockNum--;
            }
        }
        UpdateLockShowInfo();
    }
    public void ClickToggleAttr2()
    {
        if (m_AttrToggle[1].value)
        {
            if (m_nLockNum < (int)ShenQiInfo.MAXRANDATTRNUM)
            {
                m_nLockNum++;
            }
        }
        else
        {
            if (m_nLockNum > 0)
            {
                m_nLockNum--;
            }
        }
        UpdateLockShowInfo();
    }
    public void ClickToggleAttr3()
    {
        if (m_AttrToggle[2].value)
        {
            if (m_nLockNum < (int)ShenQiInfo.MAXRANDATTRNUM)
            {
                m_nLockNum++;
            }
        }
        else
        {
            if (m_nLockNum > 0)
            {
                m_nLockNum--;
            }
        }
        UpdateLockShowInfo();
    }
    void BuyChargeOK()
    {
        RechargeData.PayUI();
    }
    void BuyChargeCancel()
    {
    }
    void CoinWashShenQi()
    {
        if (m_ShenQiItem == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        if (m_ShenQiItem.IsValid() ==false)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        //金币是否充足
        if (GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin() < _ShenQiInfo.CoinCostMoney)
        {
            GUIData.AddNotifyData2Client(false, "#{4952}");
            return;
        }
        //是否需要消耗物品
        if (_ShenQiInfo.CoinCostItemId != -1)
        {
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.CoinCostItemId) < _ShenQiInfo.CoinCostItemNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4951}");
                return;
            }
        }
        //锁定的物品是否够
        if (m_nLockNum > 0)
        {
            if (m_nLockNum >= _ShenQiInfo.MaxAttrNum)
            {
                GUIData.AddNotifyData2Client(false, "#{5157}");
                return;
            }
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.LockNeedItemId) < _ShenQiInfo.LockNeedItemNum * m_nLockNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4961}");
                return;
            }
        }
        //发包升级
        CG_SHENQI_WASHATTR packet = (CG_SHENQI_WASHATTR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_WASHATTR);
        packet.ShenqiGuid = m_ShenQiItem.Guid;
        packet.WashType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_COIN;
        if (m_nLockNum > 0)
        {
            packet.IsLockAttr1 = (m_AttrToggle[0].value == true ? 1 : 0);
            packet.IsLockAttr2 = (m_AttrToggle[1].value == true ? 1 : 0);
            packet.IsLockAttr3 = (m_AttrToggle[2].value == true ? 1 : 0);
        }
        packet.SendPacket();
        m_nLastWastType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_COIN;
        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }
    }
    void YBWashShenQi()
    {
        if (m_ShenQiItem == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        if (m_ShenQiItem.IsValid()==false)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        //元宝是否充足
        if (GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao() < _ShenQiInfo.YBCostMoney)
        {
            // 元宝不足
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", BuyChargeOK, BuyChargeCancel);
            return;
        }
        //是否需要消耗物品
        if (_ShenQiInfo.YBCostItemId != -1)
        {
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.YBCostItemId) < _ShenQiInfo.YBCostItemNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4951}");
                return;
            }
        }
        //锁定的物品是否够
        if (m_nLockNum > 0)
        {
            if (m_nLockNum>=_ShenQiInfo.MaxAttrNum)
            {
                GUIData.AddNotifyData2Client(false, "#{5157}");
                return;
            }
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.LockNeedItemId) < _ShenQiInfo.LockNeedItemNum * m_nLockNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4961}");
                return;
            }
        }
        //发包升级
        CG_SHENQI_WASHATTR packet = (CG_SHENQI_WASHATTR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_WASHATTR);
        packet.ShenqiGuid = m_ShenQiItem.Guid;
        packet.WashType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_YB;
        if (m_nLockNum > 0)
        {
            packet.IsLockAttr1 = (m_AttrToggle[0].value == true ? 1 : 0);
            packet.IsLockAttr2 = (m_AttrToggle[1].value == true ? 1 : 0);
            packet.IsLockAttr3 = (m_AttrToggle[2].value == true ? 1 : 0);
        }
        packet.SendPacket();
        m_nLastWastType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_YB;
        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }
    }
    void ExpWashShenQi()
    {
        if (m_ShenQiItem == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        if (m_ShenQiItem.IsValid()==false)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        Tab_ShenQiInfo _ShenQiInfo = TableManager.GetShenQiInfoByID(m_ShenQiItem.DataID, 0);
        if (_ShenQiInfo == null)
        {
            GUIData.AddNotifyData2Client(false, "#{4966}");
            return;
        }
        //经验是否充足
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Exp < _ShenQiInfo.ExpCostNum)
        {
            GUIData.AddNotifyData2Client(false, "#{4999}");
            return;
        }
        //是否需要消耗物品
        if (_ShenQiInfo.ExpCostItemId != -1)
        {
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.ExpCostItemId) < _ShenQiInfo.ExpCostItemNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4951}");
                return;
            }
        }
        //锁定的物品是否够
        if (m_nLockNum > 0)
        {
            if (m_nLockNum >= _ShenQiInfo.MaxAttrNum)
            {
                GUIData.AddNotifyData2Client(false, "#{5157}");
                return;
            }
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(_ShenQiInfo.LockNeedItemId) < _ShenQiInfo.LockNeedItemNum * m_nLockNum)
            {
                GUIData.AddNotifyData2Client(false, "#{4961}");
                return;
            }
        }
        //发包升级
        CG_SHENQI_WASHATTR packet = (CG_SHENQI_WASHATTR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_WASHATTR);
        packet.ShenqiGuid = m_ShenQiItem.Guid;
        packet.WashType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_EXP;
        if (m_nLockNum > 0)
        {
            packet.IsLockAttr1 = (m_AttrToggle[0].value == true ? 1 : 0);
            packet.IsLockAttr2 = (m_AttrToggle[1].value == true ? 1 : 0);
            packet.IsLockAttr3 = (m_AttrToggle[2].value == true ? 1 : 0);
        }
        packet.SendPacket();
        m_nLastWastType = (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_EXP;
        if (null != GameManager.gameManager)
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(28);
        }
    }
    void SaveNewAttr()
    {
        if (m_bOldAttrImport)
        {
            //是否替换
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4953}"), "", SaveOk);
        }
        else
        {
            SaveOk();
        }
    }

    void SaveOk()
    {
        CG_SHENQI_SAVEATTR packet = (CG_SHENQI_SAVEATTR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_SAVEATTR);
        packet.Savetype =(int) CG_SHENQI_SAVEATTR.SAVETYPE.SAVE_OK;
        packet.SendPacket();
        m_ShowNewAttrRoot.SetActive(false); 
    }
    void CancelNewAttr()
    {
        if (m_bNewAttrImport)
        {
            //是否回退
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4954}"), "", GiveUpOK);
        }
        else
        {
            GiveUpOK();
        }
    }
    void GiveUpOK()
    {
        CG_SHENQI_SAVEATTR packet = (CG_SHENQI_SAVEATTR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SHENQI_SAVEATTR);
        packet.Savetype = (int)CG_SHENQI_SAVEATTR.SAVETYPE.SAVE_CANCEL; 
        packet.SendPacket();
        m_ShowNewAttrRoot.SetActive(false); 
    }

    void ClickWashAgain()
    {
        if (m_bNewAttrImport)
        {
            //是否继续培养
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5201}"), "", WashAgainOK);
        }
        else
        {
            WashAgainOK();
        }
    }

    void WashAgainOK()
    {
        switch (m_nLastWastType)
        {
            case (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_YB:
                YBWashShenQi();
                break;
            case (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_COIN:
                CoinWashShenQi();
                break;
            case (int)CG_SHENQI_WASHATTR.WASHTYPE.WASH_EXP:
                ExpWashShenQi();
                break;
            default:
                break;
        }
    }
    void ClickSkillBackInfo()
    {
        if (m_ShenQiItem ==null)
        {
            return;
        }
        if (m_ShenQiItem.IsEquipMent() ==false)
        {
            return;
        }
        int SkillInfIndex = (int)ShenQiDyData.SkillId;
        if (SkillInfIndex >= 0 && SkillInfIndex < m_ShenQiItem.DynamicData.Length)
        {
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(m_ShenQiItem.DynamicData[(int)ShenQiDyData.SkillId], 0);
            if (_skillEx != null)
            {
                m_ShenQiSkillDecLable.text = _skillEx.SkillDesc;
                m_ShowSkillInfoBackBt.SetActive(false);
                m_ShowSkillInfoNextBt.SetActive(true);
            }
        }
    }
    void ClickSkillNextInfo()
    {
        if (m_ShenQiItem == null)
        {
            return;
        }
        if (m_ShenQiItem.IsEquipMent() == false)
        {
            return;
        }
        int SkillInfIndex = (int)ShenQiDyData.SkillId;
        if (SkillInfIndex >= 0 && SkillInfIndex < m_ShenQiItem.DynamicData.Length)
        {
            Tab_ShenQiSkillInfo _ShenQiSkillInfo= TableManager.GetShenQiSkillInfoByID(m_ShenQiItem.DynamicData[(int) ShenQiDyData.SkillId], 0);
            if (_ShenQiSkillInfo != null)
            {
                Tab_SkillEx _nextSkillEx = TableManager.GetSkillExByID(_ShenQiSkillInfo.NextSkillId, 0);
                if (_nextSkillEx != null)
                {
                    m_ShenQiSkillDecLable.text = _nextSkillEx.SkillDesc;
                    m_ShowSkillInfoNextBt.SetActive(false);
                    m_ShowSkillInfoBackBt.SetActive(true);
                }
            }
        }
    }

    void ClickShowHelp()
    {
        m_ShowHelp.SetActive(true);
    }

    void ClickCancelShowHelp()
    {
        m_ShowHelp.SetActive(false);
    }
}
