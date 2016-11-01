/********************************************************************************
 *	文件名：	CutsceneFactoryDemo91.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo91.cs
 *	创建人：	赵琦
 *	创建时间：2016-2-29
 *
 *	功能说明：黄昏要塞副本第三阶段结束移动
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo94 : CutsceneFactoryBase
    {
        #region Fields
        #endregion

        #region Properties
        #endregion

        #region Methods
        /// <summary>
        /// 用这个Factory创建一个Cutscene
        /// </summary>
        /// <returns>The cutscene.</returns>
        public override Cutscene CreatCutscene()
        {
            BeginBuild();

            ///////////////////////////////////////////////////////////////////
            /// 定义阶段
            ///////////////////////////////////////////////////////////////////
			DefineAction ("HeiBian", new CutsceneActionMovieUIControl ());
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (5.51f, 9.96f, 41.64f),2), true);
			DefineAction ("PlayerTurn0", new CutsceneActionCharacterMove (-1, new Vector3 (5.51f, 9.96f, 41.64f),0,-90f), true);
			DefineAction ("PlayerRun0", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand0",new CutsceneActionPlayAnim(-1,0));
			DefineAction ("PlayerMove1", new CutsceneActionCharacterMove (-1, new Vector3 (5.21f, 9.03f, 19.26f), 3), true);
			DefineAction ("PlayerTurn1", new CutsceneActionCharacterMove (-1, new Vector3 (5.21f, 9.03f, 19.26f),0,0f), true);
			DefineAction ("PlayerRun1", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand1",new CutsceneActionPlayAnim(-1,0));
			DefineAction ("PlayerMove2", new CutsceneActionCharacterMove (-1, new Vector3 (12.33f, 8.8f, 18.82f), 1), true);
			DefineAction ("PlayerRun2", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand2",new CutsceneActionPlayAnim(-1,0));
			DefineAction("PlayerStand3",new CutsceneActionPlayAnim(-1,0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "PlayerStand3");
			StartBWhenAStart ("PlayerStand3", "HeiBian");
			StartBWhenAStart ("PlayerStand3", "PlayerMove0", 1f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun0", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand0");
			StartBWhenAFinish ("PlayerMove0", "PlayerTurn0");
			StartBWhenAFinish ("PlayerTurn0", "PlayerMove1",0.1f);
			StartBWhenAStart ("PlayerMove1", "PlayerRun1", 0.1f);
			StartBWhenAFinish ("PlayerMove1", "PlayerStand1");
			StartBWhenAFinish ("PlayerMove1", "PlayerTurn1");
			StartBWhenAFinish ("PlayerTurn1", "PlayerMove2",0.1f);
			StartBWhenAStart ("PlayerMove2", "PlayerRun2", 0.1f);
			StartBWhenAFinish ("PlayerMove2", "PlayerStand2");
			FinishBWhenAFinish ("PlayerMove2", "HeiBian");
            EndBuild();
            return base.CreatCutscene();
        }
        #endregion
    }
}