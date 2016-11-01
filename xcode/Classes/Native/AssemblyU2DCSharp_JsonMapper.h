#pragma once
#include <stdint.h>
// System.IFormatProvider
struct IFormatProvider_t1076;
// System.Collections.Generic.IDictionary`2<System.Type,ExporterFunc>
struct IDictionary_2_t1077;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>
struct IDictionary_2_t1078;
// System.Collections.Generic.IDictionary`2<System.Type,ArrayMetadata>
struct IDictionary_2_t1079;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t1080;
// System.Collections.Generic.IDictionary`2<System.Type,ObjectMetadata>
struct IDictionary_2_t1081;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<PropertyMetadata>>
struct IDictionary_2_t1082;
// JsonWriter
struct JsonWriter_t1060;
// ExporterFunc
struct ExporterFunc_t1083;
// ImporterFunc
struct ImporterFunc_t1084;
// WrapperFactory
struct WrapperFactory_t1085;
// System.Object
#include "mscorlib_System_Object.h"
// JsonMapper
struct JsonMapper_t1086  : public Object_t
{
};
struct JsonMapper_t1086_StaticFields{
	// System.Int32 JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth;
	// System.IFormatProvider JsonMapper::datetime_format
	Object_t * ___datetime_format;
	// System.Collections.Generic.IDictionary`2<System.Type,ExporterFunc> JsonMapper::base_exporters_table
	Object_t* ___base_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,ExporterFunc> JsonMapper::custom_exporters_table
	Object_t* ___custom_exporters_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>> JsonMapper::base_importers_table
	Object_t* ___base_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>> JsonMapper::custom_importers_table
	Object_t* ___custom_importers_table;
	// System.Collections.Generic.IDictionary`2<System.Type,ArrayMetadata> JsonMapper::array_metadata
	Object_t* ___array_metadata;
	// System.Object JsonMapper::array_metadata_lock
	Object_t * ___array_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> JsonMapper::conv_ops
	Object_t* ___conv_ops;
	// System.Object JsonMapper::conv_ops_lock
	Object_t * ___conv_ops_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,ObjectMetadata> JsonMapper::object_metadata
	Object_t* ___object_metadata;
	// System.Object JsonMapper::object_metadata_lock
	Object_t * ___object_metadata_lock;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<PropertyMetadata>> JsonMapper::type_properties
	Object_t* ___type_properties;
	// System.Object JsonMapper::type_properties_lock
	Object_t * ___type_properties_lock;
	// JsonWriter JsonMapper::static_writer
	JsonWriter_t1060 * ___static_writer;
	// System.Object JsonMapper::static_writer_lock
	Object_t * ___static_writer_lock;
	// ExporterFunc JsonMapper::<>f__am$cache10
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache10;
	// ExporterFunc JsonMapper::<>f__am$cache11
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache11;
	// ExporterFunc JsonMapper::<>f__am$cache12
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache12;
	// ExporterFunc JsonMapper::<>f__am$cache13
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache13;
	// ExporterFunc JsonMapper::<>f__am$cache14
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache14;
	// ExporterFunc JsonMapper::<>f__am$cache15
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache15;
	// ExporterFunc JsonMapper::<>f__am$cache16
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache16;
	// ExporterFunc JsonMapper::<>f__am$cache17
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache17;
	// ExporterFunc JsonMapper::<>f__am$cache18
	ExporterFunc_t1083 * ___U3CU3Ef__am$cache18;
	// ImporterFunc JsonMapper::<>f__am$cache19
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache19;
	// ImporterFunc JsonMapper::<>f__am$cache1A
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1A;
	// ImporterFunc JsonMapper::<>f__am$cache1B
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1B;
	// ImporterFunc JsonMapper::<>f__am$cache1C
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1C;
	// ImporterFunc JsonMapper::<>f__am$cache1D
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1D;
	// ImporterFunc JsonMapper::<>f__am$cache1E
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1E;
	// ImporterFunc JsonMapper::<>f__am$cache1F
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache1F;
	// ImporterFunc JsonMapper::<>f__am$cache20
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache20;
	// ImporterFunc JsonMapper::<>f__am$cache21
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache21;
	// ImporterFunc JsonMapper::<>f__am$cache22
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache22;
	// ImporterFunc JsonMapper::<>f__am$cache23
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache23;
	// ImporterFunc JsonMapper::<>f__am$cache24
	ImporterFunc_t1084 * ___U3CU3Ef__am$cache24;
	// WrapperFactory JsonMapper::<>f__am$cache25
	WrapperFactory_t1085 * ___U3CU3Ef__am$cache25;
	// WrapperFactory JsonMapper::<>f__am$cache26
	WrapperFactory_t1085 * ___U3CU3Ef__am$cache26;
	// WrapperFactory JsonMapper::<>f__am$cache27
	WrapperFactory_t1085 * ___U3CU3Ef__am$cache27;
};
