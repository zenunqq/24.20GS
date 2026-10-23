#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct FortAthenaCaretakerAIController_DebugUpdate final
{
public:
	float                                         UpdateInterval;
};
static_assert(alignof(FortAthenaCaretakerAIController_DebugUpdate) == 0x000004, "Wrong alignment on FortAthenaCaretakerAIController_DebugUpdate");
static_assert(sizeof(FortAthenaCaretakerAIController_DebugUpdate) == 0x000004, "Wrong size on FortAthenaCaretakerAIController_DebugUpdate");
static_assert(offsetof(FortAthenaCaretakerAIController_DebugUpdate, UpdateInterval) == 0x000000, "Member 'FortAthenaCaretakerAIController_DebugUpdate::UpdateInterval' has a wrong offset!");

struct FortAthenaCaretakerAIController_OnMovementModeChanged final
{
public:
	class ACharacter*                             CharacterOwner;
	EMovementMode                                 PreviousMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortAthenaCaretakerAIController_OnMovementModeChanged) == 0x000008, "Wrong alignment on FortAthenaCaretakerAIController_OnMovementModeChanged");
static_assert(sizeof(FortAthenaCaretakerAIController_OnMovementModeChanged) == 0x000010, "Wrong size on FortAthenaCaretakerAIController_OnMovementModeChanged");
static_assert(offsetof(FortAthenaCaretakerAIController_OnMovementModeChanged, CharacterOwner) == 0x000000, "Member 'FortAthenaCaretakerAIController_OnMovementModeChanged::CharacterOwner' has a wrong offset!");
static_assert(offsetof(FortAthenaCaretakerAIController_OnMovementModeChanged, PreviousMovementMode) == 0x000008, "Member 'FortAthenaCaretakerAIController_OnMovementModeChanged::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(FortAthenaCaretakerAIController_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'FortAthenaCaretakerAIController_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct FortAIAnimInstance_Caretaker_GetStartAnimPosition final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIAnimInstance_Caretaker_GetStartAnimPosition) == 0x000004, "Wrong alignment on FortAIAnimInstance_Caretaker_GetStartAnimPosition");
static_assert(sizeof(FortAIAnimInstance_Caretaker_GetStartAnimPosition) == 0x000004, "Wrong size on FortAIAnimInstance_Caretaker_GetStartAnimPosition");
static_assert(offsetof(FortAIAnimInstance_Caretaker_GetStartAnimPosition, ReturnValue) == 0x000000, "Member 'FortAIAnimInstance_Caretaker_GetStartAnimPosition::ReturnValue' has a wrong offset!");

struct FortAIAnimInstance_Caretaker_GetWalkPlayRateValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIAnimInstance_Caretaker_GetWalkPlayRateValue) == 0x000004, "Wrong alignment on FortAIAnimInstance_Caretaker_GetWalkPlayRateValue");
static_assert(sizeof(FortAIAnimInstance_Caretaker_GetWalkPlayRateValue) == 0x000004, "Wrong size on FortAIAnimInstance_Caretaker_GetWalkPlayRateValue");
static_assert(offsetof(FortAIAnimInstance_Caretaker_GetWalkPlayRateValue, ReturnValue) == 0x000000, "Member 'FortAIAnimInstance_Caretaker_GetWalkPlayRateValue::ReturnValue' has a wrong offset!");

struct FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue) == 0x000004, "Wrong alignment on FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue");
static_assert(sizeof(FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue) == 0x000004, "Wrong size on FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue");
static_assert(offsetof(FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue, ReturnValue) == 0x000000, "Member 'FortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue::ReturnValue' has a wrong offset!");

struct FortAIAnimInstance_Caretaker_GetWorldStriderComponent final
{
public:
	class UFortAnimWorldStriderComponent*         ReturnValue;
};
static_assert(alignof(FortAIAnimInstance_Caretaker_GetWorldStriderComponent) == 0x000008, "Wrong alignment on FortAIAnimInstance_Caretaker_GetWorldStriderComponent");
static_assert(sizeof(FortAIAnimInstance_Caretaker_GetWorldStriderComponent) == 0x000008, "Wrong size on FortAIAnimInstance_Caretaker_GetWorldStriderComponent");
static_assert(offsetof(FortAIAnimInstance_Caretaker_GetWorldStriderComponent, ReturnValue) == 0x000000, "Member 'FortAIAnimInstance_Caretaker_GetWorldStriderComponent::ReturnValue' has a wrong offset!");

}
