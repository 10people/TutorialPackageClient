using System.Collections.Generic;
using Games.GlobeDefine;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.ObjAnimModule;
using GCGame.Table;
using Module.Log;

public class Obj_Mount : MonoBehaviour {

    private ObjAnimModel m_MountPlayer = null;
    public ObjAnimModel MountPlayer
    {
        get { return m_MountPlayer; }
        set { m_MountPlayer = value; }
    }

    private Obj_OtherPlayer m_PlayerObj = null;
    public Obj_OtherPlayer PlayerObj
    {
        get { return m_PlayerObj; }
        set { m_PlayerObj = value; }
    }

    private int m_MountID = -1;
    public int MountID
    {
        get { return m_MountID; }
        set { m_MountID = value; }
    }

	// Use this for initialization
	void Start ()
	{
	    
	}
    // 创建坐骑
    public void InitMount(Obj_OtherPlayer PlayerObj, int nMountID)
    {
        if (PlayerObj == null)
        {
            return;
        }

        Tab_MountBase MountBase = TableManager.GetMountBaseByID(nMountID, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + nMountID);
            return;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return;
        }
        GameObject Obj = PlayerObj.gameObject;
        if (Obj == null)
        {
            return;
        }

        //PlayerObj.MountID = nMountID;
        m_PlayerObj = PlayerObj;

