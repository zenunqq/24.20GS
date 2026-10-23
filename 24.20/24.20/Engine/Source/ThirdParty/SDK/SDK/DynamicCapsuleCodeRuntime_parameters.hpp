#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct DynamicCapsuleComponent_ApplyDynamicCapsule final
{
public:
	struct FGameplayTag                           tag;
	float                                         CapsuleRadius;
	float                                         CapsuleHalfHeight;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(DynamicCapsuleComponent_ApplyDynamicCapsule) == 0x000004, "Wrong alignment on DynamicCapsuleComponent_ApplyDynamicCapsule");
static_assert(sizeof(DynamicCapsuleComponent_ApplyDynamicCapsule) == 0x000010, "Wrong size on DynamicCapsuleComponent_ApplyDynamicCapsule");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsule, tag) == 0x000000, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsule::tag' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsule, CapsuleRadius) == 0x000004, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsule::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsule, CapsuleHalfHeight) == 0x000008, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsule::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsule, ReturnValue) == 0x00000C, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsule::ReturnValue' has a wrong offset!");

struct DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust final
{
public:
	struct FGameplayTag                           tag;
	float                                         CapsuleRadius;
	float                                         CapsuleHalfHeight;
	uint8                                         Pad_C[0x4];
	double                                        NewRelativeMeshHeight;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust) == 0x000008, "Wrong alignment on DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust");
static_assert(sizeof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust) == 0x000020, "Wrong size on DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust, tag) == 0x000000, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust::tag' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust, CapsuleRadius) == 0x000004, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust, CapsuleHalfHeight) == 0x000008, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust, NewRelativeMeshHeight) == 0x000010, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust::NewRelativeMeshHeight' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust, ReturnValue) == 0x000018, "Member 'DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust::ReturnValue' has a wrong offset!");

struct DynamicCapsuleComponent_RemoveDynamicCapsule final
{
public:
	struct FGameplayTag                           tag;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(DynamicCapsuleComponent_RemoveDynamicCapsule) == 0x000004, "Wrong alignment on DynamicCapsuleComponent_RemoveDynamicCapsule");
static_assert(sizeof(DynamicCapsuleComponent_RemoveDynamicCapsule) == 0x000008, "Wrong size on DynamicCapsuleComponent_RemoveDynamicCapsule");
static_assert(offsetof(DynamicCapsuleComponent_RemoveDynamicCapsule, tag) == 0x000000, "Member 'DynamicCapsuleComponent_RemoveDynamicCapsule::tag' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_RemoveDynamicCapsule, ReturnValue) == 0x000004, "Member 'DynamicCapsuleComponent_RemoveDynamicCapsule::ReturnValue' has a wrong offset!");

struct DynamicCapsuleComponent_ServerApplyDynamicCapsule final
{
public:
	struct FGameplayTag                           tag;
	float                                         CapsuleRadius;
	float                                         CapsuleHalfHeight;
	uint8                                         Pad_C[0x4];
	double                                        NewRelativeMeshHeight;
};
static_assert(alignof(DynamicCapsuleComponent_ServerApplyDynamicCapsule) == 0x000008, "Wrong alignment on DynamicCapsuleComponent_ServerApplyDynamicCapsule");
static_assert(sizeof(DynamicCapsuleComponent_ServerApplyDynamicCapsule) == 0x000018, "Wrong size on DynamicCapsuleComponent_ServerApplyDynamicCapsule");
static_assert(offsetof(DynamicCapsuleComponent_ServerApplyDynamicCapsule, tag) == 0x000000, "Member 'DynamicCapsuleComponent_ServerApplyDynamicCapsule::tag' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ServerApplyDynamicCapsule, CapsuleRadius) == 0x000004, "Member 'DynamicCapsuleComponent_ServerApplyDynamicCapsule::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ServerApplyDynamicCapsule, CapsuleHalfHeight) == 0x000008, "Member 'DynamicCapsuleComponent_ServerApplyDynamicCapsule::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(DynamicCapsuleComponent_ServerApplyDynamicCapsule, NewRelativeMeshHeight) == 0x000010, "Member 'DynamicCapsuleComponent_ServerApplyDynamicCapsule::NewRelativeMeshHeight' has a wrong offset!");

struct DynamicCapsuleComponent_ServerRemoveDynamicCapsule final
{
public:
	struct FGameplayTag                           tag;
};
static_assert(alignof(DynamicCapsuleComponent_ServerRemoveDynamicCapsule) == 0x000004, "Wrong alignment on DynamicCapsuleComponent_ServerRemoveDynamicCapsule");
static_assert(sizeof(DynamicCapsuleComponent_ServerRemoveDynamicCapsule) == 0x000004, "Wrong size on DynamicCapsuleComponent_ServerRemoveDynamicCapsule");
static_assert(offsetof(DynamicCapsuleComponent_ServerRemoveDynamicCapsule, tag) == 0x000000, "Member 'DynamicCapsuleComponent_ServerRemoveDynamicCapsule::tag' has a wrong offset!");

struct JumpSlideComponent_OnMovementModeChange final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(JumpSlideComponent_OnMovementModeChange) == 0x000008, "Wrong alignment on JumpSlideComponent_OnMovementModeChange");
static_assert(sizeof(JumpSlideComponent_OnMovementModeChange) == 0x000010, "Wrong size on JumpSlideComponent_OnMovementModeChange");
static_assert(offsetof(JumpSlideComponent_OnMovementModeChange, Character) == 0x000000, "Member 'JumpSlideComponent_OnMovementModeChange::Character' has a wrong offset!");
static_assert(offsetof(JumpSlideComponent_OnMovementModeChange, PrevMovementMode) == 0x000008, "Member 'JumpSlideComponent_OnMovementModeChange::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(JumpSlideComponent_OnMovementModeChange, PreviousCustomMode) == 0x000009, "Member 'JumpSlideComponent_OnMovementModeChange::PreviousCustomMode' has a wrong offset!");

}
