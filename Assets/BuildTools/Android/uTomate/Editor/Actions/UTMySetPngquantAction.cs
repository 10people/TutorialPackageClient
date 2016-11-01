//
// Copyright (c) 2013 Ancient Light Studios
// All Rights Reserved
// 
// http://www.ancientlightstudios.com
//

using System;
using UnityEngine;
using UnityEditor;
using System.ComponentModel;
using System.Collections;
using System.Diagnostics;
using UDebug = UnityEngine.Debug;
using System.IO;

public class UTMySetPngquantAction : UTAction
{
	public override IEnumerator Execute (UTContext context)
	{
		string  finalout = context["pngquant"] as string;
		UDebug.Log("finalout = "+finalout);
				
		string directory=Directory.GetCurrentDirectory();	
		//UDebug.Log("directory = "+directory);
		Process process = new Process ();
		process.StartInfo.FileName = directory+"/Assets/BuildTools/Android/pngquant-windows/pngquant.exe";
		process.StartInfo.Arguments = "256 "+finalout+" --ext .png --force";
		process.StartInfo.UseShellExecute = false;
		
		process.StartInfo.WorkingDirectory = "";
		
		process.StartInfo.RedirectStandardOutput = true;
		process.StartInfo.RedirectStandardError = true;
		process.OutputDataReceived += (sender, argv) => UDebug.Log ("[Execute]" + argv.Data);
		process.ErrorDataReceived += (sender, argv) => UDebug.LogWarning ("[Execute]" + argv.Data);
		
		try {			
			process.Start ();
			process.BeginOutputReadLine ();
		} catch (Win32Exception e) {
			throw new UTFailBuildException ("Couldn't start process: " + e.Message, this);
		}		
		yield return "";
	}

	[MenuItem("Assets/Create/uTomate/MySetPngquant", false, 200)]
	public static void AddAction() {
		Create<UTMySetPngquantAction>();
	}
}

