#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct RidingGeneric_Interafce_C_GetRidingInfoFromTarget final
{
public:
	double                                        JumpAttachGroundHeightMin;
	double                                        JumpAttachGroundHeightBuffer;
	bool                                          UsesAltRidingMessage;
};
static_assert(alignof(RidingGeneric_Interafce_C_GetRidingInfoFromTarget) == 0x000008, "Wrong alignment on RidingGeneric_Interafce_C_GetRidingInfoFromTarget");
static_assert(sizeof(RidingGeneric_Interafce_C_GetRidingInfoFromTarget) == 0x000018, "Wrong size on RidingGeneric_Interafce_C_GetRidingInfoFromTarget");
static_assert(offsetof(RidingGeneric_Interafce_C_GetRidingInfoFromTarget, JumpAttachGroundHeightMin) == 0x000000, "Member 'RidingGeneric_Interafce_C_GetRidingInfoFromTarget::JumpAttachGroundHeightMin' has a wrong offset!");
static_assert(offsetof(RidingGeneric_Interafce_C_GetRidingInfoFromTarget, JumpAttachGroundHeightBuffer) == 0x000008, "Member 'RidingGeneric_Interafce_C_GetRidingInfoFromTarget::JumpAttachGroundHeightBuffer' has a wrong offset!");
static_assert(offsetof(RidingGeneric_Interafce_C_GetRidingInfoFromTarget, UsesAltRidingMessage) == 0x000010, "Member 'RidingGeneric_Interafce_C_GetRidingInfoFromTarget::UsesAltRidingMessage' has a wrong offset!");

}
