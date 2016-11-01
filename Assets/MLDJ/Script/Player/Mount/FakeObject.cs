//********************************************************************
// 文件名: FakeObject.cs
// 描述: 坐骑 模型
// 作者: HeWenpeng
// 创建时间: 2014-1-2
// 功能说明：FakeObject动作模型， 用于UI显示， FakeObject.txt表配置。
// 修改历史:
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.ObjAnimModule;
using Module.Log;
using Games.Item;
using Games.GlobeDefine;
using System.Collections.Generic;
using Games.LogicObj;

namespace Games.FakeObject
{
    public class FakeObject
    {
        private ObjAnimModel m_ObjAnim;
        public ObjAnimModel ObjAnim
        {
            get { return m_ObjAnim; }
            set { m_ObjAnim = value; }
        }

        private GameObject m_FakeObjNode;
        public GameObject FakeObjNode
        {
            get { return m_FakeObjNode; }
            set { m_FakeObjNode = value; }
        }

        // 创建 坐骑Obj 唯一标识strName+NMountID,不可重复
        public bool initFakeObject(int nFakeObjID, GameObject fakeObjNode)
        {
            if (m_ObjAnim)
            {
                Destroy();
            }

            FakeObjNode = fakeObjNode;
            if (FakeObjNode == null)
            {
                LogModule.DebugLog("error: initFakeObject FakeObjNode is null");
                return false ;
            }

            Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(nFakeObjID, 0);
            if (FakeObjTable == null)
            {
                return false;
            }

            GameObject Obj = ResourceManager.InstantiateResource("Prefab/Model/NPCRoot", nFakeObjID.ToString()) as GameObject;
            if (Obj != null)
            {
                if (FakeObjTable.IsPlayer == 1)
                {
                    if (Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID == GlobeVar.INVALID_ID)
                    {
                        Singleton<ObjManager>.GetInstance().ReloadModel(Obj, FakeObjTable.FakeObjModel, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
                    }
                    else
                    {
                        InitFashionFakeObj(Obj, Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID, FakeObjTable);
                    }
                }
                else
                {
                    Singleton<ObjManager>.GetInstance().ReloadModel(Obj, FakeObjTable.FakeObjModel, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
                }

                m_ObjAnim = Obj.AddComponent<ObjAnimModel>() as ObjAnimModel;

                return true;
            }

            return false;
        }

		public bool initFakeObject(int nFakeObjID, GameObject fakeObjNode, out GameObject FakeObj ,int modeVisualID = -1,int nProfession = -1)
        {
            FakeObj = null;

            if (m_ObjAnim)
            {
                Destroy();
            }

            FakeObjNode = fakeObjNode;
            if (FakeObjNode == null)
            {
                LogModule.DebugLog("error: initFakeObject FakeObjNode is null");
                return false;
            }

            Tab_FakeObject FakeObjTable = TableManager.GetFakeObjectByID(nFakeObjID, 0);
            if (FakeObjTable == null)
            {
                return false;
            }

            FakeObj = ResourceManager.InstantiateResource("Prefab/Model/NPCRoot", nFakeObjID.ToString()) as GameObject;
            if (FakeObj != null)
            {
				if( !Singleton<ObjManager>.Instance.MainPlayer )
				{
					// 重载模型
					if( modeVisualID != GlobeVar.INVALID_ID)
					{
						InitFashionFakeObj(FakeObj,modeVisualID, FakeObjTable,nProfession);
					}

					else
					{
						Singleton<ObjManager>.GetInstance().ReloadModel(FakeObj, FakeObjTable.FakeObjModel, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
					}
				}
				else if (FakeObjTable.IsPlayer == 1  )
                {
					if ( Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID == GlobeVar.INVALID_ID)
                    {
                        Singleton<ObjManager>.GetInstance().ReloadModel(FakeObj, FakeObjTable.FakeObjModel, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
                    }
                    else
                    {
                        InitFashionFakeObj(FakeObj, Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID, FakeObjTable);
                    }
                }
                else
                {
                    Singleton<ObjManager>.GetInstance().ReloadModel(FakeObj, FakeObjTable.FakeObjModel, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
                }

                m_ObjAnim = FakeObj.GetComponent<ObjAnimModel>() as ObjAnimModel;
                if (m_ObjAnim == null)
                {
                    m_ObjAnim = FakeObj.AddComponent<ObjAnimModel>() as ObjAnimModel;
                }

                return true;
            }

            return false;
        }
        
        public void Destroy()
        {
            if (m_ObjAnim != null)
            {
                GameObject.Destroy(ObjAnim.gameObject);
                m_ObjAnim = null;
            }
        }

        public void PlayAnim(int nAnimID)
        {
            if (null != m_ObjAnim && null != m_ObjAnim.AnimLogic)
                m_ObjAnim.AnimLogic.Play(nAnimID);
        }

		void InitFashionFakeObj(GameObject Obj, int nModelVisualID, Tab_FakeObject FakeObjTable,int nProfession = -1)
        {
            // 重载模型
            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(nModelVisualID, 0);
            if (tabItemVisual == null)
            {
                return;
            }

			int nCharModelID = -1;
			if (Singleton<ObjManager>.Instance != null && Singleton<ObjManager>.Instance.MainPlayer != null) 
			{
				nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID (tabItemVisual);
			} 
			else 
			{
				nCharModelID = GetCharModelID(tabItemVisual,nProfession);
			}

            Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
            if (tabCharModel == null)
            {
                return;
            }

            Singleton<ObjManager>.GetInstance().ReloadModel(Obj, tabCharModel.ResPath, Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver, FakeObjTable, this);
        }

        public void InitFakeObjWeapon(GameObject Obj, int nCurWeaponID, Tab_FakeObject FakeObjTable)
        {
            // 重载武器
            bool defaultVisual = false;
            Tab_ItemVisual WeaponVisual = null;
            Tab_EquipAttr tabEquipAttr = TableManager.GetEquipAttrByID(nCurWeaponID, 0);
            if (tabEquipAttr != null)
            {
                Tab_ItemVisual tabWeaponVisual = TableManager.GetItemVisualByID(tabEquipAttr.ModelId, 0);
                if (tabWeaponVisual != null)
                {
                    WeaponVisual = tabWeaponVisual;
                }
                else
                {
                    defaultVisual = true;
                }
            }
            else
            {
                defaultVisual = true;
            }

            if (defaultVisual)
            {
                Tab_ItemVisual tabDefaultVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabDefaultVisual == null)
                {
                    return;
                }

                WeaponVisual = tabDefaultVisual;
            }

			int nWeaponModelID = -1;
            if (WeaponVisual == null)
            {
                return;
            }


			if( Singleton<ObjManager>.Instance.MainPlayer == null  )
			{
				if( UIControllerBase<RoleChooseLogic>.Instance() != null)
				{
					int nProfession = -1 ;
					nProfession = UIControllerBase<RoleChooseLogic>.Instance().GetRoleProfess();

					if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
					{
						nWeaponModelID =  WeaponVisual.WeaponModelIDShaoLin;
					}
					else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
					{
						nWeaponModelID = WeaponVisual.WeaponModelIDTianShan;
					}
					else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
					{
						nWeaponModelID = WeaponVisual.WeaponModelIDDaLi;
					}
					else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
					{
						nWeaponModelID = WeaponVisual.WeaponModelIDXiaoYao;
					}
					else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
					{
						nWeaponModelID = WeaponVisual.WeaponModelIDGaiBang;
					}
				}
			}

			else
			{
				 nWeaponModelID = Singleton<ObjManager>.Instance.MainPlayer.GetWeaponModelID(WeaponVisual);
			}
            

            Tab_WeaponModel tabWeaponModel = TableManager.GetWeaponModelByID(nWeaponModelID, 0);
            if (tabWeaponModel == null)
            {
                return;
            }

			int playerProfession = -1;
            if (Singleton<ObjManager>.Instance.MainPlayer == null)
            {
				if(  UIControllerBase<RoleChooseLogic>.Instance())
				playerProfession =  UIControllerBase<RoleChooseLogic>.Instance().GetRoleProfess(); 
            }

			else
			{
				playerProfession =  Singleton<ObjManager>.Instance.MainPlayer.Profession ;
			}

			if (playerProfession == (int)CharacterDefine.PROFESSION.TIANSHAN ||
			    playerProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                LoadWeapon(Obj, "Weapon_L", tabWeaponModel.ResPath + "_L", tabWeaponModel);
                LoadWeapon(Obj, "Weapon_R", tabWeaponModel.ResPath + "_R", tabWeaponModel);
            }
			else if (playerProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                LoadWeapon(Obj, "Weapon_R", tabWeaponModel.ResPath + "_R", tabWeaponModel);
            }
           else
            {
                LoadWeapon(Obj, "Weapon_R", tabWeaponModel.ResPath + "_R", tabWeaponModel);
            }
        }

        private void LoadWeapon(GameObject Obj, string szBindPoint, string szResName, Tab_WeaponModel tabWeaponModel)
        {
            List<object> param = new List<object>();

			if (Singleton<ObjManager>.Instance.MainPlayer != null) 
			{
				param.Add(szBindPoint);
				param.Add(Singleton<ObjManager>.Instance.MainPlayer.WeaponEffectGem);
				param.Add(null);
				param.Add(Singleton<ObjManager>.Instance.MainPlayer.Profession);
				param.Add(Singleton<ObjManager>.Instance.MainPlayer.CurWeaponDataID);
                if (szBindPoint == "Weapon_L")
                {
                    param.Add(new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ));
                }
                else if (szBindPoint == "Weapon_R")
				{
                    param.Add(new Vector3(tabWeaponModel.RightRotX, tabWeaponModel.RightRotY, tabWeaponModel.RightRotZ));
				}
				param.Add(tabWeaponModel);
				Singleton<ObjManager>.GetInstance().ReloadWeapon(Obj, szResName, Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver, param);
			}

			else
			{
				if( UIControllerBase<RoleChooseLogic>.Instance() != null)
				{
					param.Add(szBindPoint);
					param.Add(-1);
					param.Add(null);
					param.Add(UIControllerBase<RoleChooseLogic>.Instance().GetRoleProfess());
					param.Add(-1);

					if (szBindPoint == "Weapon_L")
					{
						param.Add(new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ));
					}
					else if (szBindPoint == "Weapon_R")
					{
						param.Add(new Vector3(tabWeaponModel.RightRotX, tabWeaponModel.RightRotY, tabWeaponModel.RightRotZ));
					}

					param.Add(tabWeaponModel);

					Singleton<ObjManager>.GetInstance().ReloadWeapon(Obj, szResName, Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver, param);
				}
			}
           
        }

		// 参考 mainPlayer 的函数，由于此时 mainPlayer 还没有创建，再写个一样的
		private int GetCharModelID(Tab_ItemVisual tabItemVisual, int nProfession = GlobeVar.INVALID_ID)
		{
			if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
			{
				return tabItemVisual.CharModelIDShaoLin;
			}
			else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
			{
				return tabItemVisual.CharModelIDTianShan;
			}
			else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
			{
				return tabItemVisual.CharModelIDDaLi;
			}
			else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
			{
				return tabItemVisual.CharModelIDXiaoYao;
			}
			else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
			{
				return tabItemVisual.CharModelIDGaiBang;
			}
			return GlobeVar.INVALID_ID;
		}
		//===========================================================
		public void InitFakeObjFlyWing(int id ,GameObject Obj)
		{
			Tab_FlyWing tab = TableManager.GetFlyWingByID (id,0);
			if (tab == null) 
				return;

            Tab_FlyWingClient tabClient = TableManager.GetFlyWingClientByID(id,0);
            if (tabClient == null || tabClient.ModeName == "")
				return;

            string loadPath = tabClient.ModeName; 
			BundleManager.LoadModelInQueue(loadPath, onAsyLoadFlyWing, Obj, id, null);
		}
		public static void onAsyLoadFlyWing(string modeName ,GameObject resObj ,object param1 ,object param2,object param3)
		{
			if (resObj == null || param1 == null || param2 == null)
				return;

			GameObject playerObj = param1 as  GameObject;
			if (playerObj == null)
				return;

            int id = (int)param2;
            Tab_FlyWingClient tabClient = TableManager.GetFlyWingClientByID(id, 0);
            if (tabClient == null || tabClient.ModeName == "")
                return;

			Transform flyWingForm = playerObj.transform.Find (GlobeVar.STR_FATHER_MODE_NAME);
			if (flyWingForm == null)
				return;

			// 创建模型 
			GameObject model = (GameObject)GameObject.Instantiate (resObj);
			if( model == null)
			{
				return ;
			}

            model.name = GlobeVar.STR_MODE_NAME_FADEOBJ;
			model.transform.parent = flyWingForm;
			model.transform.localPosition = Vector3.zero; 
			model.transform.localRotation = Quaternion.Euler (new Vector3(-90,90,0));//Quaternion.identity;
			
			Transform[] trans = model.GetComponentsInChildren<Transform> ();
			for( int i = 0 ; i < trans.Length ; ++i)
			{
				trans[i].gameObject.layer = resObj.layer ;
			}

             ObjAnimModel objAnim = playerObj.GetComponent<ObjAnimModel>();
            if (objAnim != null)
            {
                objAnim.FakeObjEffectController.OnFlyWingOk(id, model);
            }
		}
    }
}

