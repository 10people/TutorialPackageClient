#region
/*************************************************************************************
   * filename:          EffectObjRotatedY
   * date:              4/27/2015 8:26:08 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using UnityEngine;

public class EffectObjRotatedY : MonoBehaviour
{
    #region 变量
    /// <summary>
    /// 秒每度
    /// </summary>
    public float m_rotatedSpeed;

    private Vector3 m_startEulerAngles;

    private Transform m_cachedTransform;

    #endregion

    #region 属性

    #endregion

    #region 方法

    void Awake()
    {
        m_cachedTransform = transform;
    }

    void Update()
    {
        if (m_cachedTransform == null)
        {
            return;
        }
        m_startEulerAngles.y += Time.deltaTime*m_rotatedSpeed;
        if (m_startEulerAngles.y >= 360)
        {
            m_startEulerAngles.y -= 360;
        }
        m_cachedTransform.localEulerAngles = m_startEulerAngles;
    }


    public static EffectObjRotatedY AddToObj(GameObject go, float speed)
    {
        if (go == null)
        {
            return null;
        }
        EffectObjRotatedY com = go.GetComponent<EffectObjRotatedY>();
        if (com == null)
        {
            com = go.AddComponent<EffectObjRotatedY>();
        }
        com.m_rotatedSpeed = speed;
        com.enabled = true;
        com.m_startEulerAngles = com.transform.localEulerAngles;
        return com;
    }


    #endregion
}