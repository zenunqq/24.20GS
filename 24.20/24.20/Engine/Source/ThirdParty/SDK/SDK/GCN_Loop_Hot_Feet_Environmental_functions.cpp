#pragma once

#include "Basic.hpp"

#include "GCN_Loop_Hot_Feet_Environmental_classes.hpp"
#include "GCN_Loop_Hot_Feet_Environmental_parameters.hpp"

namespace SDK
{

void AGCN_Loop_Hot_Feet_Environmental_C::ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental");

	Params::GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::On_Player_Step()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "On Player Step");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Loop_Hot_Feet_Environmental_C::On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "On Target Pawn Hit Event");

	Params::GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::On_Target_Pawn_Landed(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "On Target Pawn Landed");

	Params::GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "On Target Pawn Movement Mode Changed");

	Params::GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "OnLoopingStart");

	Params::GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "OnRemoval");

	Params::GCN_Loop_Hot_Feet_Environmental_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "ReceiveHit");

	Params::GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_Hot_Feet_Environmental_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_Hot_Feet_Environmental_C", "ReceiveTick");

	Params::GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
