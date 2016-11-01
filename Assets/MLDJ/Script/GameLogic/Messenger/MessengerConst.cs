/********************************************************************************
 *	文件名：	GameManager.cs
 *	全路径：	\Script\GameLogic\Messenger\MessengerConst.cs
 *	创建人：	陈惟楚
 *	创建时间：2015-03-21
 *
 *	功能说明：所有消息定义
 *	修改记录：
*********************************************************************************/


public static class MessengerConst
{
    // template
    // public static string OnXXXX = "OnXXXX";		

	/// <summary>
	/// 过场动画开始
	/// </summary>
	public static string OnCutsceneBegin = "OnCutsceneBegin";
	/// <summary>
	/// 过场动画结束
	/// </summary>
	public static string OnCutsceneEnd = "OnCutsceneEnd";
	/// <summary>
	/// 进入电影过场模式
	/// </summary>
	public static string OnCutsceneMovieBegin = "OnCutsceneMovieBegin";
	/// <summary>
	/// 新手引导关闭
	/// </summary>
	public static string OnNewPlayerGuideClose = "OnNewPlayerGuideClose";
    /// <summary>
    /// 自动寻路开始
    /// </summary>
    public static string OnAutoSearchAgentBegin = "OnAutoSearchAgentBegin";
    /// <summary>
    /// 自动寻路结束
    /// </summary>
    public static string OnAutoSearchAgentEnd = "OnAutoSearchAgentEnd";
    /// <summary>
    /// 自动战斗开始
    /// </summary>
    public static string OnAutoCombatBegin = "OnAutoCombatBegin";
    /// <summary>
    /// 自动战斗结束
    /// </summary>
    public static string OnAutoCombatEnd = "OnAutoCombatEnd";
    /// <summary>
    /// 剧情副本次数信息更新
    /// </summary>
    public static string OnUserVIPDataLogicInfo = "OnUserVIPDataLogicInfo";
    /// <summary>
    /// 剧情副本次数信息更新
    /// </summary>
    public static string OnUpdateStoryCopySceneLogicInfo = "OnUpdateStoryCopySceneLogicInfo";
	/// <summary>
	/// 剧情副本关卡信息更新
	/// </summary>
	public static string OnUpdateJuQingCopySceneLevelInfo = "OnUpdateJuQingCopySceneLevelInfo";
	/// <summary>
	/// 剧情副本章节信息更新
	/// </summary>
	public static string OnUpdateJuQingCopySceneChapterInfo = "OnUpdateJuQingCopySceneChapterInfo";
	/// <summary>
	/// 跑环任务信息更新
	/// </summary>
	public static string OnUpdatePaoHuanInfo = "OnUpdatePaoHuanInfo";
	/// <summary>
	/// 任务状态发生了变化
	/// </summary>
	public static string OnMissionStateChanged = "OnMissionStateChanged";

	////////////////////////////////////////////////////////////////////////////////
	/// 场景切换相关

	/// <summary>
	/// 进入场景完毕
	/// </summary>
	public static string OnEnterSceneFinish = "OnEnterSceneFinish";

	/// 场景切换相关结束
	////////////////////////////////////////////////////////////////////////////////
	public static string OnUpdateCangjinggeAward = "OnUpdateCangjinggeAward";
}
