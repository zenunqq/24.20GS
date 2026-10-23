#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_Player_Sliding_Player_classes.hpp"
#include "GCNL_Athena_Player_Sliding_Player_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_Player_Sliding_Player_C::CheckSurfaceType(class AFortPawn* Pawn, int32* SurfaceTypeInt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "CheckSurfaceType");

	Params::GCNL_Athena_Player_Sliding_Player_C_CheckSurfaceType Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceTypeInt_0 != nullptr)
		*SurfaceTypeInt_0 = Parms.SurfaceTypeInt_0;
}

void AGCNL_Athena_Player_Sliding_Player_C::ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player");

	Params::GCNL_Athena_Player_Sliding_Player_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::On_Target_Pawn_Actor_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "On Target Pawn Actor Hit");

	Params::GCNL_Athena_Player_Sliding_Player_C_On_Target_Pawn_Actor_Hit Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "OnLoopingStartGeneric");

	Params::GCNL_Athena_Player_Sliding_Player_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "OnRemovalGeneric");

	Params::GCNL_Athena_Player_Sliding_Player_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::ResetAudioData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ResetAudioData");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::ResumeSlidingAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ResumeSlidingAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::Sliding_Failsafe_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Sliding Failsafe Check");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::StartSlideAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "StartSlideAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::Stop_Sliding_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Stop Sliding Audio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::StopSlideAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "StopSlideAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::ToggleLoopingSoundIndicator(bool bEnableSoundIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ToggleLoopingSoundIndicator");

	Params::GCNL_Athena_Player_Sliding_Player_C_ToggleLoopingSoundIndicator Parms{};

	Parms.bEnableSoundIndicator = bEnableSoundIndicator;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::Update_Speed_Line()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Update Speed Line");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSlideAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSlideAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSoundComponentParameters(class AFortPlayerPawn* PlayerPawn_0, class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSoundComponentParameters");

	Params::GCNL_Athena_Player_Sliding_Player_C_UpdateSoundComponentParameters Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;
	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSurfaceType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSurfaceType");

	UObject::ProcessEvent(Func, nullptr);
}

}
