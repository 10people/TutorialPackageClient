/********************************************************************
	filename:	MasterPreviewList.cs
	date:		2014-5-7  17-14
	author:		tangyi
	purpose:	全服师门预览列表
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;

public class MasterPreviewList
{
    public MasterPreviewList()
    {
        CleanUp();
    }

    public void CleanUp()
    {
        if (null == m_MasterInfoList)
        {
            m_MasterInfoList = new List<MasterPreviewInfo>();
        }
        m_MasterInfoList.Clear();
    }

    private List<MasterPreviewInfo> m_MasterInfoList = new List<MasterPreviewInfo>();
    public List<MasterPreviewInfo> MasterInfoList
    {
        get { return m_MasterInfoList; }
    }

    public void UpdateData(GC_MASTER_RET_LIST list)
    {
        m_MasterInfoList.Clear();

		SortedDictionary<int,MasterPreviewInfo> tempList = new SortedDictionary<int, MasterPreviewInfo> (new MySort());

		// 按照师门薪火排序
        for (int i = 0; i < list.masterGuidCount; ++i)
        {
            MasterPreviewInfo info = new MasterPreviewInfo();
            info.MasterGuid = list.GetMasterGuid(i);
            if (info.MasterGuid == GlobeVar.INVALID_GUID)
            {
                continue;
            }

            if (list.masterNameCount > i)
            {
                info.MasterName = list.GetMasterName(i);
            }

            if (list.masterTorchCount > i)
            {
                info.MasterTorch = list.GetMasterTorch(i);
            }

            if (list.masterChiefNameCount > i)
            {
                info.MasterChiefName = list.GetMasterChiefName(i);
            }

            if (list.memberNumCount > i)
            {
                info.MasterCurMemberNum = list.GetMemberNum(i);
            }

            if (list.createTimeCount > i)
            {
                info.MasterCreateTime = list.GetCreateTime(i);
            }

            if (list.skillID1Count > i)
            {
                info.MasterSkillId1 = list.GetSkillID1(i);
            }
            if (list.skillID2Count > i)
            {
                info.MasterSkillId2 = list.GetSkillID2(i);
            }
            if (list.skillID3Count > i)
            {
                info.MasterSkillId3 = list.GetSkillID3(i);
            }
            if (list.skillID4Count > i)
            {
                info.MasterSkillId4 = list.GetSkillID4(i);
            }

            //合法则添加
			//int repeatedTorchCount = 1;
            if (info.IsValid())
            {
				if(tempList.ContainsKey(-info.MasterTorch))
				{
					continue;
				}
				else
				{
					doAddTorchToSortedList(-info.MasterTorch,info,tempList);
				}
            }
        }

		foreach (var item in tempList)
		{
			m_MasterInfoList.Add(item.Value);
		}

    }

	void doAddTorchToSortedList(int key,MasterPreviewInfo value,SortedDictionary<int,MasterPreviewInfo> list)
	{
		list.Add (key,value);
	}
}
