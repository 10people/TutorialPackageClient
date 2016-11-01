#pragma once
#include <stdint.h>
// System.IFormatProvider
struct IFormatProvider_t1076;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t6305;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t6306;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t6307;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t1080;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t6308;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t6309;
// LitJson.JsonWriter
struct JsonWriter_t6286;
// LitJson.WrapperFactory
struct WrapperFactory_t6302;
// LitJson.ExporterFunc
struct ExporterFunc_t6298;
// LitJson.ImporterFunc
struct ImporterFunc_t6300;
// System.Object
#include "mscorlib_System_Object.h"
// LitJson.JsonMapper
struct JsonMapper_t1030  : public Object_t
{
};
struct JsonMapper_t1030_StaticFields{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	Object_t * ___datetime_format;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	Object_t* ___base_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	Object_t* ___custom_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	Object_t* ___base_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	Object_t* ___custom_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	Object_t* ___array_metadata;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	Object_t * ___array_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	Object_t* ___conv_ops;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	Object_t * ___conv_ops_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	Object_t* ___object_metadata;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	Object_t * ___object_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	Object_t* ___type_properties;
	// System.Object LitJson.JsonMapper::type_properties_lock
	Object_t * ___type_properties_lock;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t6286 * ___static_writer;
	// System.Object LitJson.JsonMapper::static_writer_lock
	Object_t * ___static_writer_lock;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache10
	WrapperFactory_t6302 * ___U3CU3Ef__am$cache10;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache11
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache11;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache12
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache12;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache13
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache13;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache14
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache14;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache15
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache16
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache17
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache18
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache19
	ExporterFunc_t6298 * ___U3CU3Ef__am$cache19;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1A
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1A;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1B
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1B;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1C
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1C;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1D
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1D;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1E
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1E;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1F
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache1F;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache20
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache20;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache21
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache21;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache22
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache22;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache23
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache23;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache24
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache24;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache25
	ImporterFunc_t6300 * ___U3CU3Ef__am$cache25;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache26
	WrapperFactory_t6302 * ___U3CU3Ef__am$cache26;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache27
	WrapperFactory_t6302 * ___U3CU3Ef__am$cache27;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache28
	WrapperFactory_t6302 * ___U3CU3Ef__am$cache28;
};
