#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"

namespace SDK
{

enum class EDataStreamSendStatus : uint8
{
	Send                                     = 0,
	Pause                                    = 1,
	EDataStreamSendStatus_MAX                = 2,
};

enum class ENetObjectCountLimiterMode : uint32
{
	RoundRobin                               = 0,
	Fill                                     = 1,
	ENetObjectCountLimiterMode_MAX           = 2,
};

struct FDataStreamDefinition final
{
public:
	class FName                                   DataStreamName;
	class FName                                   ClassName;
	TSubclassOf<class UObject>                    Class;
	EDataStreamSendStatus                         DefaultSendStatus;
	bool                                          bAutoCreate;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(FDataStreamDefinition) == 0x000008, "Wrong alignment on FDataStreamDefinition");
static_assert(sizeof(FDataStreamDefinition) == 0x000018, "Wrong size on FDataStreamDefinition");
static_assert(offsetof(FDataStreamDefinition, DataStreamName) == 0x000000, "Member 'FDataStreamDefinition::DataStreamName' has a wrong offset!");
static_assert(offsetof(FDataStreamDefinition, ClassName) == 0x000004, "Member 'FDataStreamDefinition::ClassName' has a wrong offset!");
static_assert(offsetof(FDataStreamDefinition, Class) == 0x000008, "Member 'FDataStreamDefinition::Class' has a wrong offset!");
static_assert(offsetof(FDataStreamDefinition, DefaultSendStatus) == 0x000010, "Member 'FDataStreamDefinition::DefaultSendStatus' has a wrong offset!");
static_assert(offsetof(FDataStreamDefinition, bAutoCreate) == 0x000011, "Member 'FDataStreamDefinition::bAutoCreate' has a wrong offset!");

struct alignas(0x08) FNetSerializerConfig
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FNetSerializerConfig) == 0x000008, "Wrong alignment on FNetSerializerConfig");
static_assert(sizeof(FNetSerializerConfig) == 0x000010, "Wrong size on FNetSerializerConfig");

struct FDateTimeNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FDateTimeNetSerializerConfig) == 0x000008, "Wrong alignment on FDateTimeNetSerializerConfig");
static_assert(sizeof(FDateTimeNetSerializerConfig) == 0x000010, "Wrong size on FDateTimeNetSerializerConfig");

