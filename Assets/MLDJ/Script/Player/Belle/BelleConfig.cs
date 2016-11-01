using UnityEngine;
using System.Collections;
using Games.LogicObj;
using System.Collections.Generic;
using GCGame.Table;
public class BelleConfig
{

    public static string GetBelleStringBitByBelleTable()
    {
        string belleStr = "";

        for (int i = 0; i < TableManager.GetBelle().Count; i++)
        {
            belleStr += "0";
        }
            return belleStr;
    }

    public static string GetBelleStringBitByBelleMatrix()
    {
        string belleStr = "";

        for (int i = 0; i < TableManager.GetBelleMatrix().Count; i++)
        {
            belleStr += "0";
        }
        return belleStr;
    }
    //初始化工作
    public static BelleConfigData Init()
    {
        //先看红点配置文件中是否有，如果有就跟魂器相关配置文件比对然后更新一下，如果没有，就创建一个新的添加进去
        BelleConfigData curBelleConfigData = GetBelleConfigDataByGUID();
        if (null == curBelleConfigData)
        {
           // Debug.Log("fanzhipeng --------------------------------------------------------------------- null == curBelleConfigData");
            //创建一个新的并保存
            curBelleConfigData = SetNewBelleConfigData();
        }
        else //与美人配置文件进行比对，看看是否删除或者添加，同步更新红点配置文件
        {
            int belleGetBitsCount = curBelleConfigData.BelleGetBits.Length;
            int belleTabCount = TableManager.GetBelle().Count;

            int length = Mathf.Min(belleGetBitsCount,belleTabCount);
            if (belleGetBitsCount != belleTabCount)
            {
                int i = 0;
                for (; i < length; i++);

                //美人配置文件删除了一些美人
                if (i < belleGetBitsCount)
                {
                    char[] bellebitsCharArr = curBelleConfigData.BelleGetBits.ToCharArray();
                    for (; i < belleGetBitsCount; i++)
                    {
                        bellebitsCharArr[i] = '0';
                    }

                    curBelleConfigData.BelleGetBits = new string(bellebitsCharArr);
                }
                else if (i < belleTabCount) // 添加了一些美人
                {
                    for (; i < belleTabCount; i++)
                    {
                        curBelleConfigData.BelleGetBits += "0";
                    }
                }
                
            }
        }

        return curBelleConfigData;
    }
    /// <summary>
    /// 添加一个新的BelleConfig
    /// </summary>
    public static BelleConfigData SetNewBelleConfigData()
    {
        string belleStr = GetBelleStringBitByBelleTable();
        string belleMatrixStr = GetBelleStringBitByBelleMatrix();
        BelleConfigData curBelleData = new BelleConfigData(0, belleStr, belleStr, belleStr, belleMatrixStr);
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            UserConfigData.AddBelleConfigInfo(_mainPlayer.GUID.ToString(), curBelleData);
        }

