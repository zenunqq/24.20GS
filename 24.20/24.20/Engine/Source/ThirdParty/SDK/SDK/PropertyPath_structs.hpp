#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPropertyPathTestEnum : uint8
{
	One                                      = 0,
	Two                                      = 1,
	Three                                    = 2,
	Four                                     = 3,
	EPropertyPathTestEnum_MAX                = 4,
};

struct FPropertyPathSegment final
{
public:
	class FName                                   Name;
	int32                                         ArrayIndex;
	class UStruct*                                Struct;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FPropertyPathSegment) == 0x000008, "Wrong alignment on FPropertyPathSegment");
static_assert(sizeof(FPropertyPathSegment) == 0x000020, "Wrong size on FPropertyPathSegment");
static_assert(offsetof(FPropertyPathSegment, Name) == 0x000000, "Member 'FPropertyPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, ArrayIndex) == 0x000004, "Member 'FPropertyPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x000008, "Member 'FPropertyPathSegment::Struct' has a wrong offset!");

struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>           Segments;
	uint8                                         Pad_10[0x8];
	class UFunction*                              CachedFunction;
	uint8                                         Pad_20[0x18];
};
static_assert(alignof(FCachedPropertyPath) == 0x000008, "Wrong alignment on FCachedPropertyPath");
static_assert(sizeof(FCachedPropertyPath) == 0x000038, "Wrong size on FCachedPropertyPath");
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x000000, "Member 'FCachedPropertyPath::Segments' has a wrong offset!");
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x000018, "Member 'FCachedPropertyPath::CachedFunction' has a wrong offset!");

struct FPropertyPathTestInnerStruct final
{
public:
	float                                         float_0;
	bool                                          Bool;
	EPropertyPathTestEnum                         EnumOne;
	EPropertyPathTestEnum                         EnumTwo;
	EPropertyPathTestEnum                         EnumThree;
	EPropertyPathTestEnum                         EnumFour;
	uint8                                         Pad_9[0x3];
	int32                                         Integer;
	class FString                                 String;
};
static_assert(alignof(FPropertyPathTestInnerStruct) == 0x000008, "Wrong alignment on FPropertyPathTestInnerStruct");
static_assert(sizeof(FPropertyPathTestInnerStruct) == 0x000020, "Wrong size on FPropertyPathTestInnerStruct");
static_assert(offsetof(FPropertyPathTestInnerStruct, float_0) == 0x000000, "Member 'FPropertyPathTestInnerStruct::float_0' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, Bool) == 0x000004, "Member 'FPropertyPathTestInnerStruct::Bool' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumOne) == 0x000005, "Member 'FPropertyPathTestInnerStruct::EnumOne' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumTwo) == 0x000006, "Member 'FPropertyPathTestInnerStruct::EnumTwo' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumThree) == 0x000007, "Member 'FPropertyPathTestInnerStruct::EnumThree' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumFour) == 0x000008, "Member 'FPropertyPathTestInnerStruct::EnumFour' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, Integer) == 0x00000C, "Member 'FPropertyPathTestInnerStruct::Integer' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestInnerStruct, String) == 0x000010, "Member 'FPropertyPathTestInnerStruct::String' has a wrong offset!");

struct FPropertyPathTestStruct final
{
public:
	bool                                          Bool;
	uint8                                         Pad_1[0x3];
	int32                                         Integer;
	EPropertyPathTestEnum                         EnumOne;
	EPropertyPathTestEnum                         EnumTwo;
	EPropertyPathTestEnum                         EnumThree;
	EPropertyPathTestEnum                         EnumFour;
	uint8                                         Pad_C[0x4];
	class FString                                 String;
	float                                         float_0;
	uint8                                         Pad_24[0x4];
	struct FPropertyPathTestInnerStruct           InnerStruct;
	class UPropertyPathTestObject*                InnerObject;
};
static_assert(alignof(FPropertyPathTestStruct) == 0x000008, "Wrong alignment on FPropertyPathTestStruct");
static_assert(sizeof(FPropertyPathTestStruct) == 0x000050, "Wrong size on FPropertyPathTestStruct");
static_assert(offsetof(FPropertyPathTestStruct, Bool) == 0x000000, "Member 'FPropertyPathTestStruct::Bool' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, Integer) == 0x000004, "Member 'FPropertyPathTestStruct::Integer' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumOne) == 0x000008, "Member 'FPropertyPathTestStruct::EnumOne' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumTwo) == 0x000009, "Member 'FPropertyPathTestStruct::EnumTwo' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumThree) == 0x00000A, "Member 'FPropertyPathTestStruct::EnumThree' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, EnumFour) == 0x00000B, "Member 'FPropertyPathTestStruct::EnumFour' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, String) == 0x000010, "Member 'FPropertyPathTestStruct::String' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, float_0) == 0x000020, "Member 'FPropertyPathTestStruct::float_0' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, InnerStruct) == 0x000028, "Member 'FPropertyPathTestStruct::InnerStruct' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestStruct, InnerObject) == 0x000048, "Member 'FPropertyPathTestStruct::InnerObject' has a wrong offset!");

struct FPropertyPathTestBed final
{
public:
	class UPropertyPathTestObject*                Object;
	class UPropertyPathTestObject*                ModifiedObject;
	struct FPropertyPathTestStruct                ModifiedStruct;
	struct FPropertyPathTestStruct                DefaultStruct;
};
static_assert(alignof(FPropertyPathTestBed) == 0x000008, "Wrong alignment on FPropertyPathTestBed");
static_assert(sizeof(FPropertyPathTestBed) == 0x0000B0, "Wrong size on FPropertyPathTestBed");
static_assert(offsetof(FPropertyPathTestBed, Object) == 0x000000, "Member 'FPropertyPathTestBed::Object' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, ModifiedObject) == 0x000008, "Member 'FPropertyPathTestBed::ModifiedObject' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, ModifiedStruct) == 0x000010, "Member 'FPropertyPathTestBed::ModifiedStruct' has a wrong offset!");
static_assert(offsetof(FPropertyPathTestBed, DefaultStruct) == 0x000060, "Member 'FPropertyPathTestBed::DefaultStruct' has a wrong offset!");

}
