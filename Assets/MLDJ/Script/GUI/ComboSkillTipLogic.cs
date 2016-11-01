/********************************************************************************
 *	文件名：	ComboSkillTipLogic.cs
 *	全路径：	\Script\GUI\ComboSkillTipLogic.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-09
 *
 *	功能说明：连招提示界面
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Module.Log;
public class ComboSkillTipLogic : MonoBehaviour
{
    private static ComboSkillTipLogic m_Instance = null;
    public static ComboSkillTipLogic Instance()
    {
        return m_Instance;
    }

    /// <summary>
    /// 技能图标们
    /// </summary>
    public UISprite[] m_SkillIcons;

    /// <summary>
    /// 背景图标
    /// </summary>
    public UISprite[] m_bgIcons;

    /// <summary>
    /// 背景箭头图标
    /// </summary>
    public UISprite[] m_arrowIcons;

    //技能图标的最大个数
    private const int MAX_COMBO_COUNT = 3;
    /// <summary>
    /// duang们
    /// </summary>
    public UISpriteAnimation[] m_Effects;

    public GameObject m_Offset;

    /// <summary>
    /// 当前连招的最大连击数，按现在的需求应该都是3
    /// </summary>
    private int m_nComboCnt = -1;

    private int m_nCurrentStep = 0;
    private Dictionary<int, int> comboStep;
    private Dictionary<int, List<string>> comboIconDic;

//     //底板图
//     private Dictionary<int, string> backgroundDic;
// 
//     //背景底图
//     public UISprite backgroundIcon;

    private int m_NewPlayerGuide_Step = 0;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }

    void Awake()
    {
        m_Instance = this;
        comboIconDic = new Dictionary<int, List<string>>();
      //  backgroundDic = new Dictionary<int, string>();
        comboStep = new Dictionary<int, int>();
     //   backgroundDic.Add(2, "2duanlianji");
      //  backgroundDic.Add(3, "lianjitishi");
        Hide();
    }

    void Start()
    {

    }
    /// <summary>
    /// 显示连招提示界面
    /// </summary>
    /// <param name="comboCnt">一共几连</param>
    /// <param name="skillIcons">连招序列的图标</param>
    // 	public void Show (int comboCnt, params string[] skillIcons)
    // 	{
    //         if (comboCnt < 0 || comboCnt > 3 || comboCnt > skillIcons.Length)
    //         {
    //             return;
    //         }
    // 
    // 		m_nComboCnt = comboCnt;
    // 		int i = 0;
    // 		for (; i < m_nComboCnt; i++)
    // 		{
    // 			m_SkillIcons[i].spriteName = skillIcons[i];
    // 		}
    // 		SetStep(0);
    // 		gameObject.SetActive(true);
    // 	}

    void OnEnable()
    {
        // repostion the combo tips
        m_Offset.GetComponent<UIGrid>().Reposition();
        if (m_NewPlayerGuide_Step == 1)
        {
            m_NewPlayerGuide_Step = 0;
        }
    }
    public void Show(int nIndex, int comboCnt, List<string> skillIcons)
    {
        if (skillIcons == null)
        {
            return;
        }
        if (comboIconDic.ContainsKey(nIndex))
        {
            comboIconDic.Remove(nIndex);
        }

        if (comboStep.ContainsKey(nIndex))
        {
            comboStep.Remove(nIndex);
        }

        List<string> skillIconList = skillIcons;
        comboIconDic.Add(nIndex, skillIconList);

        comboStep.Add(nIndex,0);
        gameObject.SetActive(true);

        //for (int i = 0; i < MAX_COMBO_COUNT; i++)
        //{
        //    m_bgIcons[i].transform.parent.gameObject.SetActive(i < comboIconDic[nIndex].Count);
        //    m_arrowIcons[i].gameObject.SetActive(i < (comboIconDic[nIndex].Count - 1));
        //}
        // repostion the combo tips
        m_Offset.GetComponent<UIGrid>().Reposition();
        Check_NewPlayerGuide();
    }

    public void SetStep(int nIndex, int step)
    {
        LogModule.DebugLog("nIndex === " + nIndex + "Step == " + step);
        if (!gameObject.activeSelf)
        {
            gameObject.SetActive(true);
        }

        if (!comboIconDic.ContainsKey(nIndex))
        {
            LogModule.DebugLog("!comboIconDic.ContainsKey(nIndex)  " + nIndex);
            return;
        }
        if (step <= 0 || step > comboIconDic[nIndex].Count)
        {
            return;
        }

//         if (backgroundDic == null)
//         {
//             LogModule.DebugLog(" backgroundDic == null");
//             backgroundDic = new Dictionary<int, string>();
//             backgroundDic.Add(2, "2duanlianji");
//             backgroundDic.Add(3, "lianjitishi");
//         }
//         if (backgroundDic.ContainsKey(comboIconDic[nIndex].Count))
//         {
//             backgroundIcon.spriteName = backgroundDic[comboIconDic[nIndex].Count];
//         }

       
        for (int i = 0; i < MAX_COMBO_COUNT; i++)
        {
            if (i < comboIconDic[nIndex].Count)
            {
                m_SkillIcons[i].spriteName = comboIconDic[nIndex][i];
            }
            else
            {
                m_SkillIcons[i].spriteName = "";
            }

            m_SkillIcons[i].enabled = i < step;

            m_bgIcons[i].transform.parent.gameObject.SetActive(i < comboIconDic[nIndex].Count);
            m_arrowIcons[i].gameObject.SetActive(i < (comboIconDic[nIndex].Count - 1));
        }

        //add 刷新人物连招图标组 chenzhong 2016/4/7
        m_Offset.GetComponent<UIGrid>().Reposition();

//         if (comboIconDic[nIndex].Count == 2 && 1 < MAX_COMBO_COUNT)
//         {
//             m_SkillIcons[1].transform.localPosition = new Vector3(58, 186, 0);
//             m_SkillIcons[0].transform.localPosition = new Vector3(-57, 186, 0);
// 
//             m_Effects[1].transform.localPosition = new Vector3(58, 186, 0);
//             m_Effects[0].transform.localPosition = new Vector3(-57, 186, 0);
//         }
//         else if (comboIconDic[nIndex].Count == 3 && 1 < MAX_COMBO_COUNT && 0 < MAX_COMBO_COUNT)
//         {
//             m_SkillIcons[1].transform.localPosition = new Vector3(-1, 185, 0);
//             m_SkillIcons[0].transform.localPosition = new Vector3(-62, 186, 0);
// 
//             m_Effects[1].transform.localPosition = new Vector3(-1, 185, 0);
//             m_Effects[0].transform.localPosition = new Vector3(-62, 186, 0);
//         }
        // 播特技duang
        if (comboStep.ContainsKey(nIndex))
        {
            comboStep[nIndex] = step - 1;
        }
        if (comboStep.ContainsKey(nIndex) && step == comboStep[nIndex] + 1)
        {
            if (step > 0 && step <= m_Effects.Length && m_Effects[step - 1] != null)
            {
                m_Effects[step - 1].enabled = true;
                m_Effects[step - 1].Reset();
            }
        }

        //新手引导关闭
        if (step == 3 && GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
        {
            Check_NewPlayerGuide();
        }
       
    }
    /// <summary>
    /// 设置连招提示界面的步数
    /// </summary>
    /// <param name="step">Step.</param>
    // 	public void SetStep(int step)
    // 	{
    // 		if (step < 0 || step > m_nComboCnt)
    // 		{
    // 			return;
    // 		}
    // 		int i = 0;
    // 		for (; i < step; i++)
    // 		{
    // 			m_SkillIcons[i].enabled = true;
    // 		}
    // 		for (; i < m_nComboCnt; i++)
    // 		{
    // 			m_SkillIcons[i].enabled = false;
    // 		}
    // 		// 播特技duang
    // 		if (step == m_nCurrentStep + 1)
    // 		{
    // 			if (step > 0 && step <= m_Effects.Length && m_Effects[step - 1] != null)
    // 			{
    // 				m_Effects[step - 1].enabled = true;
    // 				m_Effects[step - 1].Reset();
    // 			}
    // 		}
    // 		m_nCurrentStep = step;
    // 	}

    /// <summary>
    /// 隐藏连招提示界面
    /// </summary>
    public void Hide()
    {
        /*m_nComboCnt = -1;*/
        comboStep.Clear();
        gameObject.SetActive(false);
    }

    public void HideCurrent(int nIndex)
    {
        bool isHide = false;
        foreach (var combo in comboIconDic)
        {
            if (combo.Key != nIndex && comboStep.ContainsKey(combo.Key) &&  combo.Value.Count > (comboStep[combo.Key] + 1))
            {
                    isHide = true;
            }
        }

        LogModule.DebugLog("isHide === " + isHide);
        if(comboStep.ContainsKey(nIndex))
        {
            comboStep.Remove(nIndex);
        }
        gameObject.SetActive(isHide);
        if (!isHide)
        {
            ComboNewPlayerGuideAutoOver();
        }
    }

    private void PlayEffectCallback(GameObject effectObj, object param)
    {
        //		LogModule.DebugLog("_______________________PlayEffectCallback " + effectObj + "  " + param);
    }

    void Check_NewPlayerGuide()
    {
        if (SkillBarLogic.Instance() != null && SkillBarLogic.Instance().NewPlayerGuide_Step == 3)
        {
            SkillBarLogic.Instance().NewPlayerGuide_Step = 0;
            NewPlayerGuide(1);
        }
        if (SkillBarLogic.Instance() != null && SkillBarLogic.Instance().NewPlayerGuide_Step == 5)
        {
            SkillBarLogic.Instance().NewPlayerGuide_Step = 0;
            NewPlayerGuidLogic.CloseWindow();
        }
    }

    public void NewPlayerGuide(int index)
    {
        m_NewPlayerGuide_Step = index;
        switch (index)
        {
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_Offset, 300, 100, StrDictionary.GetClientDictionaryString("#{10296}"), "center", -1, true, true, false, null, null, 0, 0, true, false, ComboNewPlayerGuideOver);
				GameManager.gameManager.SoundManager.StopSoundEffect(228);
                GameManager.gameManager.SoundManager.PlaySoundEffect(229);
                //Invoke("ComboNewPlayerGuideOver", 3.0f);
                break;
            default:
                break;
        }
    }

    public void ComboNewPlayerGuideOver()
    {
        if (NewPlayerGuide_Step == 1)
        {
            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                m_NewPlayerGuide_Step = 0;
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().NewPlayerGuide(5);
                }
            }
        }
    }

    public void ComboNewPlayerGuideAutoOver()
    {
        if (NewPlayerGuide_Step == 1)
        {
            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().UnlockSkillAtForFTE(1);
                    SkillBarLogic.Instance().UnlockSkillAtForFTE(2);
                    SkillBarLogic.Instance().UnlockSkillAtForFTE(3);
                    NewPlayerGuidLogic.txtFteIndex = 1;
                }
            }
        }
    }
}
