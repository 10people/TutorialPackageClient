#define FadeOut //如果不想使用fadeout功能就把这个宏定义去掉
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 残影
/// Todo:考虑把GameObject也缓存起来复用
/// </summary>
public class BattleSoulMaker : MonoBehaviour
{
    /// <summary>
    /// 残影的材质
    /// </summary>
    public Material m_soulMat;
    ///// <summary>
    ///// 生成残影的间隔时间
    ///// </summary>
    public float m_interval;
    /// <summary>
    /// 生成残影的间隔距离
    /// </summary>
    public float m_distance;
    /// <summary>
    /// 残影存留的时间
    /// </summary>
    public float m_soulLife;
    /// <summary>
    /// 残影的最大个数
    /// </summary>
    public int m_maxSoulNum;

    /// <summary>
    /// 要拷贝的mesh
    /// </summary>
    private List<SkinnedMeshRenderer> skinmeshList = new List<SkinnedMeshRenderer>();
    /// <summary>
    /// Mesh的缓存区，重复利用，这样可以减少资源的创建，会在disable的时候销毁资源
    /// </summary>
    private List<Mesh> m_meshBuffer = new List<Mesh>();
    /// <summary>
    /// 当前用于bake的mesh的index
    /// </summary>
    int m_meshIndex = 0;
    /// <summary>
    /// 计时器
    /// </summary>
    private float m_timer;
    /// <summary>
    /// 上次的位置
    /// </summary>
    private Vector3 m_lastPos;
    /// <summary>
    /// 当前残影列表
    /// </summary>
    private List<BattleSoul> m_soulList = new List<BattleSoul>();
    /// <summary>
    /// 当前残影个数
    /// </summary>
//    private int m_soulCount;
    public int SoulCount
    {
        get
        {
//            m_soulCount = m_soulList.Count;
            return m_soulList.Count;
        }
    }


    void OnEnable()
    {
        skinmeshList.Clear();
        skinmeshList.AddRange(transform.GetComponentsInChildren<SkinnedMeshRenderer>());
        m_lastPos = transform.position;
        while (m_meshBuffer.Count < m_maxSoulNum*skinmeshList.Count)
        {
            m_meshBuffer.Add(new Mesh());
        }
        while (m_meshBuffer.Count > m_maxSoulNum*skinmeshList.Count)
        {
            Mesh temp = m_meshBuffer[0];
            m_meshBuffer.RemoveAt(0);
            DestroyMesh(temp);
        }
    }
    
    // Update is called once per frame
    void Update()
    {

        for (int i = 0; i < m_soulList.Count; i++)
        {
            m_soulList[i].Update();
        }
        if (ShouldBake())
        {
            BakeNewSoul();
        }
    }

    void OnDisable()
    {
        while (m_soulList.Count > 0)
        {
            Destroysoul(m_soulList[0]);
        }
    }

    void OnDestroy()
    {
        for (int i = 0; i < m_meshBuffer.Count; i++)
        {
            BattleSoulMaker.DestroyMesh(m_meshBuffer[i]);
        }
        m_meshBuffer.Clear();
        Resources.UnloadUnusedAssets();//清理内存
    }
    private bool ShouldBake()
    {
        m_timer += Time.deltaTime;
        if (m_timer > m_interval)
        {
            m_timer = 0;
            if (Vector3.Distance(m_lastPos, transform.position) > m_distance)
            {
                m_lastPos = transform.position;
                return true;
            }
        }
        return false;
    }
    private void BakeNewSoul()
    {
        if (SoulCount > m_maxSoulNum)
        {
            Destroysoul(m_soulList[0]);
        }
        Transform _newsoulRoot = new GameObject().transform;
        for (int i = 0; i < skinmeshList.Count; i++)
        {
            Mesh _newmesh = m_meshBuffer[m_meshIndex];
            m_meshIndex++;
            if (m_meshIndex >= m_meshBuffer.Count)
            {
                m_meshIndex = 0;
            }
            _newmesh.name = "Made in China";
            GameObject _newGo = new GameObject(i.ToString());
            skinmeshList[i].BakeMesh(_newmesh);

            _newGo.AddComponent<MeshFilter>().mesh = _newmesh;
            List<Material> materialList = new List<Material>();
            for (int j = 0; j < _newmesh.subMeshCount; j++)
            {
                materialList.Add(m_soulMat);
            }
            _newGo.AddComponent<MeshRenderer>().sharedMaterials = materialList.ToArray();
            _newGo.transform.position = skinmeshList[i].gameObject.transform.position;
            _newGo.transform.rotation = skinmeshList[i].gameObject.transform.rotation;
            _newGo.transform.parent = _newsoulRoot;
        }
        BattleSoul _newsoul = new BattleSoul(_newsoulRoot.gameObject, this, m_soulLife);
        m_soulList.Add(_newsoul);
    }

    public void Destroysoul(BattleSoul soul)
    {
        m_soulList.Remove(soul);
        soul.Clear();
        soul = null;
    }
    public static void DestroyMesh(Mesh amesh)
    {
        Object.DestroyImmediate(amesh);
        amesh = null;
    }
}

/// <summary>
/// 残影自管理
/// </summary>
public class BattleSoul
{
    private GameObject m_Go;
    private BattleSoulMaker m_Maker;
    private float timer = 0;
    private float lifetime = 0;
    public delegate void delDestroy(BattleSoul obj);
    public delDestroy destroySoul;
    private Color _initColor;
    private Color _dstColor;
    private MeshRenderer[] _meshrenders;
    public BattleSoul(GameObject obj, BattleSoulMaker maker, float life)
    {
        m_Go = obj;
        m_Maker = maker;
        lifetime = life;
        _initColor = m_Maker.m_soulMat.GetColor("_TintColor");
        _dstColor = new Color(_initColor.r, _initColor.g, _initColor.b, 0);
        _meshrenders = m_Go.GetComponentsInChildren<MeshRenderer>();
    }

    public void Update()
    {
        timer += Time.deltaTime;

        float alpha = timer / lifetime;
#if FadeOut
        UpdateAlpha(alpha);
#endif
        if (LifeOver)
        {
            m_Maker.Destroysoul(this);
        }
    }
    
#if FadeOut
    private void UpdateAlpha(float alpha)
    {
        Color _color = Color.Lerp(_initColor, _dstColor, alpha);
        for (int i = 0; i < _meshrenders.Length; i++)
        {
            
            Material[] _mats = _meshrenders[i].materials;
            for (int j = 0; j < _mats.Length; j++)
            {
                _mats[j].SetColor("_TintColor", _color);
            }
            _meshrenders[i].materials = _mats;
        }
    }
#endif
    public bool LifeOver
    {
        get
        {
            return timer > lifetime;
        }
    }
    public void Clear()
    {
        GameObject.DestroyImmediate(m_Go);
        m_Go = null;
    }
}