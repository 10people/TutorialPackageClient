#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RestaurantData
struct RestaurantData_t4964;
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825;
// GC_RESTAURANT_UPDATE
struct GC_RESTAURANT_UPDATE_t3282;
// GC_RESTAURANT_DESTUPDATE
struct GC_RESTAURANT_DESTUPDATE_t3283;
// GC_RESTAURANT_LEVELUPDATE
struct GC_RESTAURANT_LEVELUPDATE_t3284;

// System.Void RestaurantData::.ctor()
 void RestaurantData__ctor_m35572 (RestaurantData_t4964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::.cctor()
 void RestaurantData__cctor_m35573 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::UpdateRestaurantInfo(RestaurantData/RestaurantInfo,GC_RESTAURANT_UPDATE)
 void RestaurantData_UpdateRestaurantInfo_m35574 (Object_t * __this/* static, unused */, RestaurantInfo_t1825 * ___curRestaurant, GC_RESTAURANT_UPDATE_t3282 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::UpdateDeskInfo(RestaurantData/RestaurantInfo,GC_RESTAURANT_DESTUPDATE)
 void RestaurantData_UpdateDeskInfo_m35575 (Object_t * __this/* static, unused */, RestaurantInfo_t1825 * ___curRestaurant, GC_RESTAURANT_DESTUPDATE_t3283 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::UpdatePlayerData(GC_RESTAURANT_UPDATE)
 void RestaurantData_UpdatePlayerData_m35576 (Object_t * __this/* static, unused */, GC_RESTAURANT_UPDATE_t3282 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::UpdatePlayerDeskData(GC_RESTAURANT_DESTUPDATE)
 void RestaurantData_UpdatePlayerDeskData_m35577 (Object_t * __this/* static, unused */, GC_RESTAURANT_DESTUPDATE_t3283 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::UpdateRestaurantLevel(GC_RESTAURANT_LEVELUPDATE)
 void RestaurantData_UpdateRestaurantLevel_m35578 (Object_t * __this/* static, unused */, GC_RESTAURANT_LEVELUPDATE_t3284 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData::CleanRestaurantTip()
 void RestaurantData_CleanRestaurantTip_m35579 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
