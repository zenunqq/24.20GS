#pragma once

#include "Basic.hpp"

#include "GameSubCatalog_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMcpVerifierModeSelector final : public UObject
{
public:
	uint32                                        RangeStart;
	uint32                                        RangeEnd;
	class FString                                 Salt;
	EVerifierModeOverride                         VerifierModeOverride;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpVerifierModeSelector">();
	}
	static class UMcpVerifierModeSelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpVerifierModeSelector>();
	}
};
static_assert(alignof(UMcpVerifierModeSelector) == 0x000008, "Wrong alignment on UMcpVerifierModeSelector");
static_assert(sizeof(UMcpVerifierModeSelector) == 0x000048, "Wrong size on UMcpVerifierModeSelector");
static_assert(offsetof(UMcpVerifierModeSelector, RangeStart) == 0x000028, "Member 'UMcpVerifierModeSelector::RangeStart' has a wrong offset!");
static_assert(offsetof(UMcpVerifierModeSelector, RangeEnd) == 0x00002C, "Member 'UMcpVerifierModeSelector::RangeEnd' has a wrong offset!");
static_assert(offsetof(UMcpVerifierModeSelector, Salt) == 0x000030, "Member 'UMcpVerifierModeSelector::Salt' has a wrong offset!");
static_assert(offsetof(UMcpVerifierModeSelector, VerifierModeOverride) == 0x000040, "Member 'UMcpVerifierModeSelector::VerifierModeOverride' has a wrong offset!");

}
