/********************************************************************************
 *	文件名：	CutsceneActionBlockAutoBattle.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneAction\CutsceneActionBlockAutoBattle.cs
 *	创建人：	关真庆
 *	创建时间：2016-01-09
 *
 *	功能说明：阻塞自动挂机,并重置挂机按钮的状态。
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;

namespace Cutscene
{
    public class CutsceneActionBlockAutoBattle : CutsceneActionBase
    {

        #region Fields
        private bool m_bBlockIt = false;
        #endregion
        #region Properties
        #endregion

        #region Methods
        public CutsceneActionBlockAutoBattle(bool bBlockIt)
        {
            m_bBlockIt = bBlockIt;
        }

        public override void Start()
        {
            base.Start();
            CutsceneManager.Instance.BlockAutoBattle = m_bBlockIt;
            if (m_bBlockIt)
            {
                Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (_mainPlayer != null)
                {
                    _mainPlayer.AutoComabat = false;
                    _mainPlayer.IsOpenAutoCombat = false;
                }
            }
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateAutoFightBtnState(true);
            }
        }

        public override void Update(float deltaTime)
        {
            base.Update(deltaTime);
        }

        public override void Finish()
        {
            base.Finish();
        }

        
        #endregion
    }
}