#pragma once

#include "Basic.hpp"

#include "StoreMain_OfferDetails_classes.hpp"
#include "StoreMain_OfferDetails_parameters.hpp"

namespace SDK
{

void UStoreMain_OfferDetails_C::UpdatePurchaseBlocked(bool bIsBlocked, const class FText& PurchaseNotAllowedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "UpdatePurchaseBlocked");

	Params::StoreMain_OfferDetails_C_UpdatePurchaseBlocked Parms{};

	Parms.bIsBlocked = bIsBlocked;
	Parms.PurchaseNotAllowedReason = std::move(PurchaseNotAllowedReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::UnregisterInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "UnregisterInput");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::SetupCurrencyImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "SetupCurrencyImage");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::UpdatePurchaseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "UpdatePurchaseButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0");

	Params::StoreMain_OfferDetails_C_OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::SetPurchaseButtonText(const class FText& ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "SetPurchaseButtonText");

	Params::StoreMain_OfferDetails_C_SetPurchaseButtonText Parms{};

	Parms.ButtonText = std::move(ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::OnLoaded_28384CAD450E607DCE5E079C601D083C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnLoaded_28384CAD450E607DCE5E079C601D083C");

	Params::StoreMain_OfferDetails_C_OnLoaded_28384CAD450E607DCE5E079C601D083C Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::ResetPurchaseButtonText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "ResetPurchaseButtonText");

	UObject::ProcessEvent(Func, nullptr);
}

bool UStoreMain_OfferDetails_C::IsGiftingStorefrontOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "IsGiftingStorefrontOffer");

	Params::StoreMain_OfferDetails_C_IsGiftingStorefrontOffer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UStoreMain_OfferDetails_C::RegisterInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "RegisterInput");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::InitStoreTypeVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitStoreTypeVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::PopDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "PopDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::InitDetailAttributes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitDetailAttributes");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::OnPurchasingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnPurchasingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::GetCurrencyABAssetFromQuantity(int32 Quantity, class UFortMtxOfferData** DataAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "GetCurrencyABAssetFromQuantity");

	Params::StoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

	if (DataAsset != nullptr)
		*DataAsset = Parms.DataAsset;
}

void UStoreMain_OfferDetails_C::InitCurrency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "InitCurrency");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "ExecuteUbergraph_StoreMain_OfferDetails");

	Params::StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::ContentBlocked(bool isContentBlocked_0, const class FText& Content_Blocked_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "ContentBlocked");

	Params::StoreMain_OfferDetails_C_ContentBlocked Parms{};

	Parms.isContentBlocked_0 = isContentBlocked_0;
	Parms.Content_Blocked_Text = std::move(Content_Blocked_Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandleBack");

	Params::StoreMain_OfferDetails_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UStoreMain_OfferDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::BP_OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "BP_OnOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_OfferDetails_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}
