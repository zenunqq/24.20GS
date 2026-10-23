#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UAnimNotifyState_SyncPettingCreature_C final : public UAnimNotifyState
{
public:
	void GetRiderPettingMontage(class AActor* RiderActor, class UAnimMontage** RiderPettingMontage) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_SyncPettingCreature_C">();
	}
	static class UAnimNotifyState_SyncPettingCreature_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SyncPettingCreature_C>();
	}
};
static_assert(alignof(UAnimNotifyState_SyncPettingCreature_C) == 0x000008, "Wrong alignment on UAnimNotifyState_SyncPettingCreature_C");
static_assert(sizeof(UAnimNotifyState_SyncPettingCreature_C) == 0x000030, "Wrong size on UAnimNotifyState_SyncPettingCreature_C");

}
