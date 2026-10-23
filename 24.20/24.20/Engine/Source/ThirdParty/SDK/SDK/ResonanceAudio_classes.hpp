#pragma once

#include "Basic.hpp"

#include "ResonanceAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioExtensions_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UResonanceAudioSoundfieldSettings final : public USoundfieldEncodingSettingsBase
{
public:
	EResonanceRenderMode                          renderMode;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSoundfieldSettings">();
	}
	static class UResonanceAudioSoundfieldSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSoundfieldSettings>();
	}
};
static_assert(alignof(UResonanceAudioSoundfieldSettings) == 0x000008, "Wrong alignment on UResonanceAudioSoundfieldSettings");
static_assert(sizeof(UResonanceAudioSoundfieldSettings) == 0x000030, "Wrong size on UResonanceAudioSoundfieldSettings");
static_assert(offsetof(UResonanceAudioSoundfieldSettings, renderMode) == 0x000028, "Member 'UResonanceAudioSoundfieldSettings::renderMode' has a wrong offset!");

class UResonanceAudioBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
	static void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioBlueprintFunctionLibrary">();
	}
	static class UResonanceAudioBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UResonanceAudioBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UResonanceAudioBlueprintFunctionLibrary");
static_assert(sizeof(UResonanceAudioBlueprintFunctionLibrary) == 0x000028, "Wrong size on UResonanceAudioBlueprintFunctionLibrary");

class AResonanceAudioDirectivityVisualizer final : public AActor
{
public:
	uint8                                         Pad_288[0x70];
	class UMaterial*                              Material;
	class UResonanceAudioSpatializationSourceSettings* Settings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioDirectivityVisualizer">();
	}
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AResonanceAudioDirectivityVisualizer>();
	}
};
static_assert(alignof(AResonanceAudioDirectivityVisualizer) == 0x000008, "Wrong alignment on AResonanceAudioDirectivityVisualizer");
static_assert(sizeof(AResonanceAudioDirectivityVisualizer) == 0x000308, "Wrong size on AResonanceAudioDirectivityVisualizer");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Material) == 0x0002F8, "Member 'AResonanceAudioDirectivityVisualizer::Material' has a wrong offset!");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Settings) == 0x000300, "Member 'AResonanceAudioDirectivityVisualizer::Settings' has a wrong offset!");

class UResonanceAudioReverbPluginPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x98];
	struct FResonanceAudioReverbPluginSettings    Settings;

public:
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
	void SetReflectionScalar(float InReflectionScalar);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReverbGain(float InReverbGain);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomRotation(const struct FQuat& InRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioReverbPluginPreset">();
	}
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioReverbPluginPreset>();
	}
};
static_assert(alignof(UResonanceAudioReverbPluginPreset) == 0x000010, "Wrong alignment on UResonanceAudioReverbPluginPreset");
static_assert(sizeof(UResonanceAudioReverbPluginPreset) == 0x000170, "Wrong size on UResonanceAudioReverbPluginPreset");
static_assert(offsetof(UResonanceAudioReverbPluginPreset, Settings) == 0x000100, "Member 'UResonanceAudioReverbPluginPreset::Settings' has a wrong offset!");

class UResonanceAudioSettings final : public UObject
{
public:
	struct FSoftObjectPath                        OutputSubmix;
	ERaQualityMode                                QualityMode;
	uint8                                         Pad_41[0x7];
	struct FSoftObjectPath                        GlobalReverbPreset;
	struct FSoftObjectPath                        GlobalSourcePreset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSettings">();
	}
	static class UResonanceAudioSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSettings>();
	}
};
static_assert(alignof(UResonanceAudioSettings) == 0x000008, "Wrong alignment on UResonanceAudioSettings");
static_assert(sizeof(UResonanceAudioSettings) == 0x000078, "Wrong size on UResonanceAudioSettings");
static_assert(offsetof(UResonanceAudioSettings, OutputSubmix) == 0x000028, "Member 'UResonanceAudioSettings::OutputSubmix' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, QualityMode) == 0x000040, "Member 'UResonanceAudioSettings::QualityMode' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalReverbPreset) == 0x000048, "Member 'UResonanceAudioSettings::GlobalReverbPreset' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalSourcePreset) == 0x000060, "Member 'UResonanceAudioSettings::GlobalSourcePreset' has a wrong offset!");

class UResonanceAudioSpatializationSourceSettings final : public USpatializationPluginSourceSettingsBase
{
public:
	ERaSpatializationMethod                       SpatializationMethod;
	uint8                                         Pad_29[0x3];
	float                                         Pattern;
	float                                         Sharpness;
	bool                                          bToggleVisualization;
	uint8                                         Pad_35[0x3];
	float                                         Scale;
	float                                         Spread;
	ERaDistanceRolloffModel                       Rolloff;
	uint8                                         Pad_41[0x3];
	float                                         MinDistance;
	float                                         MaxDistance;
	uint8                                         Pad_4C[0x4];

public:
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
	void SetSoundSourceSpread(float InSpread);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSpatializationSourceSettings">();
	}
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSpatializationSourceSettings>();
	}
};
static_assert(alignof(UResonanceAudioSpatializationSourceSettings) == 0x000008, "Wrong alignment on UResonanceAudioSpatializationSourceSettings");
static_assert(sizeof(UResonanceAudioSpatializationSourceSettings) == 0x000050, "Wrong size on UResonanceAudioSpatializationSourceSettings");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, SpatializationMethod) == 0x000028, "Member 'UResonanceAudioSpatializationSourceSettings::SpatializationMethod' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Pattern) == 0x00002C, "Member 'UResonanceAudioSpatializationSourceSettings::Pattern' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Sharpness) == 0x000030, "Member 'UResonanceAudioSpatializationSourceSettings::Sharpness' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, bToggleVisualization) == 0x000034, "Member 'UResonanceAudioSpatializationSourceSettings::bToggleVisualization' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Scale) == 0x000038, "Member 'UResonanceAudioSpatializationSourceSettings::Scale' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Spread) == 0x00003C, "Member 'UResonanceAudioSpatializationSourceSettings::Spread' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Rolloff) == 0x000040, "Member 'UResonanceAudioSpatializationSourceSettings::Rolloff' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MinDistance) == 0x000044, "Member 'UResonanceAudioSpatializationSourceSettings::MinDistance' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MaxDistance) == 0x000048, "Member 'UResonanceAudioSpatializationSourceSettings::MaxDistance' has a wrong offset!");

}
