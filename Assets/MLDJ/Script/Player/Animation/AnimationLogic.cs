using System.IO;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using Games.LogicObj;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using System.Collections.Generic;
using Module.Log;
namespace Games.Animation_Modle
{
    public class AnimationLogic : MonoBehaviour
    {

        private Animation m_animation;
        public UnityEngine.Animation Animation
        {
            get { return m_animation; }

        }

        private string m_animResFilePath = "";       //动画资源路径
        public string AnimResFilePath
        {
            get { return m_animResFilePath; }
            set { m_animResFilePath = value; }
        }

        private GameObject m_animGameObj;
        /// <summary>
        /// 兼容新旧版本
        /// </summary>
        private ObjEffectBehaviourController m_objEffectController;
        private Obj_Character m_ObjChar = null;
        private bool m_IsUpdate = false;

        //***************Begin*****顿帧效果相关变量***********
        private float m_DelaySpeedTime = 0.0f;
        private float m_DelayFrameTime = 0.0f;
        private float m_DunFrameBegionTime = 0.0f;

        private bool m_IsDunFrame = false;
        private float m_CurPlayTime = 0.0f;
        private Tab_Animation m_CurrentAnimation;

        private bool m_IsDunFramePlay = false;
        public int m_CurrentAnimationId = -1;
        //***************End****************

        private AnimationState m_curAnimState;
        public UnityEngine.AnimationState CurAnimState
        {
            get { return m_curAnimState; }
            set { m_curAnimState = value; }
        }
        private Tab_Animation m_curAnimData;
        public GCGame.Table.Tab_Animation CurAnimData
        {
            get { return m_curAnimData; }
            set { m_curAnimData = value; }
        }
        private Dictionary<int, Tab_Animation> animStateCache;
        private LinkedList<int> m_NeedCheckEndCallBack = new LinkedList<int>();

        /// <summary>
        /// 调用Play接口播放动作可选的回调
        /// </summary>
        private Callback m_AnimFinishSpecificCallback;

#if UNITY_ANDROID
        public bool IsOtherPlayer = false;
        public Obj_OtherPlayer OtherPlayer = null;
#endif