struct FEnumInt8NetSerializerConfig final : public FNetSerializerConfig
{
public:
	int8                                          LowerBound;
	int8                                          UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_13[0xD];
};
static_assert(alignof(FEnumInt8NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumInt8NetSerializerConfig");
static_assert(sizeof(FEnumInt8NetSerializerConfig) == 0x000020, "Wrong size on FEnumInt8NetSerializerConfig");
static_assert(offsetof(FEnumInt8NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumInt8NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumInt8NetSerializerConfig, UpperBound) == 0x000011, "Member 'FEnumInt8NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumInt8NetSerializerConfig, BitCount) == 0x000012, "Member 'FEnumInt8NetSerializerConfig::BitCount' has a wrong offset!");

struct FUint8RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         LowerBound;
	uint8                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FUint8RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FUint8RangeNetSerializerConfig");
static_assert(sizeof(FUint8RangeNetSerializerConfig) == 0x000018, "Wrong size on FUint8RangeNetSerializerConfig");
static_assert(offsetof(FUint8RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FUint8RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FUint8RangeNetSerializerConfig, UpperBound) == 0x000011, "Member 'FUint8RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FUint8RangeNetSerializerConfig, BitCount) == 0x000012, "Member 'FUint8RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumInt16NetSerializerConfig final : public FNetSerializerConfig
{
public:
	int16                                         LowerBound;
	int16                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_15[0xB];
};
static_assert(alignof(FEnumInt16NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumInt16NetSerializerConfig");
static_assert(sizeof(FEnumInt16NetSerializerConfig) == 0x000020, "Wrong size on FEnumInt16NetSerializerConfig");
static_assert(offsetof(FEnumInt16NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumInt16NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumInt16NetSerializerConfig, UpperBound) == 0x000012, "Member 'FEnumInt16NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumInt16NetSerializerConfig, BitCount) == 0x000014, "Member 'FEnumInt16NetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumInt32NetSerializerConfig final : public FNetSerializerConfig
{
public:
	int32                                         LowerBound;
	int32                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_19[0xF];
};
static_assert(alignof(FEnumInt32NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumInt32NetSerializerConfig");
static_assert(sizeof(FEnumInt32NetSerializerConfig) == 0x000028, "Wrong size on FEnumInt32NetSerializerConfig");
static_assert(offsetof(FEnumInt32NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumInt32NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumInt32NetSerializerConfig, UpperBound) == 0x000014, "Member 'FEnumInt32NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumInt32NetSerializerConfig, BitCount) == 0x000018, "Member 'FEnumInt32NetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumInt64NetSerializerConfig final : public FNetSerializerConfig
{
public:
	int64                                         LowerBound;
	int64                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_21[0xF];
};
static_assert(alignof(FEnumInt64NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumInt64NetSerializerConfig");
static_assert(sizeof(FEnumInt64NetSerializerConfig) == 0x000030, "Wrong size on FEnumInt64NetSerializerConfig");
static_assert(offsetof(FEnumInt64NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumInt64NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumInt64NetSerializerConfig, UpperBound) == 0x000018, "Member 'FEnumInt64NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumInt64NetSerializerConfig, BitCount) == 0x000020, "Member 'FEnumInt64NetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumUint8NetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         LowerBound;
	uint8                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_13[0xD];
};
static_assert(alignof(FEnumUint8NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumUint8NetSerializerConfig");
static_assert(sizeof(FEnumUint8NetSerializerConfig) == 0x000020, "Wrong size on FEnumUint8NetSerializerConfig");
static_assert(offsetof(FEnumUint8NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumUint8NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumUint8NetSerializerConfig, UpperBound) == 0x000011, "Member 'FEnumUint8NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumUint8NetSerializerConfig, BitCount) == 0x000012, "Member 'FEnumUint8NetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumUint16NetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint16                                        LowerBound;
	uint16                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_15[0xB];
};
static_assert(alignof(FEnumUint16NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumUint16NetSerializerConfig");
static_assert(sizeof(FEnumUint16NetSerializerConfig) == 0x000020, "Wrong size on FEnumUint16NetSerializerConfig");
static_assert(offsetof(FEnumUint16NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumUint16NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumUint16NetSerializerConfig, UpperBound) == 0x000012, "Member 'FEnumUint16NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumUint16NetSerializerConfig, BitCount) == 0x000014, "Member 'FEnumUint16NetSerializerConfig::BitCount' has a wrong offset!");

struct FEnumUint32NetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint32                                        LowerBound;
	uint32                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_19[0xF];
};
static_assert(alignof(FEnumUint32NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumUint32NetSerializerConfig");
static_assert(sizeof(FEnumUint32NetSerializerConfig) == 0x000028, "Wrong size on FEnumUint32NetSerializerConfig");
static_assert(offsetof(FEnumUint32NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumUint32NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumUint32NetSerializerConfig, UpperBound) == 0x000014, "Member 'FEnumUint32NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumUint32NetSerializerConfig, BitCount) == 0x000018, "Member 'FEnumUint32NetSerializerConfig::BitCount' has a wrong offset!");

struct FStringNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FStringNetSerializerConfig) == 0x000008, "Wrong alignment on FStringNetSerializerConfig");
static_assert(sizeof(FStringNetSerializerConfig) == 0x000010, "Wrong size on FStringNetSerializerConfig");

struct FEnumUint64NetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint64                                        LowerBound;
	uint64                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_21[0xF];
};
static_assert(alignof(FEnumUint64NetSerializerConfig) == 0x000008, "Wrong alignment on FEnumUint64NetSerializerConfig");
static_assert(sizeof(FEnumUint64NetSerializerConfig) == 0x000030, "Wrong size on FEnumUint64NetSerializerConfig");
static_assert(offsetof(FEnumUint64NetSerializerConfig, LowerBound) == 0x000010, "Member 'FEnumUint64NetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FEnumUint64NetSerializerConfig, UpperBound) == 0x000018, "Member 'FEnumUint64NetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FEnumUint64NetSerializerConfig, BitCount) == 0x000020, "Member 'FEnumUint64NetSerializerConfig::BitCount' has a wrong offset!");

struct FFloatNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FFloatNetSerializerConfig) == 0x000008, "Wrong alignment on FFloatNetSerializerConfig");
static_assert(sizeof(FFloatNetSerializerConfig) == 0x000010, "Wrong size on FFloatNetSerializerConfig");

struct FDoubleNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FDoubleNetSerializerConfig) == 0x000008, "Wrong alignment on FDoubleNetSerializerConfig");
static_assert(sizeof(FDoubleNetSerializerConfig) == 0x000010, "Wrong size on FDoubleNetSerializerConfig");

struct FGuidNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FGuidNetSerializerConfig) == 0x000008, "Wrong alignment on FGuidNetSerializerConfig");
static_assert(sizeof(FGuidNetSerializerConfig) == 0x000010, "Wrong size on FGuidNetSerializerConfig");

struct FBitfieldNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         BitMask;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FBitfieldNetSerializerConfig) == 0x000008, "Wrong alignment on FBitfieldNetSerializerConfig");
static_assert(sizeof(FBitfieldNetSerializerConfig) == 0x000018, "Wrong size on FBitfieldNetSerializerConfig");
static_assert(offsetof(FBitfieldNetSerializerConfig, BitMask) == 0x000010, "Member 'FBitfieldNetSerializerConfig::BitMask' has a wrong offset!");

struct FArrayPropertyNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint16                                        MaxElementCount;
	uint16                                        ElementCountBitCount;
	uint8                                         Pad_14[0x4];
	TFieldPath<class FArrayProperty>              Property;
	uint8                                         Pad_38[0x8];
};
static_assert(alignof(FArrayPropertyNetSerializerConfig) == 0x000008, "Wrong alignment on FArrayPropertyNetSerializerConfig");
static_assert(sizeof(FArrayPropertyNetSerializerConfig) == 0x000040, "Wrong size on FArrayPropertyNetSerializerConfig");
static_assert(offsetof(FArrayPropertyNetSerializerConfig, MaxElementCount) == 0x000010, "Member 'FArrayPropertyNetSerializerConfig::MaxElementCount' has a wrong offset!");
static_assert(offsetof(FArrayPropertyNetSerializerConfig, ElementCountBitCount) == 0x000012, "Member 'FArrayPropertyNetSerializerConfig::ElementCountBitCount' has a wrong offset!");
static_assert(offsetof(FArrayPropertyNetSerializerConfig, Property) == 0x000018, "Member 'FArrayPropertyNetSerializerConfig::Property' has a wrong offset!");

struct FLastResortPropertyNetSerializerConfig final : public FNetSerializerConfig
{
public:
	TFieldPath<class FProperty>                   Property;
};
static_assert(alignof(FLastResortPropertyNetSerializerConfig) == 0x000008, "Wrong alignment on FLastResortPropertyNetSerializerConfig");
static_assert(sizeof(FLastResortPropertyNetSerializerConfig) == 0x000030, "Wrong size on FLastResortPropertyNetSerializerConfig");
static_assert(offsetof(FLastResortPropertyNetSerializerConfig, Property) == 0x000010, "Member 'FLastResortPropertyNetSerializerConfig::Property' has a wrong offset!");

struct FNetRoleNetSerializerConfig final : public FNetSerializerConfig
{
public:
	int32                                         RelativeInternalOffsetToOtherRole;
	int32                                         RelativeExternalOffsetToOtherRole;
	uint8                                         LowerBound;
	uint8                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         AutonomousProxyValue;
	uint8                                         SimulatedProxyValue;
	uint8                                         Pad_1D[0xB];
};
static_assert(alignof(FNetRoleNetSerializerConfig) == 0x000008, "Wrong alignment on FNetRoleNetSerializerConfig");
static_assert(sizeof(FNetRoleNetSerializerConfig) == 0x000028, "Wrong size on FNetRoleNetSerializerConfig");
static_assert(offsetof(FNetRoleNetSerializerConfig, RelativeInternalOffsetToOtherRole) == 0x000010, "Member 'FNetRoleNetSerializerConfig::RelativeInternalOffsetToOtherRole' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, RelativeExternalOffsetToOtherRole) == 0x000014, "Member 'FNetRoleNetSerializerConfig::RelativeExternalOffsetToOtherRole' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, LowerBound) == 0x000018, "Member 'FNetRoleNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, UpperBound) == 0x000019, "Member 'FNetRoleNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, BitCount) == 0x00001A, "Member 'FNetRoleNetSerializerConfig::BitCount' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, AutonomousProxyValue) == 0x00001B, "Member 'FNetRoleNetSerializerConfig::AutonomousProxyValue' has a wrong offset!");
static_assert(offsetof(FNetRoleNetSerializerConfig, SimulatedProxyValue) == 0x00001C, "Member 'FNetRoleNetSerializerConfig::SimulatedProxyValue' has a wrong offset!");

struct FFieldPathNetSerializerConfig final : public FNetSerializerConfig
{
public:
	TFieldPath<class FProperty>                   Property;
};
static_assert(alignof(FFieldPathNetSerializerConfig) == 0x000008, "Wrong alignment on FFieldPathNetSerializerConfig");
static_assert(sizeof(FFieldPathNetSerializerConfig) == 0x000030, "Wrong size on FFieldPathNetSerializerConfig");
static_assert(offsetof(FFieldPathNetSerializerConfig, Property) == 0x000010, "Member 'FFieldPathNetSerializerConfig::Property' has a wrong offset!");

struct FFieldPathNetSerializerSerializationHelper final
{
public:
	TWeakObjectPtr<class UStruct>                 Owner;
	TArray<class FName>                           PropertyPath;
};
static_assert(alignof(FFieldPathNetSerializerSerializationHelper) == 0x000008, "Wrong alignment on FFieldPathNetSerializerSerializationHelper");
static_assert(sizeof(FFieldPathNetSerializerSerializationHelper) == 0x000018, "Wrong size on FFieldPathNetSerializerSerializationHelper");
static_assert(offsetof(FFieldPathNetSerializerSerializationHelper, Owner) == 0x000000, "Member 'FFieldPathNetSerializerSerializationHelper::Owner' has a wrong offset!");
static_assert(offsetof(FFieldPathNetSerializerSerializationHelper, PropertyPath) == 0x000008, "Member 'FFieldPathNetSerializerSerializationHelper::PropertyPath' has a wrong offset!");

struct FIntNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         BitCount;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FIntNetSerializerConfig) == 0x000008, "Wrong alignment on FIntNetSerializerConfig");
static_assert(sizeof(FIntNetSerializerConfig) == 0x000018, "Wrong size on FIntNetSerializerConfig");
static_assert(offsetof(FIntNetSerializerConfig, BitCount) == 0x000010, "Member 'FIntNetSerializerConfig::BitCount' has a wrong offset!");

struct FInt8RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	int8                                          LowerBound;
	int8                                          UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FInt8RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FInt8RangeNetSerializerConfig");
static_assert(sizeof(FInt8RangeNetSerializerConfig) == 0x000018, "Wrong size on FInt8RangeNetSerializerConfig");
static_assert(offsetof(FInt8RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FInt8RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FInt8RangeNetSerializerConfig, UpperBound) == 0x000011, "Member 'FInt8RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FInt8RangeNetSerializerConfig, BitCount) == 0x000012, "Member 'FInt8RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FInt16RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	int16                                         LowerBound;
	int16                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FInt16RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FInt16RangeNetSerializerConfig");
static_assert(sizeof(FInt16RangeNetSerializerConfig) == 0x000018, "Wrong size on FInt16RangeNetSerializerConfig");
static_assert(offsetof(FInt16RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FInt16RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FInt16RangeNetSerializerConfig, UpperBound) == 0x000012, "Member 'FInt16RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FInt16RangeNetSerializerConfig, BitCount) == 0x000014, "Member 'FInt16RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FInt32RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	int32                                         LowerBound;
	int32                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FInt32RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FInt32RangeNetSerializerConfig");
static_assert(sizeof(FInt32RangeNetSerializerConfig) == 0x000020, "Wrong size on FInt32RangeNetSerializerConfig");
static_assert(offsetof(FInt32RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FInt32RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FInt32RangeNetSerializerConfig, UpperBound) == 0x000014, "Member 'FInt32RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FInt32RangeNetSerializerConfig, BitCount) == 0x000018, "Member 'FInt32RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FInt64RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	int64                                         LowerBound;
	int64                                         UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FInt64RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FInt64RangeNetSerializerConfig");
static_assert(sizeof(FInt64RangeNetSerializerConfig) == 0x000028, "Wrong size on FInt64RangeNetSerializerConfig");
static_assert(offsetof(FInt64RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FInt64RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FInt64RangeNetSerializerConfig, UpperBound) == 0x000018, "Member 'FInt64RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FInt64RangeNetSerializerConfig, BitCount) == 0x000020, "Member 'FInt64RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FIrisFastArraySerializer final : public FFastArraySerializer
{
public:
	uint32                                        ChangeMaskStorage[0x2];
	uint8                                         Pad_110[0x8];
};
static_assert(alignof(FIrisFastArraySerializer) == 0x000008, "Wrong alignment on FIrisFastArraySerializer");
static_assert(sizeof(FIrisFastArraySerializer) == 0x000118, "Wrong size on FIrisFastArraySerializer");
static_assert(offsetof(FIrisFastArraySerializer, ChangeMaskStorage) == 0x000108, "Member 'FIrisFastArraySerializer::ChangeMaskStorage' has a wrong offset!");

struct FNetBlobHandlerDefinition final
{
public:
	class FName                                   ClassName;
};
static_assert(alignof(FNetBlobHandlerDefinition) == 0x000004, "Wrong alignment on FNetBlobHandlerDefinition");
static_assert(sizeof(FNetBlobHandlerDefinition) == 0x000004, "Wrong size on FNetBlobHandlerDefinition");
static_assert(offsetof(FNetBlobHandlerDefinition, ClassName) == 0x000000, "Member 'FNetBlobHandlerDefinition::ClassName' has a wrong offset!");

struct FNetObjectFilterDefinition final
{
public:
	class FName                                   FilterName;
	class FName                                   ClassName;
	class FName                                   ConfigClassName;
};
static_assert(alignof(FNetObjectFilterDefinition) == 0x000004, "Wrong alignment on FNetObjectFilterDefinition");
static_assert(sizeof(FNetObjectFilterDefinition) == 0x00000C, "Wrong size on FNetObjectFilterDefinition");
static_assert(offsetof(FNetObjectFilterDefinition, FilterName) == 0x000000, "Member 'FNetObjectFilterDefinition::FilterName' has a wrong offset!");
static_assert(offsetof(FNetObjectFilterDefinition, ClassName) == 0x000004, "Member 'FNetObjectFilterDefinition::ClassName' has a wrong offset!");
static_assert(offsetof(FNetObjectFilterDefinition, ConfigClassName) == 0x000008, "Member 'FNetObjectFilterDefinition::ConfigClassName' has a wrong offset!");

struct FNetObjectPrioritizerDefinition final
{
public:
	class FName                                   PrioritizerName;
	class FName                                   ClassName;
	TSubclassOf<class UObject>                    Class;
	class FName                                   ConfigClassName;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class UObject>                    ConfigClass;
};
static_assert(alignof(FNetObjectPrioritizerDefinition) == 0x000008, "Wrong alignment on FNetObjectPrioritizerDefinition");
static_assert(sizeof(FNetObjectPrioritizerDefinition) == 0x000020, "Wrong size on FNetObjectPrioritizerDefinition");
static_assert(offsetof(FNetObjectPrioritizerDefinition, PrioritizerName) == 0x000000, "Member 'FNetObjectPrioritizerDefinition::PrioritizerName' has a wrong offset!");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ClassName) == 0x000004, "Member 'FNetObjectPrioritizerDefinition::ClassName' has a wrong offset!");
static_assert(offsetof(FNetObjectPrioritizerDefinition, Class) == 0x000008, "Member 'FNetObjectPrioritizerDefinition::Class' has a wrong offset!");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ConfigClassName) == 0x000010, "Member 'FNetObjectPrioritizerDefinition::ConfigClassName' has a wrong offset!");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ConfigClass) == 0x000018, "Member 'FNetObjectPrioritizerDefinition::ConfigClass' has a wrong offset!");

struct FBoolNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FBoolNetSerializerConfig) == 0x000008, "Wrong alignment on FBoolNetSerializerConfig");
static_assert(sizeof(FBoolNetSerializerConfig) == 0x000010, "Wrong size on FBoolNetSerializerConfig");

struct FStructNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FStructNetSerializerConfig) == 0x000008, "Wrong alignment on FStructNetSerializerConfig");
static_assert(sizeof(FStructNetSerializerConfig) == 0x000018, "Wrong size on FStructNetSerializerConfig");

