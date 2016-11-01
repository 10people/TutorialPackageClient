/********************************************************************************
 *	文件名：	CutsceneException.cs
 *	全路径：	\Script\Player\Cutscene\CutsceneException.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-04-28
 *
 *	功能说明：定义了一组过场动画相关的异常
 *	修改记录：
*********************************************************************************/

using System;

namespace Cutscene
{
	/// <summary>
	/// Cutscene event exception.
	/// </summary>
	public class CutsceneEventException : ApplicationException 
	{
		public CutsceneEventException(string msg) : base(msg) {}
	}

	/// <summary>
	/// Cutscene link exception.
	/// </summary>
	public class CutsceneLinkException : ApplicationException 
	{
		public CutsceneLinkException(string msg) : base(msg) {}
	}
}