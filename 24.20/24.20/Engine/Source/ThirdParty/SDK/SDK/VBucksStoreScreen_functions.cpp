#pragma once

#include "Basic.hpp"

#include "VBucksStoreScreen_classes.hpp"
#include "VBucksStoreScreen_parameters.hpp"

namespace SDK
{

void UVBucksStoreScreen_C::ApplyMobileLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "ApplyMobileLayout");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::ExecuteUbergraph_VBucksStoreScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "ExecuteUbergraph_VBucksStoreScreen");

	Params::VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UVBucksStoreScreen_C::GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "GetVisibilityByChildrenPresence");

	Params::VBucksStoreScreen_C_GetVisibilityByChildrenPresence Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

void UVBucksStoreScreen_C::HandleAllOffersGenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleAllOffersGenerated");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleBack");

	Params::VBucksStoreScreen_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UVBucksStoreScreen_C::HandleRedeem(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleRedeem");

	Params::VBucksStoreScreen_C_HandleRedeem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UVBucksStoreScreen_C::NoOffersAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "NoOffersAvailable");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::OnOffersGenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnOffersGenerated");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::OnPurchasingDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnPurchasingDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::OnStartReadingOffers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnStartReadingOffers");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::OnTransitionedBySwitcher_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnTransitionedBySwitcher_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const class FText& CurrencyMessageLocText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnUpdateOtherPlatformMTXMessage");

	Params::VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage Parms{};

	Parms.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	Parms.CurrencyMessageLocText = std::move(CurrencyMessageLocText);

	UObject::ProcessEvent(Func, &Parms);
}

void UVBucksStoreScreen_C::PlayEquippedLockerMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "PlayEquippedLockerMusic");

	UObject::ProcessEvent(Func, nullptr);
}

void UVBucksStoreScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "PreConstruct");

	Params::VBucksStoreScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UVBucksStoreScreen_C::UpdateCurrencyNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "UpdateCurrencyNotification");

	UObject::ProcessEvent(Func, nullptr);
}

class UWidget* UVBucksStoreScreen_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "BP_GetDesiredFocusTarget");

	Params::VBucksStoreScreen_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