struct FNopNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FNopNetSerializerConfig) == 0x000008, "Wrong alignment on FNopNetSerializerConfig");
static_assert(sizeof(FNopNetSerializerConfig) == 0x000010, "Wrong size on FNopNetSerializerConfig");

struct FObjectNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FObjectNetSerializerConfig) == 0x000008, "Wrong alignment on FObjectNetSerializerConfig");
static_assert(sizeof(FObjectNetSerializerConfig) == 0x000010, "Wrong size on FObjectNetSerializerConfig");

struct FWeakObjectNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FWeakObjectNetSerializerConfig) == 0x000008, "Wrong alignment on FWeakObjectNetSerializerConfig");
static_assert(sizeof(FWeakObjectNetSerializerConfig) == 0x000010, "Wrong size on FWeakObjectNetSerializerConfig");

struct FScriptInterfaceNetSerializerConfig final : public FNetSerializerConfig
{
public:
	TSubclassOf<class UObject>                    InterfaceClass;
};
static_assert(alignof(FScriptInterfaceNetSerializerConfig) == 0x000008, "Wrong alignment on FScriptInterfaceNetSerializerConfig");
static_assert(sizeof(FScriptInterfaceNetSerializerConfig) == 0x000018, "Wrong size on FScriptInterfaceNetSerializerConfig");
static_assert(offsetof(FScriptInterfaceNetSerializerConfig, InterfaceClass) == 0x000010, "Member 'FScriptInterfaceNetSerializerConfig::InterfaceClass' has a wrong offset!");

