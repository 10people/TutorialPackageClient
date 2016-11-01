#region
/*************************************************************************************
   * filename:          CurEffectCachedDataShow
   * date:              5/19/2015 5:17:33 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using System.Collections.Generic;
using GameRes;
using UnityEngine;
using Module.Log;

//namespace GameRes
//{
    public class CurEffectCachedDataShow : MonoBehaviour
    {
        #region 变量

        private BaseResCached _cachedEffectCached;

        #endregion

        #region 属性

        #endregion

        #region 方法

        void Awake()
        {
            _cachedEffectCached = ResourcesManager.Instance.EffectCachedData;
            if (_cachedEffectCached == null)
            {
                enabled = false;
            }
        }

        void Update()
        {
            if (Input.GetKeyDown(KeyCode.H))
            {
                CreateObjFunction.CreateModelStoryObj(463, "JXZFastMove1", Test);
                LogModule.DebugLog("fffffffffff");
            }

            if (Input.GetKeyDown(KeyCode.K))
            {
                ObjSnare_Init_Data initData = new ObjSnare_Init_Data();
                initData.m_ServerID = 10000000;
                initData.m_OwerGuid = Singleton<ObjManager>.Instance.MainPlayer.GUID;
                initData.m_OwnerObjId = Singleton<ObjManager>.Instance.MainPlayer.ServerID;
                initData.m_fX = 1;
                initData.m_fZ = 5;
                initData.m_SnareID = 1;
                CreateObjFunction.CreateModelSnareObj(initData);
            }

            if (Input.GetKeyDown(KeyCode.Y))
            {
                ObjYanHua_Init_Data initData = new ObjYanHua_Init_Data();
                initData.m_ServerID = 10000000;
                initData.m_OwerGuid = Singleton<ObjManager>.Instance.MainPlayer.GUID;
                initData.m_OwnerObjId = Singleton<ObjManager>.Instance.MainPlayer.ServerID;
                initData.m_fX = 1;
                initData.m_fZ = 1;
                initData.m_nYanHuaID = 2;
                CreateObjFunction.CreateModelYanhuaObj(initData);
            }
            
        }

        private void Test(object dd, object bb)
        {
            //Debug.Log(dd);
            //Debug.Log(bb);
        }

        void OnGUI()
        {
            if (_cachedEffectCached == null)
            {
                return;
            }
            Dictionary<string, SCachedBundleData> dic = _cachedEffectCached.CachedData;
            if (dic == null)
            {
                return;
            }
            var enumerator = dic.GetEnumerator();
            GUILayout.BeginVertical();

            while (enumerator.MoveNext())
            {
                var current = enumerator.Current;
                GUILayout.BeginHorizontal();
                GUILayout.Label("Path: " + current.Key);
                GUILayout.Label("GoName: " + current.Value.CachedGo.name);
                GUILayout.Label("RefCount: " + current.Value.RefCount);
                GUILayout.Label("LastAccessTime: " + current.Value.LastAccessTime);
                GUILayout.EndHorizontal();
            }

            GUILayout.EndVertical();
        }

        #endregion
    }

//}
