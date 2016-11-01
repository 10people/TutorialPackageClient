using System.Collections.Generic;
using Games.GlobeDefine;
using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.ObjAnimModule;
using GCGame.Table;
using Module.Log;

public class Obj_FlyWing: MonoBehaviour {


	// Use this for initialization
	void Start ()
	{
	    
	}


	static public void ShowHideFlyWing(Obj_OtherPlayer playerObj ,int flyWingId,bool isShow)
	{
		if( isShow && flyWingId != GlobeVar.INVALID_ID )
			{
				// 显示
				EquipFlyWing(playerObj,flyWingId);
			}
			else
			{
				// 销毁
				CancelEquipFlyWing(playerObj,false);
			}
	}

	static public void CancelEquipFlyWing(Obj_OtherPlayer playerObj,bool isClear = true )
	{
		if( playerObj != null && playerObj.gameObject != null)
		{
			Transform gFlyWingtransform = null ;
			if( playerObj.MountObj != null && playerObj.MountObj.gameObject != null )
				gFlyWingtransform = playerObj.MountObj.gameObject.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME + "/" +  GlobeVar.STR_MODE_NAME);
			else
				gFlyWingtransform = playerObj.gameObject.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME + "/" +  GlobeVar.STR_MODE_NAME);

			if( gFlyWingtransform == null || gFlyWingtransform.gameObject == null)
			{
				DestoryFlyWing(playerObj);
				return ;
			}

			gFlyWingtransform.parent = null ;
			playerObj.FlyWingObj = null ;
			playerObj.ObjEffectController.OnCancalFlyWing();
			Destroy(gFlyWingtransform.gameObject);
		}
	}
	static public void EquipFlyWing(Obj_OtherPlayer playerObj ,int flyWingId)
	{
		if (playerObj == null || playerObj.gameObject == null)
			return;

		playerObj.FlyWingObj = playerObj.gameObject.GetComponent<Obj_FlyWing> ();
		if( playerObj.FlyWingObj == null )
		playerObj.FlyWingObj = playerObj.gameObject.AddComponent<Obj_FlyWing>() as Obj_FlyWing ;

		if( playerObj.FlyWingObj )
		{
			playerObj.FlyWingObj.InitFlyWingObj(playerObj,flyWingId);
		}
	}

	public void InitFlyWingObj(Obj_OtherPlayer otherPlayer, int flyWingId)
	{
		Tab_FlyWing flyWing = TableManager.GetFlyWingByID (flyWingId,0);
		if (flyWing == null)
			return;

		Tab_FlyWingClient flyWingClient = TableManager.GetFlyWingClientByID (flyWingId,0);
		if (flyWingClient == null)
			return;

		Singleton<ObjManager>.GetInstance ().ReloadModel (otherPlayer.gameObject,flyWingClient.ModeName,onAsyLoadFlyWing,otherPlayer,flyWingId);
	}

	public static void onAsyLoadFlyWing(string modeName ,GameObject resObj ,object param1 ,object param2,object param3)
	{
		if( param1 == null || param2 == null || param3 == null )
		{
			return ;
		}
		
		GameObject objRoot = param1 as GameObject;
		Obj_OtherPlayer playerObj = param2 as Obj_OtherPlayer;
		
		if( objRoot == null || playerObj == null )
		{
			return ;
		}

		if( playerObj.FlyWingObj == null)
		{
			return ;
		}

		int flyWingId = (int)param3;
		
		Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(flyWingId, 0);
		if (flyWingTab == null)
			return;
		
		Tab_FlyWingClient flyWingClientTab= TableManager.GetFlyWingClientByID (flyWingId,0);
		if (flyWingClientTab == null)
			return;

		Transform gFlyWingtransform = null;
		if( playerObj.MountObj != null && playerObj.MountObj.gameObject != null )
			gFlyWingtransform = playerObj.MountObj.gameObject.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME);
		else
			gFlyWingtransform = objRoot.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME);
	
		if( gFlyWingtransform == null || gFlyWingtransform.gameObject == null)
		{
            Debug.LogError("gFlyWingtransform is null");
            playerObj.ObjEffectController.OnCancalFlyWing();
			return ;
		}
	
		// 创建模型 
		GameObject model = (GameObject)GameObject.Instantiate (resObj);
		if( model == null)
		{
			return ;
		}

		model.name = GlobeVar.STR_MODE_NAME;
		Transform temTransform =  gFlyWingtransform.FindChild(model.name ) ;
		if(  temTransform)
		{
			playerObj.ObjEffectController.OnCancalFlyWing();
			GameObject.Destroy(temTransform.gameObject);
		}
		
		model.transform.parent = gFlyWingtransform;
		model.transform.localPosition = Vector3.zero; 
		model.transform.localRotation = Quaternion.Euler (new Vector3(flyWingClientTab.AngleX,flyWingClientTab.AngleY,flyWingClientTab.AngleZ));//Quaternion.identity;

		Transform[] trans = model.GetComponentsInChildren<Transform> ();
		for( int i = 0 ; i < trans.Length ; ++i)
		{
			trans[i].gameObject.layer = objRoot.layer ;
		}
		
		// 播放特效
		playerObj.ObjEffectController.InitEffect (playerObj.gameObject);
		playerObj.ObjEffectController.OnFlyWingOk(flyWingId,model);
	
	}

	public static void DestoryFlyWing(Obj_OtherPlayer other)
	{
		if (other == null || other.FlyWingObj == null ) 
		{
			return ;
		}
		GameObject gGameObject = other.FlyWingObj .gameObject;
		if (gGameObject) 
		{
            other.FlyWingObj = null;
			//other.ObjEffectController.OnCancalFlyWing();
			//Destroy(gGameObject);
		}
	}
}
