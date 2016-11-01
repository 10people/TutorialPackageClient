using UnityEngine;
using System.Collections;
using Games.LogicObj;

public class Bullet : MonoBehaviour {

    public float m_speed =5.0f;
    public float minDistance = 0.3f;
    public float m_duration = -1;           // 如果设置了持续时间，则SPEED根据持续时间计算
    public float startHeight = 1.0f;
    private Vector3 m_startPos;
    private Vector3 m_dir;
    private Vector3 m_targetPos;
    private int m_targetID;

    private Transform mTrans;
    FXController mFxController;
    Transform mTargetTrans;

    private float m_targetGetTimer = 0;

	public void InitData(int sendId,int targetId)
    {
        mTrans = transform;
        if (null == mTrans.parent)
        {
            mFxController = null;
            return;
        }
        else
        {
            mFxController = mTrans.parent.GetComponent<FXController>();
        }

        if (null == mFxController)
        {
            return;
        }

        Obj_Character Sender = Singleton<ObjManager>.Instance.FindObjCharacterInScene(sendId);
        Obj_Character Target = Singleton<ObjManager>.Instance.FindObjCharacterInScene(targetId);
        if (null == Sender || null == Target)
        {
            mFxController.Stop();
            return;
        }

        m_startPos = Sender.transform.position;
        m_startPos.y += startHeight;
        mTrans.position = m_startPos;

        m_targetPos = Target.transform.position;
        m_targetPos.y  += startHeight;
        m_dir = (m_targetPos - m_startPos);
        if (m_duration > 0)
        {
            m_speed = m_dir.magnitude / m_duration;
        }
        m_dir.Normalize();

        m_targetID = targetId;

        

        m_targetGetTimer = 0;
    }
		
	// Update is called once per frame
	void Update () {
        if (mTrans == null || null == mFxController)
        {
            return;
        }
//        Obj_Character Target = Singleton<ObjManager>.Instance.FindObjCharacterInScene(m_targetID);

        m_targetGetTimer -= Time.deltaTime;

        if (null == mTargetTrans || m_targetGetTimer <= 0)
        {
            Obj_Character objTarget = Singleton<ObjManager>.Instance.FindObjCharacterInScene(m_targetID);

            if (objTarget == null)
            {
                mFxController.Stop();
                return;
            }
            else
            {
                mTargetTrans = objTarget.transform;
                
                m_targetGetTimer = 0.3f;
            }
        }

        Vector3 m_targetTransPos = mTargetTrans.position;
        m_targetTransPos.y = mTrans.position.y;
        m_dir = (m_targetTransPos - mTrans.position).normalized;
        mTrans.position +=  m_dir * m_speed * Time.deltaTime;

        mTrans.LookAt(m_targetTransPos);

        float sqDist = (m_targetTransPos.z - mTrans.position.z) * (m_targetTransPos.z - mTrans.position.z) +
                        (m_targetTransPos.y - mTrans.position.y) * (m_targetTransPos.y - mTrans.position.y) +
                        (m_targetTransPos.x - mTrans.position.x) * (m_targetTransPos.x - mTrans.position.x);


        if (sqDist < minDistance * minDistance)
        {
            if (mFxController != null)
            {
                mFxController.Stop();
            }
        }
        
	
	}
}
