#pragma once

#include "Basic.hpp"

#include "ResonanceAudio_classes.hpp"
#include "ResonanceAudio_parameters.hpp"

namespace SDK
{

class UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "GetGlobalReverbPreset");

	Params::ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "SetGlobalReverbPreset");

	Params::ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetEnableRoomEffects");

	Params::ResonanceAudioReverbPluginPreset_SetEnableRoomEffects Parms{};

	Parms.bInEnableRoomEffects = bInEnableRoomEffects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReflectionScalar");

	Params::ResonanceAudioReverbPluginPreset_SetReflectionScalar Parms{};

	Parms.InReflectionScalar = InReflectionScalar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbBrightness");

	Params::ResonanceAudioReverbPluginPreset_SetReverbBrightness Parms{};

	Parms.InReverbBrightness = InReverbBrightness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetReverbGain(float InReverbGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbGain");

	Params::ResonanceAudioReverbPluginPreset_SetReverbGain Parms{};

	Parms.InReverbGain = InReverbGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float InReverbTimeModifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbTimeModifier");

	Params::ResonanceAudioReverbPluginPreset_SetReverbTimeModifier Parms{};

	Parms.InReverbTimeModifier = InReverbTimeModifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetRoomDimensions(const struct FVector& InDimensions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomDimensions");

	Params::ResonanceAudioReverbPluginPreset_SetRoomDimensions Parms{};

	Parms.InDimensions = std::move(InDimensions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomMaterials");

	Params::ResonanceAudioReverbPluginPreset_SetRoomMaterials Parms{};

	Parms.InMaterials = std::move(InMaterials);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetRoomPosition(const struct FVector& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomPosition");

	Params::ResonanceAudioReverbPluginPreset_SetRoomPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioReverbPluginPreset::SetRoomRotation(const struct FQuat& InRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomRotation");

	Params::ResonanceAudioReverbPluginPreset_SetRoomRotation Parms{};

	Parms.InRotation = std::move(InRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceDirectivity");

	Params::ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity Parms{};

	Parms.InPattern = InPattern;
	Parms.InSharpness = InSharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceSpread");

	Params::ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread Parms{};

	Parms.InSpread = InSpread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
