#pragma once

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"
#include "CinematicCamera_parameters.hpp"

namespace SDK
{

class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraRig_Rail", "GetRailSplineComponent");

	Params::CameraRig_Rail_GetRailSplineComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraActor", "GetCineCameraComponent");

	Params::CineCameraActor_GetCineCameraComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CineCameraComponent", "GetFilmbackPresetsCopy");

	Params::CineCameraComponent_GetFilmbackPresetsCopy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CineCameraComponent", "GetLensPresetsCopy");

	Params::CineCameraComponent_GetLensPresetsCopy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCineCameraComponent::SetCropPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetCropPresetByName");

	Params::CineCameraComponent_SetCropPresetByName Parms{};

	Parms.InPresetName = std::move(InPresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetCropSettings(const struct FPlateCropSettings& NewCropSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetCropSettings");

	Params::CineCameraComponent_SetCropSettings Parms{};

	Parms.NewCropSettings = std::move(NewCropSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetCurrentAperture(const float NewCurrentAperture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentAperture");

	Params::CineCameraComponent_SetCurrentAperture Parms{};

	Parms.NewCurrentAperture = NewCurrentAperture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentFocalLength");

	Params::CineCameraComponent_SetCurrentFocalLength Parms{};

	Parms.InFocalLength = InFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetFilmback(const struct FCameraFilmbackSettings& NewFilmback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmback");

	Params::CineCameraComponent_SetFilmback Parms{};

	Parms.NewFilmback = std::move(NewFilmback);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");

	Params::CineCameraComponent_SetFilmbackPresetByName Parms{};

	Parms.InPresetName = std::move(InPresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetFocusSettings");

	Params::CineCameraComponent_SetFocusSettings Parms{};

	Parms.NewFocusSettings = std::move(NewFocusSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetLensPresetByName");

	Params::CineCameraComponent_SetLensPresetByName Parms{};

	Parms.InPresetName = std::move(InPresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraComponent::SetLensSettings(const struct FCameraLensSettings& NewLensSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "SetLensSettings");

	Params::CineCameraComponent_SetLensSettings Parms{};

	Parms.NewLensSettings = std::move(NewLensSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UCineCameraComponent::GetCropPresetName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetCropPresetName");

	Params::CineCameraComponent_GetCropPresetName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCineCameraComponent::GetDefaultFilmbackPresetName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetDefaultFilmbackPresetName");

	Params::CineCameraComponent_GetDefaultFilmbackPresetName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCineCameraComponent::GetFilmbackPresetName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetName");

	Params::CineCameraComponent_GetFilmbackPresetName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCineCameraComponent::GetHorizontalFieldOfView() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetHorizontalFieldOfView");

	Params::CineCameraComponent_GetHorizontalFieldOfView Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCineCameraComponent::GetLensPresetName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetName");

	Params::CineCameraComponent_GetLensPresetName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCineCameraComponent::GetVerticalFieldOfView() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraComponent", "GetVerticalFieldOfView");

	Params::CineCameraComponent_GetVerticalFieldOfView Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCineCameraSettings* UCineCameraSettings::GetCineCameraSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CineCameraSettings", "GetCineCameraSettings");

	Params::CineCameraSettings_GetCineCameraSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCineCameraSettings::GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetByName");

	Params::CineCameraSettings_GetCropPresetByName Parms{};

	Parms.PresetName = std::move(PresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CropSettings != nullptr)
		*CropSettings = std::move(Parms.CropSettings);

	return Parms.ReturnValue;
}

bool UCineCameraSettings::GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetByName");

	Params::CineCameraSettings_GetFilmbackPresetByName Parms{};

	Parms.PresetName = std::move(PresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FilmbackSettings != nullptr)
		*FilmbackSettings = std::move(Parms.FilmbackSettings);

	return Parms.ReturnValue;
}

bool UCineCameraSettings::GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetByName");

	Params::CineCameraSettings_GetLensPresetByName Parms{};

	Parms.PresetName = std::move(PresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (LensSettings != nullptr)
		*LensSettings = std::move(Parms.LensSettings);

	return Parms.ReturnValue;
}

void UCineCameraSettings::SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetCropPresets");

	Params::CineCameraSettings_SetCropPresets Parms{};

	Parms.InCropPresets = std::move(InCropPresets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetDefaultCropPresetName(const class FString& InDefaultCropPresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultCropPresetName");

	Params::CineCameraSettings_SetDefaultCropPresetName Parms{};

	Parms.InDefaultCropPresetName = std::move(InDefaultCropPresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultFilmbackPreset");

	Params::CineCameraSettings_SetDefaultFilmbackPreset Parms{};

	Parms.InDefaultFilmbackPreset = std::move(InDefaultFilmbackPreset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetDefaultLensFocalLength(const float InDefaultLensFocalLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFocalLength");

	Params::CineCameraSettings_SetDefaultLensFocalLength Parms{};

	Parms.InDefaultLensFocalLength = InDefaultLensFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetDefaultLensFStop(const float InDefaultLensFStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFStop");

	Params::CineCameraSettings_SetDefaultLensFStop Parms{};

	Parms.InDefaultLensFStop = InDefaultLensFStop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetDefaultLensPresetName(const class FString& InDefaultLensPresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensPresetName");

	Params::CineCameraSettings_SetDefaultLensPresetName Parms{};

	Parms.InDefaultLensPresetName = std::move(InDefaultLensPresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetFilmbackPresets");

	Params::CineCameraSettings_SetFilmbackPresets Parms{};

	Parms.InFilmbackPresets = std::move(InFilmbackPresets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCineCameraSettings::SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "SetLensPresets");

	Params::CineCameraSettings_SetLensPresets Parms{};

	Parms.InLensPresets = std::move(InLensPresets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class FString> UCineCameraSettings::GetCropPresetNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetNames");

	Params::CineCameraSettings_GetCropPresetNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FString> UCineCameraSettings::GetFilmbackPresetNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetNames");

	Params::CineCameraSettings_GetFilmbackPresetNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FString> UCineCameraSettings::GetLensPresetNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetNames");

	Params::CineCameraSettings_GetLensPresetNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
