using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using GCGame.Table;
using Games.Events;
using Games.LogicObj;
using Games.GlobeDefine;
using Module.Log;
using Games.UserCommonData;
using Games.DailyMissionData;

namespace Games.FlyWing
{
	public struct FlyWingProperty
	{
		public int m_propertyId ;
		public int m_propertyVlue ;
		public FlyWingProperty(int id ,int vlue )
		{
			m_propertyId = id;
			m_propertyVlue = vlue;
		}
	
		public bool isEquip( FlyWingProperty property)
		{
			if (m_propertyId == property.m_propertyId)
				return true;

			return false;
		}
	}
	public class FlyWingData
	{
		public FlyWingData()
		{
			_clearData ();
		}

		private int m_FlyWingId ;
		public int  FlyWingId 
		{
			set{  m_FlyWingId = value ;}
			get { return m_FlyWingId ;}
		}

		private  List<FlyWingProperty> m_FlyWingPropertyList = new List<FlyWingProperty> () ;
		public List<FlyWingProperty> FlyWingPropertyList
		{
			get { return m_FlyWingPropertyList; }
			set { m_FlyWingPropertyList = value; }
		}

		private void _clearData()
		{
			m_FlyWingPropertyList.Clear ();
			m_FlyWingId = -1;
		}
		public void InitFlyWingData(int id )
		{
			m_FlyWingId = id;
			_reCalAbsortProperty();
		}

		// 重新计算附加属性
		private void _reCalAbsortProperty()
		{
			if (m_FlyWingId == -1)
				return;

			Tab_FlyWing flyWingTable = TableManager.GetFlyWingByID(m_FlyWingId, 0);
			if (flyWingTable == null)
				return;

			m_FlyWingPropertyList.Clear ();
			int nMaxRecordCount = TableManager.GetFlyWing ().Count ();
			for( int i = 0 ; i < nMaxRecordCount; ++i )
			{
				Tab_FlyWing temFlyWingTab = TableManager.GetFlyWingByID(i, 0);
				if( temFlyWingTab == null)
				{
					LogModule.DebugLog("Tab_FlyWing Not Find" + i);
					continue;
				}

				if( ( flyWingTable.ID == temFlyWingTab.ID && flyWingTable.LEVEL >= temFlyWingTab.LEVEL  )  ||
				   ( flyWingTable.ID == temFlyWingTab.ID && flyWingTable.LEVEL == temFlyWingTab.LEVEL && flyWingTable.ABSORBNUM >= temFlyWingTab.ABSORBNUM  )
				    )
				{
					if( temFlyWingTab.ABSORBID == -1 || temFlyWingTab.ABSORBVLUE == -1)
						continue ;
				
					if ( m_FlyWingPropertyList.Count <= 0)
					{
						FlyWingProperty temFlyWingProperty = new FlyWingProperty(temFlyWingTab.ABSORBID,temFlyWingTab.ABSORBVLUE);
						m_FlyWingPropertyList.Add(temFlyWingProperty);
					}

					else
					{

						bool isFind = false ;
						for( int j = 0 ;j < m_FlyWingPropertyList.Count ; ++j)
						{
							if ( m_FlyWingPropertyList[j].m_propertyId ==  temFlyWingTab.ABSORBID)
							{
								isFind = true ;
								FlyWingProperty tem = m_FlyWingPropertyList[j] ;
								tem.m_propertyVlue += temFlyWingTab.ABSORBVLUE ;
								break ;
							}
						}
						if( !isFind)
						{
							FlyWingProperty temFlyWingProperty = new FlyWingProperty(temFlyWingTab.ABSORBID,temFlyWingTab.ABSORBVLUE);
							m_FlyWingPropertyList.Add(temFlyWingProperty);
						}
					}
				}
			}
		}
	}

	public class FlyWingMananger
	{
		// 所有可以幻化的翅膀
		private List<int> m_DreamFlyWingData = new  List<int>();
		// 所有获得的翅膀
		private Dictionary<int,FlyWingData> m_FlyWingDataDictionary = new Dictionary<int,FlyWingData> () ;
		// 当前装备的翅膀
        private int m_CurEquipFlyWingId = GlobeVar.INVALID_ID; 
        public int CurEquipFlyWingId
        {
            get { return m_CurEquipFlyWingId; }
        }
		// 当前幻化的翅膀
		private int m_CurDreamFlyWingId = GlobeVar.INVALID_ID ;
        public int CurDreamFlyWingId
        {
            get { return m_CurDreamFlyWingId; }
        }
		// 当前是否显示
		private bool m_IsShowFlyWing = true ;
		public bool IsShowFlyWing
		{
			set {
				m_IsShowFlyWing = value ;
				_onChangeShowHide();
			}
			get {return m_IsShowFlyWing ;}
		}
		// 获得
		public void addFlyWingData(int id )
		{
			if( m_FlyWingDataDictionary.ContainsKey(id))
			{
				LogModule.DebugLog("addFlyWingData falid ,Already have ~~",id);
				return ;
			}

			FlyWingData flyWingData =new FlyWingData() ;
			flyWingData.InitFlyWingData (id);
			m_FlyWingDataDictionary.Add (id,flyWingData);
	
		}
		// 获得幻化的翅膀
		public void addDreamFlyWingData(int dreamFlyWingId)
		{
			if( m_DreamFlyWingData.Contains(dreamFlyWingId))
			{
				LogModule.DebugLog("addDreamFlyWingData falid ,Already have ~~",dreamFlyWingId);
				return ;
			}
			m_DreamFlyWingData.Add (dreamFlyWingId);
		}

