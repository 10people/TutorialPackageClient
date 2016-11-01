using System;
using System.Collections.Generic;
using GCGame.Table;
using UnityEngine;
using Games.GlobeDefine;
using Module.Log;
namespace Games.LogicObj
{
    public class Obj : MonoBehaviour
    {
        /// <summary>
        /// 资源路径
        /// </summary>
        private string m_MainObjUrl = "";
        /// <summary>
        /// 
        /// </summary>
        public string MainModelUrl
        {
            get { return m_MainObjUrl; }
        }

        public Obj()
        {
            m_ObjType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ;
        }

        void Awake()
        {
            m_ObjTransform = transform;
        }

       
        protected Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE m_ObjType;  //Obj类型
        public Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE ObjType
        {
            get { return m_ObjType; }
        }
        protected bool m_bCanLogic = false;             //是否可以进行逻辑操作
        public bool CanLogic
        {
            get { return m_bCanLogic; }
            set { m_bCanLogic = value; }
        }

        protected int m_ServerID;                       //Obj的ServerID
        public int ServerID
        {
            get { return m_ServerID; }
            set { m_ServerID = value; }
        }

        protected int m_ModelID;                        //Obj的模型ID,在CharModel表中定义
        public int ModelID
        {
            get { return m_ModelID; }
            set { m_ModelID = value; }
        }

        private GameObject m_ModelNode = null;           //暂存Model节点
        public UnityEngine.GameObject ModelNode
        {
            get { return m_ModelNode; }
            set { m_ModelNode = value; }
        }
        //////////////////////////////////////////////////////////////////////////
        //常用基础方法属性接口
        //////////////////////////////////////////////////////////////////////////
        protected Transform m_ObjTransform = null;        //缓存Transform，提高运行效率,必须在Awake的时候就进行赋值
        public Transform ObjTransform
        {
            get { return m_ObjTransform; }
        }
        public Vector3 Position
        {
            get { return m_ObjTransform.localPosition; }
            set
            {
                //value.y = 0;
                m_ObjTransform.localPosition = value;
            }
        }
        public Quaternion Rotation
        {
            get { return m_ObjTransform.localRotation; }
            set { m_ObjTransform.localRotation = value; }
        }
        public Vector3 Scale
        {
            get { return m_ObjTransform.localScale; }
            set { m_ObjTransform.localScale = value; }
        }
        public string GameObjectName
        {
            get { return this.gameObject.name; }
            set { this.gameObject.name = value; }
        }


        public void SetScale(float fScale)
        {
            if (null != this.gameObject)
            {
                m_ObjTransform.localScale = Vector3.one * fScale;
            }
        }

        //判断物体是否在自己前方
        public bool IsInFront(Obj targetObj)
        {
            if (null == targetObj)
            {
                return false;
            }

            //获得从当前Obj到目标Obj的方向，然后求和当前Obj的朝向夹角。
            Vector2 tarPos = new Vector2(targetObj.ObjTransform.position.x, targetObj.ObjTransform.position.z);
            Vector2 myPos = new Vector2(ObjTransform.position.x, ObjTransform.position.z);
            Vector2 mydir = new Vector2(ObjTransform.forward.x, ObjTransform.forward.z);
            Vector2 dir = tarPos - myPos;
            float angle = Vector2.Angle(mydir.normalized, dir.normalized);
            if (angle < 90.0f)
            {
                return true;
            }

            return false;
        }

