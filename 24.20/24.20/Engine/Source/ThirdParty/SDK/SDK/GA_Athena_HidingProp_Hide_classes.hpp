#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Athena_HidingProp_Hide_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	class AB_HidingProp_C*                        HidingProp;
	class UAnimMontage*                           Enter_Anim_Montage;
	struct FGameplayTag                           GC_Wobble;
	uint8                                         Pad_B4C[0x4];
	struct FScalableFloat                         ExitBlockShootDelay;
	struct FGameplayTagContainer                  TC_Quest;
	struct FGameplayTagContainer                  TC_PlayerOwned;
	struct FScalableFloat                         RustleMinDelay;
	struct FScalableFloat                         RustleMaxDelay;
	class AFortPlayerController*                  PlayerController;
	struct FGameplayTagContainer                  HidingInPropTag;
	struct FGameplayTagContainer                  GettingInPropTag;
	struct FGameplayTag                           CurieBurningTag;
	bool                                          AllowCosmetics;
	uint8                                         Pad_C55[0x3];
	struct FGameplayTag                           DisallowCosmeticsTag;
	bool                                          LandedOnProp;
	uint8                                         Pad_C5D[0x3];
	struct FTimerHandle                           LockOnTimer;
	struct FVector                                HideLocationForwardVectorWorldPos;
	struct FRotator                               HideLocationForwardVectorWorldRot;

public:
	void Added_1D4A49874AC422976CAC2C9155DDA736();
	void Added_35C56E354FE08855A837E0BDFB150F20();
	void Added_CD24BC554E955808A88A5B809807A94E();
	void Added_D329D9924DF9DF1B79D0738C6CB8EBA1();
	void Added_D54881A34BC79E85BE563BA220DD924D();
	void Added_E60D990647FDAB06895E738C7A2BAE7E();
	void Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90();
	void Added_F049BFC743FE176042ECD98641AFE2B9();
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void End();
	void Event_LockOnProp();
	void EventReceived_8C4C6D7442A0B18F41B269995833ED85(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinished_35C1D63345930DB9A5BDB7BED8B808BF(bool DestinationReached, bool TimedOut, const struct FVector& FinalTargetLocation);
	void OnTimedOut_8010F4C64221E8F497C6559558420C32();
	void OnTimedOut_859E251740F1C46B914344A9FC343B19();
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32();
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19();
	void RustleLoop();
	void SetAvatarHiddenInGame(bool New_Hidden);
	void SetCosmeticsAllowed(bool Allowed);
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void WobbleHidingProp(double NormalizedMagnitude);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_Hide_C">();
	}
	static class UGA_Athena_HidingProp_Hide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_Hide_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_Hide_C) == 0x000008, "Wrong alignment on UGA_Athena_HidingProp_Hide_C");
static_assert(sizeof(UGA_Athena_HidingProp_Hide_C) == 0x000C98, "Wrong size on UGA_Athena_HidingProp_Hide_C");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_HidingProp_Hide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_HidingProp_Hide_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, HidingProp) == 0x000B38, "Member 'UGA_Athena_HidingProp_Hide_C::HidingProp' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, Enter_Anim_Montage) == 0x000B40, "Member 'UGA_Athena_HidingProp_Hide_C::Enter_Anim_Montage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, GC_Wobble) == 0x000B48, "Member 'UGA_Athena_HidingProp_Hide_C::GC_Wobble' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, ExitBlockShootDelay) == 0x000B50, "Member 'UGA_Athena_HidingProp_Hide_C::ExitBlockShootDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, TC_Quest) == 0x000B78, "Member 'UGA_Athena_HidingProp_Hide_C::TC_Quest' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, TC_PlayerOwned) == 0x000B98, "Member 'UGA_Athena_HidingProp_Hide_C::TC_PlayerOwned' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, RustleMinDelay) == 0x000BB8, "Member 'UGA_Athena_HidingProp_Hide_C::RustleMinDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, RustleMaxDelay) == 0x000BE0, "Member 'UGA_Athena_HidingProp_Hide_C::RustleMaxDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, PlayerController) == 0x000C08, "Member 'UGA_Athena_HidingProp_Hide_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, HidingInPropTag) == 0x000C10, "Member 'UGA_Athena_HidingProp_Hide_C::HidingInPropTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, GettingInPropTag) == 0x000C30, "Member 'UGA_Athena_HidingProp_Hide_C::GettingInPropTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, CurieBurningTag) == 0x000C50, "Member 'UGA_Athena_HidingProp_Hide_C::CurieBurningTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, AllowCosmetics) == 0x000C54, "Member 'UGA_Athena_HidingProp_Hide_C::AllowCosmetics' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, DisallowCosmeticsTag) == 0x000C58, "Member 'UGA_Athena_HidingProp_Hide_C::DisallowCosmeticsTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, LandedOnProp) == 0x000C5C, "Member 'UGA_Athena_HidingProp_Hide_C::LandedOnProp' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, LockOnTimer) == 0x000C60, "Member 'UGA_Athena_HidingProp_Hide_C::LockOnTimer' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, HideLocationForwardVectorWorldPos) == 0x000C68, "Member 'UGA_Athena_HidingProp_Hide_C::HideLocationForwardVectorWorldPos' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Hide_C, HideLocationForwardVectorWorldRot) == 0x000C80, "Member 'UGA_Athena_HidingProp_Hide_C::HideLocationForwardVectorWorldRot' has a wrong offset!");

}
