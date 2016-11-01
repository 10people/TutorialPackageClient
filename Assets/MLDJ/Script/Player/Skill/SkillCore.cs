/********************************************************************************
 *	文件名：	SkillCore.cs
 *	全路径：	\Script\GameManager\SkillCore.cs
 *	创建人：	罗勇
 *	创建时间：2013-11-06
 *
 *	功能说明：客户端技能逻辑核心，负责客户端技能逻辑处理
 *	修改记录：
*********************************************************************************/
using UnityEngine;

using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
using GCGame.Table;
using System.Collections.Generic;
using UnityEngineInternal;
using Module.Log;
namespace Games.SkillModle
{
	public class SkillCore 
	{
        private class BulletData
        {
            public BulletData(int selfID, int targetID)
            {
                _selfID = selfID;
                _targetID = targetID;
            }

            public int _selfID;
            public int _targetID;
        }
        public class SkillTargetData
        {
            public SkillTargetData(int targetId,Vector3 targetPos)
            {
                _targetId = targetId;
                _targetPos = targetPos;
                _hasSet = true;
            }
            public SkillTargetData()
            {
 
            }
            public void Clear()
            {
                _targetId = 0;
                _targetPos = Vector3.zero;
                _hasSet = false;
            }
            public int _targetId=0;
            public Vector3 _targetPos=Vector3.zero;
            public bool _hasSet = false;
        }
        public SkillCore()
        {
        }
		protected int m_nLastSkillId =-1;
		public int LastSkillId
		{
			get { return m_nLastSkillId; }
		}
		protected int m_nLastSendId = -1;
		protected int m_nLastTargetId = -1;
		public int LastTargetId
		{
			get { return m_nLastTargetId; }
		}
		private bool m_bIsUsingSkill = false;
		public bool IsUsingSkill
		{
			get { return m_bIsUsingSkill; }
			set { m_bIsUsingSkill = value; }
		}

	    private float m_fLastUseSkillTime =0.0f;
        public float LastUseSkillTime
        {
            get { return m_fLastUseSkillTime; }
            set { m_fLastUseSkillTime = value; }
        }
//	    private float m_OldCameraScan = -1.0f;
        private Tab_SkillEx m_UsingSkillExInfo = null;//!!!使用前记得判空 缓存下技能信息
        public GCGame.Table.Tab_SkillEx UsingSkillExInfo//!!!使用前记得判空 缓存下技能信息
        {
            get { return m_UsingSkillExInfo; }
            set { m_UsingSkillExInfo = value; }
        }

        private Tab_SkillBase m_UsingSkillBaseInfo = null; //!!!使用前记得判空 缓存下技能信息
        public GCGame.Table.Tab_SkillBase UsingSkillBaseInfo //!!!使用前记得判空 缓存下技能信息
        {
            get { return m_UsingSkillBaseInfo; }
            set { m_UsingSkillBaseInfo = value; }
        }

        private int m_UsingSkillStartAni = GlobeVar.INVALID_ID;
        public int UsingSkillStartAni
        {
            get { return m_UsingSkillStartAni; }
            set { m_UsingSkillStartAni = value; }
        }

        private Obj_Character m_SkillSender = null;//!!!使用前记得判空 缓存下技能发送者信息
        public Games.LogicObj.Obj_Character SkillSender //!!!使用前记得判空 缓存下技能发送者信息
        {
            get { return m_SkillSender; }
            set { m_SkillSender = value; }
        }

        private SkillTargetData m_TargetData = new SkillTargetData();//缓存下技能释放者数据用于特定的特效播放
        public SkillTargetData TargetData
        {
            get { return m_TargetData; }
            set { m_TargetData = value; }
        }



	    public void CheckSkillShouldFinish()
	    {
	        if (m_bIsUsingSkill ==false)
	        {
	            return;
	        }
	        if (m_nLastSkillId ==-1)
	        {
	           return;   
            }
	        if (m_UsingSkillBaseInfo ==null || m_UsingSkillExInfo ==null)
	        {
	            return;
	        }
            //客户端检测技能是否结束
            int _skillContinuTime = m_UsingSkillExInfo.SkillContinueTime; 
	        float _fElapseTime =(Time.time - m_fLastUseSkillTime)*1000.0f;
            //做1s的延迟处理
            if (_fElapseTime-_skillContinuTime>0)
	        {
	            SkillFinsh();
	        }
	    }


