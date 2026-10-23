#pragma once

#include "Basic.hpp"

#include "PartySuggestionButton_classes.hpp"
#include "PartySuggestionButton_parameters.hpp"

namespace SDK
{

void UPartySuggestionButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "Tick");

	Params::PartySuggestionButton_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPartySuggestionButton_C::SetupMIDReferences()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "SetupMIDReferences");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "SetMainMIDs");

	Params::PartySuggestionButton_C_SetMainMIDs Parms{};

	Parms.BorderMID = BorderMID;
	Parms.TailMID = TailMID;
	Parms.SparklesMID = SparklesMID;

	UObject::ProcessEvent(Func, &Parms);
}

void UPartySuggestionButton_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::OnSuggestionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnSuggestionChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::OnSuggestionAccepted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnSuggestionAccepted");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::OnNewSuggestionAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnNewSuggestionAdded");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::OnDisplayInfoUpdated(bool bIsInvited, bool bIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnDisplayInfoUpdated");

	Params::PartySuggestionButton_C_OnDisplayInfoUpdated Parms{};

	Parms.bIsInvited = bIsInvited;
	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);
}

void UPartySuggestionButton_C::OnDismissSuggestion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "OnDismissSuggestion");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::InitPhysAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "InitPhysAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::InitMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "InitMIDs");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::HandleOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "HandleOutroAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::ExecuteUbergraph_PartySuggestionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "ExecuteUbergraph_PartySuggestionButton");

	Params::PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPartySuggestionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartySuggestionButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartySuggestionButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}
