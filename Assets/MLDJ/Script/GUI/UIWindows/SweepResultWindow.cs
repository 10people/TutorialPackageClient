using UnityEngine;
using System.Collections;
using GCGame;

public class SweepResultWindow : MonoBehaviour {
	

	public UIGrid m_AwardListGrid;
	public UIDraggablePanel m_DraggablePanel;
	public GameObject m_AwardItemRes;
	public TweenNumber m_TweenNumCoin;
	public UILabel m_Coin;
	public TweenNumber m_TweenNumExp;
	public UILabel m_Exp;

	// Use this for initialization
	void Start () {
	
	}

	public void Init(GC_RET_COPYSCENE_SWEEP packet)
	{
		for (int i = 0; i < m_AwardListGrid.transform.childCount; i++)
		{
			GameObject.Destroy(m_AwardListGrid.transform.GetChild(i).gameObject);
		}

		m_AwardListGrid.transform.parent.transform.localPosition = new Vector3(-234f,-60.9f,0f);
		m_AwardListGrid.repositionNow = true;
		m_DraggablePanel.repositionClipping = true;

		int nCoin = 0;
		int nExp = 0;
		for(int i = 0 ; i < packet.SweepCountCount ; ++i )
		{
			if(packet.GetSweepType(i)==(int)StoryCopyAwardItemType.ITEM_MONEY)
			{
				nCoin += packet.GetSweepCount(i);
				continue;
			}
			if(packet.GetSweepType(i)==(int)StoryCopyAwardItemType.ITEM_EXP)
			{
				nExp += packet.GetSweepCount(i);
				continue;
			}

			GameObject item = Utils.BindObjToParent(m_AwardItemRes, m_AwardListGrid.gameObject, packet.GetSweepItemId(i).ToString());
			{
				if (item != null)
				{
					item.SetActive(true);
					StoryCopySceneItem awardItem = item.GetComponent<StoryCopySceneItem>();
					if (awardItem != null)
					{
						awardItem.SetRewardItem((StoryCopyAwardItemType)packet.GetSweepType(i),packet.GetSweepItemId(i),packet.GetSweepCount(i));
					}
				}
			}
		}

		InitSweepTweenNumber(nCoin,m_TweenNumCoin,m_Coin,RefreshCoinLabelText);
		InitSweepTweenNumber(nExp,m_TweenNumExp,m_Exp,RefreshExpLabelText);

	}

	void InitSweepTweenNumber(int nNumber, TweenNumber tweenNum, UILabel labelNum,TweenNumber.OnUpdatingNumDelegate RefreshLabelText)
	{
		int nFromNum = 0;
		int nToNum = nNumber;
		labelNum.text = "0";
		tweenNum = TweenNumber.Begin(labelNum.gameObject, 2, nFromNum, nToNum);
		tweenNum.onUpdatingNum = RefreshLabelText;
	}

	void RefreshCoinLabelText(TweenNumber tw, bool bFinished)
	{
		RefreshLabelText(m_Coin, tw, bFinished);
	}

	void RefreshExpLabelText(TweenNumber tw, bool bFinished)
	{
		RefreshLabelText(m_Exp, tw, bFinished);
	}

	void RefreshLabelText(UILabel label, TweenNumber tw, bool bFinished)
	{
		if (bFinished)
		{
			label.text = tw.to.ToString();
		}
		else
		{
			int curIntValue = (int)tw.value;
			
			label.text = curIntValue.ToString();
		}
	}
}
