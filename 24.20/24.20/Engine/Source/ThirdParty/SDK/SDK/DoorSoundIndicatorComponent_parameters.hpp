#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor final
{
public:
	TArray<EFortTeamAffiliation>                  ReturnValue;
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;
};
static_assert(alignof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor) == 0x000008, "Wrong alignment on DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor");
static_assert(sizeof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor) == 0x000020, "Wrong size on DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor");
static_assert(offsetof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor, ReturnValue) == 0x000000, "Member 'DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor::ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor, K2Node_MakeArray_Array) == 0x000010, "Member 'DoorSoundIndicatorComponent_C_GetAffiliationsToShowFor::K2Node_MakeArray_Array' has a wrong offset!");

struct DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator final
{
public:
	class AFortPlayerController*                  PlayerController;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_21[0x7];
	class ABuildingWall*                          K2Node_DynamicCast_AsBuilding_Wall;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator) == 0x000008, "Wrong alignment on DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator");
static_assert(sizeof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator) == 0x000038, "Wrong size on DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, PlayerController) == 0x000000, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::PlayerController' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, ReturnValue) == 0x000008, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_GetPlayerPawn_ReturnValue) == 0x000010, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, K2Node_DynamicCast_AsBuilding_Wall) == 0x000028, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::K2Node_DynamicCast_AsBuilding_Wall' has a wrong offset!");
static_assert(offsetof(DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'DoorSoundIndicatorComponent_C_ShouldShowSoundIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
