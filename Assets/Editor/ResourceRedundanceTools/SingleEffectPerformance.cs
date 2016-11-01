using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;

public class SubEffectInfo
{
    public string mName;
    public int mNum;
    public float mSize;

    public void CopyFrom(SubEffectInfo info)
    {
        mName = info.mName;
        mNum = info.mNum;
        mSize = info.mSize;
    }
}

public class SingleEffectPerformance : MonoBehaviour
{
    public string mEffectPrefabPathName;

    private const int mEffectInstanceNum = 3;
    private const float mUpdateInterval = 0.5f;

    private float mLastInterval = 0.0f;
    private int mFrames = 0;


    private List<float> mFPSList = new List<float>();
    private float mWorstFPS = 0.0f;


    private int mParticleCountSum = 0;
    private float mParticleSizeSum = 0.0f;

    private int mCount = 0;

    GameObject[] mEffectInstanceArray = new GameObject[mEffectInstanceNum];

    private List<SubEffectInfo> mSubEffectInfoList = new List<SubEffectInfo>();


    private bool IsAlive(GameObject effectInstance)
    {
        ParticleSystem[] psArray = effectInstance.GetComponentsInChildren<ParticleSystem>();
        foreach (ParticleSystem ps in psArray)
        {
            if (ps.IsAlive())
            {
                return true;
            }
        }

        return false;
    }

    private void Play(GameObject effectInstance)
    {
        ParticleSystem[] psArray = effectInstance.GetComponentsInChildren<ParticleSystem>();
        foreach (ParticleSystem ps in psArray)
        {
            ps.Play();
        }
    }

    // Use this for initialization
    void Start()
    {
        GameObject effectPrefab = (GameObject)AssetDatabase.LoadAssetAtPath(mEffectPrefabPathName, typeof(GameObject));

        for (int i = 0; i < mEffectInstanceNum; ++i)
        {
            mEffectInstanceArray[i] = GameObject.Instantiate(effectPrefab) as GameObject;
            mEffectInstanceArray[i].transform.position = new Vector3(0.0f, 0.0f, 0.0f);
        }

        ParticleSystem[] psArray = mEffectInstanceArray[0].GetComponentsInChildren<ParticleSystem>();
        foreach (ParticleSystem ps in psArray)
        {
            SubEffectInfo info = new SubEffectInfo();
            info.mName = ps.name;
            info.mNum = 0;
            info.mSize = 0.0f;
            mSubEffectInfoList.Add(info);
        }

        mFrames = 0;
        mLastInterval = Time.realtimeSinceStartup;
        mCount = 0;

    }

    // Update is called once per frame
    void Update()
    {
        ++mFrames;

        foreach (GameObject effectInstance in mEffectInstanceArray)
        {
            if (!IsAlive(effectInstance))
            {
                Play(effectInstance);
            }
        }

        if (Time.realtimeSinceStartup > mLastInterval + mUpdateInterval)
        {
            float fps = mFrames / (Time.realtimeSinceStartup - mLastInterval);
            mFrames = 0;
            mLastInterval = Time.realtimeSinceStartup;

            if (mFPSList.Count == 0)
            {
                mWorstFPS = fps;
            }
            else if (mWorstFPS > fps)
            {
                mWorstFPS = fps;
            }

            mFPSList.Add(fps);
            //Debug.Log("FPS: " + fps);

            int particleCount = 0;
            float particleSize = 0.0f;
            int i = 0;

            ParticleSystem[] psArray = mEffectInstanceArray[0].GetComponentsInChildren<ParticleSystem>();
            foreach (ParticleSystem ps in psArray)
            {
                particleCount += ps.particleCount;
                mSubEffectInfoList[i].mNum += ps.particleCount; 

                ParticleSystem.Particle[] particles = new ParticleSystem.Particle[ps.particleCount];
                ps.GetParticles(particles);

                foreach (ParticleSystem.Particle particle in particles)
                {
                    particleSize += particle.size;
                    mSubEffectInfoList[i].mSize += particle.size;
                }

                ++i;
            }

            mParticleCountSum += particleCount;
            mParticleSizeSum += particleSize;

            ++mCount;
        }
    }

    public void DestroyGameObjects()
    {
        for (int i = 0; i < mEffectInstanceNum; ++i)
        {
            GameObject.Destroy(mEffectInstanceArray[i]);
        }

        Resources.UnloadUnusedAssets();
    }

    public float GetAverageFPS()
    {
        float sum = 0.0f;
        foreach (float fps in mFPSList)
        {
            sum += fps;
        }

        return (sum - mWorstFPS) / (mFPSList.Count - 1);
    }

    public int GetAverageParticleNum()
    {
        return mParticleCountSum / mCount;
    }

    public float GetAverageParticleSize()
    {
        return mParticleSizeSum / (float)mParticleCountSum;
    }

    public List<SubEffectInfo> GetSubEffectInfoList()
    {
        for (int i = 0; i < mSubEffectInfoList.Count; ++i)
        {
            mSubEffectInfoList[i].mSize /= mSubEffectInfoList[i].mNum;
            mSubEffectInfoList[i].mNum /= mCount;
        }

        return mSubEffectInfoList;
    }



}
