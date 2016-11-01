//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2013 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(TweenFillcount))]
public class TweenFillcountEditor : UITweenerEditor
{
	public override void OnInspectorGUI ()
	{
		GUILayout.Space(6f);
		NGUIEditorTools.SetLabelWidth(120f);

        TweenFillcount tw = target as TweenFillcount;
		GUI.changed = false;

		float from = EditorGUILayout.FloatField("From", tw.from);
        float to = EditorGUILayout.FloatField("To", tw.to);
        bool bInvert = EditorGUILayout.Toggle("Invert Fill", tw.invertFill);
        UISprite.FillDirection fillDir = (UISprite.FillDirection)EditorGUILayout.EnumPopup("Fill Direction", tw.fillDir);

		if (from < 0) from = 0;
		if (to < 0) to = 0;

		if (GUI.changed)
		{
			NGUIEditorTools.RegisterUndo("Tween Change", tw);
			tw.from = from;
			tw.to = to;
            tw.invertFill = bInvert;
            tw.fillDir = fillDir;
            tw.bInit = false;
			UnityEditor.EditorUtility.SetDirty(tw);
		}

		DrawCommonProperties();
	}
}