struct FObjectReplicationBridgePollConfig final
{
public:
	class FName                                   ClassName;
	uint32                                        PollFramePeriod;
	bool                                          bIncludeSubclasses;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FObjectReplicationBridgePollConfig) == 0x000004, "Wrong alignment on FObjectReplicationBridgePollConfig");
static_assert(sizeof(FObjectReplicationBridgePollConfig) == 0x00000C, "Wrong size on FObjectReplicationBridgePollConfig");
static_assert(offsetof(FObjectReplicationBridgePollConfig, ClassName) == 0x000000, "Member 'FObjectReplicationBridgePollConfig::ClassName' has a wrong offset!");
static_assert(offsetof(FObjectReplicationBridgePollConfig, PollFramePeriod) == 0x000004, "Member 'FObjectReplicationBridgePollConfig::PollFramePeriod' has a wrong offset!");
static_assert(offsetof(FObjectReplicationBridgePollConfig, bIncludeSubclasses) == 0x000008, "Member 'FObjectReplicationBridgePollConfig::bIncludeSubclasses' has a wrong offset!");

struct FObjectReplicationBridgeFilterConfig final
{
public:
	class FName                                   ClassName;
	class FName                                   DynamicFilterName;
};
static_assert(alignof(FObjectReplicationBridgeFilterConfig) == 0x000004, "Wrong alignment on FObjectReplicationBridgeFilterConfig");
static_assert(sizeof(FObjectReplicationBridgeFilterConfig) == 0x000008, "Wrong size on FObjectReplicationBridgeFilterConfig");
static_assert(offsetof(FObjectReplicationBridgeFilterConfig, ClassName) == 0x000000, "Member 'FObjectReplicationBridgeFilterConfig::ClassName' has a wrong offset!");
static_assert(offsetof(FObjectReplicationBridgeFilterConfig, DynamicFilterName) == 0x000004, "Member 'FObjectReplicationBridgeFilterConfig::DynamicFilterName' has a wrong offset!");

