using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System.Collections.Generic;
using Module.Log;

namespace Engine.JoyUI
{
public class JoyStickCursor : MonoBehaviour {
#if BOBJOYSTICK
    private static JoyStickCursor instance;
    public static JoyStickCursor Instance
    {
        get
        {
            return instance;
        }
    }
    public JoyUIButton CurrentUIButton;
    public GameObject m_selectedItem;
    private float m_CursorShowTimer = 0;
    private float m_CursorShowInterval = 2f;
    public JoyControllerLogic m_joyController;
    //private bool m_bCursorShow = false;
    public bool CursorShow
    {
        get { return MouseSimulator.Instance.MouseEnable; }
    }
    public void _DoAttachCursor(GameObject uiItem)
    {
        m_selectedItem = uiItem;
        if (uiItem.GetComponent<UISprite>() != null)
        {
            MouseSimulator.Instance.SetMousePos(uiItem.transform.position);
        }
        else if(JoyControllerLogic.FindChild<UISprite>(uiItem.transform) != null)
        {
            MouseSimulator.Instance.SetMousePos(JoyControllerLogic.FindChild<UISprite>(uiItem.transform).position);
        }
    }
    public void AttachCursor(JoyUIButton joyuibutton)
    {
        CurrentUIButton = joyuibutton;
        _DoAttachCursor(joyuibutton.CorrespondingButton);
        joyuibutton.SendMessage("OnHover", SendMessageOptions.DontRequireReceiver);
    }

    public void DetachCursor()
    {
        m_selectedItem = null;
    }

    void Awake()
    {
        instance = this;
    }



    void Update()
    {

        UpdateInMissionDialog(); //放到合适的地方，用于任务对话按键控制

#if XIAOMISTICK
            //if(Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_L1))
            //{                
            //    getNPC();//将这个语句放到其他合适的地方
            //}
#endif

        if (CursorShow)
        {//主动进入菜单模式
            //m_CursorShowTimer += Time.deltaTime; //记录指针出现的时间
            //if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_START))
            //{//若按了这一按钮 则计数清零,隐藏指针
            //    m_CursorShowTimer = 0;
            //    m_bCursorShow = false;
            //    MouseSimulator.Instance.MouseEnable = false;
            //}
            if (CurrentUIButton == null || !CurrentUIButton.CorrespondingButton.activeInHierarchy)
            {
                return;
            }
            //if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
            //{
            //    //if (MouseSimulator.Instance.MouseEnable != true)
            //    //{
            //    //    CurrentUIButton.SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
            //    //    m_CursorShowTimer = 0;
            //    //}
            //}
            if (JoyControllerLogic.DPad_upDown && CurrentUIButton.Up != null && CurrentUIButton.Up.CorrespondingButton.activeInHierarchy)
            {
                LogModule.DebugLog("bob    up ");
                AttachCursor(CurrentUIButton.Up);
            }
            if (JoyControllerLogic.DPad_downDown && CurrentUIButton.Down != null && CurrentUIButton.Down.CorrespondingButton.activeInHierarchy)
            {
                LogModule.DebugLog("bob    down ");
                AttachCursor(CurrentUIButton.Down);
            }
            if (JoyControllerLogic.DPad_leftDown && CurrentUIButton.Left != null && CurrentUIButton.Left.CorrespondingButton.activeInHierarchy)
            {
                LogModule.DebugLog("bob    left ");
                AttachCursor(CurrentUIButton.Left);
            }
            if (JoyControllerLogic.DPad_rightDown && CurrentUIButton.Right != null && CurrentUIButton.Right.CorrespondingButton.activeInHierarchy)
            {
                LogModule.DebugLog("bob    right ");
                AttachCursor(CurrentUIButton.Right);
            }
        }
        //else
        //{//角色控制模式
        //    if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_START))
        //    {
        //        MouseSimulator.Instance.MouseEnable = true;
        //        m_bCursorShow = true;
        //    }
        //}
    }

