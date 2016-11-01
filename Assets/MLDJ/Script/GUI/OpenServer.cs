using UnityEngine;
using System;
using System.Collections;
using Games.FakeObject;
using GCGame.Table;
public class OpenServer : MonoBehaviour 
{
#region params
    public static int fakeId = 67;
    public static Action destroyCallBack = null;
    private FakeObject m_PlayerFakeObj;
    private static OpenServer m_Instance = null;
#endregion

#region UI ref
    public GameObject m_FakeObjTopLeft;
    public GameObject m_FakeObjBottomRight;
    public GameObject m_FellowFakeObjTopLeft;
    public GameObject m_FellowFakeObjBottomRight;
    public GameObject fellowInfo;
    public GameObject rideInfo;
#endregion

	void OnEnable()
	{
		DestroyFakeObj ();
		InitFake ();
	}

	void Awake()
	{
		m_Instance = this;
	}
	
	public static OpenServer Instance()
	{
		return m_Instance;
	}

    public void ShowFellowDesc()
    {
        fellowInfo.SetActive(true);
    }

    public void ShowRideDesc()
    {
        rideInfo.SetActive(true);
    }

	public bool IsShow()
	{
		if (gameObject.activeSelf)
				return true;

		return false;
	}

	public void onClickOpenServer()
	{
		UIManager.CloseUI (UIInfo.OpenServer);
		DestroyFakeObj ();
        if (destroyCallBack != null)
        {
            destroyCallBack();
        }
        destroyCallBack = null;
	}

	public void DestroyFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
        if (GameManager.gameManager != null && GameManager.gameManager.ActiveScene != null)
        {
            GameManager.gameManager.ActiveScene.HideFakeObj();
        }
    }

	private void InitFake()
	{
        if (fakeId == 67)
        {
            GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        }
        else if(fakeId == 79)
        {
            GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FellowFakeObjTopLeft, m_FellowFakeObjBottomRight);
        }
		
		GameManager.gameManager.ActiveScene.ShowFakeObj();
		
		if (m_PlayerFakeObj != null)
		{
			DestroyFakeObj();
		}
		m_PlayerFakeObj = new FakeObject();
		if (m_PlayerFakeObj == null)
		{
			return;
		}
		
		GameObject temFakeObject = null;
		m_PlayerFakeObj.initFakeObject(fakeId, GameManager.gameManager.ActiveScene.FakeObjTrans, out temFakeObject);
		
		if (m_PlayerFakeObj != null)
		{
			m_PlayerFakeObj.PlayAnim(0);
		}
		
		//加上旋转
		if (temFakeObject != null)
		{
			temFakeObject.transform.localRotation = Quaternion.identity;
			Spin newSpin = temFakeObject.AddComponent<Spin>();
			if (newSpin != null)
			{
				newSpin.rotationsPerSecond.x = 0.0f;
				newSpin.rotationsPerSecond.y = 0.1f;
				newSpin.rotationsPerSecond.z = 0.0f;
			}
		}
	}
}
