#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FCreativeLowMemoryFallbackUserFacingText final
{
public:
	class FText                                   ExitToMainMenuReasonText;
	class FText                                   WarningToastTitle;
	class FText                                   WarningToastDescription;
};
static_assert(alignof(FCreativeLowMemoryFallbackUserFacingText) == 0x000008, "Wrong alignment on FCreativeLowMemoryFallbackUserFacingText");
static_assert(sizeof(FCreativeLowMemoryFallbackUserFacingText) == 0x000048, "Wrong size on FCreativeLowMemoryFallbackUserFacingText");
static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, ExitToMainMenuReasonText) == 0x000000, "Member 'FCreativeLowMemoryFallbackUserFacingText::ExitToMainMenuReasonText' has a wrong offset!");
static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, WarningToastTitle) == 0x000018, "Member 'FCreativeLowMemoryFallbackUserFacingText::WarningToastTitle' has a wrong offset!");
static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, WarningToastDescription) == 0x000030, "Member 'FCreativeLowMemoryFallbackUserFacingText::WarningToastDescription' has a wrong offset!");

struct FCreativeLowMemoryFallbackFreeMemoryThresholds final
{
public:
	float                                         FallbackMB;
	float                                         WarningMB;
	float                                         RecoveryMB;
};
static_assert(alignof(FCreativeLowMemoryFallbackFreeMemoryThresholds) == 0x000004, "Wrong alignment on FCreativeLowMemoryFallbackFreeMemoryThresholds");
static_assert(sizeof(FCreativeLowMemoryFallbackFreeMemoryThresholds) == 0x00000C, "Wrong size on FCreativeLowMemoryFallbackFreeMemoryThresholds");
static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, FallbackMB) == 0x000000, "Member 'FCreativeLowMemoryFallbackFreeMemoryThresholds::FallbackMB' has a wrong offset!");
static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, WarningMB) == 0x000004, "Member 'FCreativeLowMemoryFallbackFreeMemoryThresholds::WarningMB' has a wrong offset!");
static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, RecoveryMB) == 0x000008, "Member 'FCreativeLowMemoryFallbackFreeMemoryThresholds::RecoveryMB' has a wrong offset!");

}
