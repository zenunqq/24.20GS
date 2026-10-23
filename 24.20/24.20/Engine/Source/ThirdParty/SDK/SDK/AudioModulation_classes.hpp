#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AudioExtensions_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "AudioModulation_structs.hpp"

namespace SDK
{

class UAudioModulationStyle final : public UBlueprintFunctionLibrary
{
public:
	static const struct FColor GetControlBusColor();
	static const struct FColor GetControlBusMixColor();
	static const struct FColor GetModulationGeneratorColor();
	static const struct FColor GetParameterColor();
	static const struct FColor GetPatchColor();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioModulationStyle">();
	}
	static class UAudioModulationStyle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioModulationStyle>();
	}
};
static_assert(alignof(UAudioModulationStyle) == 0x000008, "Wrong alignment on UAudioModulationStyle");
static_assert(sizeof(UAudioModulationStyle) == 0x000028, "Wrong size on UAudioModulationStyle");

class UAudioModulationSettings final : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                Parameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioModulationSettings">();
	}
	static class UAudioModulationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioModulationSettings>();
	}
};
static_assert(alignof(UAudioModulationSettings) == 0x000008, "Wrong alignment on UAudioModulationSettings");
static_assert(sizeof(UAudioModulationSettings) == 0x000040, "Wrong size on UAudioModulationSettings");
static_assert(offsetof(UAudioModulationSettings, Parameters) == 0x000030, "Member 'UAudioModulationSettings::Parameters' has a wrong offset!");

class UAudioModulationStatics final : public UBlueprintFunctionLibrary
{
public:
	static void ActivateBus(const class UObject* WorldContextObject, class USoundControlBus* Bus);
	static void ActivateBusMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix);
	static void ActivateGenerator(const class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
	static void ClearAllGlobalBusMixValues(const class UObject* WorldContextObject, float FadeTime);
	static void ClearGlobalBusMixValue(const class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);
	static class USoundControlBus* CreateBus(class UObject* WorldContextObject, class FName Name_0, class USoundModulationParameter* Parameter, bool Activate);
	static class USoundControlBusMix* CreateBusMix(class UObject* WorldContextObject, class FName Name_0, const TArray<struct FSoundControlBusMixStage>& Stages, bool Activate);
	static struct FSoundControlBusMixStage CreateBusMixStage(const class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime);
	static class USoundModulationGeneratorEnvelopeFollower* CreateEnvelopeFollowerGenerator(class UObject* WorldContextObject, class FName Name_0, const struct FEnvelopeFollowerGeneratorParams& Params_0);
	static class USoundModulationGeneratorLFO* CreateLFOGenerator(class UObject* WorldContextObject, class FName Name_0, const struct FSoundModulationLFOParams& Params_0);
	static class USoundModulationParameter* CreateModulationParameter(class UObject* WorldContextObject, class FName Name_0, TSubclassOf<class USoundModulationParameter> ParamClass, float DefaultValue);
	static void DeactivateBus(const class UObject* WorldContextObject, class USoundControlBus* Bus);
	static void DeactivateBusMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix);
	static void DeactivateGenerator(const class UObject* WorldContextObject, class USoundModulationGenerator* Generator);
	static TSet<class USoundModulatorBase*> GetModulatorsFromDestination(const struct FSoundModulationDestinationSettings& Destination);
	static float GetModulatorValue(const class UObject* WorldContextObject, class USoundModulatorBase* Modulator);
	static TArray<struct FSoundControlBusMixStage> LoadMixFromProfile(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32 ProfileIndex);
	static void SaveMixToProfile(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32 ProfileIndex);
	static void SetGlobalBusMixValue(const class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime);
	static void UpdateMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, const TArray<struct FSoundControlBusMixStage>& Stages, float FadeTime);
	static void UpdateMixByFilter(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, TSubclassOf<class USoundModulationParameter> ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime);
	static void UpdateMixFromObject(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);
	static void UpdateModulator(const class UObject* WorldContextObject, class USoundModulatorBase* Modulator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioModulationStatics">();
	}
	static class UAudioModulationStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioModulationStatics>();
	}
};
static_assert(alignof(UAudioModulationStatics) == 0x000008, "Wrong alignment on UAudioModulationStatics");
static_assert(sizeof(UAudioModulationStatics) == 0x000028, "Wrong size on UAudioModulationStatics");

class USoundModulationGenerator : public USoundModulatorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationGenerator">();
	}
	static class USoundModulationGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationGenerator>();
	}
};
static_assert(alignof(USoundModulationGenerator) == 0x000008, "Wrong alignment on USoundModulationGenerator");
static_assert(sizeof(USoundModulationGenerator) == 0x000030, "Wrong size on USoundModulationGenerator");

