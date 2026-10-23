#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         Intro_Ambient_FX_Timeline_Ambient_FX_Volume_EE4EF3FC4169AF85C3E076ADB15A9FAB;
	ETimelineDirection                            Intro_Ambient_FX_Timeline__Direction_EE4EF3FC4169AF85C3E076ADB15A9FAB;
	uint8                                         Pad_96D[0x3];
	class UTimelineComponent*                     Intro_Ambient_FX_Timeline;
	float                                         Intro_Flare_Timeline_Flare_FX_Volume_DC12FFA64C913C89F456A7BA1F0987D7;
	ETimelineDirection                            Intro_Flare_Timeline__Direction_DC12FFA64C913C89F456A7BA1F0987D7;
	uint8                                         Pad_97D[0x3];
	class UTimelineComponent*                     Intro_Flare_Timeline;
	struct FScalableFloat                         Audio_Vizualizer_Shown_On_Wearer_;
	struct FScalableFloat                         Audio_Vizualizer_Range;
	struct FScalableFloat                         Audio_Vizualizer_Ping_Frequency;
	struct FScalableFloat                         Intro_AmbientFX_Timeline_Rate;
	struct FScalableFloat                         Intro_Flare_Timline_Rate;
	struct FScalableFloat                         Intro_FX_Visual_Volume;
	struct FScalableFloat                         Onest_Person_FX_Visual_Volume;
	struct FScalableFloat                         Threerd_Perosn_FX_Visual_Volume;
	struct FTimerHandle                           timer_handle;
	TArray<class UFXSystemComponent*>             Particle_Components;

public:
	void AVIndicatorLoop();
	void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32 EntryPoint);
	void GetVisualVolume(bool IsFirstPerson, double* NewParam1);
	void Intro_Ambient_FX_Timeline__FinishedFunc();
	void Intro_Ambient_FX_Timeline__UpdateFunc();
	void Intro_Flare_Timeline__FinishedFunc();
	void Intro_Flare_Timeline__UpdateFunc();
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_VictoryCrown_CrownWearer_Looping_C">();
	}
	static class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C>();
	}
};
static_assert(alignof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C) == 0x000008, "Wrong alignment on AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C");
static_assert(sizeof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C) == 0x000AE0, "Wrong size on AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Ambient_FX_Timeline_Ambient_FX_Volume_EE4EF3FC4169AF85C3E076ADB15A9FAB) == 0x000968, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Ambient_FX_Timeline_Ambient_FX_Volume_EE4EF3FC4169AF85C3E076ADB15A9FAB' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Ambient_FX_Timeline__Direction_EE4EF3FC4169AF85C3E076ADB15A9FAB) == 0x00096C, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Ambient_FX_Timeline__Direction_EE4EF3FC4169AF85C3E076ADB15A9FAB' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Ambient_FX_Timeline) == 0x000970, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Ambient_FX_Timeline' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Flare_Timeline_Flare_FX_Volume_DC12FFA64C913C89F456A7BA1F0987D7) == 0x000978, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Flare_Timeline_Flare_FX_Volume_DC12FFA64C913C89F456A7BA1F0987D7' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Flare_Timeline__Direction_DC12FFA64C913C89F456A7BA1F0987D7) == 0x00097C, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Flare_Timeline__Direction_DC12FFA64C913C89F456A7BA1F0987D7' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Flare_Timeline) == 0x000980, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Flare_Timeline' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Audio_Vizualizer_Shown_On_Wearer_) == 0x000988, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Audio_Vizualizer_Shown_On_Wearer_' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Audio_Vizualizer_Range) == 0x0009B0, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Audio_Vizualizer_Range' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Audio_Vizualizer_Ping_Frequency) == 0x0009D8, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Audio_Vizualizer_Ping_Frequency' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_AmbientFX_Timeline_Rate) == 0x000A00, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_AmbientFX_Timeline_Rate' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_Flare_Timline_Rate) == 0x000A28, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_Flare_Timline_Rate' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Intro_FX_Visual_Volume) == 0x000A50, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Intro_FX_Visual_Volume' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Onest_Person_FX_Visual_Volume) == 0x000A78, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Onest_Person_FX_Visual_Volume' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Threerd_Perosn_FX_Visual_Volume) == 0x000AA0, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Threerd_Perosn_FX_Visual_Volume' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, timer_handle) == 0x000AC8, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::timer_handle' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C, Particle_Components) == 0x000AD0, "Member 'AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C::Particle_Components' has a wrong offset!");

}
