using UnityEngine;
using System.Collections;
using UnityEditor;
using GCGame;

[UTDoc(title = "set wp8 player settings", description = "Sets the Default player settings for WP8 builds")]
[UTInspectorGroups(groups = new string[] { "Set WP8Plan Settings" })]
public class UTMyWP8BuildSetting : UTAction
{
    [UTDoc(description = "设置资源版本号")]
    [UTInspectorHint(group = "Set WP8Plan Settings", order = 0)]
    public UTString wp8ResVersion;

    [UTDoc(description = "设置程序版本号")]
    [UTInspectorHint(group = "Set WP8Plan Settings", order = 1)]
    public UTString wp8PackageVersion;

    [UTDoc(description = "缩放资源")]
    [UTInspectorHint(group = "Set WP8Plan Settings", order = 2)]
    public UTBool wp8shrink;

    public override IEnumerator Execute(UTContext context)
    {
        context["wp8ResVersion"] = wp8ResVersion.EvaluateIn(context);
        context["wp8ShrinkRes"] = wp8shrink.EvaluateIn(context);
        string path = wp8shrink.Value ? BundleManager.WP8LOWQuality : BundleManager.WP8NormalQuality;
        string remoteoutputPath = BundleManager.WP8UpdateOutputPath+path;

//        if (wp8shrink.Value)
//        {
//            CommandBuild.BuildWP8UpdateRes_Low();
//        }
//        else
//        {
//            CommandBuild.BuildWP8UpdateRes_Normal();
//        }
        string resourceVersion = context["wp8ResVersion"] as string;
        string remoteResVersionPath = remoteoutputPath +"/../" + UpdateHelper.VersionFileName;
        string localResVersionPath = BundleManager.WP8OutputPath + path + UpdateHelper.AppVersionFolder + "/" + UpdateHelper.VersionFileName;
        Utils.WriteStringToFile(remoteResVersionPath, resourceVersion);
        Utils.WriteStringToFile(localResVersionPath, resourceVersion);

        yield return "";
    }

    [MenuItem("Assets/Create/uTomate/UTMyWP8BuildSetting", false, 200)]
    public static void AddAction()
    {
        Create<UTMyWP8BuildSetting>();
    }

}
