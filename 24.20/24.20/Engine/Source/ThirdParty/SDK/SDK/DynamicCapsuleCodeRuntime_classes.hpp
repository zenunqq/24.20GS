#pragma once

#include "Basic.hpp"

#include "DynamicCapsuleCodeRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UDynamicCapsuleComponent final : public UFortPawnComponent
{
public:
	struct FDynamicCapsuleState                   ReplicatedCapsuleState;
	uint8                                         Pad_B8[0x38];

public:
	bool ApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight);
	bool ApplyDynamicCapsuleWithLocationAdjust(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	void OnRep_DynamicCapsuleReplicatedState();
	bool RemoveDynamicCapsule(const struct FGameplayTag& tag);
	void ServerApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight);
	void ServerRemoveDynamicCapsule(const struct FGameplayTag& tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicCapsuleComponent">();
	}
	static class UDynamicCapsuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicCapsuleComponent>();
	}
};
static_assert(alignof(UDynamicCapsuleComponent) == 0x000008, "Wrong alignment on UDynamicCapsuleComponent");
static_assert(sizeof(UDynamicCapsuleComponent) == 0x0000F0, "Wrong size on UDynamicCapsuleComponent");
static_assert(offsetof(UDynamicCapsuleComponent, ReplicatedCapsuleState) == 0x0000A8, "Member 'UDynamicCapsuleComponent::ReplicatedCapsuleState' has a wrong offset!");

class UAnimNotifyState_SetCapsuleSize final : public UAnimNotifyState
{
public:
	float                                         TargetCapsuleRadius;
	float                                         TargetCapsuleHalfHeight;
	bool                                          bAdjustRelativeMeshHeight;
	uint8                                         Pad_39[0x3];
	float                                         TargetRelativeMeshHeight;
	struct FGameplayTag                           CapsuleSizeTag;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_SetCapsuleSize">();
	}
	static class UAnimNotifyState_SetCapsuleSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SetCapsuleSize>();
	}
};
static_assert(alignof(UAnimNotifyState_SetCapsuleSize) == 0x000008, "Wrong alignment on UAnimNotifyState_SetCapsuleSize");
static_assert(sizeof(UAnimNotifyState_SetCapsuleSize) == 0x000048, "Wrong size on UAnimNotifyState_SetCapsuleSize");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetCapsuleRadius) == 0x000030, "Member 'UAnimNotifyState_SetCapsuleSize::TargetCapsuleRadius' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetCapsuleHalfHeight) == 0x000034, "Member 'UAnimNotifyState_SetCapsuleSize::TargetCapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, bAdjustRelativeMeshHeight) == 0x000038, "Member 'UAnimNotifyState_SetCapsuleSize::bAdjustRelativeMeshHeight' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetRelativeMeshHeight) == 0x00003C, "Member 'UAnimNotifyState_SetCapsuleSize::TargetRelativeMeshHeight' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, CapsuleSizeTag) == 0x000040, "Member 'UAnimNotifyState_SetCapsuleSize::CapsuleSizeTag' has a wrong offset!");

class UJumpSlideComponent final : public UFortPawnComponent
{
public:
	uint8                                         Pad_A8[0x8];

public:
	void OnJumpSlideEnd();
	void OnJumpSlideStart();
	void OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JumpSlideComponent">();
	}
	static class UJumpSlideComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJumpSlideComponent>();
	}
};
static_assert(alignof(UJumpSlideComponent) == 0x000008, "Wrong alignment on UJumpSlideComponent");
static_assert(sizeof(UJumpSlideComponent) == 0x0000B0, "Wrong size on UJumpSlideComponent");

}
