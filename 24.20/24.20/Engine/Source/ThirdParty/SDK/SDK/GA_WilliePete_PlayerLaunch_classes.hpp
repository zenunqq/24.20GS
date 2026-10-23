#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_WilliePete_PlayerLaunch_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawnAthena*                  OwningPawn;
	class UAnimMontage*                           ExitMontage;
	struct FScalableFloat                         LaunchHeightValue;
	class AB_HidingProp_WilliePete_C*             WilliePeteLauncher;
	struct FGameplayTagContainer                  PlayerLaunchTag;
	class UClass*                                 GE_WilliePete_PlayerLaunch_ApplyGC;
	class AFortPlayerPawnAthena*                  TeleportExitPlayer;

public:
	void ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BreakBlockingStructure(class AActor* HitActor);
	void End_Skydive(const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnCancelled_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnCompleted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void Redeploy_Glider();
	void StructureTraceLoop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WilliePete_PlayerLaunch_C">();
	}
	static class UGA_WilliePete_PlayerLaunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WilliePete_PlayerLaunch_C>();
	}
};
static_assert(alignof(UGA_WilliePete_PlayerLaunch_C) == 0x000008, "Wrong alignment on UGA_WilliePete_PlayerLaunch_C");
static_assert(sizeof(UGA_WilliePete_PlayerLaunch_C) == 0x000BA0, "Wrong size on UGA_WilliePete_PlayerLaunch_C");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, UberGraphFrame) == 0x000B28, "Member 'UGA_WilliePete_PlayerLaunch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, OwningPawn) == 0x000B30, "Member 'UGA_WilliePete_PlayerLaunch_C::OwningPawn' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, ExitMontage) == 0x000B38, "Member 'UGA_WilliePete_PlayerLaunch_C::ExitMontage' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, LaunchHeightValue) == 0x000B40, "Member 'UGA_WilliePete_PlayerLaunch_C::LaunchHeightValue' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, WilliePeteLauncher) == 0x000B68, "Member 'UGA_WilliePete_PlayerLaunch_C::WilliePeteLauncher' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, PlayerLaunchTag) == 0x000B70, "Member 'UGA_WilliePete_PlayerLaunch_C::PlayerLaunchTag' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, GE_WilliePete_PlayerLaunch_ApplyGC) == 0x000B90, "Member 'UGA_WilliePete_PlayerLaunch_C::GE_WilliePete_PlayerLaunch_ApplyGC' has a wrong offset!");
static_assert(offsetof(UGA_WilliePete_PlayerLaunch_C, TeleportExitPlayer) == 0x000B98, "Member 'UGA_WilliePete_PlayerLaunch_C::TeleportExitPlayer' has a wrong offset!");

}
