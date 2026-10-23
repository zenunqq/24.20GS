#pragma once

#include "Basic.hpp"

#include "PlayerPawn_Generic_classes.hpp"
#include "PlayerPawn_Generic_parameters.hpp"

namespace SDK
{

void APlayerPawn_Generic_C::AnimTrailsDisable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "AnimTrailsDisable");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::AnimTrailsNotify(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "AnimTrailsNotify");

	Params::PlayerPawn_Generic_C_AnimTrailsNotify Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, class UNiagaraSystem* NiagaraSystemReference, class FName FirstSocketName, class FName SecondSocketName, float Width, class UFXSystemComponent* OverrideParticleComp, class FName OverideFirstSocketName, class FName OverideSecondSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "AnimTrailsSetup");

	Params::PlayerPawn_Generic_C_AnimTrailsSetup Parms{};

	Parms.ParticleSystemReference = ParticleSystemReference;
	Parms.NiagaraSystemReference = NiagaraSystemReference;
	Parms.FirstSocketName = FirstSocketName;
	Parms.SecondSocketName = SecondSocketName;
	Parms.Width = Width;
	Parms.OverrideParticleComp = OverrideParticleComp;
	Parms.OverideFirstSocketName = OverideFirstSocketName;
	Parms.OverideSecondSocketName = OverideSecondSocketName;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Are the wind and water RTT passes enabled");

	Params::PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

void APlayerPawn_Generic_C::BindWeaponSwap(double InDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "BindWeaponSwap");

	Params::PlayerPawn_Generic_C_BindWeaponSwap Parms{};

	Parms.InDuration = InDuration;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ClientBindWeaponSwap");

	Params::PlayerPawn_Generic_C_ClientBindWeaponSwap Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh, EFortCustomPartType CustomBodyType, class USkeletalMeshComponent* PartMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Create and Duplicate Effect Poseable Skeletal Mesh");

	Params::PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh Parms{};

	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = std::move(Empty_MID_Array);
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.PoseableMesh = PoseableMesh;
	Parms.CustomBodyType = CustomBodyType;
	Parms.PartMesh = PartMesh;

	UObject::ProcessEvent(Func, &Parms);

	Empty_MID_Array = std::move(Parms.Empty_MID_Array);
	PoseableMesh = Parms.PoseableMesh;
}

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class USkeletalMeshComponent* MeshPart, EFortCustomPartType CustomBodyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Create and Duplicate Effect Skeletal Meshes Parent");

	Params::PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent Parms{};

	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = std::move(Empty_MID_Array);
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.MeshPart = MeshPart;
	Parms.CustomBodyType = CustomBodyType;

	UObject::ProcessEvent(Func, &Parms);

	DuplicatedSkeletalMeshComponent = Parms.DuplicatedSkeletalMeshComponent;
	Empty_MID_Array = std::move(Parms.Empty_MID_Array);
}

void APlayerPawn_Generic_C::DisableWaterLevelTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "DisableWaterLevelTick");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::EnableWaterAudio(bool IsEnteringWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "EnableWaterAudio");

	Params::PlayerPawn_Generic_C_EnableWaterAudio Parms{};

	Parms.IsEnteringWater = IsEnteringWater;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ExecuteUbergraph_PlayerPawn_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ExecuteUbergraph_PlayerPawn_Generic");

	Params::PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Entered_Water_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Entered Water Volume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::Find_Shield_MID_Array(EFortCustomPartType PartType, bool* Found, int32* Index_0, TArray<class UMaterialInstanceDynamic*>* MIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Find Shield MID Array");

	Params::PlayerPawn_Generic_C_Find_Shield_MID_Array Parms{};

	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;

	if (MIDs != nullptr)
		*MIDs = std::move(Parms.MIDs);
}

void APlayerPawn_Generic_C::FindShieldOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "FindShieldOpacity");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::FootStepLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "FootStepLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::FootStepRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "FootStepRight");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Athena_Equipping(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Athena.Equipping");

	Params::PlayerPawn_Generic_C_GameplayCue_Athena_Equipping Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Damage");

	Params::PlayerPawn_Generic_C_GameplayCue_Damage Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Damage_Shielded(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Damage.Shielded");

	Params::PlayerPawn_Generic_C_GameplayCue_Damage_Shielded Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Shield_Destroyed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Shield.Destroyed");

	Params::PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::GameplayCue_Shield_FullyCharged(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GameplayCue.Shield.FullyCharged");

	Params::PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

double APlayerPawn_Generic_C::GetHealthPercent2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GetHealthPercent2");

	Params::PlayerPawn_Generic_C_GetHealthPercent2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double APlayerPawn_Generic_C::GetShieldPercent2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "GetShieldPercent2");

	Params::PlayerPawn_Generic_C_GetShieldPercent2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void APlayerPawn_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "InternalSetFirstPersonCamera");

	Params::PlayerPawn_Generic_C_InternalSetFirstPersonCamera Parms{};

	Parms.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Melee_Effect_Color");

	Params::PlayerPawn_Generic_C_Melee_Effect_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = std::move(Parms.Melee_Color_Set);
}

