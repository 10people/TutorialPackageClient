using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using Games.LogicObj;
using Games.SkillModle;
using GCGame;
using GCGame.Table;
using UnityEngine;
using System.Collections;
using Module.Log;
using Games.GlobeDefine;

public class PvPRankWindow : MonoBehaviour {

	public GameObject RankMemberList;
    public UILabel PageTip;
    public GameObject PrePageButton;
    public GameObject NextPageButton;

    public GameObject MenuOp;
    PvPRankListItem CurItem;
    PVPData.PvPRankListItemInfo m_CurData;

    const int VIP_CHALLENGE_COST = 500;

    void OnEnable()
    {
        m_CurData.Cleanup();
        PVPData.delegateUpdatePvPRankList += ShowPvPRankList;
        PVPData.PvPRankCurPage = 1;
        RankMemberList.GetComponent<UIGrid>().Reposition();
        RankMemberList.GetComponent<UITopGrid>().Recenter(true);
        ReqPvPRankList();

        _paiming();
        _JiFen();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.ACT_JIANGHU_SUBSTATE = UIRootJoyControllerHelper.ActJianghuSubState.ACT_JIANGHU_MINGRENLU;
        UIRootJoyControllerHelper.Instance.ACT_SUBSTAT = UIRootJoyControllerHelper.ActivitySubState.ACT_UI_JIANGHU;
#endif
    }
    void OnDisable()
    {
        PVPData.delegateUpdatePvPRankList -= ShowPvPRankList;
        Utils.CleanGrid(RankMemberList);
    }