struct FObjectReplicationBridgePrioritizerConfig final
{
public:
	class FName                                   ClassName;
	class FName                                   PrioritizerName;
};
static_assert(alignof(FObjectReplicationBridgePrioritizerConfig) == 0x000004, "Wrong alignment on FObjectReplicationBridgePrioritizerConfig");
static_assert(sizeof(FObjectReplicationBridgePrioritizerConfig) == 0x000008, "Wrong size on FObjectReplicationBridgePrioritizerConfig");
static_assert(offsetof(FObjectReplicationBridgePrioritizerConfig, ClassName) == 0x000000, "Member 'FObjectReplicationBridgePrioritizerConfig::ClassName' has a wrong offset!");
static_assert(offsetof(FObjectReplicationBridgePrioritizerConfig, PrioritizerName) == 0x000004, "Member 'FObjectReplicationBridgePrioritizerConfig::PrioritizerName' has a wrong offset!");

struct FObjectReplicationBridgeDeltaCompressionConfig final
{
public:
	class FName                                   ClassName;
	bool                                          bEnableDeltaCompression;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FObjectReplicationBridgeDeltaCompressionConfig) == 0x000004, "Wrong alignment on FObjectReplicationBridgeDeltaCompressionConfig");
static_assert(sizeof(FObjectReplicationBridgeDeltaCompressionConfig) == 0x000008, "Wrong size on FObjectReplicationBridgeDeltaCompressionConfig");
static_assert(offsetof(FObjectReplicationBridgeDeltaCompressionConfig, ClassName) == 0x000000, "Member 'FObjectReplicationBridgeDeltaCompressionConfig::ClassName' has a wrong offset!");
static_assert(offsetof(FObjectReplicationBridgeDeltaCompressionConfig, bEnableDeltaCompression) == 0x000004, "Member 'FObjectReplicationBridgeDeltaCompressionConfig::bEnableDeltaCompression' has a wrong offset!");