        public bool IsUsingCrashSkill()
        {
            if (m_bIsUsingSkill == false)
            {
                return false;
            }
            if (m_nLastSkillId == -1)
            {
                return false;
            }
            if (m_UsingSkillBaseInfo == null || m_UsingSkillExInfo == null)
            {
                return false;
            }

            if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.CrashMove) == 0)
            {
                return false;
            }

            int _skillContinuTime = m_UsingSkillExInfo.SkillContinueTime;
            float _fElapseTime = (Time.time - m_fLastUseSkillTime) * 1000.0f;
            //做1s的延迟处理
            if (_fElapseTime - _skillContinuTime > 0)
            {
               return false;
            }
            return true;
        }
		//释放技能
		public  void UseSkill(int skillId, int senderId, int targetId, string skillname = "")
		{
            
		    if (m_bIsUsingSkill)
		    {
		        BreakCurSkill();
		    }
            m_fLastUseSkillTime = Time.time;
			m_SkillSender = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(senderId);
            if (m_SkillSender == null)
			{
				LogModule.DebugLog("MainPlayer is Null:" + senderId);
				return ;
			}
			m_UsingSkillExInfo = TableManager.GetSkillExByID(skillId,0);
            if (m_UsingSkillExInfo == null)
			{
				LogModule.DebugLog("SkillExinfo is Null: " + skillId);
				return ;
			}
			int BaseSkillId = m_UsingSkillExInfo.BaseId;
			m_UsingSkillBaseInfo= TableManager.GetSkillBaseByID(BaseSkillId,0);
            if (m_UsingSkillBaseInfo == null)
			{
				LogModule.DebugLog("SkillBaseInfo is Null" + BaseSkillId);
				return ;
			}
            if (m_SkillSender.IsMoving)//可以攻击了且在移动 停止移动
			{
                m_SkillSender.StopMove();
			}
            
            //!!!使用的是旋风则 屏蔽旋转
            //if (m_UsingSkillBaseInfo.Id ==(int)SKILLBASEID.XFZBASEID)
            //{
            //    m_SkillSender.EnableMovingRotation(false);
            //}

            if (m_UsingSkillBaseInfo.Id == (int)SKILLBASEID.RIDE_SKILLID)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(244);
            }

            //如果有目标 朝向目标
		    Obj_Character _targetObjCharacter = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(targetId);
		    if (_targetObjCharacter && _targetObjCharacter.ServerID !=m_SkillSender.ServerID)
		    {
                m_SkillSender.FaceTo(_targetObjCharacter.Position);
		    }
            //如果有目标缓存一下目标位置
            TargetData.Clear();
            if (_targetObjCharacter != null)
            {
                TargetData._targetId = targetId;
                TargetData._targetPos = _targetObjCharacter.transform.position;
                TargetData._hasSet = true;
            }
            //开始播放动画
		    PlayAnimation(m_UsingSkillExInfo.SatrtMotionId);
            m_UsingSkillStartAni = m_UsingSkillExInfo.SatrtMotionId;
          
            //子弹播放
		    int nBulletNum = m_UsingSkillExInfo.getBulletEffectIDCount();
		    for (int i = 0; i < nBulletNum; i++)
		    {
		        int _nBulletId = m_UsingSkillExInfo.GetBulletEffectIDbyIndex(i);
                if (_nBulletId!=-1)
                {
                    if (_nBulletId == 93 || _nBulletId == 94 || _nBulletId == 95) //大理子弹 特殊处理下
                    {
                        m_SkillSender.PlayEffect(_nBulletId);  
                    }
                    else
                    {
                        BulletData bulletData = new BulletData(senderId, targetId);
                        m_SkillSender.PlayEffect(_nBulletId, OnLoadBullet, bulletData);
                    }
                }
		    }
            //显示技能名字
            if (m_UsingSkillBaseInfo.IsShowSkillName == 1 && m_SkillSender.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                if (skillname == "")
                {
                    if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                    {
                        m_SkillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, m_UsingSkillBaseInfo.Name);
                    }
                    else if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                    {
                        m_SkillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME_NPC, m_UsingSkillBaseInfo.Name, false);
                    }
                    else
                    {
                        m_SkillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, m_UsingSkillBaseInfo.Name, false);
                    }
                }
                else
                {
                    m_SkillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, skillname, false);
                }
            }
            //主角的一些的 特殊处理
            if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
			{
			    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
			    if (_mainPlayer)
			    {
                     // 使用XP技能，如果有新手指引就 关掉
                    if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.XP) != 0
                        && SkillBarLogic.Instance() 
                        && SkillBarLogic.Instance().NewPlayerGuide_Step == 1)
                    {
                        NewPlayerGuidLogic.CloseWindow();
                    }

                    //当前释放的Xp技能成功了
                    if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.XP) != 0 && SkillBarLogic.Instance() != null)
                    {
                        SkillBarLogic.Instance().m_isUseSkillClick = true;
                        SkillBarLogic.Instance().OnClickXpShowBtn();
                        SkillBarLogic.Instance().TransformCon.TakeEffect();                        
                    }
			        int nSkillIndx = _mainPlayer.GetSkillIndexById(skillId);

                    int nChangeState = _mainPlayer.GetCurrentChangeState();
                    
                    if (nSkillIndx >=0 && nSkillIndx <_mainPlayer.OwnSkillInfo.Length)
			        {
                        //常规技能
                        if (m_UsingSkillBaseInfo.GetChangeModebyIndex(nChangeState) == 0)
                        {
                            Tab_CoolDownTime _coolDownTime = TableManager.GetCoolDownTimeByID(m_UsingSkillExInfo.CDTimeId, 0);
                            //吟唱技不在这里加CD 吟唱技能生效后才走CD 服务器同步过来 
                            if (_coolDownTime != null && m_UsingSkillBaseInfo.UseType != (int)SKILLUSETYPE.YINCHANG)
                            {
                                _mainPlayer.OwnSkillInfo[nSkillIndx].CDTime = _coolDownTime.CDTime;
                            }

                            //非连续技 增加公共CD
                            int nPublicSkillCDId = (int)SKILLDEFINE.PUBLICCDID;
                            Tab_CoolDownTime _publicCDTime = TableManager.GetCoolDownTimeByID(nPublicSkillCDId, 0);
                            if (_publicCDTime != null && m_UsingSkillBaseInfo.HasPublicCd == 1)
                            {
                                _mainPlayer.SkillPublicTime = _publicCDTime.CDTime;
                            }
                        }
                      
			        }

                    //如果是冲撞技能
                    if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.CrashMove) != 0)
                    {
                        Tab_CoolDownTime _coolDownTime = TableManager.GetCoolDownTimeByID(m_UsingSkillExInfo.CDTimeId, 0);
                        _mainPlayer.CrashSkillCDTime = _coolDownTime.CDTime;

                        //非连续技 增加公共CD
                        int nPublicSkillCDId = (int)SKILLDEFINE.PUBLICCDID;
                        Tab_CoolDownTime _publicCDTime = TableManager.GetCoolDownTimeByID(nPublicSkillCDId, 0);
                        if (_publicCDTime != null && m_UsingSkillBaseInfo.HasPublicCd == 1)
                        {
                            _mainPlayer.SkillPublicTime = _publicCDTime.CDTime;
                        }
                    }

                    if ( CanShowSkillProgress(skillId) )
                    {
                        //如果是吟唱技则 显示引导条
                        if (m_UsingSkillBaseInfo.UseType == (int)SKILLUSETYPE.YINCHANG)
                        {
                            //吟唱时间为当前动作的长度
                            float fYinChangTime = m_UsingSkillExInfo.YinChangTime / 1000.0f;//转换成秒
                            //设置持续时间
                            if (SkillProgressLogic.Instance() != null)
                            {
                                SkillProgressLogic.Instance().PlaySkillProgress(SkillProgressLogic.ProgressModel.ORDERMODEL, fYinChangTime);
                            }
                        }
                        else if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.DUTIAO) != 0)
                        {
                            //技能长度为当前引导条的长度
                            float fContiueTime = m_UsingSkillExInfo.SkillContinueTime / 1000.0f;//转换成秒
                            //设置持续时间
                            if (SkillProgressLogic.Instance() != null)
                            {
                                SkillProgressLogic.Instance().PlaySkillProgress(SkillProgressLogic.ProgressModel.REVERSEDMODE, fContiueTime);
                            }
                        }
                    }
                    if (m_SkillSender.Controller != null && m_SkillSender.Controller.CombatFlag)
                    {
                        _mainPlayer.AutoComabat = true;
                    }
                    //add by mawenbin 
                    //移植天龙3D TT15398 死亡复活*复活点自动寻路过程中释放六脉神剑立马被打断
                    //清除自动寻路 加个开关限制
                    if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_SKILLBREAKAUTOMOVE))
                    {
                        if (null != GameManager.gameManager.AutoSearch &&
                                    GameManager.gameManager.AutoSearch.IsAutoSearching)
                        {
                            GameManager.gameManager.AutoSearch.Stop();
                        }
                    }           
			    }
			}
            //npc和主角自身放技能 可以自带震屏效果
		    if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
		    {
                //摄像机的 操作
                CameraOpt();
		    }
            //测试用代码
            if (m_UsingSkillExInfo.HasRangeWarning==1 && m_SkillSender.ObjEffectController != null)
		    {
		        m_SkillSender.ObjEffectController.PlaySkillWarningEffect(skillId);
		    }
           
			m_nLastSkillId =skillId;
			m_nLastSendId = senderId;
			m_nLastTargetId = targetId;
			m_bIsUsingSkill = true;
		}

        bool CanShowSkillProgress(int skillId)
        {
            if (skillId == GlobeVar.MARRY_SKILL_1 ||
                 skillId == GlobeVar.MARRY_SKILL_2 ||
                 skillId == GlobeVar.MARRY_SKILL_3)
            {
                return false;
            }
            return true;
        }

        void OnLoadBullet(GameObject bulletEffect, object param)
        {
            BulletData curData = param as BulletData;
            if (bulletEffect != null && curData != null)
            {
                Bullet _bullet = bulletEffect.GetComponent<Bullet>();
                if (_bullet != null)
                {
                    _bullet.InitData(curData._selfID, curData._targetID);
                }
            }
        }
		void PlayAnimation(int AnimationId,bool isSound = true)
		{
            if (m_SkillSender != null && m_SkillSender.AnimLogic != null && m_SkillSender.Objanimation !=null)
			{
                //保证技能动作能顺利播放
                if (m_SkillSender.ObjType != Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC && m_SkillSender.Objanimation.isPlaying)
			    {
                    m_SkillSender.AnimLogic.Stop();
			    }

                //NPC有受击动作打断
                if(m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC
                    && m_SkillSender.Objanimation != null
                    && m_SkillSender.Objanimation.isPlaying
                    && m_SkillSender.AnimLogic != null
                    && m_SkillSender.AnimLogic.CurAnimData != null
                    && m_SkillSender.AnimLogic.CurAnimData.AnimID == (int)CharacterDefine.CharacterAnimId.Hit)
                {
                    m_SkillSender.AnimLogic.Stop();
                }

                //其他玩家放陷阱技能不播发动作
                //if (m_UsingSkillBaseInfo !=null &&
                //    m_UsingSkillBaseInfo.Id ==(int)SKILLBASEID.HDWLID &&
                //    m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                //{
                //   return;
                //}

				m_SkillSender.AnimLogic.Play(AnimationId);
				/*
                if (m_SkillSender != null && m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                    m_SkillSender.AnimLogic.Play(AnimationId, null, false, false);
                else
                    m_SkillSender.AnimLogic.Play(AnimationId, null, false, isSound); */
			}
		}

		public void BreakCurSkill()
		{
            //打断当前技能动作
            if (m_nLastSkillId == -1 || m_bIsUsingSkill ==false)
            {
                return;
            }
		    if (m_UsingSkillBaseInfo ==null || m_UsingSkillExInfo ==null || m_SkillSender ==null)
		    {
		        return;
		    }

            if (m_SkillSender.AnimLogic != null)
		    {
                if (m_SkillSender.AnimLogic.CurAnimData != null)
                {
                    Tab_Animation _CurAnimInfo = TableManager.GetAnimationByID(m_SkillSender.AnimLogic.CurAnimData.AnimID, 0);
                    if (_CurAnimInfo != null)
                    {
                        //技能被打断了 停止当前技能动作的音效
                        if (_CurAnimInfo.SoundID >= 0 && _CurAnimInfo.SoundBreakKeep <= 0 && null != GameManager.gameManager.SoundManager)
                        {
                            GameManager.gameManager.SoundManager.StopSoundEffect(_CurAnimInfo.SoundID);
                        }
                    }
                    Tab_Animation _StartAnimInfo = TableManager.GetAnimationByID(m_UsingSkillExInfo.SatrtMotionId, 0);
                    if (_StartAnimInfo != null)
                    {
                        //技能被打断了 停止开始技能动作的音效
                        if (_StartAnimInfo.SoundID >= 0 && _CurAnimInfo.SoundBreakKeep <= 0 && null != GameManager.gameManager.SoundManager)
                        {
                            GameManager.gameManager.SoundManager.StopSoundEffect(_StartAnimInfo.SoundID);
                        }
                    }
                }
                m_SkillSender.AnimLogic.Stop();
		    }

            //打断震屏
            if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
		    {
                //如果 该技能还有震屏且还在震屏 则停止震屏
                if (m_UsingSkillExInfo.CameraRockId != -1)
                {
                    //CameraController camController = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<CameraController>();
                    //if (camController != null && camController.IsHaveRockInfoById(m_UsingSkillExInfo.CameraRockId))
                    //{
                    //    camController.CleanUpRockInfoById(m_UsingSkillExInfo.CameraRockId);
                    //}
                    if (CameraManager.Instance.IsRocking(m_UsingSkillExInfo.CameraRockId))
                    {
                        CameraManager.Instance.StopRock(m_UsingSkillExInfo.CameraRockId);
                    }
                }
                //如果是吟唱技能 则打断读条
                if (m_UsingSkillBaseInfo.UseType == (int)SKILLUSETYPE.YINCHANG)
                {
                    if (SkillProgressLogic.Instance() != null)
                    {
                        SkillProgressLogic.Instance().CloseWindow();
                    }
                }
                //读条技能 打断读条
                if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.DUTIAO) != 0)
		        {
                    if (SkillProgressLogic.Instance() != null)
                    {
                        SkillProgressLogic.Instance().CloseWindow();
                    }
		        }
		    }
            //打断全屏特效
            if (m_UsingSkillExInfo.SceneEffectId != -1)
            {
                if (BackCamerControll.Instance() != null && BackCamerControll.Instance().SceneEffecLogic!=null)
                {
                    BackCamerControll.Instance().SceneEffecLogic.StopEffect(m_UsingSkillExInfo.SceneEffectId);
                }
            }
            //打断播放的子弹
            int nBulletNum = m_UsingSkillExInfo.getBulletEffectIDCount();
            for (int i = 0; i < nBulletNum; i++)
            {
                int _nBulletId = m_UsingSkillExInfo.GetBulletEffectIDbyIndex(i);
                if (_nBulletId != -1 && m_SkillSender.ObjEffectController !=null)
                {
                    m_SkillSender.ObjEffectController.StopEffect(_nBulletId);
                }
            }
            SkillFinsh();
		}

	    public void SkillFinsh()
	    {
            if (m_nLastSkillId == -1 || m_bIsUsingSkill == false)
            {
                return;
            }
            //清除数据
            m_bIsUsingSkill = false;
            m_fLastUseSkillTime = 0;
            m_nLastSkillId = -1;
	        if (m_UsingSkillBaseInfo ==null || m_UsingSkillExInfo ==null || m_SkillSender ==null)
	        {
	            return;
	        }

            m_SkillSender.EnableMovingRotation(true);

            if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer player = m_SkillSender as Obj_OtherPlayer;
                if (null != player)
                    player.UpdateVisualAfterSkill();

                if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.CrashMove) != 0)
                {
                    Obj_MainPlayer _mainPlayer = (Obj_MainPlayer)player;
                    _mainPlayer.IsFirstUseCrash = false;
                }
            }

            ////XP 阳关三叠 放完 恢复之前的视角
            //if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.XP) != 0 ||
            //     m_UsingSkillBaseInfo.Id == (int)SKILLBASEID.YGSDID)
            //{
            //    CameraController camController = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<CameraController>();
            //    if (camController != null)
            //    {
            //        if (m_OldCameraScan !=-1)
            //        {
            //            camController.m_Scale = m_OldCameraScan;
            //        }
            //    }
            //}
            for (int i = 0; i < m_UsingSkillBaseInfo.getIsNeedStopEffectIdCount(); i++)
            {
                int nIsNeedStopEffectId = m_UsingSkillBaseInfo.GetIsNeedStopEffectIdbyIndex(i);
                //如果需要在技能结束的时候 停止对应的特效 则停止
                if (nIsNeedStopEffectId != -1)
                {
                    m_SkillSender.StopEffect(nIsNeedStopEffectId);
                } 
	        }

            if (m_SkillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
            {
                Obj_MainPlayer player = m_SkillSender as Obj_MainPlayer;
                if (null != player)
                {
                    player.SyncPosToServer(true);
                }
                if ((m_UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.XP) != 0 && SkillBarLogic.Instance() != null)
                {
                    //SkillBarLogic.Instance().TransformCon.End();
                }
              
                if (SkillBarLogic.Instance() != null)
                {
                    SkillBarLogic.Instance().SetAttackBarCanUseNext(true);
                }
            }

            //清除数据
	        m_UsingSkillBaseInfo = null;
	        m_UsingSkillExInfo = null;
	        m_SkillSender = null;

           
	    }
		//控制摄像头 createInstance
		void CameraOpt()
		{
            if (m_UsingSkillExInfo ==null || m_UsingSkillExInfo ==null)
		    {
		        return;
		    }
            //震屏
            if (m_UsingSkillExInfo.CameraRockId != -1)
		    {
		        int nRandNum = Random.Range(0, 100);
                if (m_UsingSkillExInfo.CameraRockRate >= nRandNum)
		        {
                    //CameraController camController = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<CameraController>();
                    //if ( camController!=null)
                    //{
                    //    camController.InitCameraRock(m_UsingSkillExInfo.CameraRockId);
                    //}
                    CameraManager.Instance.StartRock(m_UsingSkillExInfo.CameraRockId);
		        }
		    }
            //是否需要播放全屏特效
            if (m_UsingSkillExInfo.SceneEffectId != -1)
            {
                if (BackCamerControll.Instance()!=null)
                {
                    BackCamerControll.Instance().PlaySceneEffect(m_UsingSkillExInfo.SceneEffectId);
                }
            }
            ////XP技能拉高摄像机视角
            //if ((m_UsingSkillBaseInfo.SkillClass&(int)SKILLCLASS.XP)!=0 ||
            //    m_UsingSkillBaseInfo.Id ==(int)SKILLBASEID.YGSDID) //阳关三叠 也做这个处理
            //{
            //    CameraController camController = Singleton<ObjManager>.GetInstance().MainPlayer.GetComponent<CameraController>();
            //    if (camController != null)
            //    {
            //        m_OldCameraScan = camController.m_Scale;
            //        camController.m_Scale =1.0f;
            //    }
            //}
		}

        //显示技能名字
        public static void ShowSkillName(int skillId, int senderId, string skillName = "")
        {
            Obj_Character skillSender = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(senderId);
            if (skillSender == null)
            {
                LogModule.DebugLog("MainPlayer is Null:" + senderId);
                return;
            }
            Tab_SkillEx skillExInfo = TableManager.GetSkillExByID(skillId, 0);
            if (skillExInfo == null)
            {
                LogModule.DebugLog("SkillExinfo is Null: " + skillId);
                return;
            }
            int BaseSkillId = skillExInfo.BaseId;
            Tab_SkillBase skillBase = TableManager.GetSkillBaseByID(BaseSkillId, 0);
            if (skillBase == null)
            {
                LogModule.DebugLog("SkillBaseInfo is Null" + BaseSkillId);
                return;
            }

            //显示技能名字
            if (skillName == "")
            {
                if ((skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) != 0)
                {
                    skillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, skillBase.Name, false);
                }
                else
                {
                    if (skillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                        skillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER )
                    {
                        skillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, skillBase.Name);
                    }
                    else if (skillSender.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                    {
                        skillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME_NPC, skillBase.Name, false);
                    }
                    else
                    {
                        skillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, skillBase.Name, false);
                    }
                }
            }
            else
            {
                skillSender.ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME, skillName, false);
            }
        }
	}
}