        // 失去某个id幻化的翅膀
        public void delDreamFlyWingData(int dreamFlyWingId)
        {
            if (m_DreamFlyWingData.Contains(dreamFlyWingId))
            {
                m_DreamFlyWingData.Remove(dreamFlyWingId);
            }
        }

		// 吸收
		public void AbsortFlyWingData(int oldId,int newId)
		{
			_onChangeFlyWingData (oldId, newId);
		}
		// 近阶
		public void AdvanceFlyWing(int oldId,int newId)
		{
			_onChangeFlyWingData (oldId, newId);
		}
		// 装备翅膀
		public void EquipFlyWing( int id)
		{
			m_CurEquipFlyWingId = id;
			m_IsShowFlyWing = true;
            
			Obj_MainPlayer user = Singleton<ObjManager>.GetInstance().MainPlayer;
			if (user != null) 
			{
				ReLoadFlyWing();
			}

            if (FlyWingRoot.Instance() != null)
            {
                FlyWingRoot.Instance().showEquipBtn(id);
                FlyWingRoot.Instance().updateShowHide(m_IsShowFlyWing);
            }

		}
		// 卸下 翅膀
		public void CanceEquipFlyWing()
		{
			Obj_MainPlayer user = Singleton<ObjManager>.GetInstance().MainPlayer;
			if (user == null)
				return;
			
			m_CurEquipFlyWingId = -1;
			user.CancelEquipFlyWing ();

            if (FlyWingRoot.Instance() != null)
                FlyWingRoot.Instance().showEquipBtn(GlobeVar.INVALID_ID);

		}
		// 显示隐藏  翅膀
		public void ShowHideFlyWing(bool isShowHide)
		{
			Obj_MainPlayer user = Singleton<ObjManager>.GetInstance ().MainPlayer;

			if(isShowHide)
			{
				// 显示幻化的
				if( m_CurDreamFlyWingId != -1)
				{
					if( user != null)
						user.ShowHideFlyWing (m_CurDreamFlyWingId,isShowHide);
				}
				else
				{
					// 当前装备的
					if( user != null)
						user.ShowHideFlyWing (m_CurEquipFlyWingId,isShowHide);
				}
				m_IsShowFlyWing = true ;
			}

			else
			{
				if( user != null)
					user.ShowHideFlyWing(-1,false);
				m_IsShowFlyWing = false ;
			}
		}
		// 幻化翅膀
		public void DreamFlyWing(int id)
		{
			if(!m_DreamFlyWingData.Contains(id))
			{
				LogModule.DebugLog("DreamFlyWing falid ,Not have ~~",id);
				return ;
			}

			m_CurDreamFlyWingId = id;

            ReLoadFlyWing();

            if (FlyWingRoot.Instance())
                FlyWingRoot.Instance().showDreamBtn();
		}

        // 取消幻化
        public void CancelDreamFlyWing()
        {
            m_CurDreamFlyWingId = -1;

            ReLoadFlyWing();

            if (FlyWingRoot.Instance())
                FlyWingRoot.Instance().showDreamBtn();
        }

		// 重新加载翅膀
		public void ReLoadFlyWing()
		{
			if (m_IsShowFlyWing)
				ShowHideFlyWing (true);
			else
				ShowHideFlyWing (false);
		}
        
        // 重置所有翅膀信息
        public void CleanAllFlyWingData()
        {
            m_DreamFlyWingData.Clear();
            m_FlyWingDataDictionary.Clear();
            m_CurEquipFlyWingId = GlobeVar.INVALID_ID; 
            m_CurDreamFlyWingId = GlobeVar.INVALID_ID;
            m_IsShowFlyWing = true;

            ReLoadFlyWing();
        }
		//==================================
        public Dictionary<int, FlyWingData>  GetFlyWingDataDictionary()
        {
            return m_FlyWingDataDictionary;
        }

        public List<int> GetDreamFlyWingData()
        {
            return m_DreamFlyWingData ;
        }
        //==================================
		private void  _onChangeFlyWingData(int oldId,int newId)
		{
			if (m_FlyWingDataDictionary.ContainsKey (oldId)) 
			{
				m_FlyWingDataDictionary.Remove(oldId);
				FlyWingData temFlyWingData = new FlyWingData() ;
				temFlyWingData.InitFlyWingData(newId);
				m_FlyWingDataDictionary.Add(newId,temFlyWingData);

                if (m_CurEquipFlyWingId == oldId)
                    m_CurEquipFlyWingId = newId;
				// 重新计算所有属性
				_onCaluAllPlayerProperty();

                if (FlyWingRoot.Instance())
                    FlyWingRoot.Instance().UpdataFlyWingDataById(oldId, newId);
			}
			else
				LogModule.DebugLog("addFlyWingData falid ,Not have ~~",oldId);
		}
		private void _onCaluAllPlayerProperty()
		{

		}
		private void _onChangeShowHide()
		{
			if (m_IsShowFlyWing)
			{

			} 
			else
			{

			}
		}
	}
}