using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;

public class MonthSignItemIntroduce : MonoBehaviour
{
    public UILabel m_ItemName;
    public UILabel m_Level;
    public UILabel m_Introduce;
    public UISprite m_ItemSprite;
    public UISprite m_ItemFrame;
    private static int m_ItemId;
    private static MoneyTipsLogic.MoneyType m_curType;
    private static int m_Num;
    private static MonthSignItemIntroduce m_Instance;
    public static MonthSignItemIntroduce Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
    }
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public static void ShowMoneyTip(MoneyTipsLogic.MoneyType type, int number)
    {
        m_curType = type;
        if (type == MoneyTipsLogic.MoneyType.ITEM_NONE)
        {
            m_ItemId = number;
        }
        else
        {
            m_Num = number;
        }
        UIManager.ShowUI(UIInfo.SignRewardTip, MonthSignItemIntroduce.OnShowMoneyTip);
    }
    private static void OnShowMoneyTip(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            Module.Log.LogModule.ErrorLog("load MoneyTipRoot error");
            return;
        }

        MonthSignItemIntroduce.Instance().ShowTooltips();
    }
    private void ShowTooltips()
    {
        switch (m_curType)
        {
            case MoneyTipsLogic.MoneyType.ITEM_NONE:
                Tab_CommonItem citem = TableManager.GetCommonItemByID(m_ItemId, 0);
                if (citem != null)
                {
                    m_ItemName.text = citem.Name;
                    m_ItemSprite.spriteName = citem.Icon;
                    m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", citem.CompondLevel);
                    m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[citem.Quality - 1];
                    m_Introduce.text = citem.Tips;
                }
                break;
            case MoneyTipsLogic.MoneyType.ITEM_EXP:
                m_ItemSprite.spriteName = "jingyan";
                m_ItemName.text = StrDictionary.GetClientDictionaryString("#{1325}");
                m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", 1);
                m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[4];
                break;
            case MoneyTipsLogic.MoneyType.ITEM_MONEY:
                m_ItemSprite.spriteName = "jinbi";
                m_ItemName.text = StrDictionary.GetClientDictionaryString("#{1324}");
                m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", 1);
                m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[4];
                m_Introduce.text = StrDictionary.GetClientDictionaryString("#{11512}");
                break;
            case MoneyTipsLogic.MoneyType.ITEM_YUANBAO:
                m_ItemSprite.spriteName = "bdyuanbao";
                m_ItemName.text = StrDictionary.GetClientDictionaryString("#{2913}");
                m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", 1);
                m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[4];
                m_Introduce.text = StrDictionary.GetClientDictionaryString("#{11513}");
                break;
            case MoneyTipsLogic.MoneyType.ITEM_SHENGWANG:
                m_ItemSprite.spriteName = "shengwang";
                m_ItemName.text = StrDictionary.GetClientDictionaryString("#{3078}");
                m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", 1);
                m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[4];
                break;
            case MoneyTipsLogic.MoneyType.ITEM_ZHENQI:
                m_ItemSprite.spriteName = "zhenqi";
                m_ItemName.text = StrDictionary.GetClientDictionaryString("#{3080}");
                m_Level.text = StrDictionary.GetClientDictionaryString("#{11511}", 1);
                m_ItemFrame.spriteName = GlobeVar.QualityColorGrid[4];
                break;
        }
    }
    public void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.SignRewardTip);
    }
}