struct FPackedInt64NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FPackedInt64NetSerializerConfig) == 0x000008, "Wrong alignment on FPackedInt64NetSerializerConfig");
static_assert(sizeof(FPackedInt64NetSerializerConfig) == 0x000010, "Wrong size on FPackedInt64NetSerializerConfig");

struct FPackedUint64NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FPackedUint64NetSerializerConfig) == 0x000008, "Wrong alignment on FPackedUint64NetSerializerConfig");
static_assert(sizeof(FPackedUint64NetSerializerConfig) == 0x000010, "Wrong size on FPackedUint64NetSerializerConfig");

struct FPackedInt32NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FPackedInt32NetSerializerConfig) == 0x000008, "Wrong alignment on FPackedInt32NetSerializerConfig");
static_assert(sizeof(FPackedInt32NetSerializerConfig) == 0x000010, "Wrong size on FPackedInt32NetSerializerConfig");

struct FPackedUint32NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FPackedUint32NetSerializerConfig) == 0x000008, "Wrong alignment on FPackedUint32NetSerializerConfig");
static_assert(sizeof(FPackedUint32NetSerializerConfig) == 0x000010, "Wrong size on FPackedUint32NetSerializerConfig");

struct FVectorNetQuantizeNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVectorNetQuantizeNetSerializerConfig) == 0x000008, "Wrong alignment on FVectorNetQuantizeNetSerializerConfig");
static_assert(sizeof(FVectorNetQuantizeNetSerializerConfig) == 0x000010, "Wrong size on FVectorNetQuantizeNetSerializerConfig");

