using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Collections;
using UnityEngine;
using UnityEditor;


public abstract class AnalyzeBase
{
    protected ResourceRedundanceManager mResourceRedundanceMgr;

    protected AnalyzeBase(ResourceRedundanceManager mgr)
    {
        mResourceRedundanceMgr = mgr;
    }

    public abstract int GetAnalyzeType();
    public abstract void Analyze(ResourceUnit res);

    protected void AnalyzeYAMLResource(ResourceUnit res)
    {
        string fullName = res.GetPathName() + "/" + res.GetFileName();

        YamlEmittor emittor = new YamlEmittor();

        bool success = emittor.AnalyzeYAMLFile(fullName);
        if (success)
        {
            foreach (string guid in emittor.mGuidList)
            {
                string name = AssetDatabase.GUIDToAssetPath(guid);
                string extName = Path.GetExtension(name).ToLower();
                int analyzeType = ResourceUnit.GetAnalyzeType(extName);

                mResourceRedundanceMgr.ProcessResource(analyzeType, name, res);
            }
        }
        else
        {
            Debug.LogError("Failed to parse " + fullName);
        }


    }


}