        #region 材质
        ///////////////////////////////////////////////////////////////////////////////
        //材质相关
        ///////////////////////////////////////////////////////////////////////////////
        protected List<Material> m_WeaponMaterialList = new List<Material>();//!!!缓存武器材质信息 使用前记得判空防止出现丢失的情况
        protected List<Material> m_BodyMaterialList = new List<Material>();//!!!缓存身体材质信息 使用前记得判空防止出现丢失的情况
        protected Dictionary<string, Color> m_BodyInitColorDic =new Dictionary<string, Color>(); //!!!缓存身体材质的颜色 使用前记得判空防止出现丢失的情况
        protected Dictionary<string, Color> m_WeaponInitColorDic =new Dictionary<string, Color>(); //!!!缓存武器材质的颜色 使用前记得判空防止出现丢失的情况
        protected Dictionary<string, Shader> m_BodyInitShaderDic =new Dictionary<string, Shader>(); //!!!缓存身体材质的shader 使用前记得判空防止出现丢失的情况
        protected Dictionary<string, Shader> m_WeaponInitShaderDic =new Dictionary<string, Shader>(); //!!!缓存武器材质的shader 使用前记得判空防止出现丢失的情况
        protected bool m_bIsPlayDissolve = false;//是否开始播放溶解效果
        protected float m_fPlayDissolveSpeed = 2.0f;//是否开始播放溶解效果
        protected float m_fPlayDissolveDelay = 0.5f;//延迟时间
        protected bool m_bIsPlayUnDissolve = false;//是否开始播放反溶解效果
        protected float m_fPlayUnDissolveSpeed = 2.0f;//是否开始播放溶解效果
        protected float m_fPlayUnDissolveDelay = 0.5f;//延迟时间
        public void InitMaterialInfo()
        {
            m_BodyMaterialList.Clear();
            m_WeaponMaterialList.Clear();
            m_BodyInitColorDic.Clear();
            m_WeaponInitColorDic.Clear();
            m_BodyInitShaderDic.Clear();
            m_WeaponInitShaderDic.Clear();
            m_bIsPlayDissolve = false;
            Transform _modleTransform = gameObject.transform.FindChild("Model");
            if (_modleTransform == null)
            {
                return;
            }
            GameObject _modle = _modleTransform.gameObject;
            if (_modle != null)
            {
                Renderer[] renderers = _modle.GetComponentsInChildren<Renderer>();
                if (renderers != null)
                {
                    for (int i = 0; i < renderers.Length; ++i)
                    {
                        if (null != renderers[i] && null != renderers[i].material)
                        {
                            //身体部分
                            if (IsBodyRenderer(renderers[i]) && m_BodyMaterialList.Contains(renderers[i].material) == false)
                            {
                                //缓存材质信息
                                m_BodyMaterialList.Add(renderers[i].material);
                                //缓存材质颜色信息
                                if (renderers[i].material.HasProperty("_Color") && m_BodyInitColorDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_BodyInitColorDic.Add(renderers[i].material.name, renderers[i].material.GetColor("_Color"));
                                }
                                //缓存材质shader信息
                                if (m_BodyInitShaderDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_BodyInitShaderDic.Add(renderers[i].material.name, renderers[i].material.shader);
                                }
                            }
                            //武器部分
                            if (IsWeaponRenderer(renderers[i]) && m_WeaponMaterialList.Contains(renderers[i].material) == false)
                            {
                                m_WeaponMaterialList.Add(renderers[i].material);
                                //缓存材质颜色信息
                                if (renderers[i].material.HasProperty("_Color") && m_WeaponInitColorDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_WeaponInitColorDic.Add(renderers[i].material.name, renderers[i].material.GetColor("_Color"));
                                }
                                //缓存材质shader信息
                                if (m_WeaponInitShaderDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_WeaponInitShaderDic.Add(renderers[i].material.name, renderers[i].material.shader);
                                }
                            }
                        }
                    }
                    OptAfterInitMaterialInfo();
                }
            }
        }
        public void InitWeaponMaterialInfo()
        {
            m_WeaponMaterialList.Clear();
            m_WeaponInitColorDic.Clear();
            m_WeaponInitShaderDic.Clear();
            m_bIsPlayDissolve = false;
            Transform _modleTransform = gameObject.transform.FindChild("Model");
            if (_modleTransform == null)
            {
                return;
            }
            GameObject _modle = _modleTransform.gameObject;
            if (_modle != null)
            {
                Renderer[] renderers = _modle.GetComponentsInChildren<Renderer>();
                if (renderers != null)
                {
                    for (int i = 0; i < renderers.Length; ++i)
                    {
                        if (null != renderers[i] && null != renderers[i].material)
                        {
                            //武器部分
                            if (IsWeaponRenderer(renderers[i]) && m_WeaponMaterialList.Contains(renderers[i].material) == false)
                            {
                                //缓存材质信息
                                m_WeaponMaterialList.Add(renderers[i].material);
                                //缓存材质颜色信息
                                if (renderers[i].material.HasProperty("_Color") && m_WeaponInitColorDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_WeaponInitColorDic.Add(renderers[i].material.name, renderers[i].material.GetColor("_Color"));
                                }
                                //缓存材质shader信息
                                if (m_WeaponInitShaderDic.ContainsKey(renderers[i].material.name) == false)
                                {
                                    m_WeaponInitShaderDic.Add(renderers[i].material.name, renderers[i].material.shader);
                                }
                            }
                        }
                    }
                  //  OptAfterInitMaterialInfo();
                }
            }
        }
        public virtual void OptAfterInitMaterialInfo()
        {
            //有变色的话 换装得加上
            if (m_objEffectController != null)
            {
                m_objEffectController.ChangeColorEffct();
            }
        }
        public bool IsBodyRenderer(Renderer _Renderer)
        {
            if (_Renderer && _Renderer.transform.parent)
            {
                if (_Renderer.transform.parent.name == "Model")
                {
                    return true;
                }
            }
            return false;
        }
        public bool IsWeaponRenderer(Renderer _Renderer)
        {
            if (_Renderer && _Renderer.transform.parent)
            {
                if (_Renderer.transform.parent.name == "Weapon_L" ||
                    _Renderer.transform.parent.name == "Weapon_R")
                {
                    return true;
                }
            }
            return false;
        }
        #endregion
        #region 材质变色
        //设置为初始颜色
        public void SetMaterialInitColor()
        {
            Material _material = null;
            //替换身体材质
            for (int i = 0; i < m_BodyMaterialList.Count; ++i)
            {
                _material = m_BodyMaterialList[i];
                if (null != _material)
                {
                    if (_material.HasProperty("_Color") && m_BodyInitColorDic.ContainsKey(_material.name))
                    {
                        Color _initcolor = m_BodyInitColorDic[_material.name];
                        SetMaterialColor(_material, _initcolor.r, _initcolor.g, _initcolor.b);
                    }
                }
            }
            //替换武器材质
            for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
            {
                _material = m_WeaponMaterialList[i];
                if (null != _material)
                {
                    if (_material.HasProperty("_Color") && m_WeaponInitColorDic.ContainsKey(_material.name))
                    {
                        Color _initcolor = m_WeaponInitColorDic[_material.name];
                        SetMaterialColor(_material, _initcolor.r, _initcolor.g, _initcolor.b);
                    }
                }
            }
        }

