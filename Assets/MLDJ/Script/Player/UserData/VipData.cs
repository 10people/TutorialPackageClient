using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using System.Text;
using Games.GlobeDefine;

public class VipData 
{
    public static int m_MaxShowLevel = 15;

    static int[] s_nVipCopySceneArray = new int[6] { 
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_JXZ,
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_YZW,
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_ZLQJ,
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_YWGM,
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_NHCJ,
            (int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_SSS};

    static int[] s_nVipTeamCopySceneArray = new int[]{
        (int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_TEAM_SCENE_0,
        (int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_TEAM_SCENE_1,
        (int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_TEAM_SCENE_2,
    };
    public static int GetVipLv()
    {
        int viplevel = 0;
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            int nCost = Singleton<ObjManager>.Instance.MainPlayer.VipCost;
            int nLeft = 0;
            VipData.GetVipLevel(nCost, ref viplevel, ref nLeft);
        }
        return viplevel;
    }

    public static bool CanChallengeHigher()
    {
        int vipLevel = GetVipLv();
        Dictionary<int, List<Tab_VipBook>> allData = TableManager.GetVipBook();
        foreach (int key in allData.Keys)
        {
            Tab_VipBook tBook = allData[key][0];
            if (tBook.Id == vipLevel)
            {
                return tBook.HiChallenge > 0;
            }
        }
        return false;
    }

    public static void GetVipLevel(int nCost, ref int rLevel, ref int rLeft)
    {
        if (nCost < 0)
        {
            rLeft = 0;
            rLevel = 0;
            return;
        }
        Dictionary<int, List<Tab_VipBook>> allData = TableManager.GetVipBook();
        foreach (int key in allData.Keys)
        {
            Tab_VipBook tBook = allData[key][0];
            if (nCost >= tBook.VipCost)
            {
                nCost -= tBook.VipCost;
                rLevel = tBook.Id;
                rLeft = nCost;
            }
            else
            {
                break;
            }
        }
    }

    public static string GetStarIconByLevel(int nLevel)
    {
        if (nLevel >= 1 && nLevel <= m_MaxShowLevel)
        {
            StringBuilder stringbuilt = new StringBuilder("");
            stringbuilt.AppendFormat("Vip{0:D2}", nLevel);
            return stringbuilt.ToString();
        }
        else
        {
            return "";
        }
    }

    public static string GetVipImage(int nCost)
    {
        if (nCost < 0)
            return "";

        int nLevel = 0;
        int nLeft = 0;
        GetVipLevel(nCost, ref nLevel, ref nLeft);
        return GetStarIconByLevel(nLevel);
    }

	public static int GetVipStamina(int nLevel)
	{
		int nFinalCount = 0;
		foreach (KeyValuePair<int, List<Tab_StaminaBuyRule>> pair in TableManager.GetStaminaBuyRule())
		{
			Tab_StaminaBuyRule tabBuyRule = pair.Value[0];
			if (tabBuyRule == null)
			{
				continue;
			}
			
			if (tabBuyRule.VIPRequire <= nLevel)
			{
				nFinalCount = tabBuyRule.BuyNumMax;
			}
		}
		return nFinalCount;
	}

    public static int GetDeskIndex(int nLevel)
    {
        int lastIndex = -1;
        for (int n = 0; n < TableManager.GetRestaurantDesk().Count; ++n)
        {
            Tab_RestaurantDesk tab = TableManager.GetRestaurantDeskByID(n,0);
            if (tab != null && tab.OpenConditionType == 3)
            {
                if (nLevel >= tab.OpenConditionValue)
                {
                    lastIndex = n + 1;//名字叫做第n+1个桌子
                }                
            }
        }
        return lastIndex;
    }
    /*
     * 获得副本剩余可购买次数,包括剧情幅本
     */
    public static int GetVipCopySceneRemainBuyNum(int sceneid, bool bIsSingle )
	{
        Tab_VipBook pVipBook = TableManager.GetVipBookByID(GetVipLv(), 0);
        if( pVipBook == null ) {
            return GlobeVar.INVALID_ID;
        }

        if( GCGame.Utils.GetSceneType(sceneid) == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_STORYCOPYSCENE ) {
            return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIP_STORY_COPYSCENE );
        }
        else if (GCGame.Utils.GetSceneType(sceneid) == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_TYPE.SCENETYPE_COPYSCENE) {

            if (pVipBook.getBuyCountCount() != s_nVipCopySceneArray.Length) {
                return 0;
            }
            if( bIsSingle ) {
                for (int i = 0; i < pVipBook.getSceneIdCount(); ++i) {
                    if (pVipBook.GetSceneIdbyIndex(i) == sceneid) {
                        return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData(s_nVipCopySceneArray[i]);
                    }
                }
            }else {
                //这里还没有找到场景，去组队幅本里找
                return GetVipTeamCopySceneNum(sceneid);
            }
        }      
        return GlobeVar.INVALID_ID;
	}
    public static int GetVipCopySceneMaxBuyNum(int sceneid )
    {
        Tab_VipBook tBook = TableManager.GetVipBookByID(GetVipLv(), 0);
        if (tBook != null)
        {
            for (int i = 0; i < tBook.getSceneIdCount(); i++) {
                if (sceneid == tBook.GetSceneIdbyIndex(i)) {
                    return tBook.GetBuyCountbyIndex(i);
                }
            }
        }
        return 0;
    }
    public static bool IsCanSweepCopyScene(int sceneid)
    {
        //藏经阁谁都可以扫荡
        if (sceneid == (int)Games.GlobeDefine.GameDefine_Globe.TLI_COPYSCENEID.TLI_CANGJINGGE)
        {
            return true;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            int nCost = Singleton<ObjManager>.Instance.MainPlayer.VipCost;
            int nLevel = 0;
            int nLeft = 0;
            GetVipLevel(nCost, ref nLevel, ref nLeft);
            Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
            if (tBook != null)
            {
                for (int i = 0; i < tBook.getSceneIdCount(); i++ ) {
                    if( sceneid == tBook.GetSceneIdbyIndex(i) ) {
                        return (tBook.GetSweepCountbyIndex(i) > 0 );
                    }
                }
            }
        }
        return false;
    }
    /*
     * return 1: single, 2:team,0:valid
     */
    public static int GetBuyCopySceneMode( int sceneid, int nSingle )
    {
        Tab_VipBook pVipBook = TableManager.GetVipBookByID(0, 0);
        if( pVipBook != null ) {
            if( nSingle == 1 ) {
				return 1;
//                for (int i = 0; i < pVipBook.getSceneIdCount(); i++) 
//				{
//                    if (sceneid == pVipBook.GetSceneIdbyIndex(i)) 
//					{
//                        return 1;
//                    }
//                }
            }
            else {
                for (int i = 0; i < pVipBook.getTeamSceneIdCount(); ++i) {
                    if (sceneid == pVipBook.GetTeamSceneIdbyIndex(i)) {
                        return 2;
                    }
                }
            }
        }
        return 0;
    }
    public static int GetVipMaxTeamCopySceneNum(int sceneid, int nCost)
    {
        if (nCost < 0)
            return 0;

        int nLevel = 0;
        int nLeft = 0;
        GetVipLevel(nCost, ref nLevel, ref nLeft);
        Tab_VipBook pVipBook = TableManager.GetVipBookByID(nLevel, 0);
        if (pVipBook != null)
        {
            for (int i = 0; i < pVipBook.getTeamSceneIdCount(); ++i ) {
                if( pVipBook.GetTeamSceneIdbyIndex(i) == sceneid ) {
                    return pVipBook.GetBuyTeamSceneCountbyIndex(i);
                }
            }
        }
        return 0;
    }
    public static int GetVipTeamCopySceneNum(int sceneid)
    {
//        int nId = GlobeVar.INVALID_ID;
        
        Tab_VipBook pVipBook = TableManager.GetVipBookByID(GetVipLv(), 0);

        if( pVipBook != null )
        {
            for( int i = 0; i < pVipBook.getTeamSceneIdCount(); ++i )
            {
                if( sceneid == pVipBook.GetTeamSceneIdbyIndex(i) )
                {
                    return GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData(s_nVipTeamCopySceneArray[i]);
                }
            }
        }
        return GlobeVar.INVALID_ID;
    }    

    public static string MakeVipString(int nSceneID,int nCopyMode)
    {
        StringBuilder builder = new StringBuilder();        
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            int nCost = Singleton<ObjManager>.Instance.MainPlayer.VipCost;
            if (nCost >= 0)
            {
                int nMax = 0;
                int nVip = 0;
                if (nSceneID > 0)
                {
                    if (nCopyMode == 1)
                    {
                        nMax = GetVipCopySceneMaxBuyNum(nSceneID);
                        nVip = GetVipCopySceneRemainBuyNum(nSceneID, true);
                    }
                    else
                    {
                        nMax = GetVipMaxTeamCopySceneNum(nSceneID, nCost);
                        nVip = GetVipTeamCopySceneNum(nSceneID);
                    }                   
                }
                builder.AppendFormat(" VIP:{0}/{1}", nVip, nMax);
            }
        }
        return builder.ToString();
    }
    public static int GetVipSweepYuanBao()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            int nCost = Singleton<ObjManager>.Instance.MainPlayer.VipCost;
            int nLevel = 0;
            int nLeft = 0;
            GetVipLevel(nCost, ref nLevel, ref nLeft);
            Tab_VipBook tBook = TableManager.GetVipBookByID(nLevel, 0);
            if (tBook != null)
            {
                return tBook.SDCost;               
            }
        }
        return 0;
    }
}