        public void InitState(GameObject animObj)
        {
            if (null == animObj)
                return;

            Transform animParent = animObj.transform.parent;
            m_animation = animObj.GetComponent<Animation>();
            if (null != animParent)
            {
                m_animGameObj = animParent.gameObject;
                if (m_animGameObj != null)
                {
                    m_ObjChar = m_animGameObj.GetComponent<Obj_Character>();
                }

                if (animStateCache != null)
                {
                    animStateCache.Clear();
                    animStateCache = null;
                }
                animStateCache = new Dictionary<int, Tab_Animation>();
            }

            if (m_ObjChar != null)
            {
                if (m_ObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                {
                    m_IsUpdate = true;
                }
                else if (m_animation != null && m_ObjChar.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC &&
                    m_ObjChar.BaseAttr != null &&
                    m_ObjChar.BaseAttr.CachedRoleBase != null &&
                    m_ObjChar.BaseAttr.CachedRoleBase.NpcType == (int)Games.GlobeDefine.GameDefine_Globe.NPC_TYPE.BOSS)
                {
                    m_animation.cullingType = AnimationCullingType.AlwaysAnimate;
                }
            }
        }

        public Animation GetAnimation()
        {
            return m_animation;
        }

        protected float m_fLastLoopTime = 0.0f;
        public float LastLoopTime
        {
            get { return m_fLastLoopTime; }

        }

        protected int m_nLoopTimes = 0;
        public int LoopTimes
        {
            get { return m_nLoopTimes; }

        }

        private delegate void LoadAnimationDelegate(string animPath, AnimationClip curAnimClip, object param1, object param2);

        protected void CheckForNeedCallBack()
        {
            if (m_animation == null)
            {
                return;
            }
            if (m_animGameObj == null)
            {
                return;
            }
            if (m_NeedCheckEndCallBack == null || m_NeedCheckEndCallBack.Count <= 0)
            {
                return;

            }
            if (m_curAnimData == null)
            {
                return;
            }
            LinkedList<int> NeedRemoveAnim = new LinkedList<int>();
            int[] TmpNeedCheckArry = new int[m_NeedCheckEndCallBack.Count];
            m_NeedCheckEndCallBack.CopyTo(TmpNeedCheckArry, 0);
            for (int AnimIndex = 0; AnimIndex < TmpNeedCheckArry.Length; AnimIndex++)
            {
                int AnimId = TmpNeedCheckArry[AnimIndex];
                if (m_NeedCheckEndCallBack.Contains(AnimId) == false)
                {
                    continue;
                }
                Tab_Animation curAnimData = GetAnimInfoById(AnimId);
                if (curAnimData != null && m_animGameObj != null)
                {
                    if (curAnimData.WrapMode != 2 && m_animation.IsPlaying(curAnimData.AinmName) == false)
                    {
                        if (m_ObjChar != null)
                        {
                            if (m_ObjChar != null)
                            {
                                FinishAnimEffect(curAnimData.AnimID);
                            }
                            m_ObjChar.OnAnimationFinish(curAnimData.AnimID);
                            if (null != m_AnimFinishSpecificCallback)
                            {
                                m_AnimFinishSpecificCallback.Invoke();
                                m_AnimFinishSpecificCallback = null;
                            }
                        }
                        NeedRemoveAnim.AddFirst(curAnimData.AnimID);
                    }
                    else if (curAnimData.WrapMode == 2 && m_fLastLoopTime > 0)
                    {
                        if (curAnimData.SPEED != 0 && m_animation[curAnimData.AinmName] != null)
                        {
                            float LoopOnecAnimTime = m_animation[curAnimData.AinmName].length / m_curAnimData.SPEED;
                            if (Time.time - m_fLastLoopTime >= (m_nLoopTimes + 1) * LoopOnecAnimTime)
                            {
                                m_nLoopTimes++;
                                if (m_ObjChar != null)
                                {
                                    m_ObjChar.OnAnimationFinish(curAnimData.AnimID);
                                    if (null != m_AnimFinishSpecificCallback)
                                    {
                                        m_AnimFinishSpecificCallback.Invoke();
                                        m_AnimFinishSpecificCallback = null;
                                    }
                                }
                            }
                        }

                        //如果是击飞动作单独用时间控制
                        if (m_ObjChar != null && IsFlyStartMotionId(curAnimData.AnimID))
                        {
                            if (m_ObjChar._FlyStateData != null && Time.time - m_fLastLoopTime >= m_ObjChar._FlyStateData.fStartAnimationTime)
                            {
                                Stop();
                                m_nLoopTimes = 0;
                                m_fLastLoopTime = 0.0f;
                                if (curAnimData.LoopOverAnimId != -1)
                                {
                                    Play(curAnimData.LoopOverAnimId);
                                }
                            }
                             //TT 4528 刷出来的怪有可能是躺着的情况(躺着的怪正在播放击飞动画)。
                            //正在被击飞 而击飞的数据为空 ---直接stop。
                            else if(m_ObjChar._FlyStateData == null)
                            {
                                Stop();
                            }
                        }
                        else if (m_nLoopTimes >= curAnimData.LoopTime)
                        {
                            Stop();
                            m_nLoopTimes = 0;
                            m_fLastLoopTime = 0.0f;
                            if (m_curAnimData.LoopOverAnimId != -1)
                            {
                                Play(m_curAnimData.LoopOverAnimId);
                            }
                        }
                    }
                }
            }
            if (NeedRemoveAnim != null && NeedRemoveAnim.Count > 0)
            {
                foreach (int animId in NeedRemoveAnim)
                {
                    if (m_NeedCheckEndCallBack.Contains(animId))
                    {
                        m_NeedCheckEndCallBack.Remove(animId);
                    }
                }
            }
        }

        public void AnimationUpdate()
        {
            if (m_NeedCheckEndCallBack != null && m_NeedCheckEndCallBack.Count > 0)
            {
                CheckForNeedCallBack();
            }
        }

        /// <summary>
        /// 顿帧效果
        /// </summary>
        private void DelayFrameEffect()
        {
            //获取当前技能播放技能信息
            if (!m_IsDunFrame)
            {
                m_CurrentAnimation = GetAnimInfoById(m_CurrentAnimationId);
                if (m_CurrentAnimation == null)
                {
                    m_ObjChar.IsSkillHurt = false;
                    m_IsDunFrame = false;
                    m_IsDunFramePlay = true;
                    return;
                }
                if (m_CurrentAnimation.DelayFrameSpeed <= 0)
                {
                    //结束循环
                    m_ObjChar.IsSkillHurt = false;
                    m_IsDunFrame = false;
                    m_CurrentAnimation = null;
                    m_IsDunFramePlay = true;
                    return;
                }

                m_curAnimState = m_animation[m_CurrentAnimation.AinmName];
                if (m_curAnimState == null)
                {
                    m_ObjChar.IsSkillHurt = false;
                    m_IsDunFrame = false;
                    m_CurrentAnimation = null;
                    m_IsDunFramePlay = true;
                    return;
                }
                m_curAnimState.speed = m_CurrentAnimation.DelayFrameSpeed;
                m_IsDunFrame = true;
                m_CurPlayTime = Time.time;
            }
            else
            {
                if (Time.time - m_CurPlayTime >= m_DelaySpeedTime)
                {
                    m_IsDunFrame = false;
                    m_ObjChar.IsSkillHurt = false;
                    m_IsDunFramePlay = true;

                    if (m_CurrentAnimation != null)
                    {
                        m_curAnimState = m_animation[m_CurrentAnimation.AinmName];
                        if (m_curAnimState != null)
                        {
                            m_curAnimState.speed = m_CurrentAnimation.SPEED;
                        }

                        m_curAnimState = null;
                        m_CurrentAnimation = null;
                    }
                }
            }
        }

        private void Update()
        {
            if (!m_IsUpdate || m_ObjChar == null) return;
            //if (!m_ObjChar.IsSkillHurt) return;
            if (m_IsDunFramePlay) return;

            if (Time.time - m_DunFrameBegionTime < m_DelayFrameTime) return; //没到播放时间点
            DelayFrameEffect(); //播放顿帧效果
        }

        public bool Play(int animId, Callback animFinishCallback = null,bool iSpeedMax = false ,bool isSound = true)
        {
            //Debug.LogError("Play Animation :" + animId);
            Tab_Animation newAnimation = GetAnimInfoById(animId);

            if (newAnimation == null)
            {
                return false;
            }
            if (m_animation == null)
            {
                return false;
            }

#if UNITY_ANDROID

            if (IsOtherPlayer && OtherPlayer != null)
            {
                if (OtherPlayer != null)
                {
                    if (OtherPlayer.OtherPlayerMoveTag == string.Empty)
                    {
                        OtherPlayer.OtherPlayerMoveTag = newAnimation.AinmName;
                    }
                    else
                    {
                        if (OtherPlayer.OtherPlayerMoveTag == "Run" && newAnimation.AinmName == "Stand")
                        {
                            newAnimation = null;
                            return true;
                        }
                    }
                }
            }
#endif
            if (animStateCache == null)
            {
                LogModule.WarningLog("can't play animation, animationlogic shoud initstate before use it.");
                return false;
            }
            if (m_curAnimData != null && m_animation.IsPlaying(m_curAnimData.AinmName) && m_curAnimData.IsCanBreak == false)
            {

                return false;
            }
            if (m_animation.IsPlaying(newAnimation.AinmName) &&
                m_curAnimData != null &&
                m_curAnimData.AnimID == animId)
            {
                return false;
            }

            if (animStateCache.ContainsKey(animId))
            {
                m_curAnimData = animStateCache[animId];
            }
            else
            {
                m_curAnimData = GetAnimInfoById(animId);
                animStateCache.Add(animId, m_curAnimData);
            }

            if (m_curAnimData == null)
            {
                return false;
            }

            //如果为空,则尝试加载
            if (null == m_animation[m_curAnimData.AinmName])
            {
                //检查动作名和动作Obj
                if (m_curAnimData.AinmName.Length <= 0)
                {
                    return false;
                }
                //检查脚本
                if (m_animResFilePath.Length <= 0)
                {
                    return false;
                }

                string fullPath = string.Format("{0}/{1}", m_animResFilePath, m_curAnimData.AinmName);
                AnimationClip clip = ResourceManager.LoadResource(fullPath) as AnimationClip;
                //AnimationClip clip = (AnimationClip)ResourceManager.CreateUnityObject(fullPath, strAnim);
                if (null != clip)
                {
					OnLoadAnimation(fullPath, clip,iSpeedMax,isSound);
                }
                else
                {
                    LogModule.DebugLog("animation load fail:" + fullPath + ":::" + m_curAnimData.AinmName + "::" + animId);
                }
            }
            else
            {
				OnLoadAnimation(m_curAnimData.AinmName, m_animation.GetClip(m_curAnimData.AinmName),iSpeedMax,isSound);
            }

            if (null != m_AnimFinishSpecificCallback)
            {
                m_AnimFinishSpecificCallback.Invoke();
            }
            m_AnimFinishSpecificCallback = animFinishCallback;
            return true;
        }

        //有衰减的音效播放，目前其他玩家和NPC的技能音效上.
        void PlaySoundAtPos(Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE ObjType, int nSoundID, Vector3 playingPos)
        {
            if (GameManager.gameManager.SoundManager == null)
            {
                return;
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(nSoundID);
            }
            else
            {
                if (Singleton<ObjManager>.Instance.MainPlayer != null)
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffectAtPos(nSoundID, playingPos, Singleton<ObjManager>.Instance.MainPlayer.Position);
                }
                else
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(nSoundID);
                }
            }
        }

