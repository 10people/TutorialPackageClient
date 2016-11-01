using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.FakeObject;
using GCGame;
using System.Collections.Generic;
using GCGame.Table;

public class FlyWingDream : MonoBehaviour {

	// Use this for initialization
	void Start () {

    
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnEnable()
    {
        FlyWingRoot.Instance().ShowFakeObjDream = true;
        m_CurClickItemId = GlobeVar.INVALID_ID;

        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj(); 

        //_CreateDreamFlyWingListGrid();
        _createDreamFlyWingListGridEx();
    }
    void onDisable()
    {
        DestroyPartnerFakeObj();
    }
	//===============================
	private int m_CurClickItemId = GlobeVar.INVALID_ID;
    public int CurClickItem
    {
        get { return m_CurClickItemId; }
    }
	public void OnClickDream()
	{
		if( m_CurClickItemId != GlobeVar.INVALID_ID)
		{
           // GameManager.gameManager.FlyWingMananger.DreamFlyWing(m_CurClickItemId); 
            if (!isHasDreamFlyWing(m_CurClickItemId))
            {
                GUIData.AddNotifyData("#{11043}"); 
                return;
            }
            if (GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId == m_CurClickItemId)
            {
                CG_ASK_EQUIPFLYWING PACK = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
                PACK.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_CANCEL_DREAM);
                PACK.SendPacket();
            }

            else
            {
                CG_ASK_EQUIPFLYWING PACK = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
                PACK.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_DREAM);
                PACK.SetFlyWingId1(m_CurClickItemId);
                PACK.SendPacket();
            }
		}
	}
    public void clickItem( int id)
    {
        m_CurClickItemId = id;

        showDreamBtn();
        // 改变模型
        CreatePartnerFakeObj();
    }
    //========================================================
    // 模型相关
    private int m_PlayerFakeObjID;
    private FakeObject m_PlayerFakeObj;
    private GameObject m_FakeObjGameObject;
    public  ModelDragLogic m_ModelDrag;
    public  GameObject m_FakeObjTopLeft, m_FakeObjBottomRight;
    private void CreatePartnerFakeObj()
    {
        int pro = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        if (m_PlayerFakeObj != null)
        {
            DestroyPartnerFakeObj();
        }
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
        //对应FakeObject.txt配置
        int fakeObjId = -1;
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                fakeObjId = 7;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                fakeObjId = 8;
                break;
            case CharacterDefine.PROFESSION.DALI:
                fakeObjId = 10;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                fakeObjId = 9;
                break;
            case CharacterDefine.PROFESSION.GAIBANG:
                fakeObjId = 62;
                break;
            default:
                fakeObjId = 7;
                break;
        }

        m_PlayerFakeObj = new FakeObject();
        if (m_PlayerFakeObj == null)
        {
            return;
        }

        m_PlayerFakeObjID = fakeObjId;
        m_PlayerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
        if (null != m_PlayerFakeObj.ObjAnim)
            m_ModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;
    }
    public UILabel m_DreamText;
    public void showDreamBtn()
    {
        if (m_CurClickItemId != GlobeVar.INVALID_ID && m_CurClickItemId == GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId)
        {
            m_DreamText.text = StrDictionary.GetClientDictionaryString("#{3876}");
        }

        else
        {
            m_DreamText.text = StrDictionary.GetClientDictionaryString("#{1492}");
        }
    }
    public void DestroyPartnerFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
    }
    //==================================================================================================
    public GameObject m_DreamFlyWingListItem;
    public UIGrid     m_DreamFlyWingListGrid ;
    private void _CreateDreamFlyWingListGrid()
    {
        m_DreamFlyWingListItem.SetActive(true);
        Utils.CleanGrid(m_DreamFlyWingListGrid.gameObject);
        List<int> allDreamFlyWingData = GameManager.gameManager.FlyWingMananger.GetDreamFlyWingData();

        if (allDreamFlyWingData.Count <= 0)
            return;

        for (int i = 0; i < allDreamFlyWingData.Count; ++i)
        {
            GameObject dreamFlyWingItem = Utils.BindObjToParent(m_DreamFlyWingListItem, m_DreamFlyWingListGrid.gameObject, i.ToString());
            if (dreamFlyWingItem == null)
                continue;

            // 是否选中
            if( i == 0 )
                dreamFlyWingItem.GetComponent<FlyWingListItem>().Init(allDreamFlyWingData[i],true);
            else
                dreamFlyWingItem.GetComponent<FlyWingListItem>().Init(allDreamFlyWingData[i],false);
        }

        m_DreamFlyWingListGrid.Reposition(true);
        m_DreamFlyWingListItem.SetActive(false);
    }
    //
    private void _createDreamFlyWingListGridEx()
    {
        m_DreamFlyWingListItem.SetActive(true);
        Utils.CleanGrid(m_DreamFlyWingListGrid.gameObject);

        bool isFirst = true;
        for (int i = 0; i < TableManager.GetFlyWing().Count; ++i)
        {
            Tab_FlyWing temFlyWing = TableManager.GetFlyWingByID(i,0);
            if( temFlyWing == null )
                continue;

            // 判定是可以幻化的 
            if( temFlyWing.BASE1ID == GlobeVar.INVALID_ID && temFlyWing.BASE1VLUE == GlobeVar.INVALID_ID &&
                temFlyWing.BASE2ID == GlobeVar.INVALID_ID && temFlyWing.BASE2VLUE == GlobeVar.INVALID_ID &&
                temFlyWing.BASE3ID == GlobeVar.INVALID_ID && temFlyWing.BASE3VLUE == GlobeVar.INVALID_ID &&
                temFlyWing.BASE4ID == GlobeVar.INVALID_ID && temFlyWing.BASE4VLUE == GlobeVar.INVALID_ID &&
                temFlyWing.BASE5ID == GlobeVar.INVALID_ID && temFlyWing.BASE5VLUE == GlobeVar.INVALID_ID &&
                temFlyWing.BASE6ID == GlobeVar.INVALID_ID && temFlyWing.BASE6VLUE == GlobeVar.INVALID_ID )
            {
                  GameObject dreamFlyWingItem = Utils.BindObjToParent(m_DreamFlyWingListItem, m_DreamFlyWingListGrid.gameObject, i.ToString());
                  if (dreamFlyWingItem == null)
                      continue;

                    
                  if( /* isHasDreamFlyWing(i)*/ isFirst == true )
                  {
                      dreamFlyWingItem.GetComponent<FlyWingListItem>().Init(i, true);
                      isFirst = false;
                  }
                    
                  else
                      dreamFlyWingItem.GetComponent<FlyWingListItem>().Init(i, false);
            }
        }

        m_DreamFlyWingListGrid.Reposition(true);
        m_DreamFlyWingListItem.SetActive(false);
    }
    bool isHasDreamFlyWing( int flyWingId)
    {
        List<int> allDreamFlyWingData = GameManager.gameManager.FlyWingMananger.GetDreamFlyWingData();
        if (allDreamFlyWingData.Count <= 0)
            return false;

        for (int j = 0; j < allDreamFlyWingData.Count; ++j)
        {
            if (allDreamFlyWingData[j] == flyWingId)
            {
                return true;
            }
        }

        return false;
    }
}
