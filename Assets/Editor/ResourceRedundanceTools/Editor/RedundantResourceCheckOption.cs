using System.Linq;
using UnityEngine;
using UnityEditor;
using System.IO;
using System.Collections;
using System.Collections.Generic;



public class RedundantResourceCheckOption
{
    ResourceRedundanceManager mResourceRedundanceMgr;
    public RedundantResourceCheckOption ( )
    {
        mResourceRedundanceMgr = new ResourceRedundanceManager( );
    }

    public enum ResourceCategory
    {
        RC_GENERAL,
        RC_REFERRED,
        RC_INCLUDE
    }

    private class Entry
    {
        public ResourceUnit resUnit;
        public string stateName;
        public bool bCheck = false;
    }

    
    private AnalyzeType mResourceType = AnalyzeType.AT_SCENE;
    private ResourceCategory mResourceCategory = ResourceCategory.RC_GENERAL;

    private Vector2 mListPos = new Vector2( 0.0f, 0.0f );

    private string [ ] mResourceToolbarStrings = { "Resources", "Resources referred", "Resources include" };

    private bool mLostCheckbox = true;
    private bool mUsedCheckbox = true;
    private bool mRedundantCheckbox = true;

    private ResourceUnit mSelectResource = null;
    private bool mListUpdate = true;

    private List<Entry> mResourceList = new List<Entry>( );


    //[MenuItem( "Window/Resource Redundance Tools" )]
    //static void Init ( )
    //{
    //    ResourceRedundanceTools window = ( ResourceRedundanceTools ) EditorWindow.GetWindow( typeof( ResourceRedundanceTools ) );
    //    window.minSize = new Vector2( 400, 300 );

    //}

    bool DrawRow ( Entry ent, bool operate )
    {
        GUI.color = ( operate && null != mSelectResource && mSelectResource == ent.resUnit ) ? new Color( 0f, 0.5f, 1f ) : Color.white;

        if ( ent.resUnit != null )
        {
            GUILayout.BeginHorizontal( "AS TextArea", GUILayout.MinHeight( 20f ) );
        }
        else
        {
            GUILayout.BeginHorizontal( );
        }

        if ( operate && EditorGUILayout.Toggle( ent.bCheck, GUILayout.Width( 20.0f ) ) )
        {
            ent.bCheck = true;
        }
        else
        {
            ent.bCheck = false;
        }

        if ( GUILayout.Button( ent.resUnit.GetFileName( ), EditorStyles.label, GUILayout.Width( 400f ) ) && operate )
        {
            mSelectResource = ent.resUnit;
        }

        GUILayout.Label( ent.resUnit.GetPathName( ), GUILayout.Width( 600f ) );
        GUILayout.Label( ent.stateName, GUILayout.Width( 100f ) );

        GUILayout.EndHorizontal( );

        return true;
    }

    void ListResources ( )
    {
        mListPos = EditorGUILayout.BeginScrollView( mListPos );

        if ( mListUpdate )
        {
            mResourceList.Clear( );

            int type = ( int ) mResourceType;
            if ( mResourceRedundanceMgr.mTypeFileDictionary.ContainsKey( type ) )
            {
                Dictionary<string, ResourceUnit> fileDic = mResourceRedundanceMgr.mTypeFileDictionary [ type ];
                foreach ( KeyValuePair<string, ResourceUnit> fileRes in fileDic )
                {
                    ResourceUnit resUnit = fileRes.Value;
                    string stateName;
                    if ( resUnit.IsLost( ) )
                    {
                        if ( !mLostCheckbox )
                        {
                            continue;
                        }

                        stateName = "Lost";
                    }
                    else if ( resUnit.IsUsed( ) )
                    {
                        if ( !mUsedCheckbox )
                        {
                            continue;
                        }

                        stateName = "Used";
                    }
                    else
                    {
                        if ( !mRedundantCheckbox )
                        {
                            continue;
                        }

                        stateName = "Redundant";
                    }

                    Entry ent = new Entry( );
                    ent.resUnit = resUnit;
                    ent.stateName = stateName;

                    mResourceList.Add( ent );
                }
            }

            mListUpdate = false;

        }

        foreach ( Entry ent in mResourceList )
        {
            DrawRow( ent, true );
        }

        EditorGUILayout.EndScrollView( );
    }