        //设置模型材质颜色
        public void SetMaterialColor(Material _material, float red, float green, float blue)
        {
            if (_material && _material.HasProperty("_Color"))
            {
                Color c = _material.GetColor("_Color");
                c.r = red;
                c.g = green;
                c.b = blue;
                _material.color = c;
            }
        }
        //设置模型材质颜色
        public void SetMaterialColor(float red, float green, float blue)
        {
            Material _material = null;
            //替换身体材质
            for (int i = 0; i < m_BodyMaterialList.Count; ++i)
            {
                _material = m_BodyMaterialList[i];
                if (_material)
                {
                    if (_material.HasProperty("_Color"))
                    {
                        SetMaterialColor(_material, red, green, blue);
                    }
                }

            }
            //替换武器材质
            for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
            {
                _material = m_WeaponMaterialList[i];
                if (_material)
                {
                    if (_material.HasProperty("_Color"))
                    {
                        SetMaterialColor(_material, red, green, blue);
                    }
                }

            }
        }

        #endregion
        #region 隐身设置

        private int m_nStealthLev = 0;
        public virtual int StealthLev
        {
            get { return m_nStealthLev; }
            set { m_nStealthLev = value; }
        }
        public void SetStealthState()
        {
            Material _material = null;
            //替换身体材质
            for (int i = 0; i < m_BodyMaterialList.Count; ++i)
            {
                _material = m_BodyMaterialList[i];
                if (_material && GameManager.m_ShaderForStealth)
                {
                    _material.shader = GameManager.m_ShaderForStealth;
                    if (_material.HasProperty("_Color"))
                    {
                        Color c = _material.GetColor("_Color");
                        c.a = 0.5f;
                        _material.color = c;
                    }
                }
            }
            //替换武器材质
            for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
            {
                _material = m_WeaponMaterialList[i];
                if (_material && GameManager.m_ShaderForStealth)
                {
                    _material.shader = GameManager.m_ShaderForStealth;
                    if (_material.HasProperty("_Color"))
                    {
                        Color c = _material.GetColor("_Color");
                        c.a = 0.5f;
                        _material.color = c;
                    }
                }
            }
        }

        
        public void CancelStealthState()
        {
            Material _material = null;
            //替换身体材质
            for (int i = 0; i < m_BodyMaterialList.Count; ++i)
            {
                _material = m_BodyMaterialList[i];
                if (_material)
                {
                    if (m_BodyInitShaderDic.ContainsKey(_material.name))
                    {
                        _material.shader = m_BodyInitShaderDic[_material.name];
                        if (_material.HasProperty("_Color"))
                        {
                            Color c = _material.GetColor("_Color");
                            c.a = 1.0f;
                            _material.color = c;
                        }
                    }
                }
            }
            //替换武器材质
            for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
            {
                _material = m_WeaponMaterialList[i];
                if (_material)
                {
                    if (m_WeaponInitShaderDic.ContainsKey(_material.name))
                    {
                        _material.shader = m_WeaponInitShaderDic[_material.name];
                        if (_material.HasProperty("_Color"))
                        {
                            Color c = _material.GetColor("_Color");
                            c.a = 1.0f;
                            _material.color = c;
                        }
                    }
                }
            }
        }
        #endregion
        #region 溶解效果
        //更新溶解效果
        public void UpdateDissolve()
        {
            if (m_bIsPlayDissolve == false && m_bIsPlayUnDissolve ==false)
            {
                return;
            }
            if (m_bIsPlayDissolve)
            {
                if (m_fPlayDissolveDelay > 0)
                {
                    m_fPlayDissolveDelay -= Time.deltaTime;
                    return;
                }
                //身体部分
                for (int i = 0; i < m_BodyMaterialList.Count; ++i)
                {
                    if (null != m_BodyMaterialList[i])
                    {
                        if (m_BodyMaterialList[i].HasProperty("_Amount"))
                        {
                            float _fAmount = m_BodyMaterialList[i].GetFloat("_Amount");
                            _fAmount = _fAmount + m_fPlayDissolveSpeed * Time.deltaTime;
                            m_BodyMaterialList[i].SetFloat("_Amount", _fAmount);
                            if (_fAmount >= 1.0f)
                            {
                                m_bIsPlayDissolve = false;
                            }
                        }
                    }
                }
                //武器部分
                for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
                {
                    if (null != m_WeaponMaterialList[i])
                    {
                        if (m_WeaponMaterialList[i].HasProperty("_Amount"))
                        {
                            float _fAmount = m_WeaponMaterialList[i].GetFloat("_Amount");
                            _fAmount = _fAmount + m_fPlayDissolveSpeed * Time.deltaTime;
                            m_WeaponMaterialList[i].SetFloat("_Amount", _fAmount);
                            if (_fAmount >= 1.0f)
                            {
                                m_bIsPlayDissolve = false;
                            }
                        }
                    }
                }
            }
            else if (m_bIsPlayUnDissolve)
            {
                if (m_fPlayUnDissolveDelay > 0)
                {
                    m_fPlayUnDissolveDelay -= Time.deltaTime;
                    return;
                }
                //身体部分
                for (int i = 0; i < m_BodyMaterialList.Count; ++i)
                {
                    if (null != m_BodyMaterialList[i])
                    {
                        if (m_BodyMaterialList[i].HasProperty("_Amount"))
                        {
                            float _fAmount = m_BodyMaterialList[i].GetFloat("_Amount");
                            _fAmount = _fAmount - m_fPlayUnDissolveSpeed * Time.deltaTime;
                            m_BodyMaterialList[i].SetFloat("_Amount", _fAmount);
                            if (_fAmount <=0)
                            {
                                m_bIsPlayUnDissolve = false;
                            }
                        }
                    }
                }
                //武器部分
                for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
                {
                    if (null != m_WeaponMaterialList[i])
                    {
                        if (m_WeaponMaterialList[i].HasProperty("_Amount"))
                        {
                            float _fAmount = m_WeaponMaterialList[i].GetFloat("_Amount");
                            _fAmount = _fAmount - m_fPlayUnDissolveSpeed * Time.deltaTime;
                            m_WeaponMaterialList[i].SetFloat("_Amount", _fAmount);
                            if (_fAmount <= 0)
                            {
                                m_bIsPlayUnDissolve = false;
                            }
                        }
                    }
                }
            }
        }

