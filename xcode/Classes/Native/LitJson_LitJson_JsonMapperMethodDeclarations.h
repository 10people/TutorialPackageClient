#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonMapper
struct JsonMapper_t1030;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Object
struct Object_t;
// LitJson.JsonReader
struct JsonReader_t6310;
// LitJson.IJsonWrapper
struct IJsonWrapper_t6290;
// LitJson.WrapperFactory
struct WrapperFactory_t6302;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t6306;
// LitJson.ImporterFunc
struct ImporterFunc_t6300;
// LitJson.JsonWriter
struct JsonWriter_t6286;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t1031;
// System.IO.TextReader
struct TextReader_t1019;

// System.Void LitJson.JsonMapper::.ctor()
 void JsonMapper__ctor_m44311 (JsonMapper_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.cctor()
 void JsonMapper__cctor_m44312 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
 void JsonMapper_AddArrayMetadata_m44313 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
 void JsonMapper_AddObjectMetadata_m44314 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
 void JsonMapper_AddTypeProperties_m44315 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
 MethodInfo_t1087 * JsonMapper_GetConvOp_m44316 (Object_t * __this/* static, unused */, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
 Object_t * JsonMapper_ReadValue_m44317 (Object_t * __this/* static, unused */, Type_t * ___inst_type, JsonReader_t6310 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
 Object_t * JsonMapper_ReadValue_m44318 (Object_t * __this/* static, unused */, WrapperFactory_t6302 * ___factory, JsonReader_t6310 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
 void JsonMapper_ReadSkip_m44319 (Object_t * __this/* static, unused */, JsonReader_t6310 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
 void JsonMapper_RegisterBaseExporters_m44320 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
 void JsonMapper_RegisterBaseImporters_m44321 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
 void JsonMapper_RegisterImporter_m44322 (Object_t * __this/* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t6300 * ___importer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
 void JsonMapper_WriteValue_m44323 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, bool ___writer_is_private, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
 String_t* JsonMapper_ToJson_m44324 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
 void JsonMapper_ToJson_m44325 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
 JsonData_t1031 * JsonMapper_ToObject_m44326 (Object_t * __this/* static, unused */, JsonReader_t6310 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
 JsonData_t1031 * JsonMapper_ToObject_m44327 (Object_t * __this/* static, unused */, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
 JsonData_t1031 * JsonMapper_ToObject_m6510 (Object_t * __this/* static, unused */, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
 Object_t * JsonMapper_ToWrapper_m44328 (Object_t * __this/* static, unused */, WrapperFactory_t6302 * ___factory, JsonReader_t6310 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
 Object_t * JsonMapper_ToWrapper_m44329 (Object_t * __this/* static, unused */, WrapperFactory_t6302 * ___factory, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
 void JsonMapper_UnregisterExporters_m44330 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
 void JsonMapper_UnregisterImporters_m44331 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>m__0()
 Object_t * JsonMapper_U3CReadSkipU3Em__0_m44332 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__1_m44333 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__2_m44334 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__3_m44335 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__4_m44336 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__5_m44337 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__6_m44338 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__7_m44339 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__8_m44340 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__9_m44341 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m44342 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m44343 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m44344 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m44345 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m44346 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m44347 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m44348 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m44349 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m44350 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m44351 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m44352 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m44353 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__16()
 Object_t * JsonMapper_U3CToObjectU3Em__16_m44354 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
 Object_t * JsonMapper_U3CToObjectU3Em__17_m44355 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
 Object_t * JsonMapper_U3CToObjectU3Em__18_m44356 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
