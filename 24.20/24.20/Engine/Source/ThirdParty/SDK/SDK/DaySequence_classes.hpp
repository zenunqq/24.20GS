#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DaySequence_structs.hpp"
#include "Engine_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UDaySequenceModifierComponent final : public UBoxComponent
{
public:
	class ADaySequenceActor*                      TargetActor;
	class UDaySequence*                           UserDaySequence;
	class UDaySequence*                           ProceduralDaySequence;
	int32                                         Bias;
	float                                         DayNightCycleTime;
	EDayNightCycleMode                            DayNightCycle;
	uint8                                         bIgnoreBias : 1;
	uint8                                         bUseVolume : 1;
	uint8                                         bIsEnabled : 1;
	uint8                                         bPreview : 1;
	uint8                                         Pad_5CA[0x16];

public:
	void AddBoolOverride(class UObject* Object, class FName PropertyName, bool bValue);
	void AddColorMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, const struct FLinearColor& Value);
	void AddColorOverride(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value);
	void AddMaterialOverride(class UObject* Object, int32 MaterialIndex, class UMaterialInterface* Value);
	void AddScalarMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, float Value);
	void AddScalarOverride(class UObject* Object, class FName PropertyName, double Value);
	void AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours);
	void AddTransformOverride(class UObject* Object, const struct FTransform& Value);
	void AddVectorOverride(class UObject* Object, class FName PropertyName, const struct FVector& Value);
	void AddVisibilityOverride(class UObject* Object, bool bValue);
	void BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor);
	void DisableModifier();
	void EnableModifier();
	void ResetOverrides();
	void UnbindFromDaySequenceActor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceModifierComponent">();
	}
	static class UDaySequenceModifierComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequenceModifierComponent>();
	}
};
static_assert(alignof(UDaySequenceModifierComponent) == 0x000010, "Wrong alignment on UDaySequenceModifierComponent");
static_assert(sizeof(UDaySequenceModifierComponent) == 0x0005E0, "Wrong size on UDaySequenceModifierComponent");
static_assert(offsetof(UDaySequenceModifierComponent, TargetActor) == 0x0005A8, "Member 'UDaySequenceModifierComponent::TargetActor' has a wrong offset!");
static_assert(offsetof(UDaySequenceModifierComponent, UserDaySequence) == 0x0005B0, "Member 'UDaySequenceModifierComponent::UserDaySequence' has a wrong offset!");
static_assert(offsetof(UDaySequenceModifierComponent, ProceduralDaySequence) == 0x0005B8, "Member 'UDaySequenceModifierComponent::ProceduralDaySequence' has a wrong offset!");
static_assert(offsetof(UDaySequenceModifierComponent, Bias) == 0x0005C0, "Member 'UDaySequenceModifierComponent::Bias' has a wrong offset!");
static_assert(offsetof(UDaySequenceModifierComponent, DayNightCycleTime) == 0x0005C4, "Member 'UDaySequenceModifierComponent::DayNightCycleTime' has a wrong offset!");
static_assert(offsetof(UDaySequenceModifierComponent, DayNightCycle) == 0x0005C8, "Member 'UDaySequenceModifierComponent::DayNightCycle' has a wrong offset!");

class UDaySequence final : public UMovieSceneSequence
{
public:
	uint8                                         Pad_68[0x8];
	class UMovieScene*                            MovieScene;
	struct FDaySequenceBindingReferences          BindingReferences;
	TSubclassOf<class UObject>                    DirectorClass;
	TArray<class UAssetUserData*>                 AssetUserData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequence">();
	}
	static class UDaySequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequence>();
	}
};
static_assert(alignof(UDaySequence) == 0x000008, "Wrong alignment on UDaySequence");
static_assert(sizeof(UDaySequence) == 0x000130, "Wrong size on UDaySequence");
static_assert(offsetof(UDaySequence, MovieScene) == 0x000070, "Member 'UDaySequence::MovieScene' has a wrong offset!");
static_assert(offsetof(UDaySequence, BindingReferences) == 0x000078, "Member 'UDaySequence::BindingReferences' has a wrong offset!");
static_assert(offsetof(UDaySequence, DirectorClass) == 0x000118, "Member 'UDaySequence::DirectorClass' has a wrong offset!");
static_assert(offsetof(UDaySequence, AssetUserData) == 0x000120, "Member 'UDaySequence::AssetUserData' has a wrong offset!");

