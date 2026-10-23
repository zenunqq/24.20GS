#pragma once

#include "Basic.hpp"

#include "SrirachaRanch_classes.hpp"
#include "SrirachaRanch_parameters.hpp"

namespace SDK
{

void UStreamingRadioPlayerComponent::MediaExplicitClose(bool bReallyExplicit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaExplicitClose");

	Params::StreamingRadioPlayerComponent_MediaExplicitClose Parms{};

	Parms.bReallyExplicit = bReallyExplicit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::MediaFailedToOpen(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFailedToOpen");

	Params::StreamingRadioPlayerComponent_MediaFailedToOpen Parms{};

	Parms.String = std::move(String);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::MediaFinishedOrClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFinishedOrClosed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::MediaLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaLoad");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::MediaPlayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaPlayed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::MediaReady(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaReady");

	Params::StreamingRadioPlayerComponent_MediaReady Parms{};

	Parms.String = std::move(String);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::NativeOnPawnEnterSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterSeat");

	Params::StreamingRadioPlayerComponent_NativeOnPawnEnterSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::NativeOnPawnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterVehicle");

	Params::StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::NativeOnPawnExitSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitSeat");

	Params::StreamingRadioPlayerComponent_NativeOnPawnExitSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::NativeOnPawnExitVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitVehicle");

	Params::StreamingRadioPlayerComponent_NativeOnPawnExitVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::NativeOnVehicleOwnerChanged(const TScriptInterface<class IFortVehicleInterface>& Vehicle, const class AActor* NewOwner, const class AActor* PrevOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnVehicleOwnerChanged");

	Params::StreamingRadioPlayerComponent_NativeOnVehicleOwnerChanged Parms{};

	Parms.Vehicle = Vehicle;
	Parms.NewOwner = NewOwner;
	Parms.PrevOwner = PrevOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnFailedURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnFailedURL");

	Params::StreamingRadioPlayerComponent_OnFailedURL Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnLicensedAudioSettingChanged(class UFortClientSettingsRecord* Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnLicensedAudioSettingChanged");

	Params::StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnOwnerExploded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerExploded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnOwnerOutOfFuel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerOutOfFuel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnOwnerReFueled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerReFueled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnOwnerUnpowered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerUnpowered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwningVehicleDied");

	Params::StreamingRadioPlayerComponent_OnOwningVehicleDied Parms{};

	Parms.DeadVehicle = DeadVehicle;
	Parms.InTags = std::move(InTags);
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnPawnEnterSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterSeat");

	Params::StreamingRadioPlayerComponent_OnPawnEnterSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UStreamingRadioPlayerComponent::OnPawnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterVehicle");

	Params::StreamingRadioPlayerComponent_OnPawnEnterVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UStreamingRadioPlayerComponent::OnPawnExitSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitSeat");

	Params::StreamingRadioPlayerComponent_OnPawnExitSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UStreamingRadioPlayerComponent::OnPawnExitVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitVehicle");

	Params::StreamingRadioPlayerComponent_OnPawnExitVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UStreamingRadioPlayerComponent::OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPiPPlayerBlockedChanged");

	Params::StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged Parms{};

	Parms.bPiPPlayerBlocking = bPiPPlayerBlocking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnRep_RadioSourceData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnRep_RadioSourceData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::OnSuccessfulURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnSuccessfulURL");

	Params::StreamingRadioPlayerComponent_OnSuccessfulURL Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::PlayDefaultIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayDefaultIndex");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::PlayNextIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayNextIndex");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::PlayPrevIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayPrevIndex");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerPlayIndex(const int32 InIndex, const EStreamingRadioSourceState InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerPlayIndex");

	Params::StreamingRadioPlayerComponent_ServerPlayIndex Parms{};

	Parms.InIndex = InIndex;
	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerSaveAutoStart(const bool bInAutoStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSaveAutoStart");

	Params::StreamingRadioPlayerComponent_ServerSaveAutoStart Parms{};

	Parms.bInAutoStart = bInAutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerSavedSource(const struct FAthenaRadioStation& InSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSavedSource");

	Params::StreamingRadioPlayerComponent_ServerSavedSource Parms{};

	Parms.InSource = std::move(InSource);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerSaveFadeOutTime(const float InFadeOutSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSaveFadeOutTime");

	Params::StreamingRadioPlayerComponent_ServerSaveFadeOutTime Parms{};

	Parms.InFadeOutSeconds = InFadeOutSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerSetDisabledForCurrentPlayerState(const bool bInDisableForCurrentPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSetDisabledForCurrentPlayerState");

	Params::StreamingRadioPlayerComponent_ServerSetDisabledForCurrentPlayerState Parms{};

	Parms.bInDisableForCurrentPlayerState = bInDisableForCurrentPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ServerStopRadio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerStopRadio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::SetActivationRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetActivationRadius");

	Params::StreamingRadioPlayerComponent_SetActivationRadius Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::SetExteriorVolume(const TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetExteriorVolume");

	Params::StreamingRadioPlayerComponent_SetExteriorVolume Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::SetInteriorVolume(const TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetInteriorVolume");

	Params::StreamingRadioPlayerComponent_SetInteriorVolume Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::SoundMixUpdateTargetingState(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateTargetingState");

	Params::StreamingRadioPlayerComponent_SoundMixUpdateTargetingState Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateWeaponState");

	Params::StreamingRadioPlayerComponent_SoundMixUpdateWeaponState Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::StartRadio(int32 IdxToPlay, bool bFallbackOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StartRadio");

	Params::StreamingRadioPlayerComponent_StartRadio Parms{};

	Parms.IdxToPlay = IdxToPlay;
	Parms.bFallbackOverride = bFallbackOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::StopIfNoDriver(const TScriptInterface<class IFortVehicleInterface>& Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopIfNoDriver");

	Params::StreamingRadioPlayerComponent_StopIfNoDriver Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::StopRadio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::StopRadioWithFadeout(int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadioWithFadeout");

	Params::StreamingRadioPlayerComponent_StopRadioWithFadeout Parms{};

	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStreamingRadioPlayerComponent::ToggleRadioActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "ToggleRadioActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FAthenaRadioStation UStreamingRadioPlayerComponent::GetOptionAt(int32 idx) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "GetOptionAt");

	Params::StreamingRadioPlayerComponent_GetOptionAt Parms{};

	Parms.idx = idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStreamingRadioPlayerComponent::IsExternalSeat(int32 SeatIdx) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsExternalSeat");

	Params::StreamingRadioPlayerComponent_IsExternalSeat Parms{};

	Parms.SeatIdx = SeatIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStreamingRadioPlayerComponent::IsPlayingLiveFeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsPlayingLiveFeed");

	Params::StreamingRadioPlayerComponent_IsPlayingLiveFeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
