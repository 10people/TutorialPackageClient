/********************************************************************************
 *	文件名：	TransformController.cs
 *	全路径：	\Script\GUI\TransformController.cs
 *	创建人：	gzq
 *	创建时间：2015-12-29
 *
 *	功能说明：变身技能控制
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
[SerializeField]
public class TransformController 
{
    public enum TransStep
    {
        None=0,
        ShowChoosePanel,//显示变身旋转面板
        ChooseDone,     //选择完成了，等待服务器回包
        TakeEffect,     //变身生效
        Done            //变身结束
    }
    public SkillBarLogic m_SkillBarLogic;
    private TransStep m_TransStep = TransStep.None;

    public TransStep CurTransStep
    {
        get { return m_TransStep; }
        set {
//            Debug.LogError("Set:"+m_TransStep+"-TO-"+value);
            m_TransStep = value; 
        }
    }
    private const int m_nChooseTimeLimit = 3000;//选择变身的时间限制
    private const int m_nTimeForEnd = 5000;//闪屏提示倒计时
    private const int m_nStartEffectId = 551;
    private const int m_nNearEndEffectId = 550;
    private const int m_nEffectLastTime = 20000;//变身生效的时限
    private int m_nNearEndTime = -1;//TakeEffect开始后多少秒屏幕开始闪屏，提示
    private int m_nChooseStartTime = 0;
    private int m_nEffectStartTime = 0;
    private bool m_bHasShowNearEndEffect = false;

    public TransformerBeginData m_BeginDataPVE;
    public TransformerBeginData m_BeginDataPVP;

    public const int TWEENGROUP_START = 1;
    public const int TWEENGROUP_PVP = 2;
    public const int TWEENGROUP_PVE = 3;
    public const int TWEENGROUP_END = 4;

    private bool m_bChoosedPvE = false;

    public List<WidgetData> m_listPVEWidgetData;
    public List<WidgetData> m_listPVPWidgetData;
    
    public TransformController(SkillBarLogic root)
    {
        m_TransStep = TransStep.None;
        m_SkillBarLogic = root;

//         m_BeginDataPVE = new TransformerBeginData();
//         m_BeginDataPVE.m_vSpriteBeginPos_Local = root.m_SpritePVE.transform.localPosition;
//         m_BeginDataPVE.m_vBeginPos_Local = root.m_PVEBtn.transform.localPosition;
//         m_BeginDataPVE.m_vAnchorPos_Local = root.m_PVEBtn.transform.parent.localPosition;
//         m_BeginDataPVE.m_vLblPos_Local = root.m_LblPvE.transform.localPosition;
//         m_BeginDataPVE.m_nBeginWidth = root.m_SpritePVEBG.width;
// 
//         m_BeginDataPVP = new TransformerBeginData();
//         m_BeginDataPVP.m_vSpriteBeginPos_Local = root.m_SpritePVP.transform.localPosition;
//         m_BeginDataPVP.m_vBeginPos_Local = root.m_PVPBtn.transform.localPosition;
//         m_BeginDataPVP.m_vAnchorPos_Local = root.m_PVPBtn.transform.parent.localPosition;
//         m_BeginDataPVP.m_vLblPos_Local = root.m_LblPvP.transform.localPosition;
//         m_BeginDataPVP.m_nBeginWidth = root.m_SpritePVPBG.width;

        m_listPVEWidgetData = new List<WidgetData>();
        m_listPVPWidgetData = new List<WidgetData>();

        //PVE
        m_listPVEWidgetData.Add(GenWidgetDataFromObj(root.m_PVEBtn.transform.parent.gameObject));
        m_listPVEWidgetData.Add(GenWidgetDataFromObj(root.m_PVEBtn.gameObject));
        for (int i = 0; i < root.m_PVEBtn.transform.childCount; i++)
        {
            GameObject obj = root.m_PVEBtn.transform.GetChild(i).gameObject;
            WidgetData wd = GenWidgetDataFromObj(obj);
            if (wd != null)
            {
                m_listPVEWidgetData.Add(wd);
            }
        }

        //PVP
        m_listPVEWidgetData.Add(GenWidgetDataFromObj(root.m_PVPBtn.transform.parent.gameObject));
        m_listPVPWidgetData.Add(GenWidgetDataFromObj(root.m_PVPBtn.gameObject));
        for (int i = 0; i < root.m_PVPBtn.transform.childCount; i++)
        {
            GameObject obj = root.m_PVPBtn.transform.GetChild(i).gameObject;
            WidgetData wd = GenWidgetDataFromObj(obj);
            if (wd != null)
            {
                m_listPVPWidgetData.Add(wd);
            }
        }
    }

    private WidgetData GenWidgetDataFromObj(GameObject obj)
    {
        WidgetData widgetData= null;
        if (obj != null)
        {
            if (obj.GetComponent<UITweener>() != null)
            {
                widgetData = new WidgetData();
                widgetData.m_vBeginLoaclPos = obj.transform.localPosition;
                widgetData.m_obj = obj;
                if (obj.GetComponent<UIWidget>() != null)
                {
                    UIWidget wd = obj.GetComponent<UIWidget>();
                    widgetData.m_bHasWidget = true;
                    widgetData.m_fBeginAlpha = wd.color.a;
                    widgetData.m_nBeginWidth = wd.width;
                }
            }
        }
        return widgetData;
    }

    public void PlayTweenInGroup(int groupId,bool forward=true)
    {
        UITweener[] tweens = m_SkillBarLogic.m_objXpRoot.GetComponentsInChildren<UITweener>();
        if (groupId == TWEENGROUP_START)
        {
            m_SkillBarLogic.m_EffectPve01.SetActive(true);
            m_SkillBarLogic.m_EffectPvP01.SetActive(true);

            m_SkillBarLogic.m_EffectPve02.SetActive(false);
            m_SkillBarLogic.m_EffectPvP02.SetActive(false);
        }
        else
        {
            m_SkillBarLogic.m_EffectPve01.SetActive(false);
            m_SkillBarLogic.m_EffectPvP01.SetActive(false);

            m_SkillBarLogic.m_EffectPve02.SetActive(false);
            m_SkillBarLogic.m_EffectPvP02.SetActive(false);
        }
        foreach (UITweener tw in tweens)
        {
            if (tw.tweenGroup == groupId)
            {
                tw.Reset();
                tw.Play(forward);
            }
        }
    }
    public void StopAllTween()
    {
        UITweener[] tweens = m_SkillBarLogic.m_objXpRoot.GetComponentsInChildren<UITweener>();
        foreach (UITweener tw in tweens)
        {
            tw.enabled = false;
        }
    }

    private void ClearData()
    {
        m_nChooseStartTime = 0;
        m_nEffectStartTime = 0;
        m_bHasShowNearEndEffect = false;
    }
    private void ClearData_Sec()
    {
        m_nEffectStartTime = 0;
        m_bHasShowNearEndEffect = false;
    }
    public void ShowChoosePanel()
    {
        ClearData();
        CurTransStep = TransStep.ShowChoosePanel;
        m_nChooseStartTime = (int)(Time.time*1000);
    }
    public void Update()
    {
        if (CurTransStep == TransStep.ShowChoosePanel)
        {
            UpdateChooseEffect();
        }
        else if (CurTransStep == TransStep.TakeEffect)
        {
            UpdateEffectTime();
        }
    }
    /// <summary>
    /// 变身选完了 播放第二段Tween
    /// </summary>
    public void ChooseDone(bool choosedPVE=true)
    {
        if (CurTransStep != TransStep.ShowChoosePanel)
        {
            return;
        }
        m_bChoosedPvE = choosedPVE;
        CurTransStep = TransStep.ChooseDone;
        m_SkillBarLogic.OnClickXpClose();
       // HideObjWhenTween(false);
        if (choosedPVE)
        {
            PlayTweenInGroup(TWEENGROUP_PVE);
            m_SkillBarLogic.m_EffectPve02.SetActive(false);
            m_SkillBarLogic.m_EffectPve02.SetActive(true);
        }
        else
        {
            PlayTweenInGroup(TWEENGROUP_PVP);
            m_SkillBarLogic.m_EffectPvP02.SetActive(false);
            m_SkillBarLogic.m_EffectPvP02.SetActive(true);
        }
       
    }

    void HideObjWhenTween(bool show = true)
    {
        for (int i = 0; i < m_SkillBarLogic.m_objHideWhenTween.Length; i++)
        {
            m_SkillBarLogic.m_objHideWhenTween[i].SetActive(show);
        }
    }

    /// <summary>
    /// 重置：
    /// 位置
    /// 宽度
    /// 透明度
    /// </summary>
    public void ResetTransformUI()
    {
//         if (m_SkillBarLogic != null)
//         {
//             m_SkillBarLogic.m_PVEBtn.transform.localPosition = m_BeginDataPVE.m_vBeginPos_Local;
//             m_SkillBarLogic.m_SpritePVEBG.width = (int)m_BeginDataPVE.m_nBeginWidth;
//             m_SkillBarLogic.m_SpritePVE.transform.localPosition = m_BeginDataPVE.m_vSpriteBeginPos_Local;
//             m_SkillBarLogic.m_PVEBtn.transform.parent.localPosition = m_BeginDataPVE.m_vAnchorPos_Local;
//             m_SkillBarLogic.m_LblPvE.transform.localPosition = m_BeginDataPVE.m_vLblPos_Local;
// 
//             m_SkillBarLogic.m_PVPBtn.transform.localPosition = m_BeginDataPVP.m_vBeginPos_Local;
//             m_SkillBarLogic.m_SpritePVPBG.width = (int)m_BeginDataPVP.m_nBeginWidth;
//             m_SkillBarLogic.m_SpritePVP.transform.localPosition = m_BeginDataPVP.m_vSpriteBeginPos_Local;
//             m_SkillBarLogic.m_PVPBtn.transform.parent.localPosition = m_BeginDataPVP.m_vAnchorPos_Local;
//             m_SkillBarLogic.m_LblPvP.transform.localPosition = m_BeginDataPVP.m_vLblPos_Local;
// 
//             //
//             foreach (Transform t in m_SkillBarLogic.m_PVEBtn.transform)
//             {
//                 if (t.GetComponent<UISprite>() != null)
//                 {
//                     ChangeSpriteAlpha(t.GetComponent<UISprite>(), 1);
//                 }
//                 if (t.GetComponent<UILabel>() != null)
//                 {
//                     ChangeLabelAlpha(t.GetComponent<UILabel>(), 1);
//                 }
//             }
//             foreach (Transform t in m_SkillBarLogic.m_PVPBtn.transform)
//             {
//                 if (t.GetComponent<UISprite>() != null)
//                 {
//                     ChangeSpriteAlpha(t.GetComponent<UISprite>(), 1);
//                 }
//                 if (t.GetComponent<UILabel>() != null)
//                 {
//                     ChangeLabelAlpha(t.GetComponent<UILabel>(), 1);
//                 }
//             }
//         }

        HideObjWhenTween(true);
        m_listPVEWidgetData.ForEach(widgetData =>
            {
                if (widgetData.m_obj != null)
                {
                    widgetData.ResetObj();
                }
            }
            );
        m_listPVPWidgetData.ForEach(widgetData =>
        {
            if (widgetData.m_obj != null)
            {
                widgetData.ResetObj();
            }
        }
           );
    }

    /// <summary>
    /// 变身生效
    /// </summary>
    public void TakeEffect()
    {
        if (CurTransStep != TransStep.ChooseDone)
        {
            //流程出错可能是挂机的影响。此时清数据
            CloseChoosePanel();
            StopAllTween();
            ResetTransformUI();
           // PlayTweenInGroup(TWEENGROUP_END);
        }
        ClearData_Sec();
        m_SkillBarLogic.ShowAfterChangeSkill(true);
        BackCamerControll.Instance().PlaySceneEffect(m_nStartEffectId);
        m_nEffectStartTime = (int)(Time.time * 1000);
        m_nNearEndTime = m_nEffectLastTime - m_nTimeForEnd;
        CurTransStep = TransStep.TakeEffect;
    }

    void UpdateChooseEffect()
    {
        if (!CanUpdateChooseTime())
        {
            return;
        }
        int timeElapse = (int)(Time.time * 1000 - m_nChooseStartTime);
        float elapsePercent = (float)timeElapse /(float) Mathf.Max(m_nChooseTimeLimit, 1.0f);//防0除
        m_SkillBarLogic.UpdateXpChooseSLiderValue(1-elapsePercent);
        if ((Time.time * 1000 - m_nChooseStartTime) >= m_nChooseTimeLimit)
        {
            //选择超时了
            ChooseTimeOut();
        }
    }
     void UpdateEffectTime()
    {
        int timeElapse = (int)(Time.time * 1000 - m_nEffectStartTime);
//        float elapsePercent = (float)timeElapse / (float)Mathf.Max(m_nEffectLastTime,1.0f);//防0除
        //更新进度条
        if (!m_bHasShowNearEndEffect)
        {
           // Debug.LogError("timeElapse is:" + timeElapse);
            if (timeElapse >= m_nNearEndTime)
            {
                ShowNearEndEffect();
            }
        }
    }
     void ChooseTimeOut()
     {
         End();
         CloseChoosePanel();
         m_SkillBarLogic.ReverseTween();
     }
     void CloseChoosePanel()
     {
         m_SkillBarLogic.CloseCHoosePanel();
     }

    public void End()
    {
        CurTransStep = TransStep.Done;
       // Debug.LogError("END,,");
        if (InFirstScene())
        {
            return;
        }
        m_SkillBarLogic.ShowAfterChangeSkill(false);
        BackCamerControll.Instance().StopEffectWithId(m_nNearEndEffectId, false);
        BackCamerControll.Instance().StopEffectWithId(m_nStartEffectId, false);
    }

    public void BreakTransform()
    {
        CurTransStep = TransStep.Done;
    }
    private void ShowNearEndEffect()
    {
        if (!m_bHasShowNearEndEffect)
        {
            if (InFirstScene())
            {
                return;
            }
            BackCamerControll.Instance().PlaySceneEffect(m_nNearEndEffectId);
            BackCamerControll.Instance().StopEffectWithId(m_nStartEffectId, false);
            m_bHasShowNearEndEffect = true;
            CloseChoosePanel();
            ResetTransformUI();
           // Debug.LogError("ShowNearEndEffect:" + m_nNearEndEffectId);
        }
    }
   //下面的函数与新手引导相关
    /// <summary>
    /// 是否应该更新选择面板的倒计时进度条。 新手和某个剧情副本的引导不需要。
    /// </summary>
    /// <returns></returns>
    private bool CanUpdateChooseTime()
    {
        if (NewPlayerGuidLogic.CurrentGuideID == 11   //新手关的引导
            || NewPlayerGuidLogic.CurrentGuideID == 9  //剧情副本的引导
            )
        {
            return false;
        }
        return true;
    }
    private bool InFirstScene()
    {
        return GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO;
    }
}
public class TransformerBeginData
{
    public Vector3 m_vBeginPos_Local = Vector3.zero;
    public Vector3 m_vSpriteBeginPos_Local = Vector3.zero;
    public Vector3 m_vAnchorPos_Local = Vector3.zero;
    public Vector3 m_vLblPos_Local = Vector3.zero; 
    public float m_nBeginWidth = 0;
    public float m_fBeginAlpha = 1;
}

public class WidgetData
{
    public GameObject m_obj;
    public Vector3 m_vBeginLoaclPos = Vector3.zero;
    public float m_fBeginAlpha = 0;
    public int m_nBeginWidth = 0;
    public bool m_bHasWidget = true;

    public static void ChangeWidgetAlpha(UIWidget widget, float alpha)
    {
        if (widget != null)
        {
            Color color = widget.color;
            color.a = alpha;
            widget.color = color;
        }
    }

    public void ResetObj()
    {
        if(m_obj!=null)
        {
            m_obj.transform.localPosition=m_vBeginLoaclPos;
            if(m_bHasWidget)
            {
                UIWidget wd=m_obj.GetComponent<UIWidget>();
                if(wd!=null)
                {
                    ChangeWidgetAlpha(wd,m_fBeginAlpha);
                    wd.width = m_nBeginWidth;
                }
            }
        }
    }
}