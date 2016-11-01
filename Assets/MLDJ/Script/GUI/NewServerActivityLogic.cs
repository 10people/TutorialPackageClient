using UnityEngine;
using System.Collections;
using Games.FakeObject;
using GCGame.Table;
using Games.Mission;

public class NewServerActivityLogic : UIControllerBase<NewServerActivityLogic>
{
    public UISprite m_ItemDisable;
    public UISprite m_ItemChoose;
    public UISprite m_ItemIcon;
    public UISprite m_ItemQuality;

    public UILabel m_ItemAttrName;
    public UILabel m_ItemAttrValue;
    public UILabel m_ItemName;
    public UILabel m_ItemLevel;

    public UILabel m_ItemIntroduction;

    public UILabel m_ButtonText;
    public UIImageButton m_Button;

    private FakeObject m_PlayerFakeObj;
    public GameObject m_FakeObjTopLeft;
    public GameObject m_FakeObjBottomRight;
    private const int m_FakeID = 67;
    private const int m_ItemID = 59390;
    private int m_LeftTimeInt;
    private bool m_CanGet;

    public GameObject m_GuidePoint;

    const int m_nMissionID = 1;
    private int m_NewPlayerGuideIndex = 0;
    public int NewPlayerGuideIndex
    {
        get { return m_NewPlayerGuideIndex; }
        set { m_NewPlayerGuideIndex = value; }
    }
    public GameObject m_ButtonClose;
    public UISprite m_RemindPoint;

    void Awake()
    {
        SetInstance(this);
        Init();
    }

    void OnDestroy()
    {
        DestroyFakeObj();
        SetInstance(null);
    }

    public void OnClose()
    {
        HandleMission();

        CancelInvoke("UpdateTime");
        DestroyFakeObj();
        UIManager.CloseUI(UIInfo.NewServerActivityRoot);
    }

    public void OnGet()
    {
        if (m_CanGet)
        {
            CG_GET_NEWSERVERMOUNT packet = (CG_GET_NEWSERVERMOUNT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GET_NEWSERVERMOUNT);
            packet.Id = 0;
            packet.SendPacket();

            OnClose();
        }
    }

    void Init()
    {
        InitFake();
        InitInfo();
        InitTime();

        ShowNewPlayerGuide();
    }

    string GetMountSpeedValueByItem(int value)
    {
        Tab_UsableItem tUsable = TableManager.GetUsableItemByID(value, 0);
        if (tUsable != null)
        {
            int nID = tUsable.UseParamA;
            Tab_MountBase tMount = TableManager.GetMountBaseByID(nID, 0);
            if (tMount != null)
            {
                int speed = tMount.Speed;
                return "+"+speed.ToString()+"%";
            }
        }
        return "";
    }

    void InitInfo()
    {
        Tab_CommonItem tBook = TableManager.GetCommonItemByID(m_ItemID, 0);
        if (tBook != null)
        {
            m_ItemName.text = tBook.Name;
            m_ItemLevel.text = tBook.MinLevelRequire.ToString();
            m_ItemIcon.spriteName = tBook.Icon;
            m_ItemQuality.spriteName = GCGame.Utils.GetItemQualityById(m_ItemID);
            m_ItemIntroduction.text = tBook.Tips;
            m_ItemAttrValue.text = GetMountSpeedValueByItem(m_ItemID);
        }
        else
        {
            m_ItemDisable.spriteName = "";
            m_ItemChoose.spriteName = "";
            m_ItemIcon.spriteName = "";
            m_ItemQuality.spriteName = "";

            m_ItemAttrValue.text = "0";
            m_ItemName.text = "";
            m_ItemLevel.text = "";

            m_ItemIntroduction.text = "";
        }
        m_ItemAttrName.text = StrDictionary.GetClientDictionaryString("#{1588}");
    }
    void InitTime()
    {
        m_CanGet = false;
        //服务器特意发送的剩余时间
        m_LeftTimeInt = GameManager.gameManager.PlayerDataPool.NewServerMountBonusNextTime;
        if (m_LeftTimeInt > 0)
        {
            InvokeRepeating("UpdateTime", 0, 1);
        }
        else if (m_LeftTimeInt < 0)
        {
            m_ButtonText.text = StrDictionary.GetClientDictionaryString("#{10235}");
            m_Button.isEnabled = true;
            m_CanGet = true;
            m_RemindPoint.gameObject.SetActive(true);
        }
        else
        {
            m_ButtonText.text = "";
            m_Button.isEnabled = false;
        }
    }

