using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using System.Collections.Generic;
using Games.JuQingCopySceneData;

public class JuQingLevelAwardItem : MonoBehaviour {

    public GameObject m_BoxDisable;
    public GameObject m_BoxCanGet;
    public GameObject m_BoxHaveGot;

    private int m_ChapterId = GlobeVar.INVALID_ID;
    private int m_AwardIndex = GlobeVar.INVALID_ID;

    public void Init(int chapterid, int awardindex, bool bComplete, bool bHaveGot)
    {
        Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(chapterid, 0);
        if (tabChapter == null)
        {
            return;
        }

        if (awardindex < 0 || awardindex >= tabChapter.getLevelAwardCount())
        {
            return;
        }

        if (bComplete)
        {
            m_BoxDisable.SetActive(false);
            m_BoxCanGet.SetActive(!bHaveGot);
            m_BoxHaveGot.SetActive(bHaveGot);
        }
        else
        {
            m_BoxDisable.SetActive(true);
            m_BoxCanGet.SetActive(false);
            m_BoxHaveGot.SetActive(false);
        }

        m_ChapterId = chapterid;
        m_AwardIndex = awardindex;
    }

    void OnBoxClick()
    {
        if (false == m_BoxCanGet.activeInHierarchy)
        {
            return;
        }

        Tab_StoryCopySceneChapter tabChapter = TableManager.GetStoryCopySceneChapterByID(m_ChapterId, 0);
        if (tabChapter == null)
        {
            return;
        }

        if (m_AwardIndex < 0 || m_AwardIndex >= tabChapter.getLevelAwardCount())
        {
            return;
        }

        GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.ReqChapterLevelAward(m_ChapterId, m_AwardIndex);

        if (JuQingWindow.Instance() != null && JuQingWindow.Instance().NewPlayerGuideIndex == 1)
        {
            if (GameManager.gameManager.PlayerDataPool.JuQingCopySceneData != null)
            {
                // 算总星星数的 应该可以提出个函数来
                List<StoryCopySceneChapterInfo> chapterInfoList = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetChapterInfoList();
                if (chapterInfoList == null || chapterInfoList.Count <= 0)
                {
                    JuQingWindow.Instance().NewPlayerGuideIndex = GlobeVar.INVALID_ID;
                    NewPlayerGuidLogic.CloseWindow();
                    return;
                }

                int nTotalStarCount = 0;
                StoryCopySceneChapterInfo currentChapterInfo = chapterInfoList[0];
                for (int i = 0; i < currentChapterInfo._ContaindLevelList.Count; i++)
                {
                    int levelID = currentChapterInfo._ContaindLevelList[i];
                    int nStarCount = GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.GetLevelByLevelID(levelID).GetStarCount();
                    nTotalStarCount += nStarCount;
                }

                if (nTotalStarCount < JuQingCopySceneData.ChapterAwardStarReq[0])
                {
                    JuQingWindow.Instance().NewPlayerGuideIndex = GlobeVar.INVALID_ID;
                    NewPlayerGuidLogic.CloseWindow();
                    return;
                }

                JuQingWindow.Instance().NewPlayerGuide(2);
            }            
        }
    }

    void OnTipPress()
    {
        if (JuQingWindow.Instance() != null)
        {
            JuQingWindow.Instance().ShowStarBoxTip(m_ChapterId, m_AwardIndex, JuQingWindow.BoxType.LevelAward);
        }
    }

    void OnTipRelease()
    {
        if (JuQingWindow.Instance() != null)
        {
            JuQingWindow.Instance().CloseStarBoxTip();
        }
    }
}
