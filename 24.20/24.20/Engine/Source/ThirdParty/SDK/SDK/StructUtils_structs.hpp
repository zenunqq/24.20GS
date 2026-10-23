#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EPropertyBagPropertyType : uint8
{
	None                                     = 0,
	Bool                                     = 1,
	Byte                                     = 2,
	Int32                                    = 3,
	Int64                                    = 4,
	Float                                    = 5,
	Double                                   = 6,
	Name                                     = 7,
	String                                   = 8,
	Text                                     = 9,
	Enum                                     = 10,
	Struct                                   = 11,
	Object                                   = 12,
	SoftObject                               = 13,
	Class                                    = 14,
	SoftClass                                = 15,
	EPropertyBagPropertyType_MAX             = 16,
};

enum class EPropertyBagContainerType : uint8
{
	None                                     = 0,
	Array                                    = 1,
	EPropertyBagContainerType_MAX            = 2,
};

enum class EPropertyBagResult : uint8
{
	Success                                  = 0,
	TypeMismatch                             = 1,
	OutOfBounds                              = 2,
	PropertyNotFound                         = 3,
	EPropertyBagResult_MAX                   = 4,
};

enum class EPropertyBagMissingEnum : uint8
{
	Missing                                  = 0,
	EPropertyBagMissingEnum_MAX              = 1,
};

struct alignas(0x08) FInstancedStructContainer final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FInstancedStructContainer) == 0x000008, "Wrong alignment on FInstancedStructContainer");
static_assert(sizeof(FInstancedStructContainer) == 0x000010, "Wrong size on FInstancedStructContainer");

struct alignas(0x08) FInstancedStruct final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FInstancedStruct) == 0x000008, "Wrong alignment on FInstancedStruct");
static_assert(sizeof(FInstancedStruct) == 0x000010, "Wrong size on FInstancedStruct");

struct FPropertyBagPropertyDescMetaData final
{
public:
	class FName                                   Key;
	uint8                                         Pad_4[0x4];
	class FString                                 Value;
};
static_assert(alignof(FPropertyBagPropertyDescMetaData) == 0x000008, "Wrong alignment on FPropertyBagPropertyDescMetaData");
static_assert(sizeof(FPropertyBagPropertyDescMetaData) == 0x000018, "Wrong size on FPropertyBagPropertyDescMetaData");
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Key) == 0x000000, "Member 'FPropertyBagPropertyDescMetaData::Key' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Value) == 0x000008, "Member 'FPropertyBagPropertyDescMetaData::Value' has a wrong offset!");

struct FPropertyBagPropertyDesc final
{
public:
	class UObject*                                ValueTypeObject;
	struct FGuid                                  ID;
	class FName                                   Name;
	EPropertyBagPropertyType                      ValueType;
	EPropertyBagContainerType                     ContainerType;
	uint8                                         Pad_1E[0xA];
};
static_assert(alignof(FPropertyBagPropertyDesc) == 0x000008, "Wrong alignment on FPropertyBagPropertyDesc");
static_assert(sizeof(FPropertyBagPropertyDesc) == 0x000028, "Wrong size on FPropertyBagPropertyDesc");
static_assert(offsetof(FPropertyBagPropertyDesc, ValueTypeObject) == 0x000000, "Member 'FPropertyBagPropertyDesc::ValueTypeObject' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ID) == 0x000008, "Member 'FPropertyBagPropertyDesc::ID' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, Name) == 0x000018, "Member 'FPropertyBagPropertyDesc::Name' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ValueType) == 0x00001C, "Member 'FPropertyBagPropertyDesc::ValueType' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ContainerType) == 0x00001D, "Member 'FPropertyBagPropertyDesc::ContainerType' has a wrong offset!");

struct FInstancedPropertyBag final
{
public:
	struct FInstancedStruct                       Value;
};
static_assert(alignof(FInstancedPropertyBag) == 0x000008, "Wrong alignment on FInstancedPropertyBag");
static_assert(sizeof(FInstancedPropertyBag) == 0x000010, "Wrong size on FInstancedPropertyBag");
static_assert(offsetof(FInstancedPropertyBag, Value) == 0x000000, "Member 'FInstancedPropertyBag::Value' has a wrong offset!");

struct FPropertyBagMissingStruct final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FPropertyBagMissingStruct) == 0x000001, "Wrong alignment on FPropertyBagMissingStruct");
static_assert(sizeof(FPropertyBagMissingStruct) == 0x000001, "Wrong size on FPropertyBagMissingStruct");

struct alignas(0x08) FSharedStruct final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FSharedStruct) == 0x000008, "Wrong alignment on FSharedStruct");
static_assert(sizeof(FSharedStruct) == 0x000010, "Wrong size on FSharedStruct");

struct alignas(0x08) FConstSharedStruct final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FConstSharedStruct) == 0x000008, "Wrong alignment on FConstSharedStruct");
static_assert(sizeof(FConstSharedStruct) == 0x000010, "Wrong size on FConstSharedStruct");

}
