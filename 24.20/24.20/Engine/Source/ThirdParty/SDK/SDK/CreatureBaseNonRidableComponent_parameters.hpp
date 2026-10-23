#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent) == 0x000008, "Wrong alignment on CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent");
static_assert(sizeof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent) == 0x000020, "Wrong size on CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent, EntryPoint) == 0x000000, "Member 'CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget final
{
public:
	double                                        JumpAttachGroundHeightMin;
	double                                        JumpAttachGroundHeightBuffer;
	bool                                          UsesAltRidingMessage;
};
static_assert(alignof(CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget) == 0x000008, "Wrong alignment on CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget");
static_assert(sizeof(CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget) == 0x000018, "Wrong size on CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightMin) == 0x000000, "Member 'CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightMin' has a wrong offset!");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget, JumpAttachGroundHeightBuffer) == 0x000008, "Member 'CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget::JumpAttachGroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget, UsesAltRidingMessage) == 0x000010, "Member 'CreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget::UsesAltRidingMessage' has a wrong offset!");

}
