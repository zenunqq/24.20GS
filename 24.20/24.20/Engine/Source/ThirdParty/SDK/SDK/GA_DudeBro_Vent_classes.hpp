#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_DudeBro_Vent_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USkeletalMeshComponent*                 VehicleSkelMesh;
	class AFortPlayerPawn*                        PlayerPawn;
	double                                        GravFloorAltitude;
	double                                        UpwardLaunchVelocity;
	TArray<class AActor*>                         VentsHitBeforeLanding;
	int32                                         NumVentsToHitForQuest;
	struct FGameplayTag                           Tag_to_Check;
	struct FGameplayTag                           VentBlocked;

public:
	void ActuallyCleanPlayerUp();
	void Added_4065C3B14D35BDC4C0608DB5BD4A1EBA();
	void ExecuteUbergraph_GA_DudeBro_Vent(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DudeBro_Vent_C">();
	}
	static class UGA_DudeBro_Vent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DudeBro_Vent_C>();
	}
};
static_assert(alignof(UGA_DudeBro_Vent_C) == 0x000008, "Wrong alignment on UGA_DudeBro_Vent_C");
static_assert(sizeof(UGA_DudeBro_Vent_C) == 0x000B70, "Wrong size on UGA_DudeBro_Vent_C");
static_assert(offsetof(UGA_DudeBro_Vent_C, UberGraphFrame) == 0x000B28, "Member 'UGA_DudeBro_Vent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, VehicleSkelMesh) == 0x000B30, "Member 'UGA_DudeBro_Vent_C::VehicleSkelMesh' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, PlayerPawn) == 0x000B38, "Member 'UGA_DudeBro_Vent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, GravFloorAltitude) == 0x000B40, "Member 'UGA_DudeBro_Vent_C::GravFloorAltitude' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, UpwardLaunchVelocity) == 0x000B48, "Member 'UGA_DudeBro_Vent_C::UpwardLaunchVelocity' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, VentsHitBeforeLanding) == 0x000B50, "Member 'UGA_DudeBro_Vent_C::VentsHitBeforeLanding' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, NumVentsToHitForQuest) == 0x000B60, "Member 'UGA_DudeBro_Vent_C::NumVentsToHitForQuest' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, Tag_to_Check) == 0x000B64, "Member 'UGA_DudeBro_Vent_C::Tag_to_Check' has a wrong offset!");
static_assert(offsetof(UGA_DudeBro_Vent_C, VentBlocked) == 0x000B68, "Member 'UGA_DudeBro_Vent_C::VentBlocked' has a wrong offset!");

}
