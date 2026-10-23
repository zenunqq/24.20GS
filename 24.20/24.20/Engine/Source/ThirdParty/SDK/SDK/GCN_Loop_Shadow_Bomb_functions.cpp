#pragma once

#include "Basic.hpp"

#include "GCN_Loop_Shadow_Bomb_classes.hpp"
#include "GCN_Loop_Shadow_Bomb_parameters.hpp"

namespace SDK
{

void AGCN_Loop_Shadow_Bomb_C::Audio_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Audio Tick");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::BeginExpireTell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "BeginExpireTell");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::ClearExpireTell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ClearExpireTell");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::EndedInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "EndedInteract");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::ExecuteUbergraph_GCN_Loop_Shadow_Bomb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ExecuteUbergraph_GCN_Loop_Shadow_Bomb");

	Params::GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::ExpireWarningTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ExpireWarningTick");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::GetSkeletalMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "GetSkeletalMeshes");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::OnFinishedCharacterCustomization_Bind(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnFinishedCharacterCustomization_Bind");

	Params::GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnLoopingStart");

	Params::GCN_Loop_Shadow_Bomb_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnRemoval");

	Params::GCN_Loop_Shadow_Bomb_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::OnWeaponEquippedDelegate_Event_0(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnWeaponEquippedDelegate_Event_0");

	Params::GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0 Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ReceiveTick");

	Params::GCN_Loop_Shadow_Bomb_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Shadow_Bomb_C::StartedInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "StartedInteract");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::UnbindEquippedWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "UnbindEquippedWeapon");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Shadow_Bomb_C::UpdateTeamVisbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "UpdateTeamVisbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
