#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CreatureBaseRidableComponent_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UBoarRidableComponent_C final : public UCreatureBaseRidableComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BoarRidableComponent_C;
	class USoundBase*                             BurtChargeStartSound;
	class UAudioComponent*                        ChargeSoundComp;
	double                                        SprintCooldDownTime;
	class UClass*                                 GESprintImpactPawn;
	struct FGameplayTag                           SprintImpactGameplayCueTag;
	uint8                                         Pad_B9C[0x4];
	class UClass*                                 GESprintImpactVehicle;
	struct FGameplayTag                           SprintChargeImpact_Default_CueTag;
	struct FGameplayTag                           SprintChargeImpact_Pawn_CueTag;
	struct FGameplayTag                           SprintChargeImpact_DestroyBuild_CueTag;

public:
	void ExecuteUbergraph_BoarRidableComponent(int32 EntryPoint);
	void HandleAbilityStarted();
	void HandleRiderStartedRiding(class URiderComponent* Rider);
	void HandleRiderStoppedRiding(class URiderComponent* Rider);
	void OnReaction(class UObject* Object, const struct FHitResult& HitResult);
	void OnReactionEvent(const class AActor* HitActor, const bool bFromAsyncSweepBox, EFCollisionReactionType CollisionReactionType, const bool bIsFirstContinuousReactionOnDelayableActor, const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BoarRidableComponent_C">();
	}
	static class UBoarRidableComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoarRidableComponent_C>();
	}
};
static_assert(alignof(UBoarRidableComponent_C) == 0x000010, "Wrong alignment on UBoarRidableComponent_C");
static_assert(sizeof(UBoarRidableComponent_C) == 0x000BC0, "Wrong size on UBoarRidableComponent_C");
static_assert(offsetof(UBoarRidableComponent_C, UberGraphFrame_BoarRidableComponent_C) == 0x000B70, "Member 'UBoarRidableComponent_C::UberGraphFrame_BoarRidableComponent_C' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, BurtChargeStartSound) == 0x000B78, "Member 'UBoarRidableComponent_C::BurtChargeStartSound' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, ChargeSoundComp) == 0x000B80, "Member 'UBoarRidableComponent_C::ChargeSoundComp' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, SprintCooldDownTime) == 0x000B88, "Member 'UBoarRidableComponent_C::SprintCooldDownTime' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, GESprintImpactPawn) == 0x000B90, "Member 'UBoarRidableComponent_C::GESprintImpactPawn' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, SprintImpactGameplayCueTag) == 0x000B98, "Member 'UBoarRidableComponent_C::SprintImpactGameplayCueTag' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, GESprintImpactVehicle) == 0x000BA0, "Member 'UBoarRidableComponent_C::GESprintImpactVehicle' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, SprintChargeImpact_Default_CueTag) == 0x000BA8, "Member 'UBoarRidableComponent_C::SprintChargeImpact_Default_CueTag' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, SprintChargeImpact_Pawn_CueTag) == 0x000BAC, "Member 'UBoarRidableComponent_C::SprintChargeImpact_Pawn_CueTag' has a wrong offset!");
static_assert(offsetof(UBoarRidableComponent_C, SprintChargeImpact_DestroyBuild_CueTag) == 0x000BB0, "Member 'UBoarRidableComponent_C::SprintChargeImpact_DestroyBuild_CueTag' has a wrong offset!");

}