    private static PvPRankWindow m_Instance = null;
    public static PvPRankWindow Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
    }

    public void OnClickItem(PvPRankListItem thisItem)
    {
        if (thisItem != null) CurItem = thisItem;
        if (CurItem != null)
        {
            m_CurData = CurItem.GetData();

            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;

            if (_mainPlayer == null) return;

            bool canChaengeHiger = VipData.CanChallengeHigher();
            if (m_CurData.id == _mainPlayer.GUID) canChaengeHiger = false;
            if (canChaengeHiger && m_CurData.pos >= 0 && m_CurData.pos < 100)
            {
                if (MenuOp != null) MenuOp.SetActive(true);
            }
            else
            {
                if (MenuOp != null) MenuOp.SetActive(false);
            }
        }
    }

    void ClickChallenge()
    {
        if (null != MenuOp) MenuOp.SetActive(false);

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }
        if (mainPlayer.IsInJianYu())
        {
            mainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }

        if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN)
        {
            string str = StrDictionary.GetClientDictionaryString("#{5043}");
            MessageBoxLogic.OpenOKCancelBox(str, "", SendChallenge);
        }
    }

    void SendChallenge()
    {
        int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();
        nPlayerYuanBao += GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
        if (nPlayerYuanBao < VIP_CHALLENGE_COST)
        {
            GUIData.AddNotifyData2Client(false, "#{2633}");
            return;
        }

        CG_REQ_CHALLENGE packet = (CG_REQ_CHALLENGE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_CHALLENGE);
        packet.SetOpponentGuid(m_CurData.id);
        packet.SendPacket();
    }

    void ClickCancel()
    {
        if (null != MenuOp) MenuOp.SetActive(false);
    }

    void ShowPvPRankList()
    {
        if (PVPData.PvPRankCurPage >= PVPData.PvPRankTotalPage)
            NextPageButton.SetActive(false);
        else
            NextPageButton.SetActive(true);

        if (PVPData.PvPRankCurPage <= 1)
            PrePageButton.SetActive(false);
        else
            PrePageButton.SetActive(true);

        if (RankMemberList.transform.childCount > 0)
        {
            for (int i = 0; i < PVPData.PvPRankList.Count; ++i)
            {
                GameObject curItem = RankMemberList.transform.GetChild(i).gameObject;
                if (null != curItem)
                {
                    curItem.name = PVPData.PvPRankList[i].id.ToString();
                    PvPRankListItem curItemComponent = curItem.GetComponent<PvPRankListItem>();
                    if (null != curItemComponent)
                        curItemComponent.SendData(this, PVPData.PvPRankList[i]);
                }
            }
            PageTip.text = PVPData.PvPRankCurPage.ToString() + "/" + PVPData.PvPRankTotalPage.ToString();
        }
        else
        {
            UIManager.LoadItem(UIInfo.PvPRankListItem, OnLoadPvPRanListItem);
        }
        MessageBoxLogic.CloseBox();
    }

    void OnLoadPvPRanListItem(GameObject resItem, object param)
    {
        //Utils.CleanGrid(RankMemberList);
        for (int i = 0; i < PVPData.PvPRankList.Count; ++i)
        {
            PvPRankListItem.CreateItem(RankMemberList, resItem, this, PVPData.PvPRankList[i].id.ToString(), PVPData.PvPRankList[i]);
        }
        PageTip.text = PVPData.PvPRankCurPage.ToString() + "/" + PVPData.PvPRankTotalPage.ToString();
        RankMemberList.GetComponent<UIGrid>().repositionNow = true;
        RankMemberList.GetComponent<UITopGrid>().IsResetOnEnable = true;
        RankMemberList.GetComponent<UITopGrid>().recenterTopNow = true;
    }

    void ReqPvPRankList()
    {
        CG_CHALLENGERANKLIST_REQ packet = (CG_CHALLENGERANKLIST_REQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHALLENGERANKLIST_REQ);
        packet.Page = PVPData.PvPRankCurPage;
        packet.SendPacket();
        MessageBoxLogic.OpenWaitBox(1290, GameDefines.CONNECT_TIMEOUT, 0);
    }

    void PrePage()
    {
        if (PVPData.PvPRankCurPage > 1)
        {
            PVPData.PvPRankCurPage -= 1;
            ReqPvPRankList();
        }
    }

    void NextPage()
    {
        if (PVPData.PvPRankCurPage < PVPData.PvPRankTotalPage)
        {
            PVPData.PvPRankCurPage += 1;
            ReqPvPRankList();
        }
    }  

    void OnPageClick()
    {
        if (PVPData.PvPRankCurPage > 1 || PVPData.PvPRankCurPage < PVPData.PvPRankTotalPage)
        {
            string str = Utils.GetDicByID(2960);
            NumChooseController.NumChooseInfo curInfo = new NumChooseController.NumChooseInfo(1, PVPData.PvPRankTotalPage, str, OnNumChoose, 1);
            UIManager.ShowUI(UIInfo.NumChoose, OnShowNumChoose, curInfo);
        }
    }

    // 批量购买确定
    void OnNumChoose(int curNum)
    {
        PVPData.PvPRankCurPage = curNum;
        ReqPvPRankList();
    }

    public static void OnShowNumChoose(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }

        if (null == param)
        {
            LogModule.ErrorLog("ShowNumChoose:param not define.");
            return;
        }

        NumChooseController.NumChooseInfo curInfo = param as NumChooseController.NumChooseInfo;
        if (curInfo != null)
        {
            NumChooseController.Instance().SetData(curInfo._minValue, curInfo._maxValue, curInfo._szTitle, curInfo._okClickFun, curInfo._stepValue);
        }  
    }
    //===========
	public void onCloses()
    {
        gameObject.SetActive(false);
    }
    public UILabel m_PaiMing;
    public void _paiming()
    {
        if (PVPData.MyPVPRange != -1)
            m_PaiMing.text = (PVPData.MyPVPRange + 1).ToString();
		else
            m_PaiMing.text = "2000+";
    }
    public UILabel m_JiFen;
    public void _JiFen()
    {
        if( PVPData.MyPVPRange != -1 )
        {
            int count  = TableManager.GetPvpRank().Count;
            for (int i = 1; i < count; ++i)
            {
                Tab_PvpRank pLin = TableManager.GetPvpRankByID(i, 0);
                if (pLin != null)
                {
                    if (PVPData.MyPVPRange + 1 <= i)
                    {
                        m_JiFen.text = pLin.Vlue.ToString();
                        return;
                    }
                }
            }
        }    
    }
}