        //溶解效果
        public void PlayDissolve(float _Speed,float _delaytime)
        {
            m_bIsPlayDissolve = true;
            m_fPlayDissolveSpeed = _Speed;
            m_fPlayDissolveDelay = _delaytime;
        }

        //反溶解效果
        public void PlayUnDissolve(float _Speed, float _delaytime)
        {

            m_bIsPlayUnDissolve = true;
            m_fPlayUnDissolveSpeed = _Speed;
            m_fPlayUnDissolveDelay = _delaytime;
            //身体部分
            for (int i = 0; i < m_BodyMaterialList.Count; ++i)
            {
                if (null != m_BodyMaterialList[i])
                {
                    if (m_BodyMaterialList[i].HasProperty("_Amount"))
                    {
                        m_BodyMaterialList[i].SetFloat("_Amount", 1.0f);
                    }
                }
            }
            //武器部分
            for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
            {
                if (null != m_WeaponMaterialList[i])
                {
                    if (m_WeaponMaterialList[i].HasProperty("_Amount"))
                    {
                        m_WeaponMaterialList[i].SetFloat("_Amount", 1.0f);
                    }
                }
            }
        }

        /// <summary>
        /// 显示溶解的NPC
        /// </summary>
        public void ShowDissolveNPC()
        {
            if (m_BodyMaterialList != null)
            {
                //身体部分
                for (int i = 0; i < m_BodyMaterialList.Count; ++i)
                {
                    if (null != m_BodyMaterialList[i])
                    {
                        if (m_BodyMaterialList[i].HasProperty("_Amount"))
                        {
                            m_BodyMaterialList[i].SetFloat("_Amount", 0.0f);
                        }
                    }
                }
            }

            if (m_WeaponMaterialList != null)
            {
                //武器部分
                for (int i = 0; i < m_WeaponMaterialList.Count; ++i)
                {
                    if (null != m_WeaponMaterialList[i])
                    {
                        if (m_WeaponMaterialList[i].HasProperty("_Amount"))
                        {
                            m_WeaponMaterialList[i].SetFloat("_Amount", 0.0f);
                        }
                    }
                }
            }
        }