        Singleton<ObjManager>.GetInstance().ReloadModel(Obj, MountTable.MountModel, Obj_Mount.OnAsycLoadMount, PlayerObj,MountTable.BindPoint);

    }
    public static void OnAsycLoadMount(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (param1 == null || param2 == null || param3 == null)
        {
            return;
        }       

        GameObject objRoot = (GameObject)param1;
        Obj_OtherPlayer PlayerObj = (Obj_OtherPlayer)param2;
        string strBindPoint = (string)param3;
        if (null == objRoot || null == PlayerObj || null == strBindPoint)
        {
            return;
        }

        if (PlayerObj.MountObj == null)
        {
            return;
        }

        if (resObj == null || PlayerObj.MountID <= 0)
        {
            if (PlayerObj.MountObj != null)
            {
                DestroyMount(PlayerObj.MountObj);
                PlayerObj.MountObj = null;
            }
            return;
        }

        // 保存角色模型 找Model 放在MountPlayer下

        string strModelName = "Model";
        //if (Singleton<ObjManager>.GetInstance().MainPlayer.IsChangedMainPlayer)
        //{
        //    strModelName = "ModelChange";
        //}

        Transform gMountPlayerTrans = objRoot.transform.FindChild(strModelName);
        if (gMountPlayerTrans == null || gMountPlayerTrans.gameObject == null)
        {
            DestroyMount(PlayerObj.MountObj);
            PlayerObj.MountObj = null;
            return;
        }
        gMountPlayerTrans.parent = PlayerObj.MountObj.gameObject.transform;
        gMountPlayerTrans.localPosition = Vector3.zero;
        gMountPlayerTrans.localRotation = Quaternion.identity;
        // 初始化动作
        PlayerObj.MountObj.MountPlayer = PlayerObj.MountObj.gameObject.AddComponent<ObjAnimModel>() as ObjAnimModel;
        ObjAnimModel mountPlayer = PlayerObj.MountObj.MountPlayer;
        if (mountPlayer == null)
        {
            DestroyMount(PlayerObj.MountObj);
            PlayerObj.MountObj = null;
            return;
        }
        mountPlayer.AnimationFilePath = PlayerObj.AnimationFilePath;
        mountPlayer.InitAnimation();

        // 添加马Model
        Singleton<ObjManager>.GetInstance().AsycReloadMountModelOver(modelName, resObj, objRoot, PlayerObj.AnimationFilePath, null);

        string str = strModelName + strBindPoint;
        Transform mountTransferm = objRoot.transform.FindChild(str);

        if (null == mountTransferm)
        {
            LogModule.ErrorLog("can not find the mount's bindpoint:" + str);
            DestroyMount(PlayerObj.MountObj);
            PlayerObj.MountObj = null;
            return;
        }
        GameObject gBindPoint = mountTransferm.gameObject;
        if (gBindPoint)
        {
            mountPlayer.transform.parent = gBindPoint.transform;
            mountPlayer.transform.localPosition = Vector3.zero;
            mountPlayer.transform.rotation = objRoot.transform.rotation;
        }

        PlayerObj.OnSwithObjAnimState(PlayerObj.CurObjAnimState);
        //需要下马时 还骑着马 走下面流程(防止出现 上马立马下马的情况 下马失败)
        if (PlayerObj.IsNeedUnMount && PlayerObj.MountID !=-1)
        {
            UnMount(PlayerObj);
        }

        if (null != PlayerObj)
        {
            PlayerObj.OnReloadModle();
            if (PlayerObj.ObjEffectController != null)
            {
                PlayerObj.ObjEffectController.OnMountModelOk();

                //非登陆状态才有上骑乘的特效
                if (PlayerObj.ShowRideOnEffect)
                {
                    Tab_MountBase MountBase = TableManager.GetMountBaseByID(PlayerObj.MountID, 0);
                    if (MountBase != null )
                    {
                        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
                        if (MountTable != null)
                        {
                            PlayerObj.ObjEffectController.PlayEffect(MountTable.EffectMountOn);
                            PlayerObj.ShowRideOnEffect = false;
                        }
                    }
                }
            }

            PlayerObj.RideMountWeapon();

            PlayerObj.IsLoadingModel = false;
            if (PlayerObj.WaitChangeState != GlobeVar.INVALID_ID)
            {
                int nChangeState = PlayerObj.WaitChangeState;
                PlayerObj.WaitChangeState = GlobeVar.INVALID_ID;
                PlayerObj.UpdateOtherPlayerChangeState(nChangeState);
            }
        }
    }

    // 换马操作，和创建马分开
    public void ChangeMount(Obj_OtherPlayer PlayerObj, int nMountID)
    {
        if (PlayerObj == null)
        {
            return;
        }

        Tab_MountBase MountBase = TableManager.GetMountBaseByID(nMountID, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + nMountID);
            return;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return;
        }
        GameObject Obj = PlayerObj.gameObject;
        if (Obj == null)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().ReloadModel(Obj, MountTable.MountModel, Obj_Mount.OnAsycLoadChangeMount, PlayerObj, MountTable.BindPoint);
    }
    public static void OnAsycLoadChangeMount(string modelName, GameObject resObj, object param1, object param2, object param3)
    {
        if (param1 == null || param2 == null || param3 == null)
        {
            return;
        }

        GameObject objRoot = param1 as GameObject;
        if (null == objRoot)
        {
            return;
        }

        Obj_OtherPlayer PlayerObj = param2 as Obj_OtherPlayer;
        if (null == PlayerObj || null == PlayerObj.gameObject)
        {
            return;
        }

        if (PlayerObj.MountObj == null)
        {
            return;
        }

        if (resObj == null || PlayerObj.MountID <= 0)
        {
            if (PlayerObj.MountObj != null)
            {
                DestroyMount(PlayerObj.MountObj);
                PlayerObj.MountObj = null;
            }
            return;
        }

        string strBindPoint = param3 as string;
        if (strBindPoint == null)
        {
            return;
        }

        // 保存角色模型 
        PlayerObj.MountObj.transform.parent = PlayerObj.transform;

        // 添加马Model
        //Singleton<ObjManager>.GetInstance().AsycReloadModelOver(modelName, resObj, objRoot, PlayerObj.AnimationFilePath, null);

        GameObject model = (GameObject)GameObject.Instantiate(resObj);
        if (null == model)
        {
            return;
        }
        else
        {
            model.name = "Model";
        }

        Singleton<ObjManager>.GetInstance().ReloadModel(objRoot, model, PlayerObj.AnimationFilePath, null);

        string str = "Model" + strBindPoint;
        Transform mountTransferm = objRoot.transform.FindChild(str);
        if (mountTransferm == null)
        {
            LogModule.ErrorLog("can not find the mount's bindpoint:" + str);
            return;
        }
        GameObject gBindPoint = mountTransferm.gameObject;
        if (gBindPoint)
        {
            PlayerObj.MountObj.transform.parent = gBindPoint.transform;
            PlayerObj.MountObj.transform.localPosition = Vector3.zero;
            PlayerObj.MountObj.transform.rotation = objRoot.transform.rotation;
        }

        PlayerObj.OnSwithObjAnimState(PlayerObj.CurObjAnimState);

        //需要下马时 还骑着马 走下面流程(防止出现 上马立马下马的情况 下马失败)
        if (PlayerObj.IsNeedUnMount && PlayerObj.MountID != -1)
        {
            UnMount(PlayerObj);
        }

        PlayerObj.OnReloadModle();
        //策划说只要上骑乘就要播特效
        if (PlayerObj.ObjEffectController != null)
        {
            PlayerObj.ObjEffectController.OnMountOff(PlayerObj.MountID);
			
            PlayerObj.ObjEffectController.OnMountModelOk();



			//非登陆状态才有上骑乘的特效
			if (PlayerObj.ShowRideOnEffect)
            {
                Tab_MountBase MountBase = TableManager.GetMountBaseByID(PlayerObj.MountID, 0);
                if (MountBase != null)
                {
                    Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
                    if (MountTable != null)
                    {
                        PlayerObj.ObjEffectController.PlayEffect(MountTable.EffectMountOn);
                        PlayerObj.ShowRideOnEffect = false;
                    }
                }
            }
        }

        PlayerObj.IsLoadingModel = false;
        if (PlayerObj.WaitChangeState != GlobeVar.INVALID_ID)
        {
            int nChangeState = PlayerObj.WaitChangeState;
            PlayerObj.WaitChangeState = GlobeVar.INVALID_ID;
            PlayerObj.UpdateOtherPlayerChangeState(nChangeState);
        }
    }

    // 骑马
    static public void RideMount(Obj_OtherPlayer PlayerObj, int nMountID)
    {
        if (null == PlayerObj)
            return;

        Tab_MountBase MountBase = TableManager.GetMountBaseByID(nMountID, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + nMountID);
            return;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return;
        }
        GameObject Obj = PlayerObj.gameObject;
        if (Obj != null)
        {
            if (PlayerObj.MountObj) // 换个马
            {
                if (PlayerObj.MountObj.MountID > 0)
                {
                    if (PlayerObj.MountObj.MountID == nMountID)
                    {
                        return;
                    }
                    PlayerObj.MountObj.ChangeMount(PlayerObj, nMountID);
                }
            }
            else //  创建个马
            {
                GameObject MountPlayerObj = ResourceManager.InstantiateResource("Prefab/Model/PlayerRoot", "MountPlayer") as GameObject;
                if (MountPlayerObj != null)
                {
                    PlayerObj.MountObj = MountPlayerObj.AddComponent<Obj_Mount>() as Obj_Mount;

                    if (PlayerObj.MountObj)
                    {
                        PlayerObj.MountObj.InitMount(PlayerObj, nMountID);
                    }
                }
            }

            if (PlayerObj.MountObj)
            {
                PlayerObj.MountObj.MountID = nMountID;
            }

            // 上坐骑时名字板高度修正
            if (PlayerObj.HeadInfoBoard != null)
            {
                BillBoard billboard = PlayerObj.HeadInfoBoard.GetComponent<BillBoard>();
                if (billboard != null)
                {
                    billboard.fDeltaHeight = PlayerObj.DeltaHeight + PlayerObj.GetMountNameBoardHeight();
                }
            }
        }
    }

    // 下马
    static public void UnMount(Obj_OtherPlayer PlayerObj)
    {
        if (PlayerObj == null || PlayerObj.MountObj == null)
        {
            return;
        }

        Transform gMountPlayerTrans = PlayerObj.MountObj.gameObject.transform.FindChild("Model");
        if (gMountPlayerTrans == null || gMountPlayerTrans.gameObject == null)
        {
            DestroyMount(PlayerObj.MountObj);
            PlayerObj.MountObj = null;
            return;
        }

        GameObject Obj = PlayerObj.gameObject;
        if (Obj != null)
        {
            gMountPlayerTrans.parent = Obj.transform;

            if (false == Singleton<ObjManager>.GetInstance().ReloadModel(Obj, gMountPlayerTrans.gameObject, PlayerObj.AnimationFilePath))
            {
                return;
            }
            int mountId = PlayerObj.MountID;
            PlayerObj.MountObj = null;
            PlayerObj.MountID = -1;
            PlayerObj.IsNeedUnMount = false;
            PlayerObj.OnSwithObjAnimState(PlayerObj.CurObjAnimState);
            if (PlayerObj.ObjEffectController != null)
            {
                PlayerObj.ObjEffectController.OnMountOff(mountId);
            }

            // 下坐骑时名字板高度恢复
            if (PlayerObj.HeadInfoBoard != null)
            {
                BillBoard billboard = PlayerObj.HeadInfoBoard.GetComponent<BillBoard>();
                if (billboard != null)
                {
                    billboard.RecoverHeight();
                }
            }

            PlayerObj.UnMountWeapon();
        }
    }

    public int GetMountAnimation(CharacterDefine.MountAction value,Obj_Character obj)
    {
        if (PlayerObj == null || obj == null)
        {
            return -1;
        }
        Tab_MountBase MountBase = TableManager.GetMountBaseByID(PlayerObj.MountID, 0);
        if (null == MountBase)
        {
            LogModule.DebugLog("MountBase.txt has not Line ID=" + PlayerObj.MountID);
            return -1;
        }
        Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
        if (MountTable == null)
        {
            LogModule.DebugLog("CharMount.txt has not Line ID=" + MountBase.ModelID);
            return -1;
        }
        int nProfession = -1;
        if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
        {
            Obj_OtherPlayer objPlayer = obj as Obj_OtherPlayer;
            nProfession = objPlayer.Profession;
        }

       
        if (value == CharacterDefine.MountAction.STAND)
        {
            if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
            {
                return MountTable.StandAniShaoLin;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            {
                return MountTable.StandAniTianShan;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
            {
                return MountTable.StandAniDaLi;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                return MountTable.StandAniXiaoYao;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                return MountTable.StandAniGaiBang;
            }

            return -1;
        }
        else if (value == CharacterDefine.MountAction.RUN)
        {
            if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
            {
                return MountTable.RunAniShaoLin;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            {
                return MountTable.RunAniTianShan;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
            {
                return MountTable.RunAniDaLi;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                return MountTable.RunAniXiaoYao;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                return MountTable.RunAniGaiBang;
            }

            return -1;
        }
        else
        {
            return -1;
        }
    }
    public void PlayMountPlayerAnima(CharacterDefine.MountAction value,Obj_Character obj)
    {
        int realAniID = GetMountAnimation(value,obj);
        if (realAniID < 0)
        {
            return;
        }
        if (m_MountPlayer && m_MountPlayer.AnimLogic)
        {
            m_MountPlayer.AnimLogic.Play(realAniID);
        }
    }

    public static void DestroyMount(Obj_Mount MountObj)
    {
        if (MountObj ==null)
        {
            return;
        }
        GameObject gMountObj = MountObj.gameObject;
        if (gMountObj)
        {
            DestroyImmediate(gMountObj);
        }
    }
}
