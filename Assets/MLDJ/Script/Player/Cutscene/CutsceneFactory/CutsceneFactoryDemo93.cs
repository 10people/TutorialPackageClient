/********************************************************************************
 *	文件名：	CutsceneFactoryDemo91.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneFactory\CutsceneFactoryDemo91.cs
 *	创建人：	赵琦
 *	创建时间：2016-2-29
 *
 *	功能说明：黄昏要塞副本第二阶段结束移动
 *	修改记录：
*********************************************************************************/

using UnityEngine;
using System.Collections;

namespace Cutscene
{
    public class CutsceneFactoryDemo93 : CutsceneFactoryBase
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
			DefineAction ("PlayerMove0", new CutsceneActionCharacterMove (-1, new Vector3 (21.98f, 10f, 49.4f), 3), true);
			DefineAction ("PlayerRun", new CutsceneActionPlayAnim (-1, 1));
			DefineAction("PlayerStand",new CutsceneActionPlayAnim(-1,0));
			DefineAction("PlayerStand0",new CutsceneActionPlayAnim(-1,0),true);
			///////////////////////////////////////////////////////////////////
			/// 连接阶段
			///////////////////////////////////////////////////////////////////
			StartBWhenAStart ("Begin", "PlayerStand0");
			StartBWhenAStart ("PlayerStand0", "HeiBian");
			StartBWhenAStart ("PlayerStand0", "PlayerMove0", 1f);
			StartBWhenAStart ("PlayerMove0", "PlayerRun", 0.1f);
			StartBWhenAFinish ("PlayerMove0", "PlayerStand");
			FinishBWhenAFinish ("PlayerMove0", "HeiBian");
            EndBuild();
            return base.CreatCutscene();
        }
        #endregion
    }
}