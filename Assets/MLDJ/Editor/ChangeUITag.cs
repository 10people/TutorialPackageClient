/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   10:11
	filename: 	ChangeUITag.cs
	author:		王迪
	
	purpose:	更改当前预制件UI配置。
*********************************************************************/
using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;

public class ChangeUITag : Editor {

    [MenuItem("MLDJ/Utils/UIEidtor/RemoveAnimationKey")]
    public static void RemoveAnimationKey()
    {
        RemoveChildrenAnimationKey(AssetDatabase.GetAssetPath(Selection.activeObject));

        AssetDatabase.SaveAssets();

    }

    private static void RemoveChildrenAnimationKey(string curPath)
    {
        Debug.Log(curPath);
        string[] fileList = Directory.GetFiles(curPath);
        string[] dictionaryList = Directory.GetDirectories(curPath);
        Debug.Log(fileList.Length);
        foreach (string curFile in fileList)
        {
            Debug.Log(curFile);
         
            if (curFile.EndsWith(".anim"))
            {
                UnityEngine.Object curAnimObj = AssetDatabase.LoadAssetAtPath(curFile, typeof(AnimationClip));
                if (null != curAnimObj && curAnimObj is UnityEngine.AnimationClip)
                {
                    TestCurveBegin(curAnimObj as AnimationClip);
                    
                }
                else
                {
                    Debug.LogError("animation clip load error:" + curFile);
                }

            }
        }

        
        // 逐层目录开始遍历，获取所有的file end的文件
        foreach (string curDic in dictionaryList)
        {
            RemoveChildrenAnimationKey(curDic);
        }


       
    }

    private static void TestCurveBegin(AnimationClip curAnimClip)
    {
        if (curAnimClip == null) return;

        UnityEditor.EditorCurveBinding[] curveBindings = UnityEditor.AnimationUtility.GetCurveBindings(curAnimClip);

        if (curveBindings != null)
        {
            string curveName;
            for (int i = 0; i < curveBindings.Length; i++)
            {
                curveName = curveBindings[i].propertyName.ToLower();
                if (curveName.Contains("scale"))
                {
                    UnityEditor.AnimationUtility.SetEditorCurve(curAnimClip, curveBindings[i], null);
                }
            }

            curveName = null;
            curveBindings = null;
        }
    }


    [MenuItem("MLDJ/Utils/UIEidtor/ChangeUIDepth")]
    public static void ChangeDepth()
    {
        ChangeChildrenDepth(Selection.activeGameObject);

    }

    private static void ChangeChildrenDepth(GameObject curObject)
    {
        if (null != curObject)
        {
            UILabel curWidge = curObject.GetComponent<UILabel>();
            if (null != curWidge)
            {
                curWidge.depth = 501;
            }

            for (int i = 0; i < curObject.transform.childCount; i++)
            {
                ChangeChildrenDepth(curObject.transform.GetChild(i).gameObject);
            }
        }
    }


    // 将带有Collider的UI的TAG更改，避免与游戏区碰撞检测冲突
    [MenuItem("MLDJ/Utils/UIEidtor/ChangeUITag-SubUI")]
    public static void ChangeToSubUI()
    {
        ChangeChildrenTab(Selection.activeGameObject);

    }

    private static void ChangeChildrenTab(GameObject curObject)
    {
        if (null != curObject)
        {
            BoxCollider curCollider = curObject.GetComponent<BoxCollider>();
            
            if (curCollider != null)
            {
                curObject.tag = "SubUI";
                Vector3 vSize = curCollider.size;
                Vector3 vCenter = curCollider.center;
                vSize.z = 1;
                vCenter.z = 0;
                curCollider.size = vSize;
                curCollider.center = vCenter;
            }

            for (int i = 0; i < curObject.transform.childCount; i++)
            {
                ChangeChildrenTab(curObject.transform.GetChild(i).gameObject);
            }
        }
    }

    private static UIAtlas curAtlas;

    [MenuItem("MLDJ/Utils/UIEidtor/SelectAtlas")]
    public static void SelectAtlas()
    {
        GameObject curObject = Selection.activeGameObject;
        UISprite curSpr = curObject.GetComponent<UISprite>();
        if (null == curSpr)
        {
            Debug.LogError("there is no sprite in cur obj");
            return;
        }
        curAtlas = curSpr.atlas;

    }

    [MenuItem("MLDJ/Utils/UIEidtor/ReplaceButton")]
    public static void ReplaceButton()
    {
        if (null == curAtlas)
        {
            Debug.LogError("select an atlas first");
            return;
        }
        ChangeChildrenButton(Selection.activeGameObject);

    }

    
    private static void ChangeChildrenButton(GameObject curObject)
    {
        if (null != curObject)
        {
            UIButton curButton = curObject.GetComponent<UIButton>();
            
            if (curButton != null)
            {
                Transform transBack = curButton.transform.FindChild("Background");
                if (null != transBack)
                {
                    UISprite curBackSpr = transBack.GetComponent<UISprite>();
                    if (curBackSpr != null)
                    {
                        curBackSpr.atlas = curAtlas;
                        curBackSpr.spriteName = "btn_small_normal";
                    }
                }

                Transform transLabel = curButton.transform.FindChild("Label");
                if (null != transLabel)
                {
                    UILabel curLabel = transLabel.GetComponent<UILabel>();
                    if (null != curLabel)
                    {
                        curLabel.color = Color.yellow;
                    }
                }

                DestroyImmediate(curButton);

                curObject.AddComponent<UIImageButton>();
            }


            UIImageButton curImageButton = curObject.GetComponent<UIImageButton>();
            if (null != curImageButton)
            {
                Transform spriteBack = curObject.transform.FindChild("Background");
                if (null != spriteBack)
                {
                    curImageButton.target = spriteBack.GetComponent<UISprite>();
                    curImageButton.normalSprite = "btn_small_normal";
                    curImageButton.hoverSprite = "btn_small_normal";
                    curImageButton.pressedSprite = "btn_small_press";
                    curImageButton.disabledSprite = "btn_small_disable";
                    curImageButton.GetComponent<BoxCollider>().size = new Vector3(76, 31, 1);
                    curImageButton.target.width = 76;
                    curImageButton.target.height = 31;
                    curImageButton.target.depth = 50;
                }
               
            }

            for (int i = 0; i < curObject.transform.childCount; i++)
            {
                ChangeChildrenButton(curObject.transform.GetChild(i).gameObject);
            }
        }
    }
}