    /// <summary>
    /// 在任务对话时的控制
    /// </summary>
    private void UpdateInMissionDialog()
    {
        if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_A))
        {
            AcceptMission();
            ComPleteMission();
            ClickEquipOK();
            ClickNewItem();
            ClickUseItemReminder();
            ClickMessageBoxOK();
            ClickChallengeOK();
        }
        else if (Engine.OSC.AbstractController.Instance.GetKeyDown(JoyControllerLogic.BTN_B))
        {
            CloseMission();
            ClickMessageBoxCancel();
        }
    }


    /// <summary>
    /// 获取最近的NPC并接近和他对话
    /// </summary>
    private void getNPC()
    {
        Obj_NPC TargetNpc = null;
        List<Obj_NPC> npcList = new List<Obj_NPC>();
        float minDistance = float.PositiveInfinity;
        Vector3 mainPlayerPos;

        mainPlayerPos = Singleton<ObjManager>.GetInstance().MainPlayer.Position;

        foreach (string strName in Singleton<ObjManager>.GetInstance().ObjPools.Keys)
        {//遍历场景中的npc
            Obj_Character objChar = Singleton<ObjManager>.GetInstance().ObjPools[strName] as Obj_Character;
            if (null == objChar)
                continue;
            TargetNpc = objChar as Obj_NPC;
            if (TargetNpc == null)
            {
                continue;
            }
            if (Reputation.IsFriend(TargetNpc))
            {//如果是友好NPC则添加进npc列表
                npcList.Add(TargetNpc);
            }
        }
        for (int i = 0; i < npcList.Count; i++)
        {//比较距离，得到最近的那个npc
            float curDistance = Vector3.Distance(mainPlayerPos, npcList[i].Position);
            if ( curDistance < minDistance)
            {
                minDistance = curDistance;
                TargetNpc = npcList[i];
            }
        }

        if (TargetNpc == null)
        {
            return;
        }

        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SelectTarget = TargetNpc;
            Singleton<ObjManager>.GetInstance().MainPlayer.OnSelectTarget(TargetNpc.gameObject);            
        }
    }
    private static void showNPCDialog(Obj_NPC npc)
    {
        Singleton<DialogCore>.GetInstance().Show(npc);
    }

    /// <summary>
    /// 关闭任务对话框
    /// </summary>
    private void CloseMission()
    {
        GameObject obj = GameObject.Find("MissionInfoCloseButton");
        GameObject obj2 = GameObject.Find("MissionInfoRoot(Clone)");
        if (obj == null)
        {
            return;
        }
        obj2.SendMessage("OnCloseClick", SendMessageOptions.DontRequireReceiver);
    }
    /// <summary>
    /// 完成任务
    /// </summary>
    private void ComPleteMission()
    {
        GameObject obj = GameObject.Find("MissionInfoComPleteButton");
        GameObject obj2 = GameObject.Find("MissionInfoRoot(Clone)");
        if (obj == null)
        {
            return;
        }
        obj2.SendMessage("MissionComplete", SendMessageOptions.DontRequireReceiver);
    }
    /// <summary>
    /// 接受任务
    /// </summary>
    private void AcceptMission()
    {
        GameObject obj = GameObject.Find("MissionInfoAcceptButton");
        GameObject obj2 = GameObject.Find("MissionInfoRoot(Clone)");
        if (obj == null)
        {
            return;    
        }
        obj2.SendMessage("MissionAccept", SendMessageOptions.DontRequireReceiver);
        
    }

    private void ClickEquipOK()
    {
        if (EquipRemindLogic.Instance() != null)
        {
            EquipRemindLogic.Instance().SendMessage("OnEquipClick", SendMessageOptions.DontRequireReceiver);
        }
    }
    /// <summary>
    /// 点击NewItem按钮
    /// </summary>
    private void ClickNewItem()
    {
        if (NewItemGetLogic.Instance() != null)
        {
            NewItemGetLogic.Instance().SendMessage("NewItemOnClick", SendMessageOptions.DontRequireReceiver);
        }
    }
    /// <summary>
    /// 点击UseItem按钮
    /// </summary>
    private void ClickUseItemReminder()
    {
        if (UseItemRemindLogic.Instance() != null)
        {
            UseItemRemindLogic.Instance().SendMessage("OnUseBtClick", SendMessageOptions.DontRequireReceiver);
        }
    }
    /// <summary>
    /// 点击消息对话框的确定按钮
    /// </summary>
    private void ClickMessageBoxOK()
    {
        if (MessageBoxLogic.Instance() != null)
        {
            MessageBoxLogic.Instance().SendMessage("MessageBoxOK", SendMessageOptions.DontRequireReceiver);
        }
    }
    /// <summary>
    /// 点击消息对话框的取消按钮
    /// </summary>
    private void ClickMessageBoxCancel()
    {
        if (MessageBoxLogic.Instance() != null)
        {
            MessageBoxLogic.Instance().SendMessage("MessageBoxCancel", SendMessageOptions.DontRequireReceiver);
        }
    }
    /// <summary>
    /// 点击挑战按钮
    /// </summary>
    private void ClickChallengeOK()
    {
        if (ChallengeRewardLogic.Instance() != null)
        {
            ChallengeRewardLogic.Instance().SendMessage("ChallengeOkCallBack", SendMessageOptions.DontRequireReceiver);
            UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.ACTIVITY_UI);
        }
    }
#endif
                                            }
}