#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Rift_Athena_Skydive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAnimMontage*                           FallingAnimation;
	double                                        Hangtimee;
	class USkeletalMeshComponent*                 VehicleSkelMesh;
	struct FScalableFloat                         HangTime;
	struct FGameplayTag                           EventTag;
	uint8                                         Pad_B74[0x4];
	struct FScalableFloat                         KickFromVehicle_;
	class USoundBase*                             LocalPlayerSound;
	class UClass*                                 GameplayCueGE;
	class AFortPlayerPawn*                        PlayerPawn;
	bool                                          bHolstered;
	uint8                                         Pad_BB9[0x3];
	class FName                                   RiftSkydiveHolster;
	struct FVector                                ImpulseStrength;
	bool                                          bNeedsInputEnable;
	uint8                                         Pad_BD9[0x7];
	struct FTimerHandle                           SafetyTimer;
	struct FVector                                NewVar_0;
	struct FGameplayTagContainer                  UnblockTagsIfPassenger;

public:
	void Added_C39EFBAB480B446A6927009E5953EC41();
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint);
	void HandleForceEnd();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnDestroyed_Event_0(class AActor* DestroyedActor);
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnPawnEnteredWater(class AFortPlayerPawn* FortPlayerPawn);
	void OnPawnLanded(const struct FHitResult& Hit);
	void RemoveSkydivingGameplayEffect();
	void SetPlayerToSkydive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Rift_Athena_Skydive_C">();
	}
	static class UGA_Rift_Athena_Skydive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Rift_Athena_Skydive_C>();
	}
};
static_assert(alignof(UGA_Rift_Athena_Skydive_C) == 0x000008, "Wrong alignment on UGA_Rift_Athena_Skydive_C");
static_assert(sizeof(UGA_Rift_Athena_Skydive_C) == 0x000C20, "Wrong size on UGA_Rift_Athena_Skydive_C");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Rift_Athena_Skydive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, FallingAnimation) == 0x000B30, "Member 'UGA_Rift_Athena_Skydive_C::FallingAnimation' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, Hangtimee) == 0x000B38, "Member 'UGA_Rift_Athena_Skydive_C::Hangtimee' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, VehicleSkelMesh) == 0x000B40, "Member 'UGA_Rift_Athena_Skydive_C::VehicleSkelMesh' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, HangTime) == 0x000B48, "Member 'UGA_Rift_Athena_Skydive_C::HangTime' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, EventTag) == 0x000B70, "Member 'UGA_Rift_Athena_Skydive_C::EventTag' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, KickFromVehicle_) == 0x000B78, "Member 'UGA_Rift_Athena_Skydive_C::KickFromVehicle_' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, LocalPlayerSound) == 0x000BA0, "Member 'UGA_Rift_Athena_Skydive_C::LocalPlayerSound' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, GameplayCueGE) == 0x000BA8, "Member 'UGA_Rift_Athena_Skydive_C::GameplayCueGE' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, PlayerPawn) == 0x000BB0, "Member 'UGA_Rift_Athena_Skydive_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, bHolstered) == 0x000BB8, "Member 'UGA_Rift_Athena_Skydive_C::bHolstered' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, RiftSkydiveHolster) == 0x000BBC, "Member 'UGA_Rift_Athena_Skydive_C::RiftSkydiveHolster' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, ImpulseStrength) == 0x000BC0, "Member 'UGA_Rift_Athena_Skydive_C::ImpulseStrength' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, bNeedsInputEnable) == 0x000BD8, "Member 'UGA_Rift_Athena_Skydive_C::bNeedsInputEnable' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, SafetyTimer) == 0x000BE0, "Member 'UGA_Rift_Athena_Skydive_C::SafetyTimer' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, NewVar_0) == 0x000BE8, "Member 'UGA_Rift_Athena_Skydive_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UGA_Rift_Athena_Skydive_C, UnblockTagsIfPassenger) == 0x000C00, "Member 'UGA_Rift_Athena_Skydive_C::UnblockTagsIfPassenger' has a wrong offset!");

}
