#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EPropertyValueCategory : uint8
{
	Undefined                                = 0,
	Generic                                  = 1,
	RelativeLocation                         = 2,
	RelativeRotation                         = 4,
	RelativeScale3D                          = 8,
	Visibility                               = 16,
	Material                                 = 32,
	Color                                    = 64,
	Option                                   = 128,
	EPropertyValueCategory_MAX               = 129,
};

struct FFunctionCaller final
{
public:
	class FName                                   FunctionName;
};
static_assert(alignof(FFunctionCaller) == 0x000004, "Wrong alignment on FFunctionCaller");
static_assert(sizeof(FFunctionCaller) == 0x000004, "Wrong size on FFunctionCaller");
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x000000, "Member 'FFunctionCaller::FunctionName' has a wrong offset!");

struct FCapturedPropSegment final
{
public:
	class FString                                 PropertyName;
	int32                                         PropertyIndex;
	uint8                                         Pad_14[0x4];
	class FString                                 ComponentName;
};
static_assert(alignof(FCapturedPropSegment) == 0x000008, "Wrong alignment on FCapturedPropSegment");
static_assert(sizeof(FCapturedPropSegment) == 0x000028, "Wrong size on FCapturedPropSegment");
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x000000, "Member 'FCapturedPropSegment::PropertyName' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, PropertyIndex) == 0x000010, "Member 'FCapturedPropSegment::PropertyIndex' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x000018, "Member 'FCapturedPropSegment::ComponentName' has a wrong offset!");

struct FVariantDependency final
{
public:
	TSoftObjectPtr<class UVariantSet>             VariantSet;
	TSoftObjectPtr<class UVariant>                Variant;
	bool                                          bEnabled;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FVariantDependency) == 0x000008, "Wrong alignment on FVariantDependency");
static_assert(sizeof(FVariantDependency) == 0x000058, "Wrong size on FVariantDependency");
static_assert(offsetof(FVariantDependency, VariantSet) == 0x000000, "Member 'FVariantDependency::VariantSet' has a wrong offset!");
static_assert(offsetof(FVariantDependency, Variant) == 0x000028, "Member 'FVariantDependency::Variant' has a wrong offset!");
static_assert(offsetof(FVariantDependency, bEnabled) == 0x000050, "Member 'FVariantDependency::bEnabled' has a wrong offset!");

}
