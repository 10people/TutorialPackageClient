#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<BePowerData/BePowerListItemData>
struct List_1_t4849;
// BePowerData/ShowBePowerItemListDelegate
struct ShowBePowerItemListDelegate_t4847;
// System.Collections.Generic.List`1<BePowerData/BePowerUpData>
struct List_1_t4850;
// BePowerData/ShowBePowerLeftDelegate
struct ShowBePowerLeftDelegate_t4848;
// System.Object
#include "mscorlib_System_Object.h"
// BePowerData
struct BePowerData_t4851  : public Object_t
{
};
struct BePowerData_t4851_StaticFields{
	// System.Collections.Generic.List`1<BePowerData/BePowerListItemData> BePowerData::curDataList
	List_1_t4849 * ___curDataList;
	// BePowerData/ShowBePowerItemListDelegate BePowerData::delegateShowBePowerItemList
	ShowBePowerItemListDelegate_t4847 * ___delegateShowBePowerItemList;
	// System.Collections.Generic.List`1<BePowerData/BePowerUpData> BePowerData::curScoreList
	List_1_t4850 * ___curScoreList;
	// BePowerData/ShowBePowerLeftDelegate BePowerData::delegateShowBePowerLeft
	ShowBePowerLeftDelegate_t4848 * ___delegateShowBePowerLeft;
	// System.Int32 BePowerData::<curBePowerType>k__BackingField
	int32_t ___U3CcurBePowerTypeU3Ek__BackingField;
};
