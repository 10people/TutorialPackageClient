using UnityEngine;
using System.Collections;

public class ServerBackGround : MonoBehaviour {

	public GameObject m_pic;
	private static ServerBackGround m_Instance = null;
	public static ServerBackGround Instance()
	{
		return m_Instance;
	}
	void Awake()
	{
		m_Instance = this;
	}

	public void setMyPicShow(bool isShow)
	{
		//m_pic.SetActive (isShow);
	}
}
