#pragma once

#include "Basic.hpp"

#include "StoreMain_MTXOffer_classes.hpp"
#include "StoreMain_MTXOffer_parameters.hpp"

namespace SDK
{

void UStoreMain_MTXOffer_C::TriggerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::TriggerIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::SetTileSize(EFortMtxOfferDisplaySize DisplaySize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "SetTileSize");

	Params::StoreMain_MTXOffer_C_SetTileSize Parms{};

	Parms.DisplaySize = DisplaySize;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_MTXOffer_C::SetTextOutlineColor(class UTextBlock* Text, const struct FFortMtxGradient& Gradient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "SetTextOutlineColor");

	Params::StoreMain_MTXOffer_C_SetTextOutlineColor Parms{};

	Parms.Text = Text;
	Parms.Gradient = std::move(Gradient);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_MTXOffer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "PreConstruct");

	Params::StoreMain_MTXOffer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_MTXOffer_C::OnOfferTileBrushLoaded(const struct FSlateBrush& OfferBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnOfferTileBrushLoaded");

	Params::StoreMain_MTXOffer_C_OnOfferTileBrushLoaded Parms{};

	Parms.OfferBrush = std::move(OfferBrush);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_MTXOffer_C::OnUpdateStorePrice(const class FText& InStorePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnUpdateStorePrice");

	Params::StoreMain_MTXOffer_C_OnUpdateStorePrice Parms{};

	Parms.InStorePrice = std::move(InStorePrice);

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_MTXOffer_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::OnStoreSelectionOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnStoreSelectionOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::InitOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitOffer");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::InitialReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitialReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UStoreMain_MTXOffer_C::GetBonusText(class UFortStoreFrontOfferInfo* OfferInfo, class FText* BonusText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "GetBonusText");

	Params::StoreMain_MTXOffer_C_GetBonusText Parms{};

	Parms.OfferInfo = OfferInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (BonusText_0 != nullptr)
		*BonusText_0 = std::move(Parms.BonusText_0);
}

void UStoreMain_MTXOffer_C::ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_C", "ExecuteUbergraph_StoreMain_MTXOffer");

	Params::StoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
