#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CosmeticsFrameworkItems_structs.hpp"

namespace SDK::Params
{

struct CosmeticDataComponent_BP_AddOrOverrideProperty final
{
public:
	struct FGameplayTag                           SlotTag;
	struct FCosmeticPropertyBase                  Property;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(CosmeticDataComponent_BP_AddOrOverrideProperty) == 0x000004, "Wrong alignment on CosmeticDataComponent_BP_AddOrOverrideProperty");
static_assert(sizeof(CosmeticDataComponent_BP_AddOrOverrideProperty) == 0x00000C, "Wrong size on CosmeticDataComponent_BP_AddOrOverrideProperty");
static_assert(offsetof(CosmeticDataComponent_BP_AddOrOverrideProperty, SlotTag) == 0x000000, "Member 'CosmeticDataComponent_BP_AddOrOverrideProperty::SlotTag' has a wrong offset!");
static_assert(offsetof(CosmeticDataComponent_BP_AddOrOverrideProperty, Property) == 0x000004, "Member 'CosmeticDataComponent_BP_AddOrOverrideProperty::Property' has a wrong offset!");
static_assert(offsetof(CosmeticDataComponent_BP_AddOrOverrideProperty, ReturnValue) == 0x000008, "Member 'CosmeticDataComponent_BP_AddOrOverrideProperty::ReturnValue' has a wrong offset!");

struct CosmeticDataComponent_BP_FindProperty final
{
public:
	struct FGameplayTag                           SlotTag;
	struct FGameplayTag                           PropertyTag;
	struct FCosmeticPropertyBase                  OutProperty;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(CosmeticDataComponent_BP_FindProperty) == 0x000004, "Wrong alignment on CosmeticDataComponent_BP_FindProperty");
static_assert(sizeof(CosmeticDataComponent_BP_FindProperty) == 0x000010, "Wrong size on CosmeticDataComponent_BP_FindProperty");
static_assert(offsetof(CosmeticDataComponent_BP_FindProperty, SlotTag) == 0x000000, "Member 'CosmeticDataComponent_BP_FindProperty::SlotTag' has a wrong offset!");
static_assert(offsetof(CosmeticDataComponent_BP_FindProperty, PropertyTag) == 0x000004, "Member 'CosmeticDataComponent_BP_FindProperty::PropertyTag' has a wrong offset!");
static_assert(offsetof(CosmeticDataComponent_BP_FindProperty, OutProperty) == 0x000008, "Member 'CosmeticDataComponent_BP_FindProperty::OutProperty' has a wrong offset!");
static_assert(offsetof(CosmeticDataComponent_BP_FindProperty, ReturnValue) == 0x00000C, "Member 'CosmeticDataComponent_BP_FindProperty::ReturnValue' has a wrong offset!");

}
