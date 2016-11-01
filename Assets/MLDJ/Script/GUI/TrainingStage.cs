using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;

public class TrainingStage : MonoBehaviour {

    public TrainingLogic m_ParentLogic;
    public GameObject[] m_TrainingPoint;
    public GameObject[] m_TrainingActive;
    public UISprite m_TrainingPic;
    public GameObject m_BranchPoint;
    public GameObject m_BranchActive;
    public GameObject m_BranchLock;

    private int m_TrainingGroup;
    public int TrainingGroup
    {
        get { return m_TrainingGroup; }
        set { m_TrainingGroup = value; }
    }

    private int m_BranchTraining = GlobeVar.INVALID_ID;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(int group)
    {
        m_TrainingGroup = group;

        m_TrainingPic.spriteName = "training0" + (group % 3 + 1).ToString();
        m_TrainingPic.MakePixelPerfect();

        UpdatePoint();
    }

    public void UpdatePoint()
    {
        Tab_TrainingPic tabTrainingPic = TableManager.GetTrainingPicByID(m_TrainingGroup % 3, 0);
        if (tabTrainingPic == null)
        {
            return;
        }

        m_BranchPoint.transform.localPosition = new Vector3(tabTrainingPic.BranchPointPosX, tabTrainingPic.BranchPointPosY, 0);

        int nTrainingLevel = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_LEVEL);
        for (int i = 0; i < GlobeVar.TRAININGSTAGE_LEVELCOUNT; i++)
        {
            m_TrainingPoint[i].transform.localPosition = new Vector3(tabTrainingPic.GetPointPosXbyIndex(i), tabTrainingPic.GetPointPosYbyIndex(i), 0);

            Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingGroup * GlobeVar.TRAININGSTAGE_LEVELCOUNT + i + 1, 0);
            if (tabTraining == null)
            {
                break;
            }

            if (tabTraining.Branch == GlobeVar.INVALID_ID)
            {
                if (m_TrainingGroup * GlobeVar.TRAININGSTAGE_LEVELCOUNT + i + 1 <= nTrainingLevel)
                {
                    m_TrainingActive[i].transform.localPosition = new Vector3(tabTrainingPic.GetPointPosXbyIndex(i), tabTrainingPic.GetPointPosYbyIndex(i), 0);
                    m_TrainingActive[i].SetActive(true);
                }
                else
                {
                    m_TrainingActive[i].SetActive(false);
                }
            }
            else
            {
                // 分支
                m_BranchTraining = tabTraining.Branch;
                if (m_TrainingGroup * GlobeVar.TRAININGSTAGE_LEVELCOUNT + i + 1 <= nTrainingLevel)
                {
                    m_BranchActive.transform.localPosition = new Vector3(tabTrainingPic.BranchPointPosX, tabTrainingPic.BranchPointPosY, 0);
                    m_BranchActive.SetActive(GameManager.gameManager.PlayerDataPool.GetTrainingBranchActive(m_TrainingGroup));
                    m_TrainingActive[i].transform.localPosition = new Vector3(tabTrainingPic.GetPointPosXbyIndex(i), tabTrainingPic.GetPointPosYbyIndex(i), 0);
                    m_TrainingActive[i].SetActive(!m_BranchActive.activeSelf);

                    if (m_BranchActive.activeSelf)
                    {
                        m_BranchLock.transform.localPosition = m_TrainingActive[i].transform.localPosition;
                    }
                    else
                    {
                        m_BranchLock.transform.localPosition = m_BranchActive.transform.localPosition;
                    }
                    m_BranchLock.SetActive(true);
                }
                else
                {
                    m_BranchActive.SetActive(false);
                    m_TrainingActive[i].SetActive(false);
                    m_BranchLock.SetActive(false);
                }
            }
        }
    }

    void OnPress(bool pressed)
    {
        m_ParentLogic.TrainingStageOnPress(pressed);
    }

    void OnDrag(Vector2 delta)
    {
        m_ParentLogic.TrainingStageOnDrag(delta);
    }

    void TrainingLevelOnClick(GameObject value)
    {
        if (TrainingLogic.Instance() == null)
        {
            return;
        }

        if (m_BranchPoint == value)
        {
            TrainingLogic.Instance().ShowTrainingTips(value, m_BranchTraining);
        }
        else
        {
            for (int i = 0; i < m_TrainingPoint.Length; i++)
            {
                if (m_TrainingPoint[i] == value)
                {
                    TrainingLogic.Instance().ShowTrainingTips(value, m_TrainingGroup * GlobeVar.TRAININGSTAGE_LEVELCOUNT + i + 1);
                    break;
                }
            }
        }        
    }

    // 默认选择
    public bool InitDefaultChoose(int nChooseLevel, bool isNextBranch)
    {
        if (TrainingLogic.Instance() == null)
        {
            return false;
        }

        // 错 → 默认选择不会选到分支的两个点 所以只在五个点的循环 实际上应该前四个
        // 纠正 当满级时 可能选择到分支点 所以还是得都比较一边
        if (m_BranchTraining == nChooseLevel)
        {
            TrainingLogic.Instance().ShowTrainingTips(m_BranchPoint, nChooseLevel, isNextBranch);
        }
        else
        {
            for (int i = 0; i < m_TrainingPoint.Length; i++)
            {
                if (m_TrainingGroup * GlobeVar.TRAININGSTAGE_LEVELCOUNT + i + 1 == nChooseLevel)
                {
                    TrainingLogic.Instance().ShowTrainingTips(m_TrainingPoint[i], nChooseLevel, isNextBranch);
                    return true;
                }
            }
        }

        return false;
    }
}