class USoundModulationGeneratorEnvelopeFollower final : public USoundModulationGenerator
{
public:
	struct FEnvelopeFollowerGeneratorParams       Params_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationGeneratorEnvelopeFollower">();
	}
	static class USoundModulationGeneratorEnvelopeFollower* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationGeneratorEnvelopeFollower>();
	}
};
static_assert(alignof(USoundModulationGeneratorEnvelopeFollower) == 0x000008, "Wrong alignment on USoundModulationGeneratorEnvelopeFollower");
static_assert(sizeof(USoundModulationGeneratorEnvelopeFollower) == 0x000050, "Wrong size on USoundModulationGeneratorEnvelopeFollower");
static_assert(offsetof(USoundModulationGeneratorEnvelopeFollower, Params_0) == 0x000030, "Member 'USoundModulationGeneratorEnvelopeFollower::Params_0' has a wrong offset!");

class USoundModulationGeneratorLFO final : public USoundModulationGenerator
{
public:
	struct FSoundModulationLFOParams              Params_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationGeneratorLFO">();
	}
	static class USoundModulationGeneratorLFO* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationGeneratorLFO>();
	}
};
static_assert(alignof(USoundModulationGeneratorLFO) == 0x000008, "Wrong alignment on USoundModulationGeneratorLFO");
static_assert(sizeof(USoundModulationGeneratorLFO) == 0x000050, "Wrong size on USoundModulationGeneratorLFO");
static_assert(offsetof(USoundModulationGeneratorLFO, Params_0) == 0x000030, "Member 'USoundModulationGeneratorLFO::Params_0' has a wrong offset!");

class USoundControlBus final : public USoundModulatorBase
{
public:
	bool                                          bBypass;
	uint8                                         Pad_31[0x7];
	class FString                                 Address;
	TArray<class USoundModulationGenerator*>      Generators;
	class USoundModulationParameter*              Parameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundControlBus">();
	}
	static class USoundControlBus* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundControlBus>();
	}
};
static_assert(alignof(USoundControlBus) == 0x000008, "Wrong alignment on USoundControlBus");
static_assert(sizeof(USoundControlBus) == 0x000060, "Wrong size on USoundControlBus");
static_assert(offsetof(USoundControlBus, bBypass) == 0x000030, "Member 'USoundControlBus::bBypass' has a wrong offset!");
static_assert(offsetof(USoundControlBus, Address) == 0x000038, "Member 'USoundControlBus::Address' has a wrong offset!");
static_assert(offsetof(USoundControlBus, Generators) == 0x000048, "Member 'USoundControlBus::Generators' has a wrong offset!");
static_assert(offsetof(USoundControlBus, Parameter) == 0x000058, "Member 'USoundControlBus::Parameter' has a wrong offset!");

class USoundControlBusMix final : public UObject
{
public:
	uint32                                        ProfileIndex;
	uint8                                         Pad_2C[0x4];
	TArray<struct FSoundControlBusMixStage>       MixStages;

public:
	void ActivateMix();
	void DeactivateAllMixes();
	void DeactivateMix();
	void LoadMixFromProfile();
	void SaveMixToProfile();
	void SoloMix();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundControlBusMix">();
	}
	static class USoundControlBusMix* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundControlBusMix>();
	}
};
static_assert(alignof(USoundControlBusMix) == 0x000008, "Wrong alignment on USoundControlBusMix");
static_assert(sizeof(USoundControlBusMix) == 0x000040, "Wrong size on USoundControlBusMix");
static_assert(offsetof(USoundControlBusMix, ProfileIndex) == 0x000028, "Member 'USoundControlBusMix::ProfileIndex' has a wrong offset!");
static_assert(offsetof(USoundControlBusMix, MixStages) == 0x000030, "Member 'USoundControlBusMix::MixStages' has a wrong offset!");

class USoundModulationParameter : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FSoundModulationParameterSettings      Settings;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameter">();
	}
	static class USoundModulationParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameter>();
	}
};
static_assert(alignof(USoundModulationParameter) == 0x000008, "Wrong alignment on USoundModulationParameter");
static_assert(sizeof(USoundModulationParameter) == 0x000038, "Wrong size on USoundModulationParameter");
static_assert(offsetof(USoundModulationParameter, Settings) == 0x000030, "Member 'USoundModulationParameter::Settings' has a wrong offset!");

class USoundModulationParameterScaled final : public USoundModulationParameter
{
public:
	float                                         UnitMin;
	float                                         UnitMax;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterScaled">();
	}
	static class USoundModulationParameterScaled* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterScaled>();
	}
};
static_assert(alignof(USoundModulationParameterScaled) == 0x000008, "Wrong alignment on USoundModulationParameterScaled");
static_assert(sizeof(USoundModulationParameterScaled) == 0x000040, "Wrong size on USoundModulationParameterScaled");
static_assert(offsetof(USoundModulationParameterScaled, UnitMin) == 0x000038, "Member 'USoundModulationParameterScaled::UnitMin' has a wrong offset!");
static_assert(offsetof(USoundModulationParameterScaled, UnitMax) == 0x00003C, "Member 'USoundModulationParameterScaled::UnitMax' has a wrong offset!");

