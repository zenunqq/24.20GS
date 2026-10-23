#pragma once

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "StructUtilsEngine_structs.hpp"

namespace SDK::Params
{

struct StructUtilsFunctionLibrary_EqualEqual_InstancedStruct final
{
public:
	struct FInstancedStruct                       A;
	struct FInstancedStruct                       B;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_EqualEqual_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct) == 0x000028, "Wrong size on StructUtilsFunctionLibrary_EqualEqual_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, A) == 0x000000, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::A' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, B) == 0x000010, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::B' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, ReturnValue) == 0x000020, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::ReturnValue' has a wrong offset!");

struct StructUtilsFunctionLibrary_GetInstancedStructValue final
{
public:
	EStructUtilsResult                            ExecResult;
	uint8                                         Pad_1[0x7];
	struct FInstancedStruct                       InstancedStruct;
	int32                                         Value;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(StructUtilsFunctionLibrary_GetInstancedStructValue) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_GetInstancedStructValue");
static_assert(sizeof(StructUtilsFunctionLibrary_GetInstancedStructValue) == 0x000020, "Wrong size on StructUtilsFunctionLibrary_GetInstancedStructValue");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, ExecResult) == 0x000000, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::ExecResult' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, InstancedStruct) == 0x000008, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, Value) == 0x000018, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::Value' has a wrong offset!");

struct StructUtilsFunctionLibrary_IsInstancedStructValid final
{
public:
	struct FInstancedStruct                       InstancedStruct;
	EStructUtilsResult                            ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(StructUtilsFunctionLibrary_IsInstancedStructValid) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_IsInstancedStructValid");
static_assert(sizeof(StructUtilsFunctionLibrary_IsInstancedStructValid) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_IsInstancedStructValid");
static_assert(offsetof(StructUtilsFunctionLibrary_IsInstancedStructValid, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_IsInstancedStructValid::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_IsInstancedStructValid, ReturnValue) == 0x000010, "Member 'StructUtilsFunctionLibrary_IsInstancedStructValid::ReturnValue' has a wrong offset!");

struct StructUtilsFunctionLibrary_IsValid_InstancedStruct final
{
public:
	struct FInstancedStruct                       InstancedStruct;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(StructUtilsFunctionLibrary_IsValid_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_IsValid_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_IsValid_InstancedStruct) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_IsValid_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_IsValid_InstancedStruct, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_IsValid_InstancedStruct::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_IsValid_InstancedStruct, ReturnValue) == 0x000010, "Member 'StructUtilsFunctionLibrary_IsValid_InstancedStruct::ReturnValue' has a wrong offset!");

struct StructUtilsFunctionLibrary_MakeInstancedStruct final
{
public:
	int32                                         Value;
	uint8                                         Pad_4[0x4];
	struct FInstancedStruct                       ReturnValue;
};
static_assert(alignof(StructUtilsFunctionLibrary_MakeInstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_MakeInstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_MakeInstancedStruct) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_MakeInstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_MakeInstancedStruct, Value) == 0x000000, "Member 'StructUtilsFunctionLibrary_MakeInstancedStruct::Value' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_MakeInstancedStruct, ReturnValue) == 0x000008, "Member 'StructUtilsFunctionLibrary_MakeInstancedStruct::ReturnValue' has a wrong offset!");

struct StructUtilsFunctionLibrary_NotEqual_InstancedStruct final
{
public:
	struct FInstancedStruct                       A;
	struct FInstancedStruct                       B;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_NotEqual_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct) == 0x000028, "Wrong size on StructUtilsFunctionLibrary_NotEqual_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, A) == 0x000000, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::A' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, B) == 0x000010, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::B' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, ReturnValue) == 0x000020, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::ReturnValue' has a wrong offset!");

struct StructUtilsFunctionLibrary_Reset final
{
public:
	struct FInstancedStruct                       InstancedStruct;
	const class UScriptStruct*                    StructType;
};
static_assert(alignof(StructUtilsFunctionLibrary_Reset) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_Reset");
static_assert(sizeof(StructUtilsFunctionLibrary_Reset) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_Reset");
static_assert(offsetof(StructUtilsFunctionLibrary_Reset, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_Reset::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_Reset, StructType) == 0x000010, "Member 'StructUtilsFunctionLibrary_Reset::StructType' has a wrong offset!");

struct StructUtilsFunctionLibrary_SetInstancedStructValue final
{
public:
	struct FInstancedStruct                       InstancedStruct;
	int32                                         Value;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(StructUtilsFunctionLibrary_SetInstancedStructValue) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_SetInstancedStructValue");
static_assert(sizeof(StructUtilsFunctionLibrary_SetInstancedStructValue) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_SetInstancedStructValue");
static_assert(offsetof(StructUtilsFunctionLibrary_SetInstancedStructValue, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_SetInstancedStructValue::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_SetInstancedStructValue, Value) == 0x000010, "Member 'StructUtilsFunctionLibrary_SetInstancedStructValue::Value' has a wrong offset!");

}
