using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;

public class FriendChooseLogic : MonoBehaviour {

	public ItemSlotLogic m_ItemSlot;

	public GameObject m_ButtonGrid;
	public GameObject m_ChooseFriend;
	public GameObject m_ButtonClose;
	public UIInput inputNum;
	public UILabel m_LabelName;
	public static int RoseDataId0 = 59237;//收到的玫瑰
	public static int RoseDataId1 = 59236;//玫瑰

	public static int RoseDataId2 = 59240;//龙佩
	public static int RoseDataId3 = 59241;//凤佩
	public static int RoseDataId4 = 59242;//同心锁
	public static int RoseDataId5 = 59243;//通心钥
	public static int RoseDataId6 = 59244;//情人节
	public static int RoseDataId7 = 59245;//锁心链

	private System.UInt64 m_FriendGuid = 0;

	private int m_minValue = 1;         // 下限
	private int m_maxValue = 999;        // 上限
	private int m_curNum   = 0;         // 当前数字
	private int m_stepValue = 1;        // 每次批量变化的数值
	private bool m_isAdd = false;
	private bool m_isDel = false;
	public delegate void OKClickDelegate(int curNum);       // 确定按钮响应，返回当前数值
	// Use this for initialization
	void Start () {
		InvokeRepeating("SlowUpdate", 0, 0.1f); 
		if (inputNum != null)
		{
			inputNum.defaultText = "1";
		}
	}

	void OnEnable()
	{
		if (GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(RoseDataId1) == 0)
		{
			m_maxValue = 1;
		}
		else
		{
			if (GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(RoseDataId1) <= 999)
			{
				m_maxValue = GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(RoseDataId1);
			}
		}
	}
	void OnDestroy()
	{
		CancelInvoke("SlowUpdate");
	}
	void SlowUpdate()
	{
		if (m_isAdd)
		{
			AddNum();
		}
		if (m_isDel)
		{
			SubNum();
		}
	}

	void OnChooseFriend()
	{
		UIManager.ShowUI(UIInfo.RelationNamePopWindow, OnShowRelationNamePopWindow);
	}
	void OnShowRelationNamePopWindow(bool bSuccess, object param)
	{
		if (bSuccess)
		{
			RelationNamePopController.Instance().SetDelegate(OnChooseFriend);
			RelationNamePopController.Instance().SetIsPopWindow(false);
			//RelationNamePopController.Instance().SetIsRestaurantFriend(true);
		}
	}
	// 选择了一个好友名字
	void OnChooseFriend(System.UInt64 friendID, string friendName)
	{
		m_LabelName.text = friendName;
		m_FriendGuid = friendID;
		UIManager.CloseUI(UIInfo.RelationNamePopWindow);
		
	}

	void OnOkClick()
	{
		OnInputSubmit();
		if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER))
		{
			GUIData.AddNotifyData("#{5138}");
			return;
		}
		if (m_LabelName.text == null || m_FriendGuid == 0)
		{
			GUIData.AddNotifyData("#{5087}");
			return;
		}
		if (GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(RoseDataId1)==0 ||
		    m_curNum > GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(RoseDataId1))
		{
			GUIData.AddNotifyData("#{5074}");
			return;
		}

		CG_ASK_USEROSE userose = (CG_ASK_USEROSE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_USEROSE);
		userose.SetType(1);
		userose.SetSendGuild(m_FriendGuid);
		userose.SetNumber(m_curNum);
		userose.SendPacket();
		OnCloseWindow();
	}
	void OnCancelClick()
	{
		OnCloseWindow();
	}
    void AddNum()
    {
		int curNum = 0;
		bool bCanParse = int.TryParse(inputNum.value, out curNum);
		if (bCanParse)
		{
			if(1 == curNum && m_stepValue > curNum)
			{
				curNum = Mathf.Min(m_maxValue, m_stepValue);
			}
			else
			{
				curNum = Mathf.Min(m_maxValue, curNum + m_stepValue);
			}
			inputNum.value = curNum.ToString();
		}
		
		m_curNum = curNum;
	}
	
	void SubNum()
	{
		int curNum = 0;
		bool bCanParse = int.TryParse(inputNum.value, out curNum);
		if (bCanParse)
		{
			int tempModValue = curNum % m_stepValue;
			if(m_maxValue == curNum && (tempModValue != 0))
			{
				curNum = Mathf.Max(m_minValue, curNum - tempModValue);
			}
			else
			{
				if (m_minValue == curNum)
				{
					curNum = m_maxValue;
				}
				else
				{
					curNum = Mathf.Max(m_minValue, curNum - m_stepValue);
				}
			}
			inputNum.value = curNum.ToString();
			
		}
		
		m_curNum = curNum;
	}
	
	public void NumChooseSubmit()
	{
		bool bCanParse = int.TryParse(inputNum.value, out m_curNum);
		if (!bCanParse)
		{
            return;
        }
    }
	// 回车时响应
	public void OnInputSubmit()
	{
		int curNum = 0;
		bool bCanParse = int.TryParse(inputNum.value, out curNum);
		if (bCanParse)
		{
			curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
			inputNum.value = curNum.ToString();
		}
		else
		{
			inputNum.value = "1";
			curNum = 1;
		}
		
		m_curNum = curNum;
	}

	
	void OnClickInput()
	{
		int curNum = 0;
		bool bCanParse = int.TryParse(inputNum.value, out curNum);
		if (bCanParse)
		{
			curNum = Mathf.Min(m_maxValue, Mathf.Max(1, curNum));
			if (1 == curNum)
			{
				inputNum.value = "";
			}
		}
	}
	void OnCloseWindow()
	{
		gameObject.SetActive(false);
		m_LabelName.text = null;
		m_curNum = 1;
		inputNum.value = "1";
    }
	public static bool IsLoverFestivalItem(int dataId)
	{
		if(dataId == RoseDataId1 || dataId == RoseDataId2 || dataId == RoseDataId3 || dataId == RoseDataId4 || dataId == RoseDataId5 || dataId == RoseDataId6 || dataId == RoseDataId7)
		{
			return true;
		}
		return false;
	}
	void AddOnPress()
	{
		m_isAdd = true;
	}
	
	void AddOnRelease()
	{
		m_isAdd = false;
	}
	
	void DelOnPress()
	{
		m_isDel = true;
	}
	
	void DelOnRelease()
	{
		m_isDel = false;
	}
}
