/********************************************************************************
 *	文件名：	GuideDirectionSign.cs
 *	全路径：	Script\Scene\SceneLogic\GuideDirectionSign.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-18
 *
 *	功能说明：主角脚底下指引任务方向的引导特效控制，还有目标位置箭头特效
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.Scene;

public class GuideDirectionSign : MonoBehaviour 
{
	/// <summary>
	/// 脚底圆圈和箭头资源位置
	/// </summary>
	private const string m_EffectPrefabPath = "Prefab/Effect/cb_dituzhizhen_01";

	/// <summary>
	/// 目的地特效资源位置
	/// </summary>
	private const string m_EffectPrefab2Path = "Prefab/Effect/cb_dituzhizhen_03";

	/// <summary>
	/// 箭头特效资源位置
	/// </summary>
	private const string m_EffectPrefab3Path = "Prefab/Effect/cb_dimianzhishi_05";

	/// <summary>
	/// 箭头指针的物体名
	/// </summary>
	private const string m_arrowObjectName = "cb_dituzhizhen_01_002";
    /// <summary>
    /// 旋转圈的物体名称
    /// </summary>
    private const string m_rotatedCircleName = "cb_dituzhizhen_01_003";

	/// <summary>
	/// 检测是否到达某路径点的距离(平方)
	/// </summary>
	private const float m_fCornerReachCheckDistanceSqr = 2f;

	/// <summary>
	/// 重计算Path时间间隔
	/// </summary>
	private const float m_fReCalcPathInterval = .5f;
	[SerializeField]
	private float m_fReCalcPathtimer = m_fReCalcPathInterval;

	/// <summary>
	/// 检测下一个路径点到达的时间间隔
	/// </summary>
	private const float m_fCheckCornerReachInterval = 0.1f;
	private float m_fCheckCornerReachTimer = m_fCheckCornerReachInterval;

	/// <summary>
	/// 指针旋转速度
	/// </summary>
	private const float m_fArrowRotateSpeed = 8f;

	/// <summary>
	/// 圈圈缓存
	/// </summary>
	public Transform m_circleTrans;

	/// <summary>
	/// 箭头缓存
	/// </summary>
	private Transform m_arrowTrans;

	/// <summary>
	/// 目的地特效缓存
	/// </summary>
	public Transform m_destEffectTrans;

	/// <summary>
	/// 箭头特效
	/// </summary>
	private Transform[] m_ArrowEffectTrans;

	/// <summary>
	/// 是否显示目的地特效
	/// </summary>
	private bool m_bShowDestEffect = false;

	/// <summary>
	/// 主玩家缓存
	/// </summary>
	private Obj_MainPlayer m_mainPlayer = null;

	/// <summary>
	/// 是否有目的地
	/// </summary>
	private static bool m_bHasDestination = false;

	/// <summary>
	/// 目的地
	/// </summary>
	[SerializeField]
	private AutoSearchPoint m_Destination = null;

	/// <summary>
	/// 跨场景路径
	/// </summary>
	[SerializeField]
	private AutoSearchPath m_Path = null;

	/// <summary>
	/// 当前场景路径
	/// </summary>
	private NavMeshPath m_NavPath = null;

	/// <summary>
	/// 当前场景路径点
	/// </summary>
	private Vector3[] m_NavPathCorners;

	/// <summary>
	/// 下一个路径点序号
	/// </summary>
	private int m_nNextCornerIdx;

    private bool _hasInited = false;

	/// <summary>
	/// 是否正在指引目的地
	/// </summary>
	/// <value><c>true</c> if has destination; otherwise, <c>false</c>.</value>
	public static bool HasDest
	{
		get {return m_bHasDestination;}
	}

	private int arrowsMax = 20;
	private float arrowinterval = .75f;
	private class ArrowAnim
	{
		public float timer = 0;
		public float time = .4f;
		public float alpha = 0;
		public int idx = 0;

		public void Tick ()
		{
			timer += Time.deltaTime;
			if (timer < time * .5f) {
				alpha = timer / (time * .5f);
			} else if (timer < time) {
				alpha = 1 - (timer - time * .5f) / (time * .5f);
			} else {
				idx += 8;
				alpha = 0;
				timer -= time;
			}
		}
	}
	private ArrowAnim[] arrowAnims;

    public void Init()
    {
        if (_hasInited)
        {
            return;
        }
        m_circleTrans = transform;
        m_arrowTrans = m_circleTrans.FindChild(m_arrowObjectName);
        if (m_arrowTrans != null)
        {
            m_arrowTrans.parent = null;
        }
        Transform rotatedObjTrans = m_circleTrans.FindChild(m_rotatedCircleName);
        if (rotatedObjTrans != null)
        {
            Quaternion.Euler(90, 360, 0);
            EffectObjRotatedY.AddToObj(rotatedObjTrans.gameObject, 180);
        }
        if (LoadDestEffect())
        {
            HideDestEffect();
        }
		if (LoadArrowEffect ()) {
			HideArrawEffect ();
		}
        arrowAnims = new ArrowAnim[8];
        arrowAnims[0] = new ArrowAnim();
        arrowAnims[0].idx = 0;
        arrowAnims[0].timer = .21875f;        
        arrowAnims[1] = new ArrowAnim();
        arrowAnims[1].idx = 1;
        arrowAnims[1].timer = .1875f;        
        arrowAnims[2] = new ArrowAnim();
        arrowAnims[2].idx = 2;
        arrowAnims[2].timer = .15625f;
        arrowAnims[3] = new ArrowAnim();
        arrowAnims[3].idx = 3;
        arrowAnims[3].timer = .125f;
        arrowAnims[4] = new ArrowAnim();
        arrowAnims[4].idx = 4;
        arrowAnims[4].timer = .09375f;
        arrowAnims[5] = new ArrowAnim();
        arrowAnims[5].idx = 5;
        arrowAnims[5].timer = .0625f;
        arrowAnims[6] = new ArrowAnim();
        arrowAnims[6].idx = 6;
        arrowAnims[6].timer = .03125f;
        arrowAnims[7] = new ArrowAnim();
        arrowAnims[7].idx = 7;
        arrowAnims[7].timer = 0f;

        m_bHasDestination = false;
        m_Destination = new AutoSearchPoint();
        m_Path = new AutoSearchPath();
        m_NavPath = new NavMeshPath();
        _hasInited = true;
    }


	// Use this for initialization
	void Start ()
	{
	    Init();
	}


	private bool LoadDestEffect ()
	{
		GameObject destEffectObj = ResourceManager.InstantiateResource(m_EffectPrefab2Path) as GameObject;
		if (null != destEffectObj)
		{
			m_destEffectTrans = destEffectObj.transform;
			return true;
		}
		else
		{
			return false;
		}
	}

	private bool LoadArrowEffect ()
	{
		GameObject arrowEffectObj = ResourceManager.InstantiateResource(m_EffectPrefab3Path) as GameObject;
		if (null != arrowEffectObj)
		{
			GameObject ArrowEffectObj2 = Instantiate (arrowEffectObj) as GameObject;
			GameObject ArrowEffectObj3 = Instantiate (arrowEffectObj) as GameObject;
            GameObject ArrowEffectObj4 = Instantiate(arrowEffectObj) as GameObject;
            GameObject ArrowEffectObj5 = Instantiate(arrowEffectObj) as GameObject;
            GameObject ArrowEffectObj6 = Instantiate(arrowEffectObj) as GameObject;
            GameObject ArrowEffectObj7 = Instantiate(arrowEffectObj) as GameObject;
            GameObject ArrowEffectObj8 = Instantiate(arrowEffectObj) as GameObject;
			m_ArrowEffectTrans = new Transform[8];
			m_ArrowEffectTrans[0] = arrowEffectObj.transform;
			m_ArrowEffectTrans[1] = ArrowEffectObj2.transform;
			m_ArrowEffectTrans[2] = ArrowEffectObj3.transform;
            m_ArrowEffectTrans[3] = ArrowEffectObj4.transform;
            m_ArrowEffectTrans[4] = ArrowEffectObj5.transform;
            m_ArrowEffectTrans[5] = ArrowEffectObj6.transform;
            m_ArrowEffectTrans[6] = ArrowEffectObj7.transform;
            m_ArrowEffectTrans[7] = ArrowEffectObj8.transform;

			return true;
		}
		else
		{
			return false;
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
        if (m_NavPathCorners == null) return;

		if (null == m_mainPlayer)
		{
			m_mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		}
		if (m_mainPlayer != null)
		{
			m_circleTrans.position = m_mainPlayer.Position;// + Vector3.up * 0.15f;
			m_circleTrans.rotation = m_mainPlayer.Rotation;
			if (m_arrowTrans != null && m_bHasDestination)
			{
				m_arrowTrans.position = m_mainPlayer.Position;// + Vector3.up * 0.15f;
				//m_arrowTrans.rotation = Quaternion.Euler(0, Time.realtimeSinceStartup * 10, 0);
				if (m_fReCalcPathtimer < 0)
				{
					if (CalculatePath())
					{						
						return;
					}
				}
				m_fReCalcPathtimer -= Time.deltaTime;

				Vector4[] arrows = GetPathPoints (arrowinterval, 0, arrowsMax);
				if (arrows == null)
					return;

				for (int i = 0; i < arrowAnims.Length; i++) {
					if (arrowAnims [i] != null) {
						if (arrowAnims [i].idx >= arrowsMax) {
							arrowAnims [i].idx -= arrowsMax;
						}
						if (arrowAnims [i].idx >= arrows.Length || arrowAnims [i].idx < 0)
							continue;
						m_ArrowEffectTrans [i].position = new Vector3 (arrows [arrowAnims [i].idx].x, arrows [arrowAnims [i].idx].y + 0.1f, arrows [arrowAnims [i].idx].z);
						m_ArrowEffectTrans [i].rotation = Quaternion.Euler (new Vector3(90f, arrows [arrowAnims [i].idx].w - 90f, 0));
						m_ArrowEffectTrans [i].GetComponent<Renderer>().material.SetColor ("_Color", new Color (1f,1f,1f,arrowAnims [i].alpha));
					}
				}

				if (m_nNextCornerIdx >= 0 && m_nNextCornerIdx < m_NavPathCorners.Length)
				{
					// 检测是否到达下个路径点
					if (m_fCheckCornerReachTimer < 0)
					{
						if (CheckReachNextCorner())
						{
							m_nNextCornerIdx++;
							if (m_nNextCornerIdx >= m_NavPathCorners.Length)
							{
								CancelGuide();
								return;
							}
						}
					}
					m_fCheckCornerReachTimer -= Time.deltaTime;
					Vector3 rotateTo = new Vector3(m_NavPathCorners[m_nNextCornerIdx].x, m_arrowTrans.position.y, m_NavPathCorners[m_nNextCornerIdx].z);
					m_arrowTrans.rotation = Quaternion.Slerp(m_arrowTrans.rotation, Quaternion.LookRotation(rotateTo - m_arrowTrans.position, Vector3.up), Time.deltaTime * m_fArrowRotateSpeed);
				}
			}

			if (arrowAnims != null)
			for (int i = 0; i < arrowAnims.Length; i++) {
					if (arrowAnims[i] != null) {
						arrowAnims[i].Tick();
					}
			}
		}
		else
		{
			m_circleTrans.position = Vector3.zero;
		}
	}

	/// <summary>
	/// 重计算路径
	/// </summary>
	/// <returns><c>true</c>, if path was calculated, <c>false</c> otherwise.</returns>
	private bool CalculatePath ()
	{
		if (null == m_mainPlayer) return false;
		m_fReCalcPathtimer = m_fReCalcPathInterval;
		if (m_mainPlayer.NavAgent == null || m_mainPlayer.NavAgent.enabled == false) return false;
		// navMeshAgent寻路的当前场景目标点
		Vector3 currentSceneDestination = Vector3.zero;

		// 如果目标点在当前场景
		if (m_Destination.SceneID == GameManager.gameManager.RunningScene)
		{
			currentSceneDestination = new Vector3(m_Destination.PosX, 0, m_Destination.PosZ);
			currentSceneDestination = ActiveScene.GetTerrainPosition(currentSceneDestination);
			// 判断是否已经到了目标点
			Vector3 playerPos = m_mainPlayer.Position;
			float distanceSqr = (playerPos.x - currentSceneDestination.x) * (playerPos.x - currentSceneDestination.x) +
				(playerPos.y - currentSceneDestination.y) * (playerPos.y - currentSceneDestination.y) +
					(playerPos.z - currentSceneDestination.z) * (playerPos.z - currentSceneDestination.z);
			if (distanceSqr < m_fCornerReachCheckDistanceSqr)
			{
				return false;
			}
		}
		else
		{
			// todo
			AutoSearchPoint startPoint = AutoSearchPoint.MakePoint(m_mainPlayer.gameObject);

			m_Path.ResetPath();
			if (GameManager.gameManager.AutoSearch.FindPath(startPoint, m_Destination, ref m_Path))
			{
			}
			return false;
		}

		// 利用NavMeshAgent寻得路径
		if (m_mainPlayer.NavAgent.CalculatePath(currentSceneDestination, m_NavPath))
		{
			m_NavPathCorners = m_NavPath.corners;
			// 第0个点是当前位置
			m_nNextCornerIdx = 1;
			return true;
		}
		else
		{
			CancelGuide();
			return false;
		}
	}

	/// <summary>
	/// 检测是否到了下个路径点
	/// </summary>
	/// <returns><c>true</c>, if reach next corner was checked, <c>false</c> otherwise.</returns>
	private bool CheckReachNextCorner()
	{
		if (null == m_mainPlayer) return false;
		m_fCheckCornerReachTimer = m_fCheckCornerReachInterval;

		Vector3 playerPos = m_mainPlayer.Position;

		// 是否达到目标路径点
		float distanceSqr = (playerPos.x - m_NavPathCorners[m_nNextCornerIdx].x) * (playerPos.x - m_NavPathCorners[m_nNextCornerIdx].x) +
				(playerPos.y - m_NavPathCorners[m_nNextCornerIdx].y) * (playerPos.y - m_NavPathCorners[m_nNextCornerIdx].y) +
				(playerPos.z - m_NavPathCorners[m_nNextCornerIdx].z) * (playerPos.z - m_NavPathCorners[m_nNextCornerIdx].z);

		if (distanceSqr < m_fCornerReachCheckDistanceSqr)
		{
			return true;
		}
		return false;
	}

	/// <summary>
	/// 如果有合理路径，返回以interbalDist为间隔，startIdx为起始索引，长度为count的路径点数组
	/// </summary>
	/// <returns>The path points.</returns>
	/// <param name="internalDist">Internal dist.</param>
	/// <param name="startIdx">Start index.</param>
	/// <param name="count">Count.</param>
	private Vector4[] GetPathPoints(float internalDist, int startIdx, int count)
	{
		if (m_NavPathCorners == null)
			return null;
		if (m_NavPathCorners.Length == 0)
			return null;
		if (internalDist < 0.01f)
			return null;
		if (startIdx < 0)
			return null;
		if (count < 1)
			return null;
		Vector4[] result = new Vector4[count];

		int cornerIdx = 0;
		float currentOffsetDist = 0;
		for (int i = 0; i < count; i++) {
			float remainDist = internalDist;
			// 可能两个point之间跨越了很多个corner
			while (remainDist > 0) {
				if (cornerIdx == m_NavPathCorners.Length - 1) {
					result [i] = Vector4.zero;
					remainDist = 0;
					continue;
				}
				float distBetweenTwoCorner = Vector3.Distance (m_NavPathCorners [cornerIdx], m_NavPathCorners [cornerIdx + 1]);
				if (distBetweenTwoCorner - currentOffsetDist < remainDist) {
					cornerIdx++;
					if (cornerIdx == m_NavPathCorners.Length - 1) {
						Vector3 dir = m_NavPathCorners [cornerIdx] - m_NavPathCorners [cornerIdx - 1];
						Vector3 pos = m_NavPathCorners [cornerIdx - 1] + dir.normalized * (remainDist + currentOffsetDist);
						result [i] = new Vector4 (pos.x, pos.y, pos.z, Quaternion.LookRotation (dir, Vector3.up).eulerAngles.y);
						break;
					}

					remainDist = remainDist - (distBetweenTwoCorner - currentOffsetDist);
					currentOffsetDist = 0;
					continue;
				}
				// 能在这两个corner之间解决的
				else {
					Vector3 dir = m_NavPathCorners [cornerIdx + 1] - m_NavPathCorners [cornerIdx];
					Vector3 pos = m_NavPathCorners [cornerIdx] + dir.normalized * (remainDist + currentOffsetDist);
					result[i] = new Vector4 (pos.x, pos.y, pos.z, Quaternion.LookRotation (dir, Vector3.up).eulerAngles.y);
					currentOffsetDist = currentOffsetDist + remainDist;
					remainDist = 0;
				}
			}
		}

		return result;
	}

    /// <summary>
    /// 获得引导目的地，外部调用接口
    /// </summary>
    /// <param name="sceneId">Scene identifier.</param>
    /// <param name="posX">Position x.</param>
    /// <param name="posZ">Position z.</param>
    public bool GetDest(ref float x, ref float z )
    {
        if (m_destEffectTrans == null) {
            return false;
        }
        if( !m_destEffectTrans.gameObject.active ) {
            return false;
        }
        x = m_Destination.PosX;
        z = m_Destination.PosZ;
        return true;
    }
	/// <summary>
	/// 设置引导目的地，外部调用接口
	/// </summary>
	/// <param name="sceneId">Scene identifier.</param>
	/// <param name="posX">Position x.</param>
	/// <param name="posZ">Position z.</param>
	public void SetDest(int sceneId, float posX, float posZ, int showDestEffect)
	{
		if (null == m_mainPlayer) 
		{
			m_mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		}
		if (sceneId == -1)
		{
			CancelGuide();
			return;
		}
		m_bHasDestination = true;
		m_Destination.SceneID = sceneId;
		m_Destination.PosX = posX;
		m_Destination.PosZ = posZ;
		m_bShowDestEffect = (showDestEffect != 0);

		if (CalculatePath() == false)
		{
			Invoke("ReTrySetDest", 2);
//			CancelGuide();
			return;
		}
		ShowGuideArrow();

		// 设定指针初始位置
		Vector3 rotateTo = new Vector3(m_NavPathCorners[m_nNextCornerIdx].x, m_arrowTrans.position.y, m_NavPathCorners[m_nNextCornerIdx].z);
		m_arrowTrans.LookAt(rotateTo);

		if (sceneId == GameManager.gameManager.RunningScene && m_bShowDestEffect)
		{
			if (m_destEffectTrans == null)
			{
				if (LoadDestEffect() == false)
				{
					return;
				}
			}
			Vector3 currentSceneDestination = new Vector3(m_Destination.PosX, 0, m_Destination.PosZ);
			currentSceneDestination = ActiveScene.GetTerrainPosition(currentSceneDestination);
			m_destEffectTrans.position = currentSceneDestination + new Vector3(0, -0.14f, 0);
			ShowDestEffect();
			ShowArrawEffect ();
		}
		else
		{
			HideDestEffect();
		}
	}

	/// <summary>
	/// 再一次尝试设置目的地
	/// </summary>
	/// <param name="bRetry">If set to <c>true</c> b retry.</param>
	private void ReTrySetDest()
	{
		if (null == m_mainPlayer) 
		{
			m_mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		}
		if (CalculatePath() == false)
		{
			CancelGuide();
			return;
		}
		ShowGuideArrow();
		
		// 设定指针初始位置
		Vector3 rotateTo = new Vector3(m_NavPathCorners[m_nNextCornerIdx].x, m_arrowTrans.position.y, m_NavPathCorners[m_nNextCornerIdx].z);
		m_arrowTrans.LookAt(rotateTo);
		
		if (m_Destination.SceneID == GameManager.gameManager.RunningScene && m_bShowDestEffect)
		{
			if (m_destEffectTrans == null)
			{
				if (LoadDestEffect() == false)
				{
					return;
				}
			}
			Vector3 currentSceneDestination = new Vector3(m_Destination.PosX, 0, m_Destination.PosZ);
			currentSceneDestination = ActiveScene.GetTerrainPosition(currentSceneDestination);
			m_destEffectTrans.position = currentSceneDestination + new Vector3(0, -0.14f, 0);
			ShowDestEffect();
			ShowArrawEffect ();
		}
		else
		{
			HideDestEffect();
		}
	}

	/// <summary>
	/// 取消方向引导
	/// </summary>
	/// <returns><c>true</c> if this instance cancel guide; otherwise, <c>false</c>.</returns>
	public void CancelGuide()
	{
		m_bHasDestination = false;
		m_nNextCornerIdx = -1;
		HideGuideArrow();
		HideDestEffect();
		HideArrawEffect ();
	}

	/// <summary>
	/// 显示引导箭头
	/// </summary>
	private void ShowGuideArrow()
	{
		if (m_arrowTrans != null)
		{
			m_arrowTrans.gameObject.SetActive(true);
		}
	}

	/// <summary>
	/// 隐藏引导箭头
	/// </summary>
	private void HideGuideArrow()
	{
		if (m_arrowTrans != null)
		{
			m_arrowTrans.gameObject.SetActive(false);
		}
	}

	private void ShowDestEffect ()
	{
		if (m_destEffectTrans != null)
		{
			m_destEffectTrans.gameObject.SetActive(true);
		}
	}

	private void HideDestEffect ()
	{
		if (m_destEffectTrans != null)
		{
			m_destEffectTrans.gameObject.SetActive(false);
		}
	}

	private void ShowArrawEffect ()
	{
		if (m_ArrowEffectTrans != null && m_ArrowEffectTrans.Length != 0) {
			for (int i = 0; i < m_ArrowEffectTrans.Length; i++) {
				if (m_ArrowEffectTrans [i] != null) {
					m_ArrowEffectTrans [i].gameObject.SetActive (true);
				}
			}
		}
	}

	private void HideArrawEffect ()
	{
		if (m_ArrowEffectTrans != null && m_ArrowEffectTrans.Length != 0) {
			for (int i = 0; i < m_ArrowEffectTrans.Length; i++) {
				if (m_ArrowEffectTrans [i] != null) {
					m_ArrowEffectTrans [i].gameObject.SetActive (false);
				}
			}
		}
	}

	/// <summary>
	/// 设定光圈和箭头的缩放
	/// </summary>
	/// <param name="scale">Scale.</param>
	public void SetGuideEffectScale (float scale)
	{
	    if (m_circleTrans != null)
	    {
            m_circleTrans.localScale = new Vector3(scale, scale, scale);	        
	    }
	    if (m_arrowTrans != null)
	    {
            m_arrowTrans.localScale = new Vector3(scale, scale, scale);	        
	    }
	}

	void OnDrawGizmos ()
	{
		if (m_NavPathCorners != null && m_NavPathCorners.Length != 0) {
//			Gizmos.color = new Color(1, 0, 0);
//			for (int i = 0; i < m_NavPathCorners.Length; i++)
//				Gizmos.DrawSphere (m_NavPathCorners[i] + Vector3.up * 0.1f, .2f);


//			Vector4[] arrows = GetPathPoints (arrowinterval, 0, arrowsMax);
//			if (arrows == null)
//				return;
//
//			for (int i = 0; i < arrowAnims.Length; i++) {
//				if (arrowAnims [i] != null) {
//					if (arrowAnims [i].idx >= arrowsMax) {
//						arrowAnims [i].idx -= arrowsMax;
//					}
//					Gizmos.color = new Color (0, 1, 0, arrowAnims[i].alpha);
//					Gizmos.DrawSphere (arrows[arrowAnims [i].idx] + Vector3.up * 0.3f, .1f);
//				}
//			}
//			for (int i = 0; i < arrows.Length; i++) {
//				Gizmos.color = Color.green;
//				Gizmos.DrawSphere (arrows[i], 0.1f);
//			}
		}
	}
}
