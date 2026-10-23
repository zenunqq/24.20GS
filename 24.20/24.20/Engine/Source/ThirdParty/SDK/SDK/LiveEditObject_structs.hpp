#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FLiveEditObjectTestStruct final
{
public:
	bool                                          Bool;
	int8                                          Int8;
	int16                                         Int16;
	int32                                         int32_0;
	int64                                         Int64;
	float                                         float_0;
	uint8                                         Pad_14[0x4];
	double                                        Double;
	class FString                                 String;
	class FText                                   Text;
	class FName                                   Name;
	uint8                                         Pad_4C[0x4];
	class UObject*                                RawObjectPtr;
	class UObject*                                ObjectPtr;
	struct FSoftObjectPath                        SoftObjectPath;
	struct FVector2D                              Struct;
	int32                                         FixedArray[0x4];
	TArray<int32>                                 DynamicArray;
	TSet<int32>                                   Set;
	TMap<int32, int32>                            Map;
};
static_assert(alignof(FLiveEditObjectTestStruct) == 0x000008, "Wrong alignment on FLiveEditObjectTestStruct");
static_assert(sizeof(FLiveEditObjectTestStruct) == 0x000148, "Wrong size on FLiveEditObjectTestStruct");
static_assert(offsetof(FLiveEditObjectTestStruct, Bool) == 0x000000, "Member 'FLiveEditObjectTestStruct::Bool' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Int8) == 0x000001, "Member 'FLiveEditObjectTestStruct::Int8' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Int16) == 0x000002, "Member 'FLiveEditObjectTestStruct::Int16' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, int32_0) == 0x000004, "Member 'FLiveEditObjectTestStruct::int32_0' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Int64) == 0x000008, "Member 'FLiveEditObjectTestStruct::Int64' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, float_0) == 0x000010, "Member 'FLiveEditObjectTestStruct::float_0' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Double) == 0x000018, "Member 'FLiveEditObjectTestStruct::Double' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, String) == 0x000020, "Member 'FLiveEditObjectTestStruct::String' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Text) == 0x000030, "Member 'FLiveEditObjectTestStruct::Text' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Name) == 0x000048, "Member 'FLiveEditObjectTestStruct::Name' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, RawObjectPtr) == 0x000050, "Member 'FLiveEditObjectTestStruct::RawObjectPtr' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, ObjectPtr) == 0x000058, "Member 'FLiveEditObjectTestStruct::ObjectPtr' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, SoftObjectPath) == 0x000060, "Member 'FLiveEditObjectTestStruct::SoftObjectPath' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Struct) == 0x000078, "Member 'FLiveEditObjectTestStruct::Struct' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, FixedArray) == 0x000088, "Member 'FLiveEditObjectTestStruct::FixedArray' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, DynamicArray) == 0x000098, "Member 'FLiveEditObjectTestStruct::DynamicArray' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Set) == 0x0000A8, "Member 'FLiveEditObjectTestStruct::Set' has a wrong offset!");
static_assert(offsetof(FLiveEditObjectTestStruct, Map) == 0x0000F8, "Member 'FLiveEditObjectTestStruct::Map' has a wrong offset!");

}
