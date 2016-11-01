using UnityEngine;
using System.Collections;
using GCGame.Table;

public class ChargeActivityLogic_XY : MonoBehaviour {

    public UILabel  m_ProgressText;
    public GameObject m_Progress;
    public GameObject m_WishButton;
    public GameObject m_FetchButton;
    public UISprite m_WishTip;
    public UISprite m_FetchTip;
    public UILabel m_Intro;
    public GameUIInput  m_InputContent;

    public enum WISHINGWELL_RIGHTS
    {
        WISHINGWELL_NORIGHT = 0,
        WISHINGWELL_GET,
        WISHINGWELL_OVER,
    }

    private static ChargeActivityLogic_XY m_Instance = null;
    public static ChargeActivityLogic_XY Instance()
    {
        return m_Instance;
    }

    public static bool IsNeedShowTip()
    {
        int nStatus = GameManager.gameManager.PlayerDataPool.WishingWell_Status;
        if (nStatus>0)
        {
            if (!GameManager.gameManager.PlayerDataPool.IsClickWishingWell)
            {
                return true;
            }
        }
        return false;
    }

    void Awake()
    {
        m_Instance = this;
    }
    	
	void Start () 
    {
        InitData();
	}

    void OnClickWish()
    {
        int right = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_RIGHT);
        if (right != (int)WISHINGWELL_RIGHTS.WISHINGWELL_GET)
        {
            if (right == (int)WISHINGWELL_RIGHTS.WISHINGWELL_NORIGHT)
            {
                int limits = GameManager.gameManager.PlayerDataPool.WishingWell_Limit;
                //modified by zhang dongai [tt12776] 2015-1-17
                //各个渠道版本不应该区分字典号，直接使用一个字典号，对内容本地化即可
                //因为已经区分了字典号，那么大陆使用3977字典号。其他渠道全部使用4719字典号，不能再新增字典号了。
                
                string dicTip = "#{3977}";
                //如果不是大陆版本，使用4719字典号
                if (!PlatformHelper.IsChannelMainland())
                {
                    dicTip = "#{4719}";
                }
                string notice = StrDictionary.GetClientDictionaryString(dicTip, limits);
                GUIData.AddNotifyData2Client(false, notice);
            }
            if (right == (int)WISHINGWELL_RIGHTS.WISHINGWELL_OVER)
            {
                GUIData.AddNotifyData2Client(false, "#{3978}");
            } 
            return;
        }
        if ( m_InputContent.value.Length > 0 )
        {
            CG_WISHINGWELL_WISH Pack = (CG_WISHINGWELL_WISH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WISHINGWELL_WISH);
            Pack.SetMessage(m_InputContent.value);
            Pack.SendPacket();
            return;
        }
        else
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3979}");
            }
            return;
        }
    }

    void OnClickFetch()
    {
        int total = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_TOTAL);
        if ( total > 0 )
        {
            CG_WISHINGWELL_FETCH Pack = (CG_WISHINGWELL_FETCH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WISHINGWELL_FETCH);
            Pack.SetNoparam(0);
            Pack.SendPacket();
        }
        else
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3976}");
            }
            return;
        }
    }
    public void UpdateData()
    {
        int total = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_TOTAL);
        int fetch = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_WISHINGWELL_FETCH);
        float fPercent = 0.0f;
        if ((total+fetch) > 0)
        {
            fPercent = (float)total / (total + fetch);
        }
        m_Progress.gameObject.transform.localScale = new Vector3(fPercent, 1, 1);
        m_ProgressText.text = total.ToString() + "/" + (total + fetch).ToString();
    }
    void UpdateText()
    {
        int intime = GameManager.gameManager.PlayerDataPool.WishingWell_InTime;
        int outime = GameManager.gameManager.PlayerDataPool.WishingWell_OutTime;
        int days = GameManager.gameManager.PlayerDataPool.WishingWell_Day;
        int limits = GameManager.gameManager.PlayerDataPool.WishingWell_Limit;
        //modified by zhang dongai [tt12776] 2015-1-17
        //各个渠道版本不应该区分字典号，直接使用一个字典号，对内容本地化即可
        //因为已经区分了字典号，那么大陆使用3300字典号。其他渠道全部使用4718字典号，不能再新增字典号了。
        string dicTip = "#{3300}";
        //如果不是大陆版本，使用4718字典号
        if (!PlatformHelper.IsChannelMainland())
        {
            dicTip = "#{4718}";
        }
        m_Intro.text = StrDictionary.GetClientDictionaryString(dicTip, limits, limits, days, intime, outime);
    }
    public void InitData()
    {
        m_InputContent.value = "";
        m_InputContent.defaultText = StrDictionary.GetClientDictionaryString("#{4187}");
        m_WishTip.spriteName = "";
        m_FetchTip.spriteName = "";
        m_Intro.text = "";

        UpdateData();
        UpdateText();
    }
    
}
