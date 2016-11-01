using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;

public class RebuyWindow : MonoBehaviour {

    private const int REBUY_ITEM_MAX = 15;

    static private RebuyWindow m_Instance = null;
    public ReBuyItem[] m_ReBuyitems;
    private int[] m_nBuybackSCN = new int[REBUY_ITEM_MAX];
    private bool[] m_nBuybackSCNSingle = new bool[REBUY_ITEM_MAX];
    public RebuyChooseWindow m_RebuyChooseWindow;
    public static RebuyWindow Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        for (int i = 0; i < REBUY_ITEM_MAX; i++ )
        {
            m_nBuybackSCN[i] = -1;
            m_nBuybackSCNSingle[i] = true;
        }

        m_nBuybackSCN[0] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG;
        m_nBuybackSCNSingle[0] = true;
        m_nBuybackSCN[1] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JUXIANZHUANG;
        m_nBuybackSCNSingle[1] = false;
        m_nBuybackSCN[2] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU;
        m_nBuybackSCNSingle[2] = true;
        m_nBuybackSCN[3] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU;
        m_nBuybackSCNSingle[3] = false;
        m_nBuybackSCN[4] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU;
        m_nBuybackSCNSingle[4] = true;
        m_nBuybackSCN[5] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_ZHENLONGQIJU;
        m_nBuybackSCNSingle[5] = false;
        m_nBuybackSCN[6] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU;
        m_nBuybackSCNSingle[6] = true;
        m_nBuybackSCN[7] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANGWANGGUMU;
        m_nBuybackSCNSingle[7] = false;
        m_nBuybackSCN[8] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI;
        m_nBuybackSCNSingle[8] = true;
        m_nBuybackSCN[9] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUTOUZHANCHUAN;
        m_nBuybackSCNSingle[9] = true;
        m_nBuybackSCN[10] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FBSHAOSHISHAN;
        m_nBuybackSCNSingle[10] = false;

//         m_nBuybackSCN[11] = (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANMENGUANDEFENCE;
//         m_nBuybackSCNSingle[11] = false;

    }
    void OnEnable()
    {
        m_Instance = this;

        InitUI();
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    // 初始化 那些能打开
    void InitUI()
    {
        UpdateData();
    }
    public void UpdateData()
    {
        for (int i = 0; i < REBUY_ITEM_MAX && i < m_ReBuyitems.Length; i++)
        {
            if (m_nBuybackSCN[i] != -1)
            {
                m_ReBuyitems[i].SendData(m_nBuybackSCN[i], m_nBuybackSCNSingle[i]);
                m_ReBuyitems[i].gameObject.SetActive(true);
            }
            else
            {
                m_ReBuyitems[i].gameObject.SetActive(false);
            }

        }
        m_RebuyChooseWindow.gameObject.SetActive(false);
    }
}
