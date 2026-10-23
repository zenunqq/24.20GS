#pragma once

#include "Basic.hpp"

#include "Athena_PlayerController_classes.hpp"
#include "Athena_PlayerController_parameters.hpp"

namespace SDK
{

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "ExecuteUbergraph_Athena_PlayerController");

	Params::Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::FadeAudioComponents(class UAudioComponent* NewMusicComponent, class UAudioComponent* PreviousMusicComponent, class USoundBase* Music, double StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "FadeAudioComponents");

	Params::Athena_PlayerController_C_FadeAudioComponents Parms{};

	Parms.NewMusicComponent = NewMusicComponent;
	Parms.PreviousMusicComponent = PreviousMusicComponent;
	Parms.Music = Music;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "GrantItem");

	Params::Athena_PlayerController_C_GrantItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::Handle_Victory_Royale_Audio(bool Audio_Only)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "Handle Victory Royale Audio");

	Params::Athena_PlayerController_C_Handle_Victory_Royale_Audio Parms{};

	Parms.Audio_Only = Audio_Only;

	UObject::ProcessEvent(Func, &Parms);
}

bool AAthena_PlayerController_C::Is_Creative_Mode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "Is Creative Mode");

	Params::Athena_PlayerController_C_Is_Creative_Mode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AAthena_PlayerController_C::K2_OnEnterVolume(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "K2_OnEnterVolume");

	Params::Athena_PlayerController_C_K2_OnEnterVolume Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::K2_OnLeaveVolume(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "K2_OnLeaveVolume");

	Params::Athena_PlayerController_C_K2_OnLeaveVolume Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");

	Params::Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::OnLocalInteraction(class AActor* ReceivingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnLocalInteraction");

	Params::Athena_PlayerController_C_OnLocalInteraction Parms{};

	Parms.ReceivingActor = ReceivingActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::OnMusicPackLoaded(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnMusicPackLoaded");

	Params::Athena_PlayerController_C_OnMusicPackLoaded Parms{};

	Parms.NewMusicPack = NewMusicPack;
	Parms.StartTimeOffset = StartTimeOffset;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "OnReady_B4409EAB4038578B1EBA9DB1586489B9");

	Params::Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::PlayVictoryStinger(class USoundCue* VictoryStingerCue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "PlayVictoryStinger");

	Params::Athena_PlayerController_C_PlayVictoryStinger Parms{};

	Parms.VictoryStingerCue = VictoryStingerCue;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::PlayWinEffects(class APawn* FinisherPawn, const class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly, const ERoundVictoryAnimation VictoryAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "PlayWinEffects");

	Params::Athena_PlayerController_C_PlayWinEffects Parms{};

	Parms.FinisherPawn = FinisherPawn;
	Parms.FinishingWeapon = FinishingWeapon;
	Parms.DeathCause = DeathCause;
	Parms.bAudioOnly = bAudioOnly;
	Parms.VictoryAnimation = VictoryAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::ReactToPawnPossession(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReactToPawnPossession");

	Params::Athena_PlayerController_C_ReactToPawnPossession Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_PlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveEndPlay");

	Params::Athena_PlayerController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::RemoveItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "RemoveItem");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_PlayerController_C::ReplicateRotationScaleReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReplicateRotationScaleReset");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_PlayerController_C::RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "RevokeItem");

	Params::Athena_PlayerController_C_RevokeItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_PlayerController_C::SetupPermissionRecheckTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "SetupPermissionRecheckTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_PlayerController_C::Start_Victory_Royale_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "Start Victory Royale Music");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_PlayerController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_PlayerController_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
