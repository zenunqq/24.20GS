#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EDataAssetDirectoryTestEnum : uint8
{
	A                                        = 0,
	B                                        = 1,
	C                                        = 2,
	D                                        = 3,
	EDataAssetDirectoryTestEnum_MAX          = 4,
};

enum class EDataAssetDirectoryUpdateStatus : uint8
{
	Failed                                   = 0,
	Success                                  = 1,
	SuccessNoChange                          = 2,
	EDataAssetDirectoryUpdateStatus_MAX      = 3,
};

struct FDataAssetDirectoryTestPODStruct final
{
public:
	EDataAssetDirectoryTestEnum                   EnumProperty;
	uint8                                         Pad_1[0x3];
	int32                                         IntProperty;
	float                                         FloatProperty;
	bool                                          BoolProperty;
	uint8                                         Pad_D[0x3];
	class FString                                 StringProperty;
	class FName                                   NameProperty;
	uint8                                         Pad_24[0x4];
	class FText                                   TextProperty;
};
static_assert(alignof(FDataAssetDirectoryTestPODStruct) == 0x000008, "Wrong alignment on FDataAssetDirectoryTestPODStruct");
static_assert(sizeof(FDataAssetDirectoryTestPODStruct) == 0x000040, "Wrong size on FDataAssetDirectoryTestPODStruct");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, EnumProperty) == 0x000000, "Member 'FDataAssetDirectoryTestPODStruct::EnumProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, IntProperty) == 0x000004, "Member 'FDataAssetDirectoryTestPODStruct::IntProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, FloatProperty) == 0x000008, "Member 'FDataAssetDirectoryTestPODStruct::FloatProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, BoolProperty) == 0x00000C, "Member 'FDataAssetDirectoryTestPODStruct::BoolProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, StringProperty) == 0x000010, "Member 'FDataAssetDirectoryTestPODStruct::StringProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, NameProperty) == 0x000020, "Member 'FDataAssetDirectoryTestPODStruct::NameProperty' has a wrong offset!");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, TextProperty) == 0x000028, "Member 'FDataAssetDirectoryTestPODStruct::TextProperty' has a wrong offset!");

struct FDataAssetDirectoryTestSimpleStruct final
{
public:
	int32                                         IntProperty;
};
static_assert(alignof(FDataAssetDirectoryTestSimpleStruct) == 0x000004, "Wrong alignment on FDataAssetDirectoryTestSimpleStruct");
static_assert(sizeof(FDataAssetDirectoryTestSimpleStruct) == 0x000004, "Wrong size on FDataAssetDirectoryTestSimpleStruct");
static_assert(offsetof(FDataAssetDirectoryTestSimpleStruct, IntProperty) == 0x000000, "Member 'FDataAssetDirectoryTestSimpleStruct::IntProperty' has a wrong offset!");

}
