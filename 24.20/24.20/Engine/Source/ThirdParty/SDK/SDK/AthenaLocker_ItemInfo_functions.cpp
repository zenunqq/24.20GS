#pragma once

#include "Basic.hpp"

#include "AthenaLocker_ItemInfo_classes.hpp"
#include "AthenaLocker_ItemInfo_parameters.hpp"

namespace SDK
{

void UAthenaLocker_ItemInfo_C::ExecuteUbergraph_AthenaLocker_ItemInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "ExecuteUbergraph_AthenaLocker_ItemInfo");

	Params::AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLocker_ItemInfo_C::OnItemDefinitionSet(const class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "OnItemDefinitionSet");

	Params::AthenaLocker_ItemInfo_C_OnItemDefinitionSet Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLocker_ItemInfo_C::OnNoItemSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "OnNoItemSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLocker_ItemInfo_C::OnUpdateAccessRestrictionWarning(bool bShouldShow, const class FText& WarningText, EAthenaLockerInfoRestrictionWarning WarningType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "OnUpdateAccessRestrictionWarning");

	Params::AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning Parms{};

	Parms.bShouldShow = bShouldShow;
	Parms.WarningText = std::move(WarningText);
	Parms.WarningType = WarningType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLocker_ItemInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "PreConstruct");

	Params::AthenaLocker_ItemInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLocker_ItemInfo_C::UpdateRarityWidgets(const struct FFortColorPalette& InColor, EFortRarity InRarity, class UFortItemSeriesDefinition* InSeries, bool HideRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLocker_ItemInfo_C", "UpdateRarityWidgets");

	Params::AthenaLocker_ItemInfo_C_UpdateRarityWidgets Parms{};

	Parms.InColor = std::move(InColor);
	Parms.InRarity = InRarity;
	Parms.InSeries = InSeries;
	Parms.HideRarity = HideRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}
