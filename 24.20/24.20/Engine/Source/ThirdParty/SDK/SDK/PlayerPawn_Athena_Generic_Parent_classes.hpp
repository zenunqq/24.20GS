#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UMotionWarpingComponent*                MotionWarping;
	class UMultiInteractActorComponent_C*         MultiInteractActorComponent;
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;
	class UPostProcessComponent*                  PlayerPostProcessFX;
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;
	TMulticastInlineDelegate<void(class AFortPlayerPawnAthena* JumpingPlayer)> ShootingTargetReactToJump;
	TMulticastInlineDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> OnPlayHit;
	TMulticastInlineDelegate<void()>              OnEnteredVehicleDispatcher;
	TMulticastInlineDelegate<void()>              OnExitedVehicleDispatcher;

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_Parent_C">();
	}
	static class APlayerPawn_Athena_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Athena_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Athena_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Athena_Generic_Parent_C) == 0x005490, "Wrong size on APlayerPawn_Athena_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, UberGraphFrame) == 0x0053A0, "Member 'APlayerPawn_Athena_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, MotionWarping) == 0x0053A8, "Member 'APlayerPawn_Athena_Generic_Parent_C::MotionWarping' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, MultiInteractActorComponent) == 0x0053B0, "Member 'APlayerPawn_Athena_Generic_Parent_C::MultiInteractActorComponent' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, Default_Weapon_Materials) == 0x0053B8, "Member 'APlayerPawn_Athena_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBackpackMaterials) == 0x0053C8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHatMaterials) == 0x0053D8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHeadMaterials) == 0x0053E8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBodyMaterials) == 0x0053F8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnCharmMaterials) == 0x005408, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnFaceMaterials) == 0x005418, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PlayerPostProcessFX) == 0x005428, "Member 'APlayerPawn_Athena_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, SkeletalMeshes) == 0x005430, "Member 'APlayerPawn_Athena_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnMaterials_ALL) == 0x005440, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, ShootingTargetReactToJump) == 0x005450, "Member 'APlayerPawn_Athena_Generic_Parent_C::ShootingTargetReactToJump' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnPlayHit) == 0x005460, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnPlayHit' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnEnteredVehicleDispatcher) == 0x005470, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicleDispatcher' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnExitedVehicleDispatcher) == 0x005480, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnExitedVehicleDispatcher' has a wrong offset!");

}
