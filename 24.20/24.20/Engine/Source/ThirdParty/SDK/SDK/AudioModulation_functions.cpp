#pragma once

#include "Basic.hpp"

#include "AudioModulation_classes.hpp"
#include "AudioModulation_parameters.hpp"

namespace SDK
{

const struct FColor UAudioModulationStyle::GetControlBusColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStyle", "GetControlBusColor");

	Params::AudioModulationStyle_GetControlBusColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FColor UAudioModulationStyle::GetControlBusMixColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStyle", "GetControlBusMixColor");

	Params::AudioModulationStyle_GetControlBusMixColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FColor UAudioModulationStyle::GetModulationGeneratorColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStyle", "GetModulationGeneratorColor");

	Params::AudioModulationStyle_GetModulationGeneratorColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FColor UAudioModulationStyle::GetParameterColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStyle", "GetParameterColor");

	Params::AudioModulationStyle_GetParameterColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FColor UAudioModulationStyle::GetPatchColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStyle", "GetPatchColor");

	Params::AudioModulationStyle_GetPatchColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioModulationStatics::ActivateBus(const class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "ActivateBus");

	Params::AudioModulationStatics_ActivateBus Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::ActivateBusMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "ActivateBusMix");

	Params::AudioModulationStatics_ActivateBusMix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::ActivateGenerator(const class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "ActivateGenerator");

	Params::AudioModulationStatics_ActivateGenerator Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::ClearAllGlobalBusMixValues(const class UObject* WorldContextObject, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "ClearAllGlobalBusMixValues");

	Params::AudioModulationStatics_ClearAllGlobalBusMixValues Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::ClearGlobalBusMixValue(const class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "ClearGlobalBusMixValue");

	Params::AudioModulationStatics_ClearGlobalBusMixValue Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USoundControlBus* UAudioModulationStatics::CreateBus(class UObject* WorldContextObject, class FName Name_0, class USoundModulationParameter* Parameter, bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateBus");

	Params::AudioModulationStatics_CreateBus Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name_0 = Name_0;
	Parms.Parameter = Parameter;
	Parms.Activate = Activate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USoundControlBusMix* UAudioModulationStatics::CreateBusMix(class UObject* WorldContextObject, class FName Name_0, const TArray<struct FSoundControlBusMixStage>& Stages, bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateBusMix");

	Params::AudioModulationStatics_CreateBusMix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name_0 = Name_0;
	Parms.Stages = std::move(Stages);
	Parms.Activate = Activate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSoundControlBusMixStage UAudioModulationStatics::CreateBusMixStage(const class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateBusMixStage");

	Params::AudioModulationStatics_CreateBusMixStage Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.AttackTime = AttackTime;
	Parms.ReleaseTime = ReleaseTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USoundModulationGeneratorEnvelopeFollower* UAudioModulationStatics::CreateEnvelopeFollowerGenerator(class UObject* WorldContextObject, class FName Name_0, const struct FEnvelopeFollowerGeneratorParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateEnvelopeFollowerGenerator");

	Params::AudioModulationStatics_CreateEnvelopeFollowerGenerator Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name_0 = Name_0;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USoundModulationGeneratorLFO* UAudioModulationStatics::CreateLFOGenerator(class UObject* WorldContextObject, class FName Name_0, const struct FSoundModulationLFOParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateLFOGenerator");

	Params::AudioModulationStatics_CreateLFOGenerator Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name_0 = Name_0;
	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USoundModulationParameter* UAudioModulationStatics::CreateModulationParameter(class UObject* WorldContextObject, class FName Name_0, TSubclassOf<class USoundModulationParameter> ParamClass, float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "CreateModulationParameter");

	Params::AudioModulationStatics_CreateModulationParameter Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name_0 = Name_0;
	Parms.ParamClass = ParamClass;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioModulationStatics::DeactivateBus(const class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "DeactivateBus");

	Params::AudioModulationStatics_DeactivateBus Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::DeactivateBusMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "DeactivateBusMix");

	Params::AudioModulationStatics_DeactivateBusMix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::DeactivateGenerator(const class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "DeactivateGenerator");

	Params::AudioModulationStatics_DeactivateGenerator Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TSet<class USoundModulatorBase*> UAudioModulationStatics::GetModulatorsFromDestination(const struct FSoundModulationDestinationSettings& Destination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "GetModulatorsFromDestination");

	Params::AudioModulationStatics_GetModulatorsFromDestination Parms{};

	Parms.Destination = std::move(Destination);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAudioModulationStatics::GetModulatorValue(const class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "GetModulatorValue");

	Params::AudioModulationStatics_GetModulatorValue Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FSoundControlBusMixStage> UAudioModulationStatics::LoadMixFromProfile(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32 ProfileIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "LoadMixFromProfile");

	Params::AudioModulationStatics_LoadMixFromProfile Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.bActivate = bActivate;
	Parms.ProfileIndex = ProfileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioModulationStatics::SaveMixToProfile(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32 ProfileIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "SaveMixToProfile");

	Params::AudioModulationStatics_SaveMixToProfile Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.ProfileIndex = ProfileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::SetGlobalBusMixValue(const class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "SetGlobalBusMixValue");

	Params::AudioModulationStatics_SetGlobalBusMixValue Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::UpdateMix(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, const TArray<struct FSoundControlBusMixStage>& Stages, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "UpdateMix");

	Params::AudioModulationStatics_UpdateMix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.Stages = std::move(Stages);
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::UpdateMixByFilter(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, TSubclassOf<class USoundModulationParameter> ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "UpdateMixByFilter");

	Params::AudioModulationStatics_UpdateMixByFilter Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.AddressFilter = std::move(AddressFilter);
	Parms.ParamClassFilter = ParamClassFilter;
	Parms.ParamFilter = ParamFilter;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::UpdateMixFromObject(const class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "UpdateMixFromObject");

	Params::AudioModulationStatics_UpdateMixFromObject Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioModulationStatics::UpdateModulator(const class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioModulationStatics", "UpdateModulator");

	Params::AudioModulationStatics_UpdateModulator Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::ActivateMix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "ActivateMix");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::DeactivateAllMixes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "DeactivateAllMixes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::DeactivateMix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "DeactivateMix");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::LoadMixFromProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "LoadMixFromProfile");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::SaveMixToProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "SaveMixToProfile");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USoundControlBusMix::SoloMix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundControlBusMix", "SoloMix");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
