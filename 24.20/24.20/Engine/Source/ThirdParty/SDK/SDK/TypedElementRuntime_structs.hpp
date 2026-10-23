#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ETypedElementChildInclusionMethod : uint8
{
	None                                     = 0,
	Immediate                                = 1,
	Recursive                                = 2,
	ETypedElementChildInclusionMethod_MAX    = 3,
};

enum class ETypedElementSelectionMethod : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	ETypedElementSelectionMethod_MAX         = 2,
};

struct FTypedElementSelectionOptions final
{
public:
	bool                                          bAllowHidden;
	bool                                          bAllowGroups;
	bool                                          bAllowLegacyNotifications;
	bool                                          bWarnIfLocked;
	ETypedElementChildInclusionMethod             ChildElementInclusionMethod;
};
static_assert(alignof(FTypedElementSelectionOptions) == 0x000001, "Wrong alignment on FTypedElementSelectionOptions");
static_assert(sizeof(FTypedElementSelectionOptions) == 0x000005, "Wrong size on FTypedElementSelectionOptions");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowHidden) == 0x000000, "Member 'FTypedElementSelectionOptions::bAllowHidden' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowGroups) == 0x000001, "Member 'FTypedElementSelectionOptions::bAllowGroups' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowLegacyNotifications) == 0x000002, "Member 'FTypedElementSelectionOptions::bAllowLegacyNotifications' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bWarnIfLocked) == 0x000003, "Member 'FTypedElementSelectionOptions::bWarnIfLocked' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, ChildElementInclusionMethod) == 0x000004, "Member 'FTypedElementSelectionOptions::ChildElementInclusionMethod' has a wrong offset!");

struct FTypedElementSelectionNormalizationOptions final
{
public:
	bool                                          bExpandGroups;
	bool                                          bFollowAttachment;
};
static_assert(alignof(FTypedElementSelectionNormalizationOptions) == 0x000001, "Wrong alignment on FTypedElementSelectionNormalizationOptions");
static_assert(sizeof(FTypedElementSelectionNormalizationOptions) == 0x000002, "Wrong size on FTypedElementSelectionNormalizationOptions");
static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bExpandGroups) == 0x000000, "Member 'FTypedElementSelectionNormalizationOptions::bExpandGroups' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bFollowAttachment) == 0x000001, "Member 'FTypedElementSelectionNormalizationOptions::bFollowAttachment' has a wrong offset!");

struct alignas(0x08) FTypedElementSelectionSetState final
{
public:
	TWeakObjectPtr<class UTypedElementSelectionSet> CreatedFromSelectionSet;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FTypedElementSelectionSetState) == 0x000008, "Wrong alignment on FTypedElementSelectionSetState");
static_assert(sizeof(FTypedElementSelectionSetState) == 0x000018, "Wrong size on FTypedElementSelectionSetState");
static_assert(offsetof(FTypedElementSelectionSetState, CreatedFromSelectionSet) == 0x000000, "Member 'FTypedElementSelectionSetState::CreatedFromSelectionSet' has a wrong offset!");

struct FTypedElementIsSelectedOptions final
{
public:
	bool                                          bAllowIndirect;
};
static_assert(alignof(FTypedElementIsSelectedOptions) == 0x000001, "Wrong alignment on FTypedElementIsSelectedOptions");
static_assert(sizeof(FTypedElementIsSelectedOptions) == 0x000001, "Wrong size on FTypedElementIsSelectedOptions");
static_assert(offsetof(FTypedElementIsSelectedOptions, bAllowIndirect) == 0x000000, "Member 'FTypedElementIsSelectedOptions::bAllowIndirect' has a wrong offset!");

}
