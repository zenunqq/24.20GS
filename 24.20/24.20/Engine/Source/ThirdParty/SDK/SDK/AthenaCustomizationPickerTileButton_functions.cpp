#pragma once

#include "Basic.hpp"

#include "AthenaCustomizationPickerTileButton_classes.hpp"
#include "AthenaCustomizationPickerTileButton_parameters.hpp"

namespace SDK
{

void UAthenaCustomizationPickerTileButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPickerTileButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	Params::AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "HandleEquippedStateChanged");

	Params::AthenaCustomizationPickerTileButton_C_HandleEquippedStateChanged Parms{};

	Parms.bEquipped = bEquipped;
	Parms.bOnDifferentSlot = bOnDifferentSlot;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::OnArchivedStatusUpdated(bool bShowAsArchived, bool bUseAnimations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnArchivedStatusUpdated");

	Params::AthenaCustomizationPickerTileButton_C_OnArchivedStatusUpdated Parms{};

	Parms.bShowAsArchived = bShowAsArchived;
	Parms.bUseAnimations = bUseAnimations;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::OnChangeOwnedState(bool bOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnChangeOwnedState");

	Params::AthenaCustomizationPickerTileButton_C_OnChangeOwnedState Parms{};

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnEquippedStateChanged");

	Params::AthenaCustomizationPickerTileButton_C_OnEquippedStateChanged Parms{};

	Parms.bEquipped = bEquipped;
	Parms.bOnDifferentSlot = bOnDifferentSlot;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnListItemObjectSet");

	Params::AthenaCustomizationPickerTileButton_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationPickerTileButton_C::OnUpdateExclusiveWarning(bool bShouldWarn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnUpdateExclusiveWarning");

	Params::AthenaCustomizationPickerTileButton_C_OnUpdateExclusiveWarning Parms{};

	Parms.bShouldWarn = bShouldWarn;

	UObject::ProcessEvent(Func, &Parms);
}

}
