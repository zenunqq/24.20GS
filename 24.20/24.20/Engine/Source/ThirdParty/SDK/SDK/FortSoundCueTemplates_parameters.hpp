#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType final
{
public:
	TSubclassOf<class UFortSoundCueTemplateBase>  TemplateType;
	class UFortSoundCueTemplateDefaults*          ReturnValue;
};
static_assert(alignof(FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType) == 0x000008, "Wrong alignment on FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType");
static_assert(sizeof(FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType) == 0x000010, "Wrong size on FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType");
static_assert(offsetof(FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType, TemplateType) == 0x000000, "Member 'FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType::TemplateType' has a wrong offset!");
static_assert(offsetof(FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType, ReturnValue) == 0x000008, "Member 'FortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType::ReturnValue' has a wrong offset!");

struct FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType final
{
public:
	TSubclassOf<class UFortSoundCueTemplateBase>  TemplateType;
	class UFortSoundCueTemplateDefaults*          ReturnValue;
};
static_assert(alignof(FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType) == 0x000008, "Wrong alignment on FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType");
static_assert(sizeof(FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType) == 0x000010, "Wrong size on FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType");
static_assert(offsetof(FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType, TemplateType) == 0x000000, "Member 'FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType::TemplateType' has a wrong offset!");
static_assert(offsetof(FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType, ReturnValue) == 0x000008, "Member 'FortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType::ReturnValue' has a wrong offset!");

}