class ADaySequenceActor : public AInfo
{
public:
	uint8                                         Pad_288[0x10];
	class UDaySequencePlayer*                     SequencePlayer;
	TMap<class FName, struct FDaySequenceAssetData> DaySequences;
	class UMovieSceneBindingOverrides*            BindingOverrides;
	uint8                                         bReplicatePlayback : 1;
	uint8                                         Pad_2F9[0x7];
	class UDaySequence*                           RootSequence;
	bool                                          bRunDayCycle;
	uint8                                         Pad_309[0x3];
	struct FTimecode                              DayLength;
	struct FTimecode                              TimePerCycle;
	struct FTimecode                              InitialTimeOfDay;
	uint8                                         Pad_348[0x78];

public:
	bool ContainsDaySequence(const class UDaySequence* InDaySequence);
	int32 GetBias(class FName SequenceKey);
	bool IsMuteSequence(class FName SequenceKey);
	void Multicast_SetTimePerCycle(float InHours);
	void MuteSequence(class FName SequenceKey, bool bState);
	void Pause();
	void Play();
	void RemoveStaticTimeOfDay(bool bResumeFromStaticTime);
	void SetBias(class FName SequenceKey, int32 Bias);
	void SetDaySequence(class FName SequenceName, class UDaySequence* InDaySequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetStaticTimeOfDay(float InHours);
	bool SetTimeOfDay(float InHours);

	float GetDayLength() const;
	class UDaySequence* GetDaySequence(class FName SequenceName) const;
	class UDaySequence* GetFirstDaySequence() const;
	float GetInitialTimeOfDay() const;
	class UDaySequencePlayer* GetSequencePlayer() const;
	float GetStaticTimeOfDay() const;
	float GetTimeOfDay() const;
	float GetTimePerCycle() const;
	bool HasStaticTimeOfDay() const;
	bool IsPaused() const;
	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceActor">();
	}
	static class ADaySequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADaySequenceActor>();
	}
};
static_assert(alignof(ADaySequenceActor) == 0x000008, "Wrong alignment on ADaySequenceActor");
static_assert(sizeof(ADaySequenceActor) == 0x0003C0, "Wrong size on ADaySequenceActor");
static_assert(offsetof(ADaySequenceActor, SequencePlayer) == 0x000298, "Member 'ADaySequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, DaySequences) == 0x0002A0, "Member 'ADaySequenceActor::DaySequences' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, BindingOverrides) == 0x0002F0, "Member 'ADaySequenceActor::BindingOverrides' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, RootSequence) == 0x000300, "Member 'ADaySequenceActor::RootSequence' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, bRunDayCycle) == 0x000308, "Member 'ADaySequenceActor::bRunDayCycle' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, DayLength) == 0x00030C, "Member 'ADaySequenceActor::DayLength' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, TimePerCycle) == 0x000320, "Member 'ADaySequenceActor::TimePerCycle' has a wrong offset!");
static_assert(offsetof(ADaySequenceActor, InitialTimeOfDay) == 0x000334, "Member 'ADaySequenceActor::InitialTimeOfDay' has a wrong offset!");

class UDaySequenceDirector final : public UObject
{
public:
	class UDaySequencePlayer*                     Player;
	int32                                         SubSequenceID;
	int32                                         MovieScenePlayerIndex;

public:
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UMovieSceneSequence* GetSequence();
	void OnCreated();

	struct FQualifiedFrameTime GetCurrentTime() const;
	struct FQualifiedFrameTime GetMasterSequenceTime() const;
	struct FQualifiedFrameTime GetRootSequenceTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceDirector">();
	}
	static class UDaySequenceDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequenceDirector>();
	}
};
static_assert(alignof(UDaySequenceDirector) == 0x000008, "Wrong alignment on UDaySequenceDirector");
static_assert(sizeof(UDaySequenceDirector) == 0x000038, "Wrong size on UDaySequenceDirector");
static_assert(offsetof(UDaySequenceDirector, Player) == 0x000028, "Member 'UDaySequenceDirector::Player' has a wrong offset!");
static_assert(offsetof(UDaySequenceDirector, SubSequenceID) == 0x000030, "Member 'UDaySequenceDirector::SubSequenceID' has a wrong offset!");
static_assert(offsetof(UDaySequenceDirector, MovieScenePlayerIndex) == 0x000034, "Member 'UDaySequenceDirector::MovieScenePlayerIndex' has a wrong offset!");

class UDaySequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	uint8                                         Pad_4B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequencePlayer">();
	}
	static class UDaySequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequencePlayer>();
	}
};
static_assert(alignof(UDaySequencePlayer) == 0x000008, "Wrong alignment on UDaySequencePlayer");
static_assert(sizeof(UDaySequencePlayer) == 0x0004B8, "Wrong size on UDaySequencePlayer");