class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterFrequencyBase">();
	}
	static class USoundModulationParameterFrequencyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterFrequencyBase>();
	}
};
static_assert(alignof(USoundModulationParameterFrequencyBase) == 0x000008, "Wrong alignment on USoundModulationParameterFrequencyBase");
static_assert(sizeof(USoundModulationParameterFrequencyBase) == 0x000038, "Wrong size on USoundModulationParameterFrequencyBase");

class USoundModulationParameterFrequency final : public USoundModulationParameterFrequencyBase
{
public:
	float                                         UnitMin;
	float                                         UnitMax;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterFrequency">();
	}
	static class USoundModulationParameterFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterFrequency>();
	}
};
static_assert(alignof(USoundModulationParameterFrequency) == 0x000008, "Wrong alignment on USoundModulationParameterFrequency");
static_assert(sizeof(USoundModulationParameterFrequency) == 0x000040, "Wrong size on USoundModulationParameterFrequency");
static_assert(offsetof(USoundModulationParameterFrequency, UnitMin) == 0x000038, "Member 'USoundModulationParameterFrequency::UnitMin' has a wrong offset!");
static_assert(offsetof(USoundModulationParameterFrequency, UnitMax) == 0x00003C, "Member 'USoundModulationParameterFrequency::UnitMax' has a wrong offset!");

class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterFilterFrequency">();
	}
	static class USoundModulationParameterFilterFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterFilterFrequency>();
	}
};
static_assert(alignof(USoundModulationParameterFilterFrequency) == 0x000008, "Wrong alignment on USoundModulationParameterFilterFrequency");
static_assert(sizeof(USoundModulationParameterFilterFrequency) == 0x000038, "Wrong size on USoundModulationParameterFilterFrequency");

class USoundModulationParameterLPFFrequency final : public USoundModulationParameterFilterFrequency
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterLPFFrequency">();
	}
	static class USoundModulationParameterLPFFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterLPFFrequency>();
	}
};
static_assert(alignof(USoundModulationParameterLPFFrequency) == 0x000008, "Wrong alignment on USoundModulationParameterLPFFrequency");
static_assert(sizeof(USoundModulationParameterLPFFrequency) == 0x000038, "Wrong size on USoundModulationParameterLPFFrequency");

class USoundModulationParameterHPFFrequency final : public USoundModulationParameterFilterFrequency
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterHPFFrequency">();
	}
	static class USoundModulationParameterHPFFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterHPFFrequency>();
	}
};
static_assert(alignof(USoundModulationParameterHPFFrequency) == 0x000008, "Wrong alignment on USoundModulationParameterHPFFrequency");
static_assert(sizeof(USoundModulationParameterHPFFrequency) == 0x000038, "Wrong size on USoundModulationParameterHPFFrequency");

class USoundModulationParameterBipolar final : public USoundModulationParameter
{
public:
	float                                         UnitRange;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterBipolar">();
	}
	static class USoundModulationParameterBipolar* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterBipolar>();
	}
};
static_assert(alignof(USoundModulationParameterBipolar) == 0x000008, "Wrong alignment on USoundModulationParameterBipolar");
static_assert(sizeof(USoundModulationParameterBipolar) == 0x000040, "Wrong size on USoundModulationParameterBipolar");
static_assert(offsetof(USoundModulationParameterBipolar, UnitRange) == 0x000038, "Member 'USoundModulationParameterBipolar::UnitRange' has a wrong offset!");

class USoundModulationParameterVolume final : public USoundModulationParameter
{
public:
	float                                         MinVolume;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationParameterVolume">();
	}
	static class USoundModulationParameterVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationParameterVolume>();
	}
};
static_assert(alignof(USoundModulationParameterVolume) == 0x000008, "Wrong alignment on USoundModulationParameterVolume");
static_assert(sizeof(USoundModulationParameterVolume) == 0x000040, "Wrong size on USoundModulationParameterVolume");
static_assert(offsetof(USoundModulationParameterVolume, MinVolume) == 0x000038, "Member 'USoundModulationParameterVolume::MinVolume' has a wrong offset!");

class USoundModulationPatch final : public USoundModulatorBase
{
public:
	struct FSoundControlModulationPatch           PatchSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationPatch">();
	}
	static class USoundModulationPatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationPatch>();
	}
};
static_assert(alignof(USoundModulationPatch) == 0x000008, "Wrong alignment on USoundModulationPatch");
static_assert(sizeof(USoundModulationPatch) == 0x000050, "Wrong size on USoundModulationPatch");
static_assert(offsetof(USoundModulationPatch, PatchSettings) == 0x000030, "Member 'USoundModulationPatch::PatchSettings' has a wrong offset!");

}
