using UnityEngine;
using System.Collections;
using GCGame.Table;

public class DynamicObstacle {

	// Use this for initialization
	void Start () {
	
	}


    static public void HandleObstacle(GC_DYNAMICOBSTACLE_OPT packet)
    { 
        int nIndex = packet.Index;
        bool bFlag = (packet.Flag == 1 ? true : false);
        if(bFlag) // 创建
        {
            CreateObstacle(nIndex);
        }
        else
        {
            RemoveObstacle(nIndex);
        }
    }

    static public void CreateObstacle(int nIndex)
    {
        Tab_DynamicObstacle obstacle = TableManager.GetDynamicObstacleByID(nIndex, 0);
        if (obstacle == null)
        {
            return;
        }
        string strName = "DyncObstacle" + nIndex;
        Singleton<ObjManager>.GetInstance().CreateDyncObstacle(obstacle,strName);
        return;
    }

    static public void RemoveObstacle(int nIndex)
    {
        Tab_DynamicObstacle obstacle = TableManager.GetDynamicObstacleByID(nIndex, 0);
        if (obstacle == null)
        {
            return;
        }
        string strName = "DyncObstacle" + nIndex;

        Singleton<ObjManager>.GetInstance().RemoveOtherGameObj(strName);

        /// 临时添加， 后期需要对阻挡配置生成 重新设置下。现有情况不利于多种阻挡类型的生成
		/// 
		/// 新作了动态阻挡自带特效的功能，所以这块注掉
//        if (nIndex == 4)
//        {
//            if (JtddSceneControl.Instance() != null && JtddSceneControl.Instance().ZudanGameObject != null)
//            {
//                JtddSceneControl.Instance().ZudanGameObject.SetActive(false);
//            }
//        }
//        if (nIndex == 5)
//        {
//            if (JtddSceneControl.Instance() != null && JtddSceneControl.Instance().ZudanGameObject02 != null)
//            {
//                JtddSceneControl.Instance().ZudanGameObject02.SetActive(false);
//            }
//        }
    }

}
