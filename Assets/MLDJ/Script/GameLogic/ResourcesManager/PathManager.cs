#region
/*************************************************************************************
   * filename:          PathManager
   * date:              5/14/2015 3:34:48 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using GCGame.Table;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    public class PathManager
    {
        #region 变量

        #endregion

        #region 属性

        #endregion

        #region 方法

        public string GetPath(int id, EResourceType type)
        {
            string url = "";
            switch (type)
            {
                case EResourceType.Effect:
                {
                    Tab_Effect data = TableManager.GetEffectByID(id, 0);
                    if (data == null)
                    {
                        LogModule.ErrorLog("GetPath called type {0} id {1} is invalid!", type, id);
                        return url;
                    }
                    url = data.Path.Substring(data.Path.LastIndexOf('/') + 1);
                    url = BundleManager.GetBundleLoadUrl(BundleManager.PathEffectPrefab, url + ".data");
                    return url;
                }

                case EResourceType.CharacterModel:
                {
                    Tab_CharModel model = TableManager.GetCharModelByID(id, 0);
                    if (model == null)
                    {
                        LogModule.ErrorLog("GetPath called type {0} id {1} is invalid!", type, id);
                        return url;
                    }
                    url = BundleManager.GetBundleLoadUrl(BundleManager.PathModelPrefab, model.ResPath + ".data");
                    return url;
                }
            }
            LogModule.ErrorLog("GetPath failed invalid type {0} id {1} !", type, id);
            return "ffff";
        }

        #endregion
    }

}