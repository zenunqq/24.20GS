#pragma once

#include "Basic.hpp"

#include "FortSoundCueTemplates_classes.hpp"
#include "FortSoundCueTemplates_parameters.hpp"

namespace SDK
{

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateDefaultSettings::GetSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSoundCueTemplateDefaultSettings", "GetSettingsForTemplateType");

	Params::FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType Parms{};

	Parms.TemplateType = TemplateType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateSettings::GetDefaultSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSoundCueTemplateSettings", "GetDefaultSettingsForTemplateType");

	Params::FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType Parms{};

	Parms.TemplateType = TemplateType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
