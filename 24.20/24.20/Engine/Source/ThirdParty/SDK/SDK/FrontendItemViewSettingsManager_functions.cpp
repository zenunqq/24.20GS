#pragma once

#include "Basic.hpp"

#include "FrontendItemViewSettingsManager_classes.hpp"
#include "FrontendItemViewSettingsManager_parameters.hpp"

namespace SDK
{

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(const EFrontEndCamera Camera, const ESubGame GameMode, const class UFortItemDefinition* ItemDefinition, const int32 SubslotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "GetItemViewSettings");

	Params::FrontendItemViewSettingsManager_C_GetItemViewSettings Parms{};

	Parms.Camera = Camera;
	Parms.GameMode = GameMode;
	Parms.ItemDefinition = ItemDefinition;
	Parms.SubslotIndex = SubslotIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, int32 SubslotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "Is Hero or Previews on Hero");

	Params::FrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero Parms{};

	Parms.Item_Definition = Item_Definition;
	Parms.SubslotIndex = SubslotIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