void APlayerPawn_Generic_C::MeleeSwingLeft(bool First_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MeleeSwingLeft");

	Params::PlayerPawn_Generic_C_MeleeSwingLeft Parms{};

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MeleeSwingLeft_End");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::MeleeSwingRight(bool First_Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MeleeSwingRight");

	Params::PlayerPawn_Generic_C_MeleeSwingRight Parms{};

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MeleeSwingRight_End");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::MultiEndSwap(class AFortWeapon* CurrentWeapon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MultiEndSwap");

	Params::PlayerPawn_Generic_C_MultiEndSwap Parms{};

	Parms.CurrentWeapon_0 = CurrentWeapon_0;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "MultiSwapWeapon");

	Params::PlayerPawn_Generic_C_MultiSwapWeapon Parms{};

	Parms.New = New;
	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::On_Set_Material_Part(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "On Set Material Part");

	Params::PlayerPawn_Generic_C_On_Set_Material_Part Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnBackpack(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnBackpack");

	Params::PlayerPawn_Generic_C_OnBackpack Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnBackpackPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnBackpackPart");

	Params::PlayerPawn_Generic_C_OnBackpackPart Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnBaseChanged(class AActor* NewBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnBaseChanged");

	Params::PlayerPawn_Generic_C_OnBaseChanged Parms{};

	Parms.NewBase = NewBase;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnCharacterPartsReinitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnCharacterPartsReinitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnClearSentence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnClearSentence");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnDamagePlayEffects");

	Params::PlayerPawn_Generic_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnDeathPlayEffects");

	Params::PlayerPawn_Generic_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnDeathServer");

	Params::PlayerPawn_Generic_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnDisplaySentence(const class FText& SpeechText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnDisplaySentence");

	Params::PlayerPawn_Generic_C_OnDisplaySentence Parms{};

	Parms.SpeechText = std::move(SpeechText);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnEnteredVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnEnteredVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnEnteredWaterVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnEnteredWaterVolume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnExitedVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnExitedWaterVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnExitedWaterVolume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnLand_CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnLand_CE");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnLanded");

	Params::PlayerPawn_Generic_C_OnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnMeshPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnMeshPart");

	Params::PlayerPawn_Generic_C_OnMeshPart Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnMeshPart2(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnMeshPart2");

	Params::PlayerPawn_Generic_C_OnMeshPart2 Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnMeshPart3(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnMeshPart3");

	Params::PlayerPawn_Generic_C_OnMeshPart3 Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnMeshPartComplete(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* BaseMesh, const TArray<class UCustomCharacterPart*>& PartsArray, const TArray<class USkeletalMeshComponent*>& ValidSkeletalMeshComponentPartArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnMeshPartComplete");

	Params::PlayerPawn_Generic_C_OnMeshPartComplete Parms{};

	Parms.Pawn = Pawn;
	Parms.BaseMesh = BaseMesh;
	Parms.PartsArray = std::move(PartsArray);
	Parms.ValidSkeletalMeshComponentPartArray = std::move(ValidSkeletalMeshComponentPartArray);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnPartApplied(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnPartApplied");

	Params::PlayerPawn_Generic_C_OnPartApplied Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::OnRep_BlockedByPawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnRep_BlockedByPawns");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnRep_On_Player_Built_Floor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnRep_On_Player_Built_Floor");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "OnWeaponEquipped");

	Params::PlayerPawn_Generic_C_OnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Override_Materials_and_Copy_Parameters_on_Weapons_Mesh(class UMaterialInterface* Material_to_Apply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Override Materials and Copy Parameters on Weapons Mesh");

	Params::PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh Parms{};

	Parms.Material_to_Apply = Material_to_Apply;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Player_Creates_a_Splash(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Player Creates a Splash");

	Params::PlayerPawn_Generic_C_Player_Creates_a_Splash Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::PlayGameplayWindEffect(EPlayerWindParticleEmitters Player_Wind_Particle_Emitter_To_Fire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "PlayGameplayWindEffect");

	Params::PlayerPawn_Generic_C_PlayGameplayWindEffect Parms{};

	Parms.Player_Wind_Particle_Emitter_To_Fire = Player_Wind_Particle_Emitter_To_Fire;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::PlayHitSound(class AFortPawn* Instigator_0, class AActor* Damage_Causer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "PlayHitSound");

	Params::PlayerPawn_Generic_C_PlayHitSound Parms{};

	Parms.Instigator_0 = Instigator_0;
	Parms.Damage_Causer = Damage_Causer;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ReceivePossessed");

	Params::PlayerPawn_Generic_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ReceiveTick");

	Params::PlayerPawn_Generic_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ReinitializeWeaponMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ReinitializeWeaponMaterials");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::Restore_Previous_Materials_on_Character_Mesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Restore Previous Materials on Character Mesh");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::Restore_Previous_Materials_on_Weapons_Mesh(class AFortWeapon* Weapon_to_Restore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Restore Previous Materials on Weapons Mesh");

	Params::PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh Parms{};

	Parms.Weapon_to_Restore = Weapon_to_Restore;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Set_Body_Type_Sounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Set Body Type Sounds");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::Set_Part_Material(TArray<class UMaterialInstanceDynamic*>& Array, class USkeletalMeshComponent* MeshPart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Set Part Material");

	Params::PlayerPawn_Generic_C_Set_Part_Material Parms{};

	Parms.Array = std::move(Array);
	Parms.MeshPart = MeshPart;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}

void APlayerPawn_Generic_C::Set_Scalar_Parameter_on_Character_MIDs(class FName Parameter_Name, double Parameter_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Set Scalar Parameter on Character MIDs");

	Params::PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs Parms{};

	Parms.Parameter_Name = Parameter_Name;
	Parms.Parameter_Value = Parameter_Value;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs(class FName Parameter_Name, double Parameter_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Set Scalar Parameter on Duplicate Mesh MIDs");

	Params::PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs Parms{};

	Parms.Parameter_Name = Parameter_Name;
	Parms.Parameter_Value = Parameter_Value;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::SetBlockedByPawns(bool bLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "SetBlockedByPawns");

	Params::PlayerPawn_Generic_C_SetBlockedByPawns Parms{};

	Parms.bLocked = bLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::SetFirstPersonCamera(bool bNewUseFirstPersonCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "SetFirstPersonCamera");

	Params::PlayerPawn_Generic_C_SetFirstPersonCamera Parms{};

	Parms.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::SetShieldMids(double Highlight_Cracks, bool Set_Highlight_Cracks, double Push, bool Set_Push)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "SetShieldMids");

	Params::PlayerPawn_Generic_C_SetShieldMids Parms{};

	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::SetShieldMids_InternalLoop(double Highlight_Cracks, bool Set_Highlight_Cracks, double Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>& MID_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "SetShieldMids_InternalLoop");

	Params::PlayerPawn_Generic_C_SetShieldMids_InternalLoop Parms{};

	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;
	Parms.MID_Array = std::move(MID_Array);

	UObject::ProcessEvent(Func, &Parms);

	MID_Array = std::move(Parms.MID_Array);
}

void APlayerPawn_Generic_C::Setup_Duplicate_FX_Mesh(class UMaterialInterface*& Material_to_Apply, EFortCustomPartType PartType, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, class USkeletalMeshComponent*& Duplicated_Mesh, bool Transfer_Material_Parameters, int32 Translucent_Sort_Order, class USkeletalMeshComponent* MeshPart, bool* ObjectsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "Setup Duplicate FX Mesh");

	Params::PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh Parms{};

	Parms.Material_to_Apply = Material_to_Apply;
	Parms.PartType = PartType;
	Parms.Empty_MID_Array = std::move(Empty_MID_Array);
	Parms.Duplicated_Mesh = Duplicated_Mesh;
	Parms.Transfer_Material_Parameters = Transfer_Material_Parameters;
	Parms.Translucent_Sort_Order = Translucent_Sort_Order;
	Parms.MeshPart = MeshPart;

	UObject::ProcessEvent(Func, &Parms);

	Material_to_Apply = Parms.Material_to_Apply;
	Empty_MID_Array = std::move(Parms.Empty_MID_Array);
	Duplicated_Mesh = Parms.Duplicated_Mesh;

	if (ObjectsValid != nullptr)
		*ObjectsValid = Parms.ObjectsValid;
}

void APlayerPawn_Generic_C::ShatterShield__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ShatterShield__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::ShatterShield__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ShatterShield__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh_0, class USkeletalMeshComponent* Master)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "SlaveAMeshToTheBody");

	Params::PlayerPawn_Generic_C_SlaveAMeshToTheBody Parms{};

	Parms.Mesh_0 = Mesh_0;
	Parms.Master = Master;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ToggleLandFX(bool NewHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ToggleLandFX");

	Params::PlayerPawn_Generic_C_ToggleLandFX Parms{};

	Parms.NewHidden = NewHidden;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::ToggleShieldVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "ToggleShieldVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::TriggerGameplayWindEmitter(EPlayerWindParticleEmitters Player_Wind_Particle_Emitter_To_Fire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "TriggerGameplayWindEmitter");

	Params::PlayerPawn_Generic_C_TriggerGameplayWindEmitter Parms{};

	Parms.Player_Wind_Particle_Emitter_To_Fire = Player_Wind_Particle_Emitter_To_Fire;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_C::UnBindWeaponSwap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "UnBindWeaponSwap");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
