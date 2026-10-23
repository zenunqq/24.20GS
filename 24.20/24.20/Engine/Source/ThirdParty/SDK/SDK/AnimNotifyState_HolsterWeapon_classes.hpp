#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimNotifyState_HolsterWeapon_C final : public UAnimNotifyState
{
public:
	bool                                          PlayEquipAnim;
	uint8                                         Pad_31[0x3];
	class FName                                   AnimNotifyStateHolster;

public:
	bool CanApplyHolster(const class FName& HolsterId) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_HolsterWeapon_C">();
	}
	static class UAnimNotifyState_HolsterWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_HolsterWeapon_C>();
	}
};
static_assert(alignof(UAnimNotifyState_HolsterWeapon_C) == 0x000008, "Wrong alignment on UAnimNotifyState_HolsterWeapon_C");
static_assert(sizeof(UAnimNotifyState_HolsterWeapon_C) == 0x000038, "Wrong size on UAnimNotifyState_HolsterWeapon_C");
static_assert(offsetof(UAnimNotifyState_HolsterWeapon_C, PlayEquipAnim) == 0x000030, "Member 'UAnimNotifyState_HolsterWeapon_C::PlayEquipAnim' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_HolsterWeapon_C, AnimNotifyStateHolster) == 0x000034, "Member 'UAnimNotifyState_HolsterWeapon_C::AnimNotifyStateHolster' has a wrong offset!");

}
