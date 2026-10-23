#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal final
{
public:
	struct FControllerRequirementTestContext      RequestContext;
	bool                                          ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_22[0x6];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthenaFromContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	class UFortAthenaLivingWorldManager*          CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_QueryEventBudget_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
};
static_assert(alignof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal) == 0x000008, "Wrong alignment on BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal");
static_assert(sizeof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal) == 0x000050, "Wrong size on BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, RequestContext) == 0x000000, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::RequestContext' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, ReturnValue) == 0x000020, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_GetGameStateAthenaFromContext_ReturnValue) == 0x000028, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_GetGameStateAthenaFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_QueryEventBudget_ReturnValue) == 0x000044, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_QueryEventBudget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'BP_ControllerRequirement_CheckLivingWorldManagerBudget_C_IsRequirementMetInternal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