class UDaySequenceProjectSettings final : public UDeveloperSettings
{
public:
	bool                                          bDefaultLockEngineToDisplayRate;
	uint8                                         Pad_31[0x7];
	class FString                                 DefaultDisplayRate;
	class FString                                 DefaultTickResolution;
	EUpdateClockSource                            DefaultClockSource;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceProjectSettings">();
	}
	static class UDaySequenceProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequenceProjectSettings>();
	}
};
static_assert(alignof(UDaySequenceProjectSettings) == 0x000008, "Wrong alignment on UDaySequenceProjectSettings");
static_assert(sizeof(UDaySequenceProjectSettings) == 0x000060, "Wrong size on UDaySequenceProjectSettings");
static_assert(offsetof(UDaySequenceProjectSettings, bDefaultLockEngineToDisplayRate) == 0x000030, "Member 'UDaySequenceProjectSettings::bDefaultLockEngineToDisplayRate' has a wrong offset!");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultDisplayRate) == 0x000038, "Member 'UDaySequenceProjectSettings::DefaultDisplayRate' has a wrong offset!");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultTickResolution) == 0x000048, "Member 'UDaySequenceProjectSettings::DefaultTickResolution' has a wrong offset!");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultClockSource) == 0x000058, "Member 'UDaySequenceProjectSettings::DefaultClockSource' has a wrong offset!");

class ADaySequenceProvider : public AActor
{
public:
	TArray<class UDaySequence*>                   DaySequenceAssets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceProvider">();
	}
	static class ADaySequenceProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADaySequenceProvider>();
	}
};
static_assert(alignof(ADaySequenceProvider) == 0x000008, "Wrong alignment on ADaySequenceProvider");
static_assert(sizeof(ADaySequenceProvider) == 0x000298, "Wrong size on ADaySequenceProvider");
static_assert(offsetof(ADaySequenceProvider, DaySequenceAssets) == 0x000288, "Member 'ADaySequenceProvider::DaySequenceAssets' has a wrong offset!");

class UDaySequenceSubsystem final : public UWorldSubsystem
{
public:
	class ADaySequenceActor* GetDaySequenceActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceSubsystem">();
	}
	static class UDaySequenceSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequenceSubsystem>();
	}
};
static_assert(alignof(UDaySequenceSubsystem) == 0x000008, "Wrong alignment on UDaySequenceSubsystem");
static_assert(sizeof(UDaySequenceSubsystem) == 0x000030, "Wrong size on UDaySequenceSubsystem");

class UDaySequenceTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaySequenceTrack">();
	}
	static class UDaySequenceTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaySequenceTrack>();
	}
};
static_assert(alignof(UDaySequenceTrack) == 0x000008, "Wrong alignment on UDaySequenceTrack");
static_assert(sizeof(UDaySequenceTrack) == 0x0000A8, "Wrong size on UDaySequenceTrack");

class AEnvironmentLightingActor final : public ADaySequenceProvider
{
public:
	class USkyAtmosphereComponent*                SkyAtmosphereComponent;
	class USkyLightComponent*                     SkyLightComponent;
	class USceneComponent*                        SunRootComponent;
	class UDirectionalLightComponent*             SunComponent;
	class UExponentialHeightFogComponent*         ExponentialHeightFogComponent;
	class UVolumetricCloudComponent*              VolumetricCloudComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvironmentLightingActor">();
	}
	static class AEnvironmentLightingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEnvironmentLightingActor>();
	}
};
static_assert(alignof(AEnvironmentLightingActor) == 0x000008, "Wrong alignment on AEnvironmentLightingActor");
static_assert(sizeof(AEnvironmentLightingActor) == 0x0002C8, "Wrong size on AEnvironmentLightingActor");
static_assert(offsetof(AEnvironmentLightingActor, SkyAtmosphereComponent) == 0x000298, "Member 'AEnvironmentLightingActor::SkyAtmosphereComponent' has a wrong offset!");
static_assert(offsetof(AEnvironmentLightingActor, SkyLightComponent) == 0x0002A0, "Member 'AEnvironmentLightingActor::SkyLightComponent' has a wrong offset!");
static_assert(offsetof(AEnvironmentLightingActor, SunRootComponent) == 0x0002A8, "Member 'AEnvironmentLightingActor::SunRootComponent' has a wrong offset!");
static_assert(offsetof(AEnvironmentLightingActor, SunComponent) == 0x0002B0, "Member 'AEnvironmentLightingActor::SunComponent' has a wrong offset!");
static_assert(offsetof(AEnvironmentLightingActor, ExponentialHeightFogComponent) == 0x0002B8, "Member 'AEnvironmentLightingActor::ExponentialHeightFogComponent' has a wrong offset!");
static_assert(offsetof(AEnvironmentLightingActor, VolumetricCloudComponent) == 0x0002C0, "Member 'AEnvironmentLightingActor::VolumetricCloudComponent' has a wrong offset!");

}
