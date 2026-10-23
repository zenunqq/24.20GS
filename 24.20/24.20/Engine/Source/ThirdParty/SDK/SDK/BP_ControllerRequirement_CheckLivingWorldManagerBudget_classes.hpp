#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C final : public UFortControllerRequirement
{
public:
	int32                                         RequiredBudget;
	uint8                                         Pad_34[0x4];
	struct FDataTableRowHandle                    EventRowHandle;

public:
	bool IsRequirementMetInternal(const struct FControllerRequirementTestContext& RequestContext) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ControllerRequirement_CheckLivingWorldManagerBudget_C">();
	}
	static class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C>();
	}
};
static_assert(alignof(UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C) == 0x000008, "Wrong alignment on UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C");
static_assert(sizeof(UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C) == 0x000048, "Wrong size on UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C");
static_assert(offsetof(UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C, RequiredBudget) == 0x000030, "Member 'UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C::RequiredBudget' has a wrong offset!");
static_assert(offsetof(UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C, EventRowHandle) == 0x000038, "Member 'UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C::EventRowHandle' has a wrong offset!");

}
