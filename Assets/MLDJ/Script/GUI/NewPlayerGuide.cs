//********************************************************************
// 文件名: NewPlayerGuide.cs
// 全路径：	\Script\GUI\NewPlayerGuide.cs
// 描述: 新手指引
// 作者: 贺文鹏
// 创建时间: 2014-03-08
//********************************************************************
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NewPlayerGuide
{
    private static Dictionary<string, UIPathData> m_NewPlayerGuideUI;
    public static int GUAJIMISSIONID = 13;
    public static int WINGMISSIONID = 398;

    // 关闭2级界面，隐藏菜单栏
    static void CloseUI()
    {
        UIManager.NewPlayerGuideCloseSubUI();
        NewPlayerGuidLogic.CloseWindow();
        // 隐藏菜单栏
        if (PlayerFrameLogic.Instance() && PlayerFrameLogic.Instance().Fold == false)
        {
            PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
        }
    }

    // 添加 显示新手指引的UI如下
    static void InitGuide()
    {
        m_NewPlayerGuideUI = new Dictionary<string, UIPathData>();
        m_NewPlayerGuideUI["PlayerFrame"] = UIInfo.PlayerFrameRoot;
        m_NewPlayerGuideUI["SkillBar"] = UIInfo.SkillBarRoot;
        m_NewPlayerGuideUI["FunctionButton"] = UIInfo.FunctionButtonRoot;
        m_NewPlayerGuideUI["JoyStick"] = UIInfo.JoyStickRoot;
        m_NewPlayerGuideUI["EquipRemindRoot"] = UIInfo.EquipRemindRoot;
        m_NewPlayerGuideUI["NewItemGet"] = UIInfo.NewItemGetRoot;
        //m_NewPlayerGuideUI["PlayerAimBar"] = UIInfo.PlayerAimBar;
    }

    public static void NewPlayerGuideOpt(string strUIName, int nIndex)
    {
        if (PlayerPreferenceData.NewPlayerGuideClose)
        {
            return;
        }

        if (strUIName != "EquipRemindRoot")
        {
            CloseUI();
        }

//         InitGuide();
// 
//         if (false == m_NewPlayerGuideUI.ContainsKey(strUIName))
//         {
//             return;
//         }

        switch (strUIName)
        {
            case "PlayerFrame":
                PlayerFrameUI(nIndex);
                break;
            case "SkillBar":
                SkillBarUI(nIndex);
                break;
            case "FunctionButton":
                FunctionButtonUI(nIndex);
                break;
            case "JoyStick":
                JoyStickUI(nIndex);
                break;
            case "EquipRemindRoot":
                EquipRemindUI(nIndex);
                break;
            case "NewItemGet":
                NewItemGetUI(nIndex);
                break;
            case "PlayerAimBar":
                //PlayerAimBarUI(nIndex);
                break;
            case "NewFunction":
                NewFunctionUI(nIndex);
                break;
            case "FellowBreeding":
                {
                    NewplayerGuidPartnerBd.OpenUI();
                }
                break;
            case "MissionDialogAndLeftTabs":
                MissionDialogAndLeftTabsGuide(nIndex);
                break;
            default:
                break;
        }

    }

    static void MissionDialogAndLeftTabsGuide(int index)
    {
        if (MissionDialogAndLeftTabsLogic.Instance() != null)
        {
            if (index == 1)
            {
                List<object> param = new List<object>();
                param.Add(GCGame.Utils.GetDicByID(11396));
                MissionDialogAndLeftTabsLogic.Instance().m_GuideMissionFlag = true;
                MissionDialogAndLeftTabsLogic.Instance().ShowNewPlayerGuide(GUAJIMISSIONID, param);
            }
        }
    }

    // 人物点击，包括 点击进入的教学
    static void PlayerFrameUI(int nIndex)
    {
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        PlayerFrameLogic.Instance().NewPlayerGuide(nIndex);
    }

    // 技能按钮
    static void SkillBarUI(int nIndex)
    {
        if (SkillBarLogic.Instance())
        {
            SkillBarLogic.Instance().NewPlayerGuide(nIndex);
        }
    }

    // 右上角按钮 FunctionButton
    static void FunctionButtonUI(int nIndex)
    {
        if (FunctionButtonLogic.Instance())
        {
            FunctionButtonLogic.Instance().DoNewPlayerGuide(nIndex);
        }
    }
    static void NewFunctionUI(int nIndex)
    {
        if (NewFunctionLogic.Instance())
        {
            NewFunctionLogic.Instance().NewPlayerGuide(nIndex);
        }
    }

    static void JoyStickUI(int nIndex)
    {
        if (JoyStickLogic.Instance())
        {
            JoyStickLogic.Instance().NewPlayerGuide(nIndex);
        }
    }

    static void EquipRemindUI(int nIndex)
    {
        if (EquipRemindLogic.Instance() && EquipRemindLogic.Instance().gameObject.activeSelf)
        {
            EquipRemindLogic.Instance().NewPlayerGuide(nIndex);
        }
        else
        {
            EquipRemindLogic.OpenNewPlayerIndex = nIndex;
        }
    }

    static void NewItemGetUI(int nIndex)
    {
        if (NewItemGetLogic.Instance())
        {
            NewItemGetLogic.Instance().NewPlayerGuider(nIndex);
        }
    }
}
