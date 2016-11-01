#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_DamageBoardType
struct Tab_DamageBoardType_t425;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_DamageBoardType::.ctor()
 void Tab_DamageBoardType__ctor_m1912 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_DamageBoardType::GetInstanceFile()
 String_t* Tab_DamageBoardType_GetInstanceFile_m1913 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_AccelerationX()
 float Tab_DamageBoardType_get_AccelerationX_m1914 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_AccelerationY()
 float Tab_DamageBoardType_get_AccelerationY_m1915 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_DamageBoardType::get_DamageBoardTypeID()
 int32_t Tab_DamageBoardType_get_DamageBoardTypeID_m1916 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_FadeTime()
 float Tab_DamageBoardType_get_FadeTime_m1917 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_DamageBoardType::get_MaxNum()
 int32_t Tab_DamageBoardType_get_MaxNum_m1918 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_OriginX()
 float Tab_DamageBoardType_get_OriginX_m1919 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_OriginY()
 float Tab_DamageBoardType_get_OriginY_m1920 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_DamageBoardType::get_OutlineColor()
 String_t* Tab_DamageBoardType_get_OutlineColor_m1921 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_ScaleDelayTime()
 float Tab_DamageBoardType_get_ScaleDelayTime_m1922 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_ScaleMinusTime()
 float Tab_DamageBoardType_get_ScaleMinusTime_m1923 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_ScalePlusTime()
 float Tab_DamageBoardType_get_ScalePlusTime_m1924 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_ShowTime()
 float Tab_DamageBoardType_get_ShowTime_m1925 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_DamageBoardType::get_TextColor()
 String_t* Tab_DamageBoardType_get_TextColor_m1926 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_TextSize()
 float Tab_DamageBoardType_get_TextSize_m1927 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_TextSizeMax()
 float Tab_DamageBoardType_get_TextSizeMax_m1928 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_TextSizeOver()
 float Tab_DamageBoardType_get_TextSizeOver_m1929 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_VelocityX()
 float Tab_DamageBoardType_get_VelocityX_m1930 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_DamageBoardType::get_VelocityY()
 float Tab_DamageBoardType_get_VelocityY_m1931 (Tab_DamageBoardType_t425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_DamageBoardType::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_DamageBoardType_LoadTable_m1932 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_DamageBoardType::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_DamageBoardType_SerializableTable_m1933 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