		void OnLoadAnimation(string animPath, AnimationClip curAnimClip,bool iSpeedMax,bool isSound)
        {
            if (null == curAnimClip)
            {
                LogModule.ErrorLog("LoadAnimation Failed, ResName:" + animPath);
                return;
            }

            if (m_animation[m_curAnimData.AinmName] == null)
            {
                //添加
                m_animation.AddClip(curAnimClip, m_curAnimData.AinmName);
            }
            //再次判断是否为空
            if (null == m_animation[m_curAnimData.AinmName])
            {
                LogModule.ErrorLog("animation is null " + animPath);
                return;
            }

            m_CurrentAnimationId = m_curAnimData.AnimID;
            if (m_curAnimData.DelayFrameSpeed > 0)
            {
                m_IsDunFramePlay = false;
                m_DunFrameBegionTime = Time.time;
                m_DelayFrameTime = m_curAnimData.DelayFrameTime;
                m_DelaySpeedTime = m_curAnimData.DelaySpeedTime;
            }
            else
            {
                m_IsDunFramePlay = true;
            }

            //第一次播放循环动作 记录下播放时间
            if (m_curAnimData.WrapMode == 2
                && m_curAnimData.LoopTime > 0
                )
            {
                if (m_curAnimState == null || m_curAnimState.name != m_curAnimData.AinmName)
                {
                    m_fLastLoopTime = Time.time;
                }
            }

            //击飞倒地动作的一个单独处理
            if (IsFlyStartMotionId(m_curAnimData.AnimID))
            {
                if (m_curAnimData.WrapMode == 2)
                {
                    if (m_curAnimState == null || m_curAnimState.name != m_curAnimData.AinmName)
                    {
                        m_fLastLoopTime = Time.time;
                    }
                }
            }
            m_curAnimState = m_animation[m_curAnimData.AinmName];

			if (iSpeedMax == false) 
			{
				m_curAnimState.speed = m_curAnimData.SPEED;//m_curAnimData.SPEED
			} 
			else if (iSpeedMax == true)
			{
				m_curAnimState.speed = m_curAnimData.SPEED * 1000.0f   ;//m_curAnimData.SPEED
			}
         
            m_curAnimState.wrapMode = (WrapMode)m_curAnimData.WrapMode;
            m_curAnimState.layer = m_curAnimData.Layer;
            bool isNotifyFinish = m_curAnimData.IsCallEnd;

            float _animTransitTime = (m_curAnimState.length <= m_curAnimData.TransitTime ? 0 : m_curAnimData.TransitTime);
            if (_animTransitTime <= 0)
            {
                _animTransitTime = 0;
            }

			if (iSpeedMax == false) 
			{
				m_animation.CrossFade(m_curAnimData.AinmName, _animTransitTime, PlayMode.StopAll);
			} 
			else if (iSpeedMax == true)
			{
				m_animation.CrossFade(m_curAnimData.AinmName, 0, PlayMode.StopAll);
			}

            //m_animation.CrossFade(m_curAnimData.AinmName, 0, PlayMode.StopAll);
            if (m_curAnimData.SoundID >= 0 && null != GameManager.gameManager.SoundManager)
            {
                if (m_ObjChar != null)
                {
                    //if (isSound)
                    {
                        PlaySoundAtPos(m_ObjChar.ObjType, m_curAnimData.SoundID, m_ObjChar.Position);
                    }
                  
                }
                else
                {
                    GameManager.gameManager.SoundManager.PlaySoundEffect(m_curAnimData.SoundID);
                }
            }

            if (m_ObjChar != null)
            {
                for (int i = 0; i < m_curAnimData.getStartEffectCount(); i++)
                {
                    int StartEffectId = m_curAnimData.GetStartEffectbyIndex(i);
                    if (StartEffectId != -1)
                    {
                        if (DebugHelper.m_bShowEffect)
                            m_ObjChar.PlayEffect(StartEffectId,null,m_ObjChar.SkillCore.TargetData);
                    }
                }

            }
            if (isNotifyFinish)
            {
                m_NeedCheckEndCallBack.AddFirst(m_curAnimData.AnimID);
            }

        }
		public bool isPlaying()
		{
			



			if (m_animation && m_curAnimData != null  &&  m_animation.IsPlaying (m_curAnimData.AinmName))
				return true;

			return false;
		}
        public void Stop()
        {
            if (m_curAnimData == null)
            {
                return;
            }
            if (m_animation != null)
            {
                //击飞不能被打断
                if (m_curAnimData.AnimID == (int)(CharacterDefine.CharacterAnimId.Knockback_02))
                {
                    return;
                }

				if (m_NeedCheckEndCallBack.Contains(m_curAnimData.AnimID))
                {
                    m_NeedCheckEndCallBack.Remove(m_curAnimData.AnimID);
                }
                //停止特效
                StopAnimEffect();
                //停止寒霜怒雪的音效
                if (m_curAnimData.SoundID == 85)   //sk5hsnx2_xiaoyao
                {
                    GameManager.gameManager.SoundManager.StopSoundEffect(m_curAnimData.SoundID);
                }
                if (m_ObjChar != null)
                {
                    m_ObjChar.OnAnimationStop(m_curAnimData.AnimID);
                }
                //如果是中断循环动作  清除循环信息
                if (m_curAnimData.WrapMode == (int)WrapMode.Loop)
                {
                    m_fLastLoopTime = 0;
                    m_nLoopTimes = 0;
                }
                m_animation.Stop(m_curAnimData.AinmName);
            }
        }