struct FVectorNetQuantize10NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVectorNetQuantize10NetSerializerConfig) == 0x000008, "Wrong alignment on FVectorNetQuantize10NetSerializerConfig");
static_assert(sizeof(FVectorNetQuantize10NetSerializerConfig) == 0x000010, "Wrong size on FVectorNetQuantize10NetSerializerConfig");

struct FVectorNetQuantize100NetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVectorNetQuantize100NetSerializerConfig) == 0x000008, "Wrong alignment on FVectorNetQuantize100NetSerializerConfig");
static_assert(sizeof(FVectorNetQuantize100NetSerializerConfig) == 0x000010, "Wrong size on FVectorNetQuantize100NetSerializerConfig");

struct FVectorNetQuantizeNormalNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVectorNetQuantizeNormalNetSerializerConfig) == 0x000008, "Wrong alignment on FVectorNetQuantizeNormalNetSerializerConfig");
static_assert(sizeof(FVectorNetQuantizeNormalNetSerializerConfig) == 0x000010, "Wrong size on FVectorNetQuantizeNormalNetSerializerConfig");

struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FPolymorphicStructNetSerializerConfig) == 0x000008, "Wrong alignment on FPolymorphicStructNetSerializerConfig");
static_assert(sizeof(FPolymorphicStructNetSerializerConfig) == 0x000028, "Wrong size on FPolymorphicStructNetSerializerConfig");

struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{
};
static_assert(alignof(FPolymorphicArrayStructNetSerializerConfig) == 0x000008, "Wrong alignment on FPolymorphicArrayStructNetSerializerConfig");
static_assert(sizeof(FPolymorphicArrayStructNetSerializerConfig) == 0x000028, "Wrong size on FPolymorphicArrayStructNetSerializerConfig");

struct FUnitQuatNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FUnitQuatNetSerializerConfig) == 0x000008, "Wrong alignment on FUnitQuatNetSerializerConfig");
static_assert(sizeof(FUnitQuatNetSerializerConfig) == 0x000010, "Wrong size on FUnitQuatNetSerializerConfig");

struct FUnitQuat4fNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FUnitQuat4fNetSerializerConfig) == 0x000008, "Wrong alignment on FUnitQuat4fNetSerializerConfig");
static_assert(sizeof(FUnitQuat4fNetSerializerConfig) == 0x000010, "Wrong size on FUnitQuat4fNetSerializerConfig");

struct FUnitQuat4dNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FUnitQuat4dNetSerializerConfig) == 0x000008, "Wrong alignment on FUnitQuat4dNetSerializerConfig");
static_assert(sizeof(FUnitQuat4dNetSerializerConfig) == 0x000010, "Wrong size on FUnitQuat4dNetSerializerConfig");

struct FRotatorNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FRotatorNetSerializerConfig) == 0x000008, "Wrong alignment on FRotatorNetSerializerConfig");
static_assert(sizeof(FRotatorNetSerializerConfig) == 0x000010, "Wrong size on FRotatorNetSerializerConfig");

struct FUintNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         BitCount;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FUintNetSerializerConfig) == 0x000008, "Wrong alignment on FUintNetSerializerConfig");
static_assert(sizeof(FUintNetSerializerConfig) == 0x000018, "Wrong size on FUintNetSerializerConfig");
static_assert(offsetof(FUintNetSerializerConfig, BitCount) == 0x000010, "Member 'FUintNetSerializerConfig::BitCount' has a wrong offset!");

struct FRotatorAsByteNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FRotatorAsByteNetSerializerConfig) == 0x000008, "Wrong alignment on FRotatorAsByteNetSerializerConfig");
static_assert(sizeof(FRotatorAsByteNetSerializerConfig) == 0x000010, "Wrong size on FRotatorAsByteNetSerializerConfig");

struct FRotatorAsShortNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FRotatorAsShortNetSerializerConfig) == 0x000008, "Wrong alignment on FRotatorAsShortNetSerializerConfig");
static_assert(sizeof(FRotatorAsShortNetSerializerConfig) == 0x000010, "Wrong size on FRotatorAsShortNetSerializerConfig");

struct FSoftObjectNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FSoftObjectNetSerializerConfig) == 0x000008, "Wrong alignment on FSoftObjectNetSerializerConfig");
static_assert(sizeof(FSoftObjectNetSerializerConfig) == 0x000010, "Wrong size on FSoftObjectNetSerializerConfig");

