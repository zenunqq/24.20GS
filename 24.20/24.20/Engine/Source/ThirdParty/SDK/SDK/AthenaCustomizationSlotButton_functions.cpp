#pragma once

#include "Basic.hpp"

#include "AthenaCustomizationSlotButton_classes.hpp"
#include "AthenaCustomizationSlotButton_parameters.hpp"

namespace SDK
{

void UAthenaCustomizationSlotButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "ExecuteUbergraph_AthenaCustomizationSlotButton");

	Params::AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class FString UAthenaCustomizationSlotButton_C::GetSlotDebugName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "GetSlotDebugName");

	Params::AthenaCustomizationSlotButton_C_GetSlotDebugName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaCustomizationSlotButton_C::HandleActiveStateChanged(bool CosmeticAvailable, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "HandleActiveStateChanged");

	Params::AthenaCustomizationSlotButton_C_HandleActiveStateChanged Parms{};

	Parms.CosmeticAvailable = CosmeticAvailable;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::HandleWidthChanged(double Width)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "HandleWidthChanged");

	Params::AthenaCustomizationSlotButton_C_HandleWidthChanged Parms{};

	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::OnArchivedStatusUpdated(bool bArchived)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnArchivedStatusUpdated");

	Params::AthenaCustomizationSlotButton_C_OnArchivedStatusUpdated Parms{};

	Parms.bArchived = bArchived;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::OnCardImageAndWidthChanged(const TSoftObjectPtr<class UTexture2D>& Image, float Width)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnCardImageAndWidthChanged");

	Params::AthenaCustomizationSlotButton_C_OnCardImageAndWidthChanged Parms{};

	Parms.Image = Image;
	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnCustomizationSlotActiveStateChanged");

	Params::AthenaCustomizationSlotButton_C_OnCustomizationSlotActiveStateChanged Parms{};

	Parms.bInAttachableCosmeticAvailable = bInAttachableCosmeticAvailable;
	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::OnModifiedStatusUpdated(bool bIsModified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnModifiedStatusUpdated");

	Params::AthenaCustomizationSlotButton_C_OnModifiedStatusUpdated Parms{};

	Parms.bIsModified = bIsModified;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButton_C::OnUpdateExclusiveWarning(bool bShouldWarn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "OnUpdateExclusiveWarning");

	Params::AthenaCustomizationSlotButton_C_OnUpdateExclusiveWarning Parms{};

	Parms.bShouldWarn = bShouldWarn;

	UObject::ProcessEvent(Func, &Parms);
}

}