        #endregion

        #region 效果逻辑

        private ObjEffectBehaviourController m_objEffectController = null;
        public ObjEffectBehaviourController ObjEffectController
        {
            get { return m_objEffectController; }
            set { m_objEffectController = value; }
        }

        public void InitEffect()
        {
            if (m_objEffectController!=null)
            {
                m_objEffectController.InitEffect(this.gameObject);
            }
            else
            {
                LogModule.ErrorLog("m_objEffectLogic is Null");
            }
        }
        public virtual GameObject GetObjBindPointObj(string pointName)
        {
            if (m_objEffectController == null)
            {
                LogModule.ErrorLog("GetObjBindPointObj called but m_objEffectController is null! ");
                return null;
            }
            if (string.IsNullOrEmpty(pointName))
            {
                LogModule.ErrorLog("GetObjBindPointObj called but pointName is null or empty {0}" ,pointName);  
            }
            return m_objEffectController.GetBindPointObj(pointName);
        }

        public void PlayEffect(int effectID, PlayEffectDelegate delPalyEffect = null, object param = null)
        {
            if (m_objEffectController)
            {
                m_objEffectController.PlayEffect(effectID, delPalyEffect, param);
            }
        }
        public void StopEffect(int effectID, bool bStopAll = true)
        {
            if (m_objEffectController)
            {
                m_objEffectController.StopEffect(effectID, bStopAll);
            }
        }
        public bool IsHaveBindPoint(string strPoint)
        {
            if (m_objEffectController)
            {
                return m_objEffectController.IsHaveBindPoint(strPoint);
            }
            return false;
        }
        public int GetEffectCountById( int id )
        {
            if (m_objEffectController)
            {
                return m_objEffectController.GetEffectCountById(id);
            }
            return 0;
        }
        /// <summary>
        /// 设置资源路径
        /// </summary>
        /// <param name="url"></param>
        public void SetMainModelUrl(string url)
        {
            m_MainObjUrl = url;
        }

        void OnDestroy()
        {
            
        }

        #endregion
    }
}