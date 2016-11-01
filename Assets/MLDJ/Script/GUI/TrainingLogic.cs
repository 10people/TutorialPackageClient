using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame.Table;
using System;
using Games.LogicObj;

public class TrainingLogic : MonoBehaviour {

    private static TrainingLogic m_Instance = null;
    public static TrainingLogic Instance()
    {
        return m_Instance;
    }

    public UISprite m_TrainingProgress;
    public UILabel m_TrainingProgressLabel;
    public GameObject m_TrainingTips;
    public UISprite m_TrainingTipsBG;
    public UILabel m_TrainingTipsLabel;
    public UILabel m_TrainingTipsName;
    public GameObject[] m_TrainingStage;
    public GameObject m_TrainingStageGrid;
    public UILabel m_CurrentExpLabel;
    public UILabel m_NextTrainingName;
    public UILabel m_NextTrainingEffect;
    public UILabel m_NextTrainingExpName;
    public UILabel m_TrainingStageName;
    public UILabel[] m_TrainingEffectAttr;
    public GameObject m_TrainingEffect;
    public UILabel m_AddCombatValueLabel;
    public UIImageButton m_SubmitButton;
    public GameObject m_LastTrainingArrow;
    public GameObject m_NextTrainingArrow;
    public GameObject m_ChoosePointGameObject;

    private int m_TrainingMax = GlobeVar.INVALID_ID;
    private int m_TrainingExp = GlobeVar.INVALID_ID;
    private int m_TrainingLevel = GlobeVar.INVALID_ID;

    private bool m_AddTraining = false;
    private bool m_MinusTraining = false;
    private float m_ChangeSpeed = 1;

    private int m_StageIndex = 1;
    private int m_StageDragIndex = 1;
    private Vector3 m_TouchPos = new Vector3(10000, 10000, 10000);
    private bool m_bTurning = false;
    private int m_TurnDirection = 0;
    private Vector3 m_PreTrainingPos = new Vector3(0, 0, 0);
    private Vector3 m_CurTrainingPos = new Vector3(-420, 0, 0);
    private Vector3 m_NextTrainingPos = new Vector3(-840, 0, 0);
    private bool m_TurningMore = false;
    private bool m_LevelUpTurning = false;
    private int m_OriginStage = 0;
    private int m_ChangeStageCount = 0;
    private int m_ChoosePoint = GlobeVar.INVALID_ID;
    private int[] m_TrainingEffectVal = new int[14];
    private string[] m_TrainingEffectDic = { "#{5517}", "#{5518}", "#{5520}", "#{5521}", "#{5522}", "#{5523}", "#{5524}", "#{5525}", "#{5526}", "#{5527}", "#{5528}", "#{5529}", "#{5530}", "#{5531}"};

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () 
    {
        UpdateTrainingProgress();

        if (m_bTurning)
        {
            ChangeStageTurning();

//             if (m_TrainingTips.activeSelf)
//             {
//                 m_TrainingTips.SetActive(false);
//             }
            /*for (int i = 0; i < m_TrainingStage.Length; i++)
            {
                if (m_TrainingStage[i].GetComponent<TrainingStage>() != null)
                {
                    m_TrainingStage[i].GetComponent<TrainingStage>().HidePointChoose();
                }
            } */           
        }        
	}

    // 处理加减进度条的效果
    void UpdateTrainingProgress()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_AddTraining)
        {
            if (m_TrainingExp - GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP) + (int)m_ChangeSpeed < Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Exp)
            {
                if (m_TrainingExp + (int)m_ChangeSpeed <= m_TrainingMax)
                {
                    m_TrainingExp += (int)m_ChangeSpeed;
                }
                else
                {
                    m_TrainingExp = m_TrainingMax;
                    m_AddTraining = false;
                    GUIData.AddNotifyData("#{5536}", true);
                }
            }
            else
            {
                m_TrainingExp = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP) + Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Exp;
                m_AddTraining = false;
                GUIData.AddNotifyData("#{5504}", true);
            }

            if (m_TrainingMax > 0)
            {
                m_TrainingProgress.fillAmount = (float)m_TrainingExp / (float)m_TrainingMax;
                m_TrainingProgressLabel.text = StrDictionary.GetClientDictionaryString("#{5514}", m_TrainingExp, m_TrainingMax);
            }            
            // 模拟进度条增长加速度
            if (m_ChangeSpeed < m_TrainingMax * 0.01)
            {
                m_ChangeSpeed *= 1.1f;
            }
        }
        if (m_MinusTraining)
        {
            if (m_TrainingExp - (int)m_ChangeSpeed >= GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP))
            {
                m_TrainingExp -= (int)m_ChangeSpeed;
            }
            else
            {
                m_TrainingExp = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP);
                m_MinusTraining = false;
                if (0 != GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP))
                {
                    GUIData.AddNotifyData("#{5535}", true);
                }
            }

            if (m_TrainingMax > 0)
            {
                m_TrainingProgress.fillAmount = (float)m_TrainingExp / (float)m_TrainingMax;
                m_TrainingProgressLabel.text = StrDictionary.GetClientDictionaryString("#{5514}", m_TrainingExp, m_TrainingMax);
            }
            // 模拟进度条减少加速度
            if (m_ChangeSpeed < m_TrainingMax * 0.01)
            {
                m_ChangeSpeed *= 1.1f;
            }
        }
    }

    void OnEnable()
    {
        m_Instance = this;
        m_TrainingEffect.SetActive(false);
        Init();
    }

    void OnDisable()
    {
        m_Instance = null;
    }
    
    void OnDestroy()
    {
        m_Instance = null;
    }

    void Init()
    {
        ClearData();
        if (m_TrainingMax < 0)
        {
            return;
        }

        InitCurrentExp();
        InitTrainingStage();
        InitTrainingEffect();
        InitDefaultTips();

        if (GlobeVar.TRAININGSTAGE_LEVELCOUNT > 0)
        {
            m_OriginStage = m_TrainingLevel / GlobeVar.TRAININGSTAGE_LEVELCOUNT;
        }
        m_ChangeStageCount = 0;
        //m_ChoosePoint = GlobeVar.INVALID_ID;
        m_StageIndex = 1;
    }

    void InitTrainingEffect()
    {
        if (m_TrainingEffectAttr.Length != 14)
        {
            return;
        }

        for (int i = 0; i < m_TrainingEffectVal.Length; i++)
        {
            m_TrainingEffectVal[i] = 0;
        }

        for (int i = 1; i <= m_TrainingLevel; i++ )
        {
            Tab_TrainingBook tabTraining = null;
            tabTraining = TableManager.GetTrainingBookByID(i, 0);
            if (tabTraining == null)
            {
                break;
            }

            if (tabTraining.Branch != GlobeVar.INVALID_ID && GlobeVar.TRAININGSTAGE_LEVELCOUNT > 0 && 
                true == GameManager.gameManager.PlayerDataPool.GetTrainingBranchActive(i / GlobeVar.TRAININGSTAGE_LEVELCOUNT - 1))
            {
                int branch = tabTraining.Branch;
                tabTraining = TableManager.GetTrainingBookByID(branch, 0);
                if (tabTraining == null)
                {
                    break;
                }
                
            }

            m_TrainingEffectVal[0] += tabTraining.MaxHP;
            m_TrainingEffectVal[1] += tabTraining.MaxMP;
            m_TrainingEffectVal[2] += tabTraining.PysAttack;
            m_TrainingEffectVal[3] += tabTraining.MagAttack;
            m_TrainingEffectVal[4] += tabTraining.PysDef;
            m_TrainingEffectVal[5] += tabTraining.MagDef;
            m_TrainingEffectVal[6] += tabTraining.Hit;
            m_TrainingEffectVal[7] += tabTraining.Dodge;
            m_TrainingEffectVal[8] += tabTraining.Critical;
            m_TrainingEffectVal[9] += tabTraining.Decritical;
            m_TrainingEffectVal[10] += tabTraining.Strike;
            m_TrainingEffectVal[11] += tabTraining.Ductical;
            m_TrainingEffectVal[12] += tabTraining.CritiAdd;
            m_TrainingEffectVal[13] += tabTraining.CritiMis;
        }

        m_AddCombatValueLabel.text = StrDictionary.GetClientDictionaryString("#{5547}", GetAddCombatValue());

        for (int i = 0; i < m_TrainingEffectAttr.Length; i++ )
        {
            m_TrainingEffectAttr[i].text = StrDictionary.GetClientDictionaryString(m_TrainingEffectDic[i], m_TrainingEffectVal[i]);
        }
    }

    int GetAddCombatValue()
    {
        float fTotalCombatValue = 0.0f;
        //血影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[0] * 0.2f);
        fTotalCombatValue += ((float)m_TrainingEffectVal[1] * 0.1f);

        int nProfession = GameManager.gameManager.PlayerDataPool.Profession;
        if (Obj_OtherPlayer.IsPhysicsProfession(nProfession))
        {
            //物理攻击影响
            fTotalCombatValue += ((float)m_TrainingEffectVal[2] * 2.0f);
            //物理防御影响
            int nPDef = m_TrainingEffectVal[4];
            int nMDef = m_TrainingEffectVal[5];
            fTotalCombatValue += (((float)nPDef * 0.6f) + ((float)nMDef * 0.4f)) * 2.0f;
        }
        else if (Obj_OtherPlayer.IsMagicAttackProfession(nProfession))
        {
            //法术攻击影响
            fTotalCombatValue += ((float)m_TrainingEffectVal[3] * 2.0f);
            //法术防御影响
            int nPDef = m_TrainingEffectVal[4];
            int nMDef = m_TrainingEffectVal[5];
            fTotalCombatValue += (((float)nPDef * 0.4f) + ((float)nMDef * 0.6f)) * 2.0f;
        }

        //命中影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[6] * 2.5f);
        //闪避影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[7] * 3.125f);
        //暴击影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[8] * 2.4f);
        //暴抗影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[9] * 3.192f);
        //穿透影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[10] * 8.3f);
        //韧性影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[11] * 8.3f);
        //暴击加成影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[12] * 6.5f);
        //暴击减免影响
        fTotalCombatValue += ((float)m_TrainingEffectVal[13] * 6.5f);

        return (int)fTotalCombatValue;
    }

    public void InitCurrentExp()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        } 

        m_CurrentExpLabel.text = StrDictionary.GetClientDictionaryString("#{5516}", Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Exp);

        // 如果玩家此时已填充的经验超过玩家持有的经验 如填到一半升级了 则重置进度
        if (m_TrainingExp - GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP) > Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Exp)
        {
            m_TrainingExp = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP);
            if (m_TrainingMax > 0)
            {
                m_TrainingProgress.fillAmount = (float)m_TrainingExp / (float)m_TrainingMax;
            }            
            m_TrainingProgressLabel.text = StrDictionary.GetClientDictionaryString("#{5514}", m_TrainingExp, m_TrainingMax);
        }
    }

    void InitTrainingStage()
    {
        if (m_TrainingStage.Length != 3)
        {
            return;
        }

        m_TrainingStage[(0 + m_ChangeStageCount) % 3].SetActive(true);
        m_TrainingStage[(2 + m_ChangeStageCount) % 3].SetActive(true);
        if (m_TrainingLevel < GlobeVar.TRAININGSTAGE_LEVELCOUNT)
        {
            m_TrainingStage[(0 + m_ChangeStageCount) % 3].SetActive(false);
        }
        else if (m_TrainingLevel >= GlobeVar.TRAININGLEVEL_MAX - GlobeVar.TRAININGSTAGE_LEVELCOUNT)
        {
            m_TrainingStage[(2 + m_ChangeStageCount) % 3].SetActive(false);
        }

        m_TrainingStageGrid.transform.localPosition = m_CurTrainingPos;
        m_TrainingStage[(0 + m_ChangeStageCount) % 3].transform.localPosition = new Vector3(0, 0, 0);
        m_TrainingStage[(1 + m_ChangeStageCount) % 3].transform.localPosition = new Vector3(420, 0, 0);
        m_TrainingStage[(2 + m_ChangeStageCount) % 3].transform.localPosition = new Vector3(840, 0, 0);

        if (m_TrainingLevel < GlobeVar.TRAININGLEVEL_MAX)
        {
            if (m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
            {
                m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().Init(m_TrainingLevel / GlobeVar.TRAININGSTAGE_LEVELCOUNT);
            }
            if (m_TrainingStage[(0 + m_ChangeStageCount) % 3].activeSelf)
            {
                if (m_TrainingStage[(0 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
                {
                    m_TrainingStage[(0 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().Init(m_TrainingLevel / GlobeVar.TRAININGSTAGE_LEVELCOUNT - 1);
                }
            }
            if (m_TrainingStage[(2 + m_ChangeStageCount) % 3].activeSelf)
            {
                if (m_TrainingStage[(2 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
                {
                    m_TrainingStage[(2 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().Init(m_TrainingLevel / GlobeVar.TRAININGSTAGE_LEVELCOUNT + 1);
                }
            }
        }
        else
        {
            if (m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
            {
                m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().Init((m_TrainingLevel - 1) / GlobeVar.TRAININGSTAGE_LEVELCOUNT);
            }
            if (m_TrainingStage[(0 + m_ChangeStageCount) % 3].activeSelf)
            {
                if (m_TrainingStage[(0 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
                {
                    m_TrainingStage[(0 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().Init((m_TrainingLevel - 1) / GlobeVar.TRAININGSTAGE_LEVELCOUNT - 1);
                }
            }
        }

        m_LastTrainingArrow.SetActive(m_TrainingLevel >= GlobeVar.TRAININGSTAGE_LEVELCOUNT);
        m_NextTrainingArrow.SetActive(m_TrainingLevel <= GlobeVar.TRAININGLEVEL_MAX - GlobeVar.TRAININGSTAGE_LEVELCOUNT);
    }

    void InitDefaultTips()
    {
        int nChooseLevel = 0;
        bool isNextBranch = false;

        if (m_TrainingLevel >= GlobeVar.TRAININGLEVEL_MAX)
        {
            if (GameManager.gameManager.PlayerDataPool.GetTrainingBranchActive(GlobeVar.TRAININGLEVEL_MAX / GlobeVar.TRAININGSTAGE_LEVELCOUNT - 1))
            {
                Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
                if (tabTraining != null && tabTraining.Branch != GlobeVar.INVALID_ID)
                {
                    nChooseLevel = tabTraining.Branch;
                }                
            }
            else
            {
                nChooseLevel = GlobeVar.TRAININGLEVEL_MAX;
            }
            isNextBranch = false;
        }
        else
        {
            Tab_TrainingBook tabNextTraining = TableManager.GetTrainingBookByID(m_TrainingLevel + 1, 0);
            if (tabNextTraining == null)
            {
                return;
            }

            if (tabNextTraining.Branch == GlobeVar.INVALID_ID)
            {
                nChooseLevel = m_TrainingLevel + 1;
                isNextBranch = false;
            }
            else
            {
                nChooseLevel = m_TrainingLevel;
                isNextBranch = true;
            }
        }

        if (nChooseLevel > 0)
        {
            for (int i = 0; i < m_TrainingStage.Length; i++ )
            {
                if (m_TrainingStage[i].activeSelf && m_TrainingStage[i].GetComponent<TrainingStage>() != null)
                {
                    if(true == m_TrainingStage[i].GetComponent<TrainingStage>().InitDefaultChoose(nChooseLevel, isNextBranch))
                    {
                        break;
                    }
                }
            }
            
        }
    }

    void AddTrainingStart()
    {
        if (m_TrainingLevel >= GlobeVar.TRAININGLEVEL_MAX)
        {
            GUIData.AddNotifyData("#{5505}", true);
            return;
        }

        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < tabTraining.LimitLevel)
        {
            GUIData.AddNotifyData(StrDictionary.GetClientDictionaryString("#{5507}", tabTraining.LimitLevel));
            return;
        }

        if (m_TrainingExp >= m_TrainingMax)
        {
            GUIData.AddNotifyData("#{5536}", true);
            return;
        }

        m_AddTraining = true;
        m_MinusTraining = false;
    }

    void AddTrainingEnd()
    {
        m_AddTraining = false;

        m_ChangeSpeed = 1;
    }

    void MinusTrainingStart()
    {
        if (m_TrainingLevel >= GlobeVar.TRAININGLEVEL_MAX)
        {
            GUIData.AddNotifyData("#{5505}", true);
            return;
        }

        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < tabTraining.LimitLevel)
        {
            GUIData.AddNotifyData(StrDictionary.GetClientDictionaryString("#{5507}", tabTraining.LimitLevel));
            return;
        }

        if (m_TrainingExp <= GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP))
        {
            if (0 != GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP))
            {
                GUIData.AddNotifyData("#{5535}", true);
            }
            return;
        }

        m_MinusTraining = true;
        m_AddTraining = false;
    }

    void MinusTrainingEnd()
    {
        m_MinusTraining = false;

        m_ChangeSpeed = 1;
    }

    public void ShowTrainingTips(GameObject destGameObject, int nChooseLevel, bool isDefaultBranch = false)
    {
        if (m_ChoosePoint == nChooseLevel)
        {
            //m_ChoosePoint = GlobeVar.INVALID_ID;
            //m_TrainingTips.SetActive(false);
        }
        else
        {
            m_ChoosePoint = nChooseLevel;
            //m_TrainingTips.SetActive(true);
        }

        m_ChoosePointGameObject.transform.localPosition = m_ChoosePointGameObject.transform.parent.InverseTransformPoint(destGameObject.transform.position);
        if (!isDefaultBranch)
        {
            m_ChoosePointGameObject.SetActive(true);
        }
        else
        {
            m_ChoosePointGameObject.SetActive(false);
        }

        /*if (m_TrainingTips.activeSelf)
        {
            Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(nTrainingLevel, 0);
            if (tabTraining == null)
            {
                return;
            }

            m_TrainingTipsName.text = tabTraining.Name;

            string tips = "";
            WriteTrainingTips(nTrainingLevel, out tips, true);
            m_TrainingTipsLabel.text = tips;
        }*/

        Tab_TrainingBook tabChooseTraining = TableManager.GetTrainingBookByID(nChooseLevel, 0);
        if (tabChooseTraining == null)
        {
            return;
        }        

        string tips = "";
        m_TrainingTipsLabel.text = "";
        if (!isDefaultBranch)
        {            
            WriteTrainingTips(nChooseLevel, out tips, true);
            m_TrainingTipsLabel.text = tips;           

            if (nChooseLevel == m_TrainingLevel + 1)
            {
                m_SubmitButton.isEnabled = true;
            }
            else if (m_TrainingLevel + 1 <= GlobeVar.TRAININGLEVEL_MAX)
            {
                Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel + 1, 0);
                if (tabTraining != null && nChooseLevel == tabTraining.Branch)
                {
                    m_SubmitButton.isEnabled = true;
                }
                else
                {
                    m_SubmitButton.isEnabled = false;
                }                
            }

            m_TrainingTipsName.text = tabChooseTraining.Name;
        }
        else
        {
            Tab_TrainingBook tabNextTraining = TableManager.GetTrainingBookByID(nChooseLevel + 1, 0);
            if (tabNextTraining == null || tabNextTraining.Branch == GlobeVar.INVALID_ID)
            {
                return;
            }

            Tab_TrainingBook tabBranchTraining = TableManager.GetTrainingBookByID(tabNextTraining.Branch, 0);
            if (tabBranchTraining == null)
            {
                return;
            }

            WriteTrainingTips(nChooseLevel + 1, out tips, false, StrDictionary.GetClientDictionaryString("#{5541}"));
            m_TrainingTipsLabel.text += tips;

            m_TrainingTipsLabel.text += Environment.NewLine;

            WriteTrainingTips(tabNextTraining.Branch, out tips, false, StrDictionary.GetClientDictionaryString("#{5541}"));
            m_TrainingTipsLabel.text += tips;

            m_SubmitButton.isEnabled = false;

            m_TrainingTipsName.text = StrDictionary.GetClientDictionaryString("#{5552}", tabNextTraining.Name, tabBranchTraining.Name);
        }
    }

    public void WriteTrainingTips(int nTrainingLevel, out string str, bool bNewLine, string choice = "")
    {
        str = "";

        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(nTrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        bool firstAttr = true;

        int nDeltaMaxHP = tabTraining.MaxHP;
        if (nDeltaMaxHP > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5517}", nDeltaMaxHP);
            firstAttr = false;
        }

        int nDeltaMaxMP = tabTraining.MaxMP;
        if (nDeltaMaxMP > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5518}", nDeltaMaxMP);
            firstAttr = false;
        }

        int nDeltaMaxXP = tabTraining.MaxXP;
        if (nDeltaMaxXP > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5519}", nDeltaMaxXP);
            firstAttr = false;
        }

        int nDeltaPysAttack = tabTraining.PysAttack;
        if (nDeltaPysAttack > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5520}", nDeltaPysAttack);
            firstAttr = false;
        }

        int nDeltaMagAttack = tabTraining.MagAttack;
        if (nDeltaMagAttack > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5521}", nDeltaMagAttack);
            firstAttr = false;
        }

        int nDeltaPysDef = tabTraining.PysDef;
        if (nDeltaPysDef > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5522}", nDeltaPysDef);
            firstAttr = false;
        }

        int nDeltaMagDef = tabTraining.MagDef;
        if (nDeltaMagDef > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5523}", nDeltaMagDef);
            firstAttr = false;
        }

        int nDeltaHit = tabTraining.Hit;
        if (nDeltaHit > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5524}", nDeltaHit);
            firstAttr = false;
        }

        int nDeltaDodge = tabTraining.Dodge;
        if (nDeltaDodge > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5525}", nDeltaDodge);
            firstAttr = false;
        }

        int nDeltaCritical = tabTraining.Critical;
        if (nDeltaCritical > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5526}", nDeltaCritical);
            firstAttr = false;
        }

        int nDeltaDecritical = tabTraining.Decritical;
        if (nDeltaDecritical > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5527}", nDeltaDecritical);
            firstAttr = false;
        }

        int nDeltaStrike = tabTraining.Strike;
        if (nDeltaStrike > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5528}", nDeltaStrike);
            firstAttr = false;
        }

        int nDeltaDuctical = tabTraining.Ductical;
        if (nDeltaDuctical > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5529}", nDeltaDuctical);
            firstAttr = false;
        }

        int nDeltaCritiAdd = tabTraining.CritiAdd;
        if (nDeltaCritiAdd > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5530}", nDeltaCritiAdd);
            firstAttr = false;
        }

        int nDeltaCritiMis = tabTraining.CritiMis;
        if (nDeltaCritiMis > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5531}", nDeltaCritiMis);
            firstAttr = false;
        }

        int nDeltaMoveSpeed = tabTraining.MoveSpeed;
        if (nDeltaMoveSpeed > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5532}", nDeltaMoveSpeed);
            firstAttr = false;
        }

        int nDeltaAttackSpeed = tabTraining.AttackSpeed;
        if (nDeltaAttackSpeed > 0)
        {
            if (!firstAttr)
            {
                str += bNewLine ? Environment.NewLine : " ";
            }
            str += StrDictionary.GetClientDictionaryString("#{5533}", nDeltaAttackSpeed);
            firstAttr = false;
        }

        str += choice;
    }

    public void TrainingStageOnPress(bool pressed)
    {
        if (pressed)
        {
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8)
            if (Input.touchCount > 0)
            {
                m_TouchPos = Input.GetTouch(0).position;
            }
#else
            m_TouchPos = Input.mousePosition;
#endif
        }
        else
        {
            m_TouchPos = new Vector3(10000, 10000, 10000);
        }
    }

    public void TrainingStageOnDrag(Vector2 delta)
    {
        if (m_TrainingStage.Length != 3)
        {
            return;
        }

        if (!m_bTurning)
        {
            Vector3 dragPos = new Vector3(10000, 10000, 10000);
#if !UNITY_EDITOR && (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8)
            if (Input.touchCount > 0)
            {
                dragPos = Input.GetTouch(0).position;
            }
#else
            dragPos = Input.mousePosition;
#endif
            if (m_TouchPos.x == 10000 || dragPos.x == 10000)
            {
                m_TurnDirection = 0;
            }
            else if (dragPos.x - m_TouchPos.x > 5)
            {
                m_TurnDirection = 1;
            }
            else if (dragPos.x - m_TouchPos.x < -5)
            {
                m_TurnDirection = -1;
            }

            //往右拖动 即往左滚动
            if (m_TurnDirection == 1)
            {
                if (m_StageIndex == 2 ||
                    (m_StageIndex == 1 && m_TrainingStage[(0 + m_ChangeStageCount) % 3].activeSelf))
                {
                    m_bTurning = true;
                }
            }
            //往左拖动 即往右滚动
            if (m_TurnDirection == -1)
            {
                if (m_StageIndex == 0 ||
                    (m_StageIndex == 1 && m_TrainingStage[(2 + m_ChangeStageCount) % 3].activeSelf))
                {
                    m_bTurning = true;
                }
            }
        }
    }

    public void ChangeStageTurning()
    {
        m_TrainingStageGrid.transform.localPosition += new Vector3(600 * Time.deltaTime * m_TurnDirection, 0, 0);

        //2号位到1号位
        if (m_StageIndex == 2 && m_TurnDirection == 1)
        {
            if (m_TrainingStageGrid.transform.localPosition.x >= m_CurTrainingPos.x)
            {
                m_TrainingStageGrid.transform.localPosition = m_CurTrainingPos;
                m_bTurning = false;
                m_TurnDirection = 0;
                m_StageIndex = 1;

                m_LastTrainingArrow.SetActive(m_TrainingLevel >= GlobeVar.TRAININGSTAGE_LEVELCOUNT);
                m_NextTrainingArrow.SetActive(true);
            }            
        }
        //1号位到0号位
        if (m_StageIndex == 1 && m_TurnDirection == 1)
        {
            if (m_TrainingStageGrid.transform.localPosition.x >= m_PreTrainingPos.x)
            {
                m_TrainingStageGrid.transform.localPosition = m_PreTrainingPos;
                m_bTurning = false;
                m_TurnDirection = 0;
                m_StageIndex = 0;

                m_LastTrainingArrow.SetActive(false);
                m_NextTrainingArrow.SetActive(true);
            } 
        }
        //0号位到1号位
        if (m_StageIndex == 0 && m_TurnDirection == -1)
        {
            if (m_TrainingStageGrid.transform.localPosition.x <= m_CurTrainingPos.x)
            {
                m_TrainingStageGrid.transform.localPosition = m_CurTrainingPos;
                m_bTurning = false;
                m_TurnDirection = 0;
                m_StageIndex = 1;
                // 升级需要翻页且最一开始显示的是上一等级的经脉 需要连续翻两页
                if (m_TurningMore)
                {
                    m_TurnDirection = -1;
                    m_bTurning = true;
                    m_TurningMore = false;
                }

                m_LastTrainingArrow.SetActive(true);
                m_NextTrainingArrow.SetActive(m_TrainingLevel <= GlobeVar.TRAININGLEVEL_MAX - GlobeVar.TRAININGSTAGE_LEVELCOUNT);
            } 
        }
        //1号位到2号位
        if (m_StageIndex == 1 && m_TurnDirection == -1)
        {
            if (m_TrainingStageGrid.transform.localPosition.x <= m_NextTrainingPos.x)
            {
                m_TrainingStageGrid.transform.localPosition = m_NextTrainingPos;
                m_bTurning = false;
                m_TurnDirection = 0;
                m_StageIndex = 2;
                if (m_LevelUpTurning)
                {
                    Init();

                    m_LevelUpTurning = false;

                    int newLevel = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_LEVEL);
                    if (GlobeVar.TRAININGSTAGE_LEVELCOUNT > 0)
                    {
                        m_ChangeStageCount = newLevel / GlobeVar.TRAININGSTAGE_LEVELCOUNT - m_OriginStage;
                    }                   
                }
                else
                {
                    m_LastTrainingArrow.SetActive(true);
                    m_NextTrainingArrow.SetActive(false);
                }
            } 
        }
    }

    void TrainingSubmitClick()
    {
        if (m_TrainingExp <= GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP))
        {
            GUIData.AddNotifyData("#{5537}");
            return;
        }

        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        Tab_TrainingBook tabNextTraining = TableManager.GetTrainingBookByID(m_TrainingLevel + 1, 0);
        if (tabNextTraining == null)
        {
            return;
        }

        if (m_TrainingExp >= tabTraining.Cost && tabNextTraining.Branch != GlobeVar.INVALID_ID)
        {
            if (m_ChoosePoint != m_TrainingLevel + 1 && m_ChoosePoint != tabNextTraining.Branch)
            {
                GUIData.AddNotifyData("#{5540}");
                return;
            }

            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5509}"), null, TrainingOK);
        }
        else
        {
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5509}"), null, TrainingOK);
        }        
    }

    void TrainingOK()
    {
        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        Tab_TrainingBook tabNextTraining = TableManager.GetTrainingBookByID(m_TrainingLevel + 1, 0);
        if (tabNextTraining == null)
        {
            return;
        }

        if (m_TrainingExp >= tabTraining.Cost && tabNextTraining.Branch != GlobeVar.INVALID_ID)
        {
            if (m_ChoosePoint != m_TrainingLevel + 1 && m_ChoosePoint != tabNextTraining.Branch)
            {
                return;
            }
        }

        CG_REQ_UPGRADETRAINING packet = (CG_REQ_UPGRADETRAINING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_UPGRADETRAINING);
        packet.Expcost = m_TrainingExp - GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP);
        packet.Choice = m_ChoosePoint == tabNextTraining.Branch ? 1 : 0;
        packet.SendPacket();

        //m_ChoosePoint = GlobeVar.INVALID_ID;
    }

    void ClearData()
    {
        m_TrainingLevel = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_LEVEL);
        Tab_TrainingBook tabTraining = TableManager.GetTrainingBookByID(m_TrainingLevel, 0);
        if (tabTraining == null)
        {
            return;
        }

        m_TrainingMax = tabTraining.Cost;

        m_TrainingStageName.text = StrDictionary.GetClientDictionaryString("#{5511}", m_TrainingLevel);
        m_TrainingExp = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_EXP);
        
        m_AddTraining = false;
        m_MinusTraining = false;
        m_ChangeSpeed = 1;

        int nNextTrainingLevel;
        if (m_TrainingLevel < GlobeVar.TRAININGLEVEL_MAX)
        {
            nNextTrainingLevel = m_TrainingLevel + 1;
            if (m_TrainingMax > 0)
            {
                m_TrainingProgress.fillAmount = (float)m_TrainingExp / (float)m_TrainingMax;
                m_TrainingProgressLabel.text = StrDictionary.GetClientDictionaryString("#{5514}", m_TrainingExp, m_TrainingMax);
            }
        }
        else
        {
            nNextTrainingLevel = m_TrainingLevel;

            Tab_TrainingBook tabMaxTrainingPre = TableManager.GetTrainingBookByID(m_TrainingLevel - 1, 0);
            if (tabMaxTrainingPre != null)
            {
                m_TrainingProgress.fillAmount = 1;
                m_TrainingProgressLabel.text = StrDictionary.GetClientDictionaryString("#{5514}", tabMaxTrainingPre.Cost, tabMaxTrainingPre.Cost);
            }
        }

        Tab_TrainingBook tabNextTraining = TableManager.GetTrainingBookByID(nNextTrainingLevel, 0);
        if (tabNextTraining != null)
        {
            /*m_NextTrainingName.text = StrDictionary.GetClientDictionaryString("#{5512}", tabNextTraining.Name);
            string effect = "";
            m_NextTrainingEffect.text = "";
            if (tabNextTraining.Branch == GlobeVar.INVALID_ID)
            {
                WriteTrainingTips(nNextTrainingLevel, out effect, false);
                m_NextTrainingEffect.text = effect;
            }
            else
            {
                WriteTrainingTips(nNextTrainingLevel, out effect, false, StrDictionary.GetClientDictionaryString("#{5541}"));
                m_NextTrainingEffect.text += effect;

                m_NextTrainingEffect.text += Environment.NewLine;

                WriteTrainingTips(tabNextTraining.Branch, out effect, false, StrDictionary.GetClientDictionaryString("#{5541}"));
                m_NextTrainingEffect.text += effect;
            }*/
            if (tabNextTraining.Branch == GlobeVar.INVALID_ID)
            {
                m_NextTrainingExpName.text = StrDictionary.GetClientDictionaryString("#{5513}", tabNextTraining.Name);
            }
            else
            {
                Tab_TrainingBook tabBranchTraining = TableManager.GetTrainingBookByID(tabNextTraining.Branch, 0);
                if (tabBranchTraining != null)
                {
                    m_NextTrainingExpName.text = StrDictionary.GetClientDictionaryString("#{5548}", tabNextTraining.Name, tabBranchTraining.Name);
                }
            }
            
        }
    }

    public void HandleUpdateTrainingLevel()
    {
        ClearData();
        InitTrainingEffect();
        InitDefaultTips();

        if (m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>() != null)
        {
            m_TrainingStage[(1 + m_ChangeStageCount) % 3].GetComponent<TrainingStage>().UpdatePoint();
        }

        int newLevel = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_LEVEL);
        if (newLevel >= GlobeVar.TRAININGLEVEL_MAX)
        {
            return;
        }
        
        // 新等级刚好为一页经脉的等级数 即下一级为新一页的第一个经脉点 即可能需要自动翻页
        if (newLevel % GlobeVar.TRAININGSTAGE_LEVELCOUNT == 0)
        {
            switch(m_StageIndex)
            {
                case 0:
                    {
                        // 在上一级 需要往右翻两页
                        m_TurnDirection = -1;
                        m_bTurning = true;
                        m_TurningMore = true;
                        m_LevelUpTurning = true;
                    }
                    break;
                case 1:
                    {
                        // 在当前页 需要往右翻一页
                        m_TurnDirection = -1;
                        m_bTurning = true;
                        m_LevelUpTurning = true;
                    }
                    break;
                case 2:
                    {
                        // 在下一级 不用翻页
                        Init();
                    }
                    break;
                default:
                    break;
            }
        }
    }

    public void HandleUpdateTrainingExp()
    {
        ClearData();
    }

    void ShowEffectClick()
    {
        m_TrainingEffect.SetActive(!m_TrainingEffect.activeSelf);
    }

    void ResetClick()
    {
        GUIData.AddNotifyData("#{5545}");
    }
}
