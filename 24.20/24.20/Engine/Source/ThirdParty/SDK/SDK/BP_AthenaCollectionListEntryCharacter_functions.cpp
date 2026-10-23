#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionListEntryCharacter_classes.hpp"
#include "BP_AthenaCollectionListEntryCharacter_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnCollectionStateSet(EFortCollectedState CollectedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnCollectionStateSet");

	Params::BP_AthenaCollectionListEntryCharacter_C_BP_OnCollectionStateSet Parms{};

	Parms.CollectedState = CollectedState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnEntryImageSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnEntryImageSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnEntryReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnEntryReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionListEntryCharacter_C::ExecuteUbergraph_BP_AthenaCollectionListEntryCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "ExecuteUbergraph_BP_AthenaCollectionListEntryCharacter");

	Params::BP_AthenaCollectionListEntryCharacter_C_ExecuteUbergraph_BP_AthenaCollectionListEntryCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionListEntryCharacter_C::Update_Hover_Parameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionListEntryCharacter_C", "Update Hover Parameter");

	UObject::ProcessEvent(Func, nullptr);
}

}