    void UpdateTime()
    {
        if (m_LeftTimeInt > 0)
        {
//             int Seconds = m_LeftTimeInt % 60;
//             int Minutes = (m_LeftTimeInt - Seconds) / 60 % 60;
//             int Hours = ((m_LeftTimeInt - Seconds) / 60 - Minutes) / 60;
//             string timestr = string.Format("{0}:{1}:{2}", Hours, Minutes, Seconds);
            //m_ButtonText.text = timestr;
            m_Button.isEnabled = false;
            m_CanGet = false;

            m_LeftTimeInt--;

            if (m_LeftTimeInt <= 0)
            {
                m_ButtonText.text = StrDictionary.GetClientDictionaryString("#{10235}");
                m_Button.isEnabled = true;
                m_CanGet = true;
                m_RemindPoint.gameObject.SetActive(true);
                CancelInvoke("UpdateTime");
            }
        }
    }

    void InitFake()
    {
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();

        if (m_PlayerFakeObj != null)
        {
            DestroyFakeObj();
        }
        m_PlayerFakeObj = new FakeObject();
        if (m_PlayerFakeObj == null)
        {
            return;
        }

        GameObject temFakeObject = null;
        m_PlayerFakeObj.initFakeObject(m_FakeID, GameManager.gameManager.ActiveScene.FakeObjTrans, out temFakeObject);

        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.PlayAnim(0);
        }

        //加上旋转
        if (temFakeObject != null)
        {
            temFakeObject.transform.localRotation = Quaternion.identity;
            Spin newSpin = temFakeObject.AddComponent<Spin>();
            if (newSpin != null)
            {
                newSpin.rotationsPerSecond.x = 0.0f;
                newSpin.rotationsPerSecond.y = 0.1f;
                newSpin.rotationsPerSecond.z = 0.0f;
            }
        }
    }

    private void DestroyFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
        GameManager.gameManager.ActiveScene.HideFakeObj();
    }

    void ShowNewPlayerGuide()
    {
        if (NewFunctionLogic.Instance()
            && NewFunctionLogic.Instance().NewPlayerGuideIndex == 16)
        {
            NewFunctionLogic.Instance().NewPlayerGuideIndex = 0;
            NewPlayerGuidLogic.OpenWindow(m_GuidePoint.transform.parent.FindChild("ModelView").gameObject, 450, 450,
                GCGame.Utils.GetDicByID(11470), "right", -1, true, true, false, null, null, 0, 0, true, false, () =>
                {
                    NewPlayerGuidLogic.OpenWindow_Circle(m_GuidePoint, 100, "", "left", 0, true, true);
                });
        }
    }

    void HandleMission()
    {
        NewPlayerGuideIndex = 0;
        if (NewPlayerGuidLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }

        bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(m_nMissionID);
        if (isHaveMission)
        {
            MissionState misState = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(m_nMissionID);
            if (MissionState.Mission_Accepted == misState)
            {
                GameManager.gameManager.MissionManager.SetMissionParam(m_nMissionID, 0, 1);
                GameManager.gameManager.MissionManager.SetMissionState(m_nMissionID, 2);
            }
        }
    }
    void OnEnable()
    {
      if (FunctionButtonLogic.Instance() != null) {
        FunctionButtonLogic.Instance().UpdateSecondDayAwardTime();
      }
    }
}
