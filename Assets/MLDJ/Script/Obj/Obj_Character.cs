/********************************************************************************
 *	文件名：	Obj_Character.cs
 *	全路径：	\Script\Obj\Obj_Character.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：游戏逻辑Obj_Character类
 *	修改记录：
 *	李嘉 2014-02-19 将原来的obj基类上移作为有动作行为的obj_character，下层添加基类obj
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.Events;
using Games.AI_Logic;
using Games.Animation_Modle;
using Games.SkillModle;
using GCGame.Table;
using GCGame;
namespace Games.LogicObj
{
    public partial class Obj_Character : Obj
    {

        public static List<int> s_hasPlayedBornEffectObjIdList = new List<int>();
        /// <summary>
        /// NPC 特效管理。暂时先这么加着，后面应该会有统一的Shader管理类
        /// </summary>
        public UpdateEdgeGlow NpcEdgeGlow;

        /// <summary>
        /// 
        /// </summary>
        public bool IsSkillHurt = false;

        /// <summary>
        /// 是否点击地面
        /// </summary>
        public bool IsHitPoint = false;

        //飞行动作数据信息
        public class FlyStateData
        {
            public float fRemainTime;       //动作总持续时间
            public int nStartAnimationId; //起始动作ID
            public float fInitTime;       //为了精确记录下初始化该结构的时间
            public float fStartAnimationTime;

            public void CleanUp()
            {
                fRemainTime = -1;
                nStartAnimationId = -1;
                fInitTime = -1;
                fStartAnimationTime = -1;
            }

            public FlyStateData(float fRemainTime, int nStartAnimationId, float fInitTime, float fStartAnimationTime = -1)
            {
                this.fRemainTime = fRemainTime;
                this.nStartAnimationId = nStartAnimationId;
                this.fInitTime = fInitTime;
                this.fStartAnimationTime = fStartAnimationTime;
            }

            public void SetRemainTime(float fTime)
            {
                fRemainTime = fTime;
            }

            public void SetNstartAnimationTime(float fTime)
            {
                fStartAnimationTime = fTime;
            }

            public bool IsNotNull()
            {
                return (fRemainTime != -1 && nStartAnimationId != -1 && fInitTime > 0);
            }
        }

        private FlyStateData flyStateData;
        public FlyStateData _FlyStateData
        {
            get { return flyStateData; }
            set { flyStateData = value; }
        }

        #region 构造函数
        public Obj_Character()
        {
            m_ObjType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_CHARACTER;
            m_MoveOverEvent = new GameEvent();
            m_BaseAttr = new BaseAttr();
            m_CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_INVAILD;

            m_SkillCore = new SkillCore();
            m_MultiShowDamageInfo = new List<MultiShowDamageBoard>();

            m_BindParent = -1;
            m_BindChildren = new List<int>();
        }

        #endregion

        #region BindData
        private int m_BindParent;
        //更新父节点的绑定状态
        public int BindParent
        {
            get { return m_BindParent; }
            set
            {
                int oldId = m_BindParent;
                m_BindParent = value;
                OnBindParentChange(oldId, value);
            }
        }
        private List<int> m_BindChildren;
        public List<int> BindChildren
        {
            get { return m_BindChildren; }
        }
        public int GetBindChildIndex(int id)
        {
            for (int n = 0; n < m_BindChildren.Count; ++n)
            {
                if (m_BindChildren[n] == id)
                {
                    return n;
                }
            }
            return -1;
        }
        //用于在装载模型之后的一次刷新
        public void UpdateAllBind()
        {
            OnBindParentChange(-1, m_BindParent);
            for (int nIndex = 0; nIndex < GlobeVar.BIND_CHILDREN_MAX && nIndex < m_BindChildren.Count; ++nIndex)
            {
                OnBindChildChange(-1, m_BindChildren[nIndex]);
            }
        }
        //更新子节点绑定状态
        public void UpdateBindChildren(List<int> data)
        {
            for (int nIndex = 0; nIndex < GlobeVar.BIND_CHILDREN_MAX; ++nIndex)
            {
                //只取能取到的范围，其他的给-1
                int newid = -1;
                if (nIndex < data.Count)
                {
                    newid = data[nIndex];
                }
                //在已有范围之内，更新数值
                if (nIndex < m_BindChildren.Count)
                {
                    int oldid = m_BindChildren[nIndex];
                    m_BindChildren[nIndex] = newid;
                    OnBindChildChange(oldid, newid);
                }
                //在已有范围之外，如果非-1说明有新增
                else if (newid >= 0)
                {
                    m_BindChildren.Add(newid);
                    OnBindChildChange(-1, newid);
                }
            }
        }
        //绑定父节点的变化响应
        public virtual void OnBindParentChange(int oldID, int newID)
        {
            if (oldID == newID)
            {
                return;
            }
            //绑定(兼容已有旧父节点）
            if (newID >= 0)
            {
                //如果父节点已经刷出来了就绑定上，如果没刷出来，等父节点来绑定自己。
                Obj_Character objParent = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(newID);
                if (null != objParent)
                {
                    objParent.OnBindOpt(this);
                }
            }
            //解绑
            if (oldID >= 0 && newID < 0)
            {
                if (gameObject.transform.parent != null)
                {
                    OnUnBindOpt(gameObject.transform.parent.transform.position);
                }
            }
        }
        //绑定子节点的变化响应
        public virtual void OnBindChildChange(int oldID, int newID)
        {
            if (oldID == newID)
            {
                return;
            }
            //让子节点绑定（兼容子节点已有父节点的情况）
            if (newID >= 0)
            {
                //如果子节点已经刷出来了就帮上，如果没刷出来，等子节点自己刷出来之后绑定上
                Obj_Character objChild = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(newID);
                if (null != objChild)
                {
                    OnBindOpt(objChild);
                }
            }
            //解除子节点的绑定
            if (oldID >= 0 && newID < 0)
            {
                Obj_Character objChild = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(oldID);
                if (null != objChild)
                {
                    objChild.OnUnBindOpt(gameObject.transform.position);
                }
            }
        }
        //父节点：绑定子节点的操作内容
        public virtual void OnBindOpt(Obj_Character obj)
        {
            if (obj != null)
            {
                // 如果是玩家 并且处于跟随状态 那就 别啦
                if (obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER
                    || obj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER)
                {
                    Obj_OtherPlayer otherPlayer = obj as Obj_OtherPlayer;
                    if (otherPlayer && otherPlayer.IsInTeamFollow == true)
                    {
                        // 别绑定了
                        return;
                    }
                }

                obj.gameObject.transform.parent = gameObject.transform;
                obj.gameObject.transform.localPosition = Vector3.zero;
                obj.NavAgent.enabled = false;
                obj.SetVisible(false);
            }
        }
        //子节点：与父节点解绑的操作内容
        public virtual void OnUnBindOpt(Vector3 parentPos)
        {
            SetVisible(true);
            gameObject.transform.parent = null;
            gameObject.transform.position = parentPos;
            NavAgent.enabled = true;
        }
        //初始化
        public void InitBindFromData(Obj_Init_Data data)
        {
            BindParent = data.m_BindParent;
            UpdateBindChildren(data.m_BindChildren);
        }
        #endregion
        #region Mono脚本接口
        #endregion

        #region 技能
        protected SkillCore m_SkillCore = null;
        public Games.SkillModle.SkillCore SkillCore
        {
            get { return m_SkillCore; }
        }

        protected int m_curUseSkillId = -1;
        public int CurUseSkillId
        {
            get { return m_curUseSkillId; }
            set { m_curUseSkillId = value; }
        }

        //初始化Obj逻辑数据
        public virtual bool Init(Obj_Init_Data initData)
        {
            if (null == m_ObjTransform)
            {
                m_ObjTransform = transform;
            }

            InitBindFromData(initData);
            return true;
        }
        #endregion

        #region 重生
        //////////////////////////////////////////////////////////////////////////
        //NPC重生相关处理
        //////////////////////////////////////////////////////////////////////////
        //Obj创建时候如果是死亡状态时候调用
        public virtual bool OnCorpse()
        {
            BaseAttr.Die = true;
            //切换到死亡状态
            if (null != m_AnimLogic)
            {
                m_AnimLogic.Stop();
            }

            CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_CORPSE;
            return true;
        }
        //Obj死亡时候调用
        public virtual bool OnDie()
        {
            if (IsDie())
            {
                return false;
            }
            BaseAttr.Die = true;
            EndLightSkillMove();
            CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_DEATH;
            StopMove();
            return true;
        }
        //Obj复活时调用
        public virtual bool OnRelife()
        {
            BaseAttr.Die = false;
            if (null != m_AnimLogic)
            {
                m_AnimLogic.Stop();
            }
            CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
            return true;
        }
        public bool IsDie()
        {
            return BaseAttr.Die;
        }
        private bool m_isAutoLife = false;      //是否自动重生
        public bool AutoLife
        {
            get { return m_isAutoLife; }
            set { m_isAutoLife = value; }
        }
        private short m_nAutoLifeTime;  //自动重生时间
        public short AutoLifeTime
        {
            get { return m_nAutoLifeTime; }
            set { m_nAutoLifeTime = value; }
        }
        #endregion


        #region UI及名字版
        //名字板相关
        protected GameObject m_HeadInfoBoard;        // 头顶信息板总节点
        public UnityEngine.GameObject HeadInfoBoard
        {
            get { return m_HeadInfoBoard; }

        }
        protected UILabel m_NameBoard;              // 名字板 所有obj共有

        // 名字板list中的索引
        protected int m_NameBoardIndex;
        public int NameBoardIndex
        {
            get { return m_NameBoardIndex; }
            set { m_NameBoardIndex = value; }
        }

        // 头顶信息板高度调整
        protected float m_DeltaHeight;
        public float DeltaHeight
        {
            get { return m_DeltaHeight; }
            set { m_DeltaHeight = value; }
        }

        public void ShowNameBoard()
        {
            if (null == m_NameBoard)
            {
                return;
            }

            if (PlayerPreferenceData.SystemNameBoard == 0)
            {
                CloseNameBoard();
            }
            else
            {
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                {
                    Obj_OtherPlayer player = this as Obj_OtherPlayer;
                    if (null != player && null != player.m_playerHeadInfo)
                    {
                        player.m_playerHeadInfo.ShowOriginalHeadInfo(true);
                    }
                    SetNameBoardColor();
                    m_NameBoard.text = BaseAttr.RoleName;
                }
                else if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
                {
                    m_NameBoard.gameObject.SetActive(true);
                    SetNameBoardColor();
                    m_NameBoard.text = BaseAttr.RoleName;
                }
            }
            // 更新名字板高度的操作移到billboard脚本的update中执行
        }
        public void CloseNameBoard()
        {
            if (null == m_NameBoard)
            {
                return;
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer player = this as Obj_OtherPlayer;
                if (null != player && null != player.m_playerHeadInfo)
                {
                    player.m_playerHeadInfo.ShowOriginalHeadInfo(false);
                }
            }
            else if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
            {
                m_NameBoard.gameObject.SetActive(false);
            }
        }
        public virtual void SetNameBoardColor()
        {
            if (m_NameBoard)
            {
                m_NameBoard.color = GetNameBoardColor();
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    if (TargetFrameLogic.Instance() != null)
                    {
                        Obj_OtherPlayer player = this as Obj_OtherPlayer;
                        if (player != null && player.GUID == TargetFrameLogic.Instance().TargetGuid)
                        {
                            TargetFrameLogic.Instance().ChangeTargetNameColor(m_NameBoard.color);
                        }
                    }
                }
            }
        }

        public virtual Color GetNameBoardColor()
        {
            return GCGame.Utils.GetColorByString("FFFFFF");
        }
        List<MultiShowDamageBoard> m_MultiShowDamageInfo;
        public List<MultiShowDamageBoard> MultiShowDamageInfo
        {
            get { return m_MultiShowDamageInfo; }
            set { m_MultiShowDamageInfo = value; }
        }
        public void UpdateShowMultiShowDamageBoard()
        {
            if (IsDie())
            {
                m_MultiShowDamageInfo.Clear();
                return;
            }
            if (m_MultiShowDamageInfo.Count > 0)
            {
                List<MultiShowDamageBoard> _NeedRemoveInfo = new List<MultiShowDamageBoard>();
                MultiShowDamageBoard _TmpInfo = new MultiShowDamageBoard();
                for (int i = 0; i < m_MultiShowDamageInfo.Count; i++)
                {
                    if (m_MultiShowDamageInfo[i].ShowTimes > 0)
                    {
                        float fPassTime = Time.time - m_MultiShowDamageInfo[i].LastShowTime;
                        if (fPassTime - m_MultiShowDamageInfo[i].ShowInter >= 0)
                        {
                            ShowDamageBoard(m_MultiShowDamageInfo[i].DamageType, m_MultiShowDamageInfo[i].ShowValue);
                            _TmpInfo = m_MultiShowDamageInfo[i];
                            _TmpInfo.ShowTimes = m_MultiShowDamageInfo[i].ShowTimes - 1;
                            _TmpInfo.LastShowTime = Time.time;
                            m_MultiShowDamageInfo[i] = _TmpInfo;

                            //NPC单独受击动作处理
                            OnAnimationIsHit();
                            if (this.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
                            {
                                if (NpcEdgeGlow != null)
                                {
                                    Obj_NPC objNPC = this as Obj_NPC;
                                    if (objNPC.NpcType == GameDefine_Globe.NPC_TYPE.BOSS)
                                    {
                                        if (objNPC.NpcEdgeGlow != null)
                                        {
                                            //objNPC.NpcEdgeGlow.UpdateOutLine();
                                            objNPC.NpcEdgeGlow.UpdateRimPower();
                                        }
                                    }
                                    else
                                    {
                                        NpcEdgeGlow.UpdateRimPow_NPC();
                                    }
                                }


                            }
                        }
                    }
                    else
                    {
                        _NeedRemoveInfo.Add(m_MultiShowDamageInfo[i]);
                    }
                }
                //移除掉失效的
                for (int i = 0; i < _NeedRemoveInfo.Count; ++i)
                {
                    m_MultiShowDamageInfo.Remove(_NeedRemoveInfo[i]);
                }
            }
        }
        public virtual void ShowDamageBoard(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE eType, int nValue = 0)
        {
            // Demo 新手战斗 的 特殊处理
            if (GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                nValue = (int)(nValue * 31.415926f);
            }

            if (eType != Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME &&
                eType != Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME_NPC)
            {
                string strValue = "";
                if (eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_ATTACK_MISS ||
                    eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_MISS ||
                    eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_MISS_PARTNER)
                {
                    strValue = StrDictionary.GetClientDictionaryString("#{10006}");
                }
                else if (eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_ATTACK_IGNORE ||
                    eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_IGNORE ||
                    eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_IGNORE_PARTNER)
                {
                    strValue = StrDictionary.GetClientDictionaryString("#{10007}");
                }
                else
                {
                    if (eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL ||
                        eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_ATTACK_CRITICAL_PARTNER ||
                         eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_ATTACK_CRITICAL)
                    {
                        strValue = nValue.ToString();
                    }
                    else if (eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_HP_DOWN ||
                        eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_HPDOWN_PARTNER ||
                        eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.TARGET_HPDOWN_PLAYER ||
                        eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_MP_DOWN ||
                        eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_XP_DOWN)
                    {
                        strValue = nValue.ToString();
                    }
                    else if (eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_HP_UP ||
                               eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_MP_UP ||
                               eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.PLAYER_XP_UP)
                    {
                        strValue = string.Format("+{0}", nValue);
                    }
                }
                if (null != GameManager.gameManager.ActiveScene.DamageBoardManager)
                {
                    GameManager.gameManager.ActiveScene.DamageBoardManager.ShowDamageBoard((int)eType, strValue, m_ObjTransform.position);
                }
            }
        }
        public virtual void ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE eType, string strValue, bool isProfessionSkill = true)
        {
            if ((eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME || eType == Games.GlobeDefine.GameDefine_Globe.DAMAGEBOARD_TYPE.SKILL_NAME_NPC)
                && strValue != "")
            {
                if (null != GameManager.gameManager.ActiveScene.DamageBoardManager)
                {
                    GameManager.gameManager.ActiveScene.DamageBoardManager.ShowDamageBoard((int)eType, strValue, m_ObjTransform.position, isProfessionSkill);
                }
            }
        }

        //选择目标后更新UI信息
        public void UpdateTargetFrame(Obj_Character targetObj)
        {
            if (null == TargetFrameLogic.Instance() || null == GameManager.gameManager.ActiveScene)
            {
                return;
            }

            if (null == targetObj)
            {
                TargetFrameLogic.Instance().CancelTarget();

                GameManager.gameManager.ActiveScene.DeactiveSelectCircle();
                return;
            }

            //更新头像信息
            TargetFrameLogic.Instance().ChangeTarget(targetObj);
            GameManager.gameManager.ActiveScene.ActiveSelectCircle(targetObj.gameObject);
        }
        #endregion

        #region AI
        protected bool m_bCanMove = false;
        private int m_nReputation = 0;
        public int ReputationID
        {
            get { return m_nReputation; }
            set { m_nReputation = value; }
        }

        private AIController m_aiController = null;
        public AIController Controller
        {
            get { return m_aiController; }
            set { m_aiController = value; }
        }

        /// <summary>
        /// 自动寻路组件缓存
        /// </summary>
        /// <value>The auto move component.</value>
        public AutoMove AutoMoveComponent
        {
            get
            {
                if (m_autoMoveCache == null)
                {
                    m_autoMoveCache = gameObject.GetComponent<AutoMove>();
                }
                return m_autoMoveCache;
            }
        }
        private AutoMove m_autoMoveCache;


        public void InitAI()
        {
            m_aiController = this.gameObject.GetComponent<AIController>();
        }
        //战斗相关
        public virtual void OnEnterCombat(Obj_Character Attacker)
        {
        }
        public virtual void OnLevelCombat(Obj_Character Attacker)
        {
        }

        public Vector3 DefaultPosition()
        {
            //单机点以后统一在场景中增加叫做OffLine节点，不用每一个场景写一个else if了
            GameObject offLinePoint = GameObject.Find("OffLine");
            if (null != offLinePoint)
            {
                return offLinePoint.transform.position;
            }

            return new Vector3(0.0f, 0.0f, 0.0f);
        }
        #endregion



        #region 纸娃娃 重载模型

        public bool IsChangingMainPlayer = false; //主角是否处在变身状态
        public bool IsChangedMainPlayer = false;//玩家是否变身状态

        public void ReloadPlayerModelVisual(int nModelVisualID = GlobeVar.INVALID_ID,
                                            int nProfession = GlobeVar.INVALID_ID)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nModelVisualID = objPlayer.ModelVisualID;
            }

            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(nModelVisualID, 0);
            if (tabItemVisual == null)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return;
                }
            }

            int nCharModelID = GetCharModelID(tabItemVisual, nProfession);

            Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
            if (tabCharModel == null)
            {
                return;
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                if (false == Singleton<ObjManager>.GetInstance().ReloadModel(gameObject,
                    tabCharModel.ResPath,
                    Singleton<ObjManager>.GetInstance().AsycReloadModelOver,
                    tabCharModel.AnimPath,
                    objPlayer.MountObj))
                {
                    return;
                }
            }
            else
            {
                if (false == Singleton<ObjManager>.GetInstance().ReloadModel(gameObject,
                    tabCharModel.ResPath,
                    Singleton<ObjManager>.GetInstance().AsycReloadModelOver,
                    tabCharModel.AnimPath,
                    null))
                {
                    return;
                }
            }
        }

        public void RealoadPlayerWeaponVisual(int nWeaponDataID = GlobeVar.INVALID_ID,
                                              int nProfession = GlobeVar.INVALID_ID,
                                              int nWeaponEffectGem = GlobeVar.INVALID_ID,
                                              int nCurChangeState = 0)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nWeaponDataID = objPlayer.CurWeaponDataID;
                nCurChangeState = objPlayer.CurChangeState;
            }

            bool defaultVisual = false;
            Tab_ItemVisual tabItemVisual = null;

            Tab_EquipAttr tabEquipAttr = TableManager.GetEquipAttrByID(nWeaponDataID, 0);
            if (tabEquipAttr == null)
            {
                defaultVisual = true;
            }
            else
            {
                tabItemVisual = TableManager.GetItemVisualByID(tabEquipAttr.ModelId, 0);
                if (tabItemVisual == null)
                {
                    defaultVisual = true;
                }
            }

            if (defaultVisual)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return;
                }
            }

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nProfession = objPlayer.Profession;
            }
            int nWeaponModelID = GetWeaponModelID(tabItemVisual, nProfession);

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                if (objPlayer.MountID != GlobeVar.INVALID_ID)
                {
                    objPlayer.ClearRideMountWeapon();
                }
                else
                {
                    objPlayer.ClearUnMountWeapon();
                }

                //只有二变变武器
                if (//nCurChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1|| 
                    nCurChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2)
                {
                    int nStateWeaponId = GetWeaponModelIDByCurState(nCurChangeState, nProfession);
                    if (nStateWeaponId != GlobeVar.INVALID_ID)
                    {
                        nWeaponModelID = nStateWeaponId;
                    }
                }
            }

            Tab_WeaponModel tabWeaponModel = TableManager.GetWeaponModelByID(nWeaponModelID, 0);
            if (tabWeaponModel == null)
            {
                return;
            }
            if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN ||
                nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                string resWeaponLeft = tabWeaponModel.ResPath + "_L";
                string resWeaponRight = tabWeaponModel.ResPath + "_R";

                List<object> param1 = new List<object>();
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                {
                    Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                    param1.Add(objPlayer.GetWeaponPointPath_PutOn("left", tabWeaponModel));
                    param1.Add(objPlayer.WeaponEffectGem);
                    param1.Add(objPlayer.MountObj);
                    param1.Add(nProfession);
                    param1.Add(nWeaponDataID);
                    param1.Add(new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ));
                    param1.Add(tabWeaponModel);
                }
                else
                {
                    param1.Add("Weapon_L");
                    param1.Add(nWeaponEffectGem);
                    param1.Add(null);
                    param1.Add(nProfession);
                    param1.Add(nWeaponDataID);
                    param1.Add(Vector3.zero);
                    param1.Add(tabWeaponModel);
                }
                if (false == Singleton<ObjManager>.GetInstance().ReloadWeapon(gameObject,
                    resWeaponLeft,
                    Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver,
                    param1))
                {
                    return;
                }

                List<object> param2 = new List<object>();
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                {
                    Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                    param2.Add(objPlayer.GetWeaponPointPath_PutOn("right", tabWeaponModel));
                    param2.Add(objPlayer.WeaponEffectGem);
                    param2.Add(objPlayer.MountObj);
                    param2.Add(nProfession);
                    param2.Add(nWeaponDataID);
                    param2.Add(new Vector3(tabWeaponModel.RightRotX, tabWeaponModel.RightRotY, tabWeaponModel.RightRotZ));
                    param2.Add(tabWeaponModel);

                }
                else
                {
                    param2.Add("Weapon_R");
                    param2.Add(nWeaponEffectGem);
                    param2.Add(null);
                    param2.Add(nProfession);
                    param2.Add(nWeaponDataID);
                    param2.Add(Vector3.zero);
                    param2.Add(tabWeaponModel);
                }
                if (false == Singleton<ObjManager>.GetInstance().ReloadWeapon(gameObject,
                resWeaponRight,
                Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver,
                param2))
                {
                    return;
                }
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                string resWeaponRight = tabWeaponModel.ResPath + "_R";
                List<object> param = new List<object>();
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                {
                    Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                    objPlayer.LWeaponObject = null;

                    param.Add(objPlayer.GetWeaponPointPath_PutOn("right", tabWeaponModel));
                    param.Add(objPlayer.WeaponEffectGem);
                    param.Add(objPlayer.MountObj);
                    param.Add(nProfession);
                    param.Add(nWeaponDataID);
                    param.Add(new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ));
                    param.Add(tabWeaponModel);
                }
                else
                {
                    param.Add("Weapon_L");
                    param.Add(nWeaponEffectGem);
                    param.Add(null);
                    param.Add(nProfession);
                    param.Add(nWeaponDataID);
                    param.Add(Vector3.zero);
                    param.Add(tabWeaponModel);
                }
                if (false == Singleton<ObjManager>.GetInstance().ReloadWeapon(gameObject,
                resWeaponRight,
                Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver,
                param))
                {
                    return;
                }
            }
            else
            {
                string resWeaponRight = tabWeaponModel.ResPath + "_R";
                List<object> param = new List<object>();
                if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                    ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
                {
                    Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                    objPlayer.RWeaponObject = null;

                    param.Add(objPlayer.GetWeaponPointPath_PutOn("right", tabWeaponModel));
                    param.Add(objPlayer.WeaponEffectGem);
                    param.Add(objPlayer.MountObj);
                    param.Add(nProfession);
                    param.Add(nWeaponDataID);
                    param.Add(new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ));
                    param.Add(tabWeaponModel);
                }
                else
                {
                    param.Add("Weapon_R");
                    param.Add(nWeaponEffectGem);
                    param.Add(null);
                    param.Add(nProfession);
                    param.Add(nWeaponDataID);
                    param.Add(Vector3.zero);
                    param.Add(tabWeaponModel);
                }

                if (false == Singleton<ObjManager>.GetInstance().ReloadWeapon(gameObject,
                resWeaponRight,
                Singleton<ObjManager>.GetInstance().AsycReloadWeaponOver,
                param))
                {
                    return;
                }
            }

        }

        public int GetCharModelID(Tab_ItemVisual tabItemVisual, int nProfession = GlobeVar.INVALID_ID)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nProfession = objPlayer.Profession;
            }

            if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
            {
                return tabItemVisual.CharModelIDShaoLin;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            {
                return tabItemVisual.CharModelIDTianShan;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
            {
                return tabItemVisual.CharModelIDDaLi;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                return tabItemVisual.CharModelIDXiaoYao;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                return tabItemVisual.CharModelIDGaiBang;
            }
            return GlobeVar.INVALID_ID;
        }

        /// <summary>
        /// 根据职业，当前变身状态获取模型ID
        /// </summary>
        /// <param name="nProfession"></param>
        /// <param name="nCurChangeState"></param>
        /// <returns></returns>
        public int GetCharModelIDByChangeState(int nProfession, int nCurChangeState)
        {
            if (nCurChangeState <= 0)
                return GlobeVar.INVALID_ID;

            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER
                || ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER
                || ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
//                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;

                Tab_ProfessionConmmon professionCon_tab = TableManager.GetProfessionConmmonByID(nProfession, 0);

                //如果没有
                if (null == professionCon_tab)
                    return GlobeVar.INVALID_ID;

                //index有判断这里就不判了
                return professionCon_tab.GetChangeModelIDbyIndex(nCurChangeState - 1);
            }

            return GlobeVar.INVALID_ID;
        }

        public int GetWeaponModelID(Tab_ItemVisual tabItemVisual, int nProfession = GlobeVar.INVALID_ID)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nProfession = objPlayer.Profession;
            }

            if (nProfession == (int)CharacterDefine.PROFESSION.SHAOLIN)
            {
                return tabItemVisual.WeaponModelIDShaoLin;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            {
                return tabItemVisual.WeaponModelIDTianShan;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.DALI)
            {
                return tabItemVisual.WeaponModelIDDaLi;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                return tabItemVisual.WeaponModelIDXiaoYao;
            }
            else if (nProfession == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                return tabItemVisual.WeaponModelIDGaiBang;
            }
            return GlobeVar.INVALID_ID;
        }
        public int GetWeaponModelIDByCurState(int nCurState, int nProfession = GlobeVar.INVALID_ID)
        {
            if (ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                Obj_OtherPlayer objPlayer = this as Obj_OtherPlayer;
                nProfession = objPlayer.Profession;
            }


            if ((int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 == nCurState)
            {
                Tab_ProfessionConmmon tab_profession = TableManager.GetProfessionConmmonByID(nProfession, 0);
                if (null != tab_profession)
                {
                    return tab_profession.GetWeaponModelIDbyIndex(nCurState - 1);
                }
            }

            return GlobeVar.INVALID_ID;
        }

        /// <summary>
        /// 根据当前职业，当前变身状态，变身过程，获得当前应该使用的动作ID（可参考ProfessionConmmon表）
        /// </summary>
        /// <param name="nProfession"></param>
        /// <param name="nCurChangeState"></param>
        /// <param name="nIndex">当前变身过程，变身前为0，变身后1</param>
        /// <returns></returns>
        public int GetAnimIdByState(int nProfession, int nCurChangeState, int nIndex)
        {
            int nAnimationId = GlobeVar.INVALID_ID;

            if (nCurChangeState <= 0 || nIndex < 0)
                return nAnimationId;

            Tab_ProfessionConmmon tab_professionCon = TableManager.GetProfessionConmmonByID(nProfession, 0);

            if (null == tab_professionCon || nIndex >= tab_professionCon.getAnimID1Count() || nIndex >= tab_professionCon.getAnimID2Count())
                return GlobeVar.INVALID_ID;

            if ((int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1 == nCurChangeState)
            {
                return tab_professionCon.GetAnimID1byIndex(nIndex);
            }
            else if ((int)(int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 == nCurChangeState)
            {
                return tab_professionCon.GetAnimID2byIndex(nIndex);
            }

            return nAnimationId;
        }
        #endregion

        #region 可见性
        protected bool m_bVisible = true;
        public virtual void SetVisible(bool bVisible)
        {
            m_bVisible = bVisible;

            for (int i = 0; i < transform.childCount; i++)
            {
                transform.GetChild(i).gameObject.SetActive(m_bVisible);
            }
        }

        public bool IsVisibleChar() { return m_bVisible; }

        // 重载模型回调
        public virtual void OnReloadModle()
        {
            SetVisible(m_bVisible);
            //初始化特效挂点信息
            if (ObjEffectController != null)
            {
                ObjEffectController.InitBindPointInfo();
            }
            //初始化 材质信息
            //  InitMaterialInfo();
            UpdateAllBind();
        }
        public override void OptAfterInitMaterialInfo()
        {
            base.OptAfterInitMaterialInfo();
            //是否隐身
            OptStealthLevChange();
        }

        // 和隐藏不一样，为模型是否可见
        private bool m_bModelInViewPort = true;
        public bool ModelInViewPort
        {
            get { return m_bModelInViewPort; }
            set { m_bModelInViewPort = value; }
        }
        #endregion
        #region 技能范围特效

        public void PlaySkillRangeEffect()
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer == null)
            {
                return;
            }
            int nCurPressSkillId = _mainPlayer.CurPressSkillId;
            if (nCurPressSkillId == -1)
            {
                return;
            }
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nCurPressSkillId, 0);
            if (_skillEx != null)
            {
                int _rangeEffectType = _skillEx.RangeEffectType;
                if (_rangeEffectType != -1)
                {
                    switch (_rangeEffectType)
                    {
                        case (int)(SKILLRANGEEFFECTTYPE.RING):
                            {
                                PlayEffect((int)SKILLRANGEEFFECTID.RINGEFFECTID, OnLoadSkillRangeEffect);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.CIRCLE):
                            {
                                PlayEffect((int)SKILLRANGEEFFECTID.CIRCLEEFFECTID, OnLoadSkillRangeEffect);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.RECT):
                            {
                                PlayEffect((int)SKILLRANGEEFFECTID.RECTEFFECTID, OnLoadSkillRangeEffect);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.ARROWS):
                            {
                                PlayEffect((int)SKILLRANGEEFFECTID.ARROWSEFFECTID, OnLoadSkillRangeEffect);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.SICIRCLE):
                            {
                                PlayEffect((int)SKILLRANGEEFFECTID.SICIRCLEEFFECTID, OnLoadSkillRangeEffect);
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
        }

        void OnLoadSkillRangeEffect(GameObject SkillRangeEffect, object param)
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer == null)
            {
                return;
            }
            if (SkillRangeEffect == null)
            {
                return;
            }
            int nCurPressSkillId = _mainPlayer.CurPressSkillId;
            if (nCurPressSkillId == -1)
            {
                StopEffect((int)SKILLRANGEEFFECTID.RINGEFFECTID);
                StopEffect((int)SKILLRANGEEFFECTID.CIRCLEEFFECTID);
                StopEffect((int)SKILLRANGEEFFECTID.RECTEFFECTID);
                StopEffect((int)SKILLRANGEEFFECTID.ARROWSEFFECTID);
                return;
            }
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nCurPressSkillId, 0);
            if (_skillEx != null)
            {
                int _rangeEffectType = _skillEx.RangeEffectType;
                if (_rangeEffectType != -1)
                {
                    float parentScaleX = gameObject.transform.localScale.x;
                    float parentScaleY = gameObject.transform.localScale.y;
                    float parentScaleZ = gameObject.transform.localScale.z;
                    if (parentScaleX == 0 || parentScaleY == 0 || parentScaleZ == 0)
                    {
                        return;
                    }

                    //修正大小
                    switch (_rangeEffectType)
                    {
                        case (int)(SKILLRANGEEFFECTTYPE.RING):
                            {
                                //* 2.25f / parentScaleX  *2.25f / parentScaleZ
                                float newXScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleX; //加上父节点的修正
                                float newZScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleZ; //加上父节点的修正
                                SkillRangeEffect.transform.localScale = new Vector3(newXScale, 1, newZScale);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.CIRCLE):
                            {
                                //* 3.0f / parentScaleX   * 3.0f / parentScaleY
                                float newXScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleX;//加上父节点的修正
                                float newYScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleY;//加上父节点的修正
                                SkillRangeEffect.transform.localScale = new Vector3(newXScale, newYScale, 1);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.RECT):
                            {
                                //float newYScale = _skillEx.GetRangeEffectSizebyIndex(0) * 1.0f/parentScaleY; //长
                                //float newXScale = _skillEx.GetRangeEffectSizebyIndex(1) * 3.0f/parentScaleX; //宽

                                float newYScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleY; //长
                                float newXScale = _skillEx.GetRangeEffectSizebyIndex(1) / parentScaleX; //宽

                                SkillRangeEffect.transform.localScale = new Vector3(newXScale, newYScale, 1);
                                Vector3 localPos = SkillRangeEffect.transform.localPosition;
                                localPos.z = newYScale / 2.0f; //修正z 偏移
                                SkillRangeEffect.transform.localPosition = localPos;
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.ARROWS):
                            {
                                SkillRangeEffect.transform.localRotation = Quaternion.Euler(0, _skillEx.GetRangeEffectSizebyIndex(0), 0);
                                Vector3 posVector3 = SkillRangeEffect.transform.localPosition;
                                if (_skillEx.GetRangeEffectSizebyIndex(0) == 0)
                                {
                                    posVector3.x = 0.0f;
                                    posVector3.z = -1.5f;
                                }
                                else if (_skillEx.GetRangeEffectSizebyIndex(0) == 90)
                                {
                                    posVector3.x = -1.5f;
                                    posVector3.z = 0.0f;
                                }
                                else if (_skillEx.GetRangeEffectSizebyIndex(0) == 180)
                                {
                                    posVector3.x = 0.0f;
                                    posVector3.z = 1.5f;
                                }
                                else if (_skillEx.GetRangeEffectSizebyIndex(0) == 270)
                                {
                                    posVector3.x = 1.5f;
                                    posVector3.z = 0.0f;
                                }
                                SkillRangeEffect.transform.localPosition = posVector3;
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.SICIRCLE):
                            {
                                //  * 3.0f / parentScaleX   * 3.0f / parentScaleY
                                float newXScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleX;//加上父节点的修正
                                float newYScale = _skillEx.GetRangeEffectSizebyIndex(0) / parentScaleY;//加上父节点的修正
                                SkillRangeEffect.transform.localScale = new Vector3(newXScale, newYScale, 1);
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
        }
        public void StopSkillRangeEffect()
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer == null)
            {
                return;
            }
            int nCurPressSkillId = _mainPlayer.CurPressSkillId;
            if (nCurPressSkillId == -1)
            {
                return;
            }
            Tab_SkillEx _skillEx = TableManager.GetSkillExByID(nCurPressSkillId, 0);
            if (_skillEx != null)
            {
                int _rangeEffectType = _skillEx.RangeEffectType;
                if (_rangeEffectType != -1)
                {
                    switch (_rangeEffectType)
                    {
                        case (int)(SKILLRANGEEFFECTTYPE.RING):
                            {
                                StopEffect((int)SKILLRANGEEFFECTID.RINGEFFECTID);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.CIRCLE):
                            {
                                StopEffect((int)SKILLRANGEEFFECTID.CIRCLEEFFECTID);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.RECT):
                            {
                                StopEffect((int)SKILLRANGEEFFECTID.RECTEFFECTID);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.ARROWS):
                            {
                                StopEffect((int)SKILLRANGEEFFECTID.ARROWSEFFECTID);
                            }
                            break;
                        case (int)(SKILLRANGEEFFECTTYPE.SICIRCLE):
                            {
                                StopEffect((int)SKILLRANGEEFFECTID.SICIRCLEEFFECTID);
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
        }
        #endregion

        /// <summary>
        /// 模型准备完毕 主角和npc都在使用 
        /// 进行固有特效的播放 进行出场效果的展示(如果有)
        /// 进行缩放的处理
        /// </summary>
        public void OnModelInitOk()
        {
            ObjEffectBehaviourController.AddCharModelEffects(this);
            //如果播放出场效果
            if (BaseAttr != null && BaseAttr.CachedRoleBase != null && BaseAttr.CachedRoleBase.ShowBornEffect > 0)
            {
                if (!s_hasPlayedBornEffectObjIdList.Contains(m_ServerID))
                {
                    if (AnimLogic != null)
                    {
                        AnimLogic.Play(243);
                    }
                    if (ObjEffectController != null)
                    {
                        Tab_CharModel modelTable = TableManager.GetCharModelByID(ModelID, 0);
                        if (modelTable != null)
                        {
                            int count = modelTable.getBornEffectCount();
                            for (int i = 0; i < count; i++)
                            {
                                int effectId = modelTable.GetBornEffectbyIndex(i);
                                if (effectId > -1)
                                {
                                    ObjEffectController.PlayEffect(effectId);
                                }
                            }

                        }
                    }
                    s_hasPlayedBornEffectObjIdList.Add(m_ServerID);
                }

            }
            ///当模型不为空时
            if (ModelNode != null)
            {
                Tab_CharModel tableData = TableManager.GetCharModelByID(ModelID, 0);
                if (tableData != null)
                {
                    ModelNode.transform.localScale = Vector3.one * tableData.Scale;
                }
            }
        }

        #region 受击动作特效

        /// <summary>
        /// NPC受击动作单独处理函数
        /// </summary>
        public virtual void OnAnimationIsHit()
        {
            if (this.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
            {
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_HIT;
            }
        }

        //===============翅膀的模型改变========================
        public void RealoadPlayerFlyWingModel()
        {
            Obj_OtherPlayer otherPlayer = this as Obj_OtherPlayer;
            if (otherPlayer == null)
                return;

            if (otherPlayer.OtherPlayerFlyWingModelId == GlobeVar.INVALID_ID)
                return;

            if (otherPlayer.NormalGameObject == null)
                return;

            Tab_FlyWing tab = TableManager.GetFlyWingByID(otherPlayer.OtherPlayerFlyWingModelId, 0);
            if (tab == null)
                return;

			Tab_FlyWingClient FlyWingClient = TableManager.GetFlyWingClientByID (otherPlayer.OtherPlayerFlyWingModelId,0);
			if (FlyWingClient == null)
				return;
			
			string loadPath =FlyWingClient.ModeName;  //Cb_yumao_001_001
			BundleManager.LoadModelInQueue(loadPath, onAsyLoadFlyWing, otherPlayer.NormalGameObject, otherPlayer.OtherPlayerFlyWingModelId, otherPlayer);
        }
        public static void onAsyLoadFlyWing(string modeName, GameObject resObj, object param1, object param2, object param3)
        {
			if (resObj == null || param1 == null || param2 == null || param3 == null)
                return;

            GameObject playerObj = param1 as GameObject;
            if (playerObj == null)
                return;

			int flyWingId = (int)param2 ;
			Tab_FlyWingClient FlyWingClient = TableManager.GetFlyWingClientByID (flyWingId,0);
			if (FlyWingClient == null)
				return;

			Transform flyWingForm = playerObj.transform.Find(GlobeVar.STR_FATHER_OTHER_MODE_NAME);
            if (flyWingForm == null)
                return;

           
            Obj_OtherPlayer otherPlayer = param3 as Obj_OtherPlayer;
            if (otherPlayer)
            {
                otherPlayer.DestroyFlyWingObj();
            }

            // 创建模型 
            GameObject model = (GameObject)GameObject.Instantiate(resObj);
            if (model == null)
            {
                return;
            }

            model.name = GlobeVar.STR_MODE_NAME;
            model.transform.parent = flyWingForm;
            model.transform.localPosition = Vector3.zero;
			model.transform.localRotation = Quaternion.Euler(new Vector3(FlyWingClient.AngleX, FlyWingClient.AngleY, FlyWingClient.AngleZ));//Quaternion.identity;

            Transform[] trans = model.GetComponentsInChildren<Transform>();
            for (int i = 0; i < trans.Length; ++i)
            {
                trans[i].gameObject.layer = resObj.layer;
            }

            // 创建特效
			if(otherPlayer)
            {
                otherPlayer.ObjEffectController.InitEffect(otherPlayer.gameObject);
                otherPlayer.ObjEffectController.OnFlyWingOk(flyWingId,model);
            }
        }
        public void DestroyFlyWingObj()
        {
            Obj_OtherPlayer otherPlayer = this as Obj_OtherPlayer;
            if (otherPlayer == null)
                return;

            if (otherPlayer != null && otherPlayer.gameObject != null)
            {
				Transform gflyWingTransform = null;
				if( otherPlayer.MountObj != null && otherPlayer.MountObj.gameObject != null )
					gflyWingTransform = otherPlayer.MountObj.gameObject.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME + "/" + GlobeVar.STR_MODE_NAME);
				else
					gflyWingTransform = otherPlayer.transform.FindChild (GlobeVar.STR_FATHER_MODE_NAME + "/" + GlobeVar.STR_MODE_NAME);

                //Transform gflyWingTransform = otherPlayer.gameObject.transform.FindChild(GlobeVar.STR_FATHER_MODE_NAME + "/" + GlobeVar.STR_MODE_NAME);
                if (gflyWingTransform == null || gflyWingTransform.gameObject == null)
                {
                    return;
                }

                gflyWingTransform.parent = null;
                otherPlayer.FlyWingObj = null;
                otherPlayer.ObjEffectController.OnCancalFlyWing();
                Destroy(gflyWingTransform.gameObject);
            }
        }
        #endregion

    }
}