        public WrapMode CurAnimWrapMode
        {
            set
            {
                if (null != m_curAnimState) m_curAnimState.wrapMode = value;
            }
            get
            {
                return ((m_curAnimState == null) ? WrapMode.Default : m_curAnimState.wrapMode);
            }
        }


        /*
        private bool CheckAnimation(Tab_Animation curTabAnimation, CheckAnimationDelegate defFun)
        {
            if (null == m_animation)
            {
                return false;
            }

            //如果为空,则尝试加载
            if (null == m_animation[curTabAnimation.AinmName])
            {
                LoadAnimation(curTabAnimation.AinmName);
            }

            //再次判断是否为空
            if (null == m_animation[curTabAnimation.AinmName])
            {
                return false;
            }

            return true;
        }
        */
        public Tab_Animation GetAnimInfoById(int AnimaId)
        {
            Tab_Animation animInfo = TableManager.GetAnimationByID(AnimaId, 0);
            return animInfo;

        }
        public void FinishAnimEffect(int finishedAnimID)
        {
            if (m_ObjChar == null)
            {
                return;
            }
            Tab_Animation curAnim = TableManager.GetAnimationByID(finishedAnimID, 0);
            if (curAnim == null)
            {
                LogModule.WarningLog("cur animation id is not exit " + finishedAnimID.ToString());
                return;
            }
            for (int i = 0; i < curAnim.getStartEffectCount(); i++)
            {
                int effectId = curAnim.GetStartEffectbyIndex(i);
                if (effectId != -1)
                {
                    if (curAnim.GetIsStartEffectAutoEndbyIndex(i) == false)
                    {
                        m_ObjChar.StopEffect(effectId);
                    }
                }

            }
            if (curAnim.EndEffect >= 0)
            {
                if (DebugHelper.m_bShowEffect)
                    m_ObjChar.PlayEffect(curAnim.EndEffect);
            }
        }

        public void StopAnimEffect()
        {
            if (m_ObjChar == null)
            {
                return;
            }
            if (m_curAnimData == null)
            {
                LogModule.WarningLog("cur animation id is not exit " + m_curAnimData.AnimID.ToString());
                return;
            }
            for (int i = 0; i < m_curAnimData.getStartEffectCount(); i++)
            {
                if (m_curAnimData.AnimID == 24)
                {
                    break;
                }
                int effectId = m_curAnimData.GetStartEffectbyIndex(i);
                if (effectId != -1)
                {
                    m_ObjChar.StopEffect(effectId);
                }
            }
            if (m_curAnimData.EndEffect != -1)
            {
                m_ObjChar.StopEffect(m_curAnimData.EndEffect);
            }
        }

        public bool IsFlyStartMotionId(int nStartId)
        {
            return nStartId == 250;
        }

    }
}

