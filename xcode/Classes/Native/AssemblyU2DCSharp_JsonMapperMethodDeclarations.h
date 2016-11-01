#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JsonMapper
struct JsonMapper_t1086;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Object
struct Object_t;
// JsonReader
struct JsonReader_t1088;
// IJsonWrapper
struct IJsonWrapper_t1063;
// WrapperFactory
struct WrapperFactory_t1085;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>
struct IDictionary_2_t1078;
// ImporterFunc
struct ImporterFunc_t1084;
// JsonWriter
struct JsonWriter_t1060;
// System.String
struct String_t;
// JsonData
struct JsonData_t1057;
// System.IO.TextReader
struct TextReader_t1019;

// System.Void JsonMapper::.ctor()
 void JsonMapper__ctor_m6760 (JsonMapper_t1086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::.cctor()
 void JsonMapper__cctor_m6761 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::AddArrayMetadata(System.Type)
 void JsonMapper_AddArrayMetadata_m6762 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::AddObjectMetadata(System.Type)
 void JsonMapper_AddObjectMetadata_m6763 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::AddTypeProperties(System.Type)
 void JsonMapper_AddTypeProperties_m6764 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo JsonMapper::GetConvOp(System.Type,System.Type)
 MethodInfo_t1087 * JsonMapper_GetConvOp_m6765 (Object_t * __this/* static, unused */, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::ReadValue(System.Type,JsonReader)
 Object_t * JsonMapper_ReadValue_m6766 (Object_t * __this/* static, unused */, Type_t * ___inst_type, JsonReader_t1088 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::ReadValue(WrapperFactory,JsonReader)
 Object_t * JsonMapper_ReadValue_m6767 (Object_t * __this/* static, unused */, WrapperFactory_t1085 * ___factory, JsonReader_t1088 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::RegisterBaseExporters()
 void JsonMapper_RegisterBaseExporters_m6768 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::RegisterBaseImporters()
 void JsonMapper_RegisterBaseImporters_m6769 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>,System.Type,System.Type,ImporterFunc)
 void JsonMapper_RegisterImporter_m6770 (Object_t * __this/* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t1084 * ___importer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::WriteValue(System.Object,JsonWriter,System.Boolean,System.Int32)
 void JsonMapper_WriteValue_m6771 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, bool ___writer_is_private, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonMapper::ToJson(System.Object)
 String_t* JsonMapper_ToJson_m6772 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::ToJson(System.Object,JsonWriter)
 void JsonMapper_ToJson_m6773 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonMapper::ToObject(JsonReader)
 JsonData_t1057 * JsonMapper_ToObject_m6774 (Object_t * __this/* static, unused */, JsonReader_t1088 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonMapper::ToObject(System.IO.TextReader)
 JsonData_t1057 * JsonMapper_ToObject_m6775 (Object_t * __this/* static, unused */, TextReader_t1019 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonMapper::ToObject(System.String)
 JsonData_t1057 * JsonMapper_ToObject_m6776 (Object_t * __this/* static, unused */, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::ToWrapper(WrapperFactory,JsonReader)
 Object_t * JsonMapper_ToWrapper_m6777 (Object_t * __this/* static, unused */, WrapperFactory_t1085 * ___factory, JsonReader_t1088 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::ToWrapper(WrapperFactory,System.String)
 Object_t * JsonMapper_ToWrapper_m6778 (Object_t * __this/* static, unused */, WrapperFactory_t1085 * ___factory, String_t* ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::UnregisterExporters()
 void JsonMapper_UnregisterExporters_m6779 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::UnregisterImporters()
 void JsonMapper_UnregisterImporters_m6780 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__0(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__0_m6781 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__1(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__1_m6782 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__2(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__2_m6783 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__3(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__3_m6784 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__4(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__4_m6785 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__5(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__5_m6786 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__6(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__6_m6787 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__7(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__7_m6788 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonMapper::<RegisterBaseExporters>m__8(System.Object,JsonWriter)
 void JsonMapper_U3CRegisterBaseExportersU3Em__8_m6789 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__9(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__9_m6790 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__A(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m6791 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__B(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m6792 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__C(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m6793 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__D(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m6794 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__E(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m6795 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__F(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m6796 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__10(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m6797 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__11(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m6798 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__12(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m6799 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__13(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m6800 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonMapper::<RegisterBaseImporters>m__14(System.Object)
 Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m6801 (Object_t * __this/* static, unused */, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::<ToObject>m__15()
 Object_t * JsonMapper_U3CToObjectU3Em__15_m6802 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::<ToObject>m__16()
 Object_t * JsonMapper_U3CToObjectU3Em__16_m6803 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper JsonMapper::<ToObject>m__17()
 Object_t * JsonMapper_U3CToObjectU3Em__17_m6804 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