struct FSoftObjectPathNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FSoftObjectPathNetSerializerConfig) == 0x000008, "Wrong alignment on FSoftObjectPathNetSerializerConfig");
static_assert(sizeof(FSoftObjectPathNetSerializerConfig) == 0x000010, "Wrong size on FSoftObjectPathNetSerializerConfig");

struct FSoftClassPathNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FSoftClassPathNetSerializerConfig) == 0x000008, "Wrong alignment on FSoftClassPathNetSerializerConfig");
static_assert(sizeof(FSoftClassPathNetSerializerConfig) == 0x000010, "Wrong size on FSoftClassPathNetSerializerConfig");

struct FNameNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FNameNetSerializerConfig) == 0x000008, "Wrong alignment on FNameNetSerializerConfig");
static_assert(sizeof(FNameNetSerializerConfig) == 0x000010, "Wrong size on FNameNetSerializerConfig");

struct FUint16RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint16                                        LowerBound;
	uint16                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FUint16RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FUint16RangeNetSerializerConfig");
static_assert(sizeof(FUint16RangeNetSerializerConfig) == 0x000018, "Wrong size on FUint16RangeNetSerializerConfig");
static_assert(offsetof(FUint16RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FUint16RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FUint16RangeNetSerializerConfig, UpperBound) == 0x000012, "Member 'FUint16RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FUint16RangeNetSerializerConfig, BitCount) == 0x000014, "Member 'FUint16RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FUint32RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint32                                        LowerBound;
	uint32                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FUint32RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FUint32RangeNetSerializerConfig");
static_assert(sizeof(FUint32RangeNetSerializerConfig) == 0x000020, "Wrong size on FUint32RangeNetSerializerConfig");
static_assert(offsetof(FUint32RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FUint32RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FUint32RangeNetSerializerConfig, UpperBound) == 0x000014, "Member 'FUint32RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FUint32RangeNetSerializerConfig, BitCount) == 0x000018, "Member 'FUint32RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FUint64RangeNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint64                                        LowerBound;
	uint64                                        UpperBound;
	uint8                                         BitCount;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FUint64RangeNetSerializerConfig) == 0x000008, "Wrong alignment on FUint64RangeNetSerializerConfig");
static_assert(sizeof(FUint64RangeNetSerializerConfig) == 0x000028, "Wrong size on FUint64RangeNetSerializerConfig");
static_assert(offsetof(FUint64RangeNetSerializerConfig, LowerBound) == 0x000010, "Member 'FUint64RangeNetSerializerConfig::LowerBound' has a wrong offset!");
static_assert(offsetof(FUint64RangeNetSerializerConfig, UpperBound) == 0x000018, "Member 'FUint64RangeNetSerializerConfig::UpperBound' has a wrong offset!");
static_assert(offsetof(FUint64RangeNetSerializerConfig, BitCount) == 0x000020, "Member 'FUint64RangeNetSerializerConfig::BitCount' has a wrong offset!");

struct FVectorNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVectorNetSerializerConfig) == 0x000008, "Wrong alignment on FVectorNetSerializerConfig");
static_assert(sizeof(FVectorNetSerializerConfig) == 0x000010, "Wrong size on FVectorNetSerializerConfig");

struct FVector3fNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVector3fNetSerializerConfig) == 0x000008, "Wrong alignment on FVector3fNetSerializerConfig");
static_assert(sizeof(FVector3fNetSerializerConfig) == 0x000010, "Wrong size on FVector3fNetSerializerConfig");

struct FVector3dNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FVector3dNetSerializerConfig) == 0x000008, "Wrong alignment on FVector3dNetSerializerConfig");
static_assert(sizeof(FVector3dNetSerializerConfig) == 0x000010, "Wrong size on FVector3dNetSerializerConfig");

struct FSupportsStructNetSerializerConfig final
{
public:
	class FName                                   StructName;
	bool                                          bCanUseStructNetSerializer;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FSupportsStructNetSerializerConfig) == 0x000004, "Wrong alignment on FSupportsStructNetSerializerConfig");
static_assert(sizeof(FSupportsStructNetSerializerConfig) == 0x000008, "Wrong size on FSupportsStructNetSerializerConfig");
static_assert(offsetof(FSupportsStructNetSerializerConfig, StructName) == 0x000000, "Member 'FSupportsStructNetSerializerConfig::StructName' has a wrong offset!");
static_assert(offsetof(FSupportsStructNetSerializerConfig, bCanUseStructNetSerializer) == 0x000004, "Member 'FSupportsStructNetSerializerConfig::bCanUseStructNetSerializer' has a wrong offset!");

}
