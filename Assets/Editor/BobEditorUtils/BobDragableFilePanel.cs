using UnityEngine;
using System.Collections;
using UnityEditor;
using System.Collections.Generic;

public class BobDragableFilePanel{
    /// <summary>
    /// 文件过滤关键字
    /// </summary>
    public string mfilterStr = "";
    public virtual void OnGUI()
    {
        if (Event.current.type == EventType.DragUpdated)
        {
            DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
        }
        else if (Event.current.type == EventType.DragPerform)
        {
            DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
            OnDragPerform(DragAndDrop.paths);
        }
        else
        {
            ListFiles();
        }
    }


    protected virtual void OnDragPerform(string[] paths)
    {
    }
    protected virtual void ListFiles()
    {
    }
}
