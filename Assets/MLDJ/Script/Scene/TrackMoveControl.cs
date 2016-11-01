/********************************************************************************
 *	文件名：	TrackMoveControl.cs
 *	全路径：	
 *	创建人：	刘伟
 *	创建时间：2015-3-11
 *
 *	功能说明：轨道移动控制代码
 *	修改记录：
*********************************************************************************/


using SPacket.SocketInstance;
using UnityEngine;
using System.Collections;

public class TrackMoveControl : MonoBehaviour {

    private float _moveDistance = 38.8266f;//38.84  63.7
    private Vector3 _curPosition;

    public GameObject[] MoveObjects;
    public float MoveValue = 15f;

    private bool m_IsInit = false;

    void Start ()
    {

    }

    private void InitSetPosition()
    {
        for (int i = 0; i < MoveObjects.Length; i++)
        {
            if (MoveObjects[i] != null && MoveObjects[i].transform != null)
            {
                _curPosition = MoveObjects[i].transform.localPosition;
                _curPosition.z = _moveDistance * i;
                MoveObjects[i].transform.localPosition = _curPosition;
            }
        }

        m_IsInit = true;
    }

    private void SetUpdatePosition()
    {
        int tag = -1; //标记要进行位置跳转的物体标号
        for (int i = 0; i < MoveObjects.Length; i++)
        {
            if (MoveObjects[i] != null && MoveObjects[i].transform != null)
            {
                _curPosition = MoveObjects[i].transform.localPosition;
                _curPosition.z -= MoveValue * Time.deltaTime;
                MoveObjects[i].transform.localPosition = _curPosition;

                if (_curPosition.z < 0 && Mathf.Abs(_curPosition.z) > _moveDistance)
                {
                    tag = i;
                }
            }
        }

        if (tag >= 0)
        {
            int forwardTag = -1;
            if (tag == 0)
            {
                forwardTag = MoveObjects.Length - 1;
            }
            else
            {
                forwardTag = tag - 1;
            }

            //获取当前位置
            if (MoveObjects != null && MoveObjects.Length > forwardTag)
            {
                if (MoveObjects[forwardTag] != null && MoveObjects[forwardTag].transform != null)
                {
                    _curPosition = MoveObjects[forwardTag].transform.localPosition;
                    _curPosition.z += _moveDistance;
                    MoveObjects[tag].transform.localPosition = _curPosition;
//					// 如果当前在第一阶段，则轨道震屏
//					if (SceneControl.CurrentSceneTag == 1)
//					{
//						CameraManager.Instance.StartRock(21);
//					}
                }
            }
        }
    }

    private void Update()
    {

        if (!m_IsInit)
        {
            InitSetPosition();
            return;
        }

        SetUpdatePosition();
    }
}