    void ListResourcesReferred ( )
    {
        mListPos = EditorGUILayout.BeginScrollView( mListPos );

        if ( null != mSelectResource )
        {
            foreach ( ResourceUnit resRef in mSelectResource.mResourcesReferrd )
            {
                Entry ent = new Entry( );
                ent.resUnit = resRef;
                ent.stateName = "Used";
                DrawRow( ent, false );
            }
        }

        EditorGUILayout.EndScrollView( );
    }

    void ListResourcesInclude ( )
    {
        mListPos = EditorGUILayout.BeginScrollView( mListPos );

        if ( null != mSelectResource )
        {
            foreach ( ResourceUnit resInc in mSelectResource.mResourcesInclude )
            {
                Entry ent = new Entry( );
                ent.resUnit = resInc;
                ent.stateName = "Used";
                DrawRow( ent, false );
            }
        }

        EditorGUILayout.EndScrollView( );


    }

    void DeleteCheckedResources ( )
    {
        foreach ( Entry ent in mResourceList )
        {
            if ( ent.bCheck )
            {
                mResourceRedundanceMgr.DeleteSingleResourceFile( ent.resUnit );
                mListUpdate = true;
            }
        }
    }

    void SetResourceListChecked ( bool check )
    {
        foreach ( Entry ent in mResourceList )
        {
            ent.bCheck = check;
        }
    }

    public void OnGUI ( )
    {
        EditorGUILayout.Space( );

        if ( GUILayout.Button( "Collect Resources" ) )
        {
            mResourceRedundanceMgr.CollectAllFiles( );
            mListUpdate = true;
        }

        if ( GUILayout.Button( "Analyze Resources" ) )
        {
            mResourceRedundanceMgr.AnalyzeResourceFiles( );
            mListUpdate = true;
        }

        if ( GUILayout.Button( "Delete Selected Resources" ) )
        {
            DeleteCheckedResources( );
        }

        AnalyzeType resType = ( AnalyzeType ) EditorGUILayout.EnumPopup( "Resource Type", mResourceType );
        if ( mResourceType != resType )
        {
            mResourceType = resType;
            mListUpdate = true;
        }

        GUILayout.Label( "Resource State", EditorStyles.boldLabel );
        GUILayout.BeginHorizontal( );

        if ( mLostCheckbox != GUILayout.Toggle( mLostCheckbox, "Lost" ) )
        {
            mLostCheckbox = !mLostCheckbox;
            mListUpdate = true;
        }

        if ( mUsedCheckbox != GUILayout.Toggle( mUsedCheckbox, "Used" ) )
        {
            mUsedCheckbox = !mUsedCheckbox;
            mListUpdate = true;
        }

        if ( mRedundantCheckbox != GUILayout.Toggle( mRedundantCheckbox, "Redundant" ) )
        {
            mRedundantCheckbox = !mRedundantCheckbox;
            mListUpdate = true;
        }

        GUILayout.EndHorizontal( );

        GUILayout.Label( "Resource Select", EditorStyles.boldLabel );
        GUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "All", GUILayout.Width( 100f ) ) )
        {
            SetResourceListChecked( true );
        }

        if ( GUILayout.Button( "None", GUILayout.Width( 100f ) ) )
        {
            SetResourceListChecked( false );
        }
        GUILayout.EndHorizontal( );

        EditorGUILayout.Space( );

        mResourceCategory = ( ResourceCategory ) GUILayout.Toolbar( ( int ) mResourceCategory, mResourceToolbarStrings );

        switch ( mResourceCategory )
        {
            case ResourceCategory.RC_GENERAL:
                ListResources( );
                break;
            case ResourceCategory.RC_REFERRED:
                ListResourcesReferred( );
                break;
            case ResourceCategory.RC_INCLUDE:
                ListResourcesInclude( );
                break;
        }



    }













}
