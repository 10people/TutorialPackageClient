using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;

public class WuLinRegisterMemberWindow : MonoBehaviour
{
    public GameObject title;
    public UILabel LabelSelfPos;
    public GameObject MemberListGrid;
    public float RefreshTimeCounter { set; get; }
    public TabController m_WuLinTabController;

    public UIImageButton NextPageButton;
    public UIImageButton PrePageButton;
    public UILabel LabelPage;

	// Use this for initialization
	void Start () {
       // WuLinData.MySelfeHWuLinPos = -1;
        RefreshTimeCounter = 0;
	}

    void OnEnable()
    {
        WuLinData.delegateShowRegisterMemberList += ShowRegisterMemberList;
       // WuLinData.delegateShowSelfRegisterInfo += ShowSelfPvPPos;
    }

    void OnDisable()
    {
        Utils.CleanGrid(MemberListGrid);
        WuLinData.delegateShowRegisterMemberList -= ShowRegisterMemberList;
       // WuLinData.delegateShowSelfRegisterInfo -= ShowSelfPvPPos;
    }

    public void OnReturnButtonClick()
    {
        if (m_WuLinTabController != null)
        {
            m_WuLinTabController.ChangeTab("Tab1");
            WuLinData.delegateShowRegisterMemberList -= ShowRegisterMemberList;
        }
    }

    void ShowRegisterMemberList()
    {
        if (WuLinData.CurWuLinPage >= WuLinData.MaxWuLinPage)
            NextPageButton.isEnabled = false;
        else
            NextPageButton.isEnabled = true;

        if (WuLinData.CurWuLinPage <= 1)
            PrePageButton.isEnabled = false;
        else
            PrePageButton.isEnabled = true;

        UIManager.LoadItem(UIInfo.WuLinMemberListItem, OnLoadMemberItem);
    }

    void OnLoadMemberItem(GameObject resItem, object param)
    {
        Utils.CleanGrid(MemberListGrid);
        for (int i = 0; i < WuLinData.RegisterMemberList.Count; ++i)
        {
            WuLinMemberListItem.CreateItem(MemberListGrid, resItem, 
                                                WuLinData.RegisterMemberList[i].pos.ToString(),
                                                this, 
                                                WuLinData.RegisterMemberList[i].pos.ToString(), 
                                                WuLinData.RegisterMemberList[i].name, 
                                                WuLinData.RegisterMemberList[i].combat.ToString());
        }
        
        MemberListGrid.GetComponent<UIGrid>().Reposition();
        MemberListGrid.GetComponent<UITopGrid>().Recenter(true);
        LabelPage.text = WuLinData.CurWuLinPage.ToString() + "/" + WuLinData.MaxWuLinPage.ToString();
    }

    void ReqWuLinMemberList()
    {
        CG_WULIN_MEMBERLIST packet = (CG_WULIN_MEMBERLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WULIN_MEMBERLIST);
        packet.CurPage = WuLinData.CurWuLinPage;
        packet.SendPacket();
    }

    public void OnNextPageClick()
    {
        if (WuLinData.CurWuLinPage < WuLinData.MaxWuLinPage)
        {
            WuLinData.CurWuLinPage += 1;
            ReqWuLinMemberList();
        }
    
    }

    public void OnPrePageClick()
    {
        if (WuLinData.CurWuLinPage > 1)
        {
            WuLinData.CurWuLinPage -= 1;
            ReqWuLinMemberList();
        }
    }

#region 输入分页
    void OnPageClick()
    {
        if (WuLinData.CurWuLinPage > 1 || WuLinData.CurWuLinPage < WuLinData.MaxWuLinPage)
        {
            string str = Utils.GetDicByID(2960);
            NumChooseController.NumChooseInfo curInfo = new NumChooseController.NumChooseInfo(1, WuLinData.MaxWuLinPage, str, OnNumChoose, 1);
            UIManager.ShowUI(UIInfo.NumChoose, OnShowNumChoose, curInfo);
        }
    }

    // 
    void OnNumChoose(int curNum)
    {
        WuLinData.CurWuLinPage = curNum;
        ReqWuLinMemberList();
    }

    public static void OnShowNumChoose(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }

        if (null == param)
        {
           // LogModule.ErrorLog("ShowNumChoose:param not define.");
            return;
        }

        NumChooseController.NumChooseInfo curInfo = param as NumChooseController.NumChooseInfo;
        if (curInfo != null)
        {
            NumChooseController.Instance().SetData(curInfo._minValue, curInfo._maxValue, curInfo._szTitle, curInfo._okClickFun, curInfo._stepValue);
        }
    }
#endregion

    //void ShowSelfPvPPos( )
    //{
    //    int nPos = WuLinData.MySelfeHWuLinPos;
    //    string history = StrDictionary.GetClientDictionaryString("#{1635}", nPos == -1 ? "64+" : nPos.ToString());
    //    LabelSelfPos.text = history;
    //}
}