        //Debug.Log("fanzhipeng -----------------------------------------------------  + setNewbelleConfigadata" );
        return curBelleData;
    }

    /// <summary>
    /// 根据玩家GUID获得当前对应美人配置
    /// </summary>
    /// <returns></returns>
    public static BelleConfigData GetBelleConfigDataByGUID()
    {
        Dictionary<string, BelleConfigData> _belleConfigData = UserConfigData.GetBelleConfigData();

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        BelleConfigData m_belleConfigData = null;
        if (null != _belleConfigData)
        {
            //Debug.Log("fanzhipeng -----------------------------------------------  " + PlayerPreferenceData.LastRoleGUID);
          //  Debug.Log("fanzhipeng  ---------------------------------------------------  _mainPlayer != null " + _mainPlayer.GUID);
            if (_belleConfigData.ContainsKey(PlayerPreferenceData.LastRoleGUID.ToString()))
            {
              //  Debug.Log("fanzhipeng  --------------------------------                                ContainKye  " + _mainPlayer.GUID);
                m_belleConfigData = _belleConfigData[PlayerPreferenceData.LastRoleGUID.ToString()];
                //Debug.Log("fanzhipeng ---------------------------------------------------------------------------- contains");
              //  Debug.Log("fanzhipeng ------------------------------------------------------------------ m_belleConfigData         ==== " + m_belleConfigData.BelleGetBits);
            }
        }

        if (null == _mainPlayer)
        {
            //Debug.Log("fanzhipeng  -------------------------------------------------  null == _mainPlayer");
        }

        return m_belleConfigData;
    }

    #region BelleActiveCout
    /// <summary>
    /// 获得当前新获得的美人个数
    /// </summary>
    /// <returns></returns>
    public static int GetBelleActiveCount()
    {
        int count = 0;

        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            count = 0;
            string belleGetBits = _playerData.BelleConfigData.BelleGetBits;
            for (int i = 0; i < belleGetBits.Length; i++)
            {
                if (belleGetBits[i] == '1')
                    count++;

                
            }
            //Debug.Log("belleGetBits --------------------------------------------------------------------------------------------------------  " + belleGetBits);
           
        }
        return count;
    }

    public static int GetBelleActiveCountByBelleConfData()
    {
        int count = 0;
        BelleConfigData m_belleConfigData = null;
        m_belleConfigData = GetBelleConfigDataByGUID();

        if (null == m_belleConfigData)
            return 0;

         PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
         if (null != _playerData && _playerData.BelleConfigData != null)
         {
             _playerData.BelleConfigData = m_belleConfigData;
             //Debug.Log("fanzhipeng                         ------------------------------------------------------- " +m_belleConfigData.BelleGetBits);
             count = 0;
             string belleGetBits = _playerData.BelleConfigData.BelleGetBits;
             
             if (belleGetBits == null)
             {
                 return 0;
             }

             for (int i = 0; i < belleGetBits.Length; i++)
             {
                 if (belleGetBits[i] == '1')
                     count++;
                
             }
             //Debug.Log("fanzhipeng --------------------------------------------------------------------------------------------------------  " + belleGetBits);
         }
        return count;
        
    }
    /// <summary>
    /// 设置当前获得的美人配置
    /// </summary>
    /// <param name="belleCount"></param>
    public static void SetBelleActiveCount(int belleCount)
    {
        Dictionary<string, BelleConfigData> _belleConfigData = UserConfigData.GetBelleConfigData();

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        BelleConfigData m_belleConfigData = null;
        if (null != _mainPlayer && null != _belleConfigData)
        {
            if (_belleConfigData.ContainsKey(_mainPlayer.GUID.ToString()))
            {
                m_belleConfigData = _belleConfigData[_mainPlayer.GUID.ToString()];
                m_belleConfigData.ActiveCount = belleCount;
            }
        }

        UserConfigData.AddBelleConfigInfo(_mainPlayer.GUID.ToString(), m_belleConfigData);
    }

    public static void SetBelleGetBitsByBit(int index,char bitValue)
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            
            string belleGetBits = _playerData.BelleConfigData.BelleGetBits;

            if (belleGetBits == null)
            {
                return;
            }
            char[] belleGetArr = belleGetBits.ToCharArray();
            if (index >= 0 && index < belleGetArr.Length)
            {
                belleGetArr[index] = bitValue;
            }

            _playerData.BelleConfigData.BelleGetBits = new string(belleGetArr);
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (null != _mainPlayer)
            {
                UserConfigData.AddBelleConfigInfo(_mainPlayer.GUID.ToString(), _playerData.BelleConfigData);
            }
        }
    }

    public static int GetBelleItemCount()
    {
        int count = 0;

        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            count = 0;
            string belleItemBits = _playerData.BelleConfigData.BelleItemBits;

            for (int i = 0; i < belleItemBits.Length; i++)
            {
                if (belleItemBits[i] == '1')
                    count++;


            }
            //Debug.Log("belleGetBits --------------------------------------------------------------------------------------------------------  " + belleItemBits);

        }
        return count;
    }
    public static int GetBelleItemCountByBelleConfData()
    {
        int count = 0;

        BelleConfigData m_belleConfigData = null;
        m_belleConfigData = GetBelleConfigDataByGUID();

        if (null == m_belleConfigData)
            return 0;
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            count = 0;
            _playerData.BelleConfigData = m_belleConfigData;
            string belleItemBits = _playerData.BelleConfigData.BelleItemBits;

            if (belleItemBits == null)
            {
                return 0;
            }

            for (int i = 0; i < belleItemBits.Length; i++)
            {
                if (belleItemBits[i] == '1')
                    count++;

            }
            //Debug.Log("fanzhipeng --------------------------------------------------------------------------------------------------------  " + belleItemBits);
        }
        return count;

    }
    public static void SetBelleItemBitsByBit(int index, char bitValue)
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {

            string belleItemBits = _playerData.BelleConfigData.BelleItemBits;

            if (belleItemBits == null)
            {
                return;
            }
            char[] belleGetArr = belleItemBits.ToCharArray();
            if (index >= 0 && index < belleGetArr.Length)
            {
                belleGetArr[index] = bitValue;
            }

            _playerData.BelleConfigData.BelleItemBits = new string(belleGetArr);
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (null != _mainPlayer)
            {
                UserConfigData.AddBelleConfigInfo(_mainPlayer.GUID.ToString(), _playerData.BelleConfigData);
            }
        }
    }

    public static int GetBelleEvoCountByBelleConfData()
    {
        int count = 0;
        BelleConfigData m_belleConfigData = null;
        m_belleConfigData = GetBelleConfigDataByGUID();

        if (null == m_belleConfigData)
            return 0;

        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            count = 0;
            _playerData.BelleConfigData = m_belleConfigData;
            string belleCanEvoBeits = _playerData.BelleConfigData.BelleCanEvoBeits;

            if (belleCanEvoBeits == null)
            {
                return 0;
            }

            for (int i = 0; i < belleCanEvoBeits.Length; i++)
            {
                if (belleCanEvoBeits[i] == '1')
                    count++;

            }
            //Debug.Log("fanzhipeng --------------------------------------------------------------------------------------------------------  " + belleCanEvoBeits);
        }
        return count;
    }
    public static int GetBelleEvoCount()
    {
        int count = 0;

        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            count = 0;
            string belleCanEvoBeits = _playerData.BelleConfigData.BelleCanEvoBeits;

            for (int i = 0; i < belleCanEvoBeits.Length; i++)
            {
                if (belleCanEvoBeits[i] == '1')
                    count++;
            }
            //Debug.Log("belleCanEvoBeits --------------------------------------------------------------------------------------------------------  " + belleCanEvoBeits);

        }
        return count;
    }
    public static void SetBelleEvoCountByBit(int index, char bitValue)
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {

            string belleCanEvoBeits = _playerData.BelleConfigData.BelleCanEvoBeits;

            if (belleCanEvoBeits == null)
            {
                return;
            }
            char[] belleGetArr = belleCanEvoBeits.ToCharArray();
            if (index >= 0 && index < belleGetArr.Length)
            {
                belleGetArr[index] = bitValue;
            }

            _playerData.BelleConfigData.BelleCanEvoBeits = new string(belleGetArr);
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (null != _mainPlayer)
            {
                UserConfigData.AddBelleConfigInfo(_mainPlayer.GUID.ToString(), _playerData.BelleConfigData);
            }
        }
    }
    public static bool GetBelleEvoBitByIndex(int index)
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {

            string belleCanEvoBeits = _playerData.BelleConfigData.BelleCanEvoBeits;

            if (belleCanEvoBeits == null)
            {
                return false;
            }

            if (index >= 0 && index < belleCanEvoBeits.Length)
            {
                return belleCanEvoBeits[index] == '1';
            }
        }

        return false;
    }
    #endregion

    #region BelleMatrixUnLockLevel
   // public static int 
    #endregion
}
