using UnityEngine;
using System.Collections;
using GCGame.Table;

public class CangJingGeItem : MonoBehaviour {

    public UISprite m_Bg;
    public GameObject m_Lock;
    public UILabel m_Layer;
    public UILabel m_Enemy;
	public GameObject m_Sweeping;

    //public UILabel m_tierLeft;
    //public UILabel m_tierRight;
    //public GameObject m_Left;
    //public GameObject m_Right;
    //public UISprite m_PlayerLeft;
    //public UISprite m_PlayerRight;
    //public UISprite m_tierBGLeft;
    //public UISprite m_tierBGRight;
    //public UILabel m_LevelLeft;
    //public UILabel m_LevelRight;

    public int m_nTier = 0;


    private string strChooseNor = "ChooseGuanQiaNor";
    private string strChoosePush = "ChooseGuanQiaPush";
	void Start () 
    {
	 
	}

    public void LightUp(bool bFlag)
    {
		m_Bg.gameObject.SetActive(true);
        if (bFlag)
        {
            m_Bg.spriteName = strChoosePush;
        }
        else
        {
            m_Bg.spriteName = strChooseNor;
        }
		m_Sweeping.SetActive(false);
    }

//    public void Lock(bool bFlag)
//    {
//        m_Lock.SetActive(bFlag);
//		if(bFlag)
//		{
//			m_Sweeping.SetActive(false);
//			m_Bg.gameObject.SetActive(false);
//		}
//    }

	public void Sweeping()
	{
		m_Sweeping.SetActive(true);
		m_Bg.gameObject.SetActive(false);
	}

    public void SetLayer(int nLayer)
    {
        m_nTier = nLayer;
        if (nLayer > Games.GlobeDefine.GameDefine_Globe.MAX_COPYSCENE_CJGTIER)
        {
            m_Layer.text = StrDictionary.GetClientDictionaryString("#{2789}");
            m_Enemy.text = "";
        }
        else
        {
            m_Layer.text = StrDictionary.GetClientDictionaryString("#{2788}", nLayer);
            Tab_CangJingGeInfo cjg = TableManager.GetCangJingGeInfoByID(nLayer, 0);
            if (cjg != null)
            {
                m_Enemy.text = StrDictionary.GetClientDictionaryString("#{3099}", cjg.Level);
            }
        }
    }
    
    public void AddLayer(int nLayer)
    {
        SetLayer(m_nTier + nLayer);
    }
}
