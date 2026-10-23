#pragma once

#include "Basic.hpp"

#include "ItemInfoHeaderWidget_classes.hpp"
#include "ItemInfoHeaderWidget_parameters.hpp"

namespace SDK
{

void UItemInfoHeaderWidget_C::ExecuteUbergraph_ItemInfoHeaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "ExecuteUbergraph_ItemInfoHeaderWidget");

	Params::ItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class FText UItemInfoHeaderWidget_C::GetAlternateNameForItem(class UFortItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "GetAlternateNameForItem");

	Params::ItemInfoHeaderWidget_C_GetAlternateNameForItem Parms{};

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UItemInfoHeaderWidget_C::HasValidItemDefinition(bool* HasValidDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "HasValidItemDefinition");

	Params::ItemInfoHeaderWidget_C_HasValidItemDefinition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidDescription != nullptr)
		*HasValidDescription = Parms.HasValidDescription;
}

void UItemInfoHeaderWidget_C::OnItemDefinitionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "OnItemDefinitionChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemInfoHeaderWidget_C::OverrideHeaderAndDescription(const class FText& Header, const class FText& Description, const class FText& ItemType, bool bUseAlternateHeaderBG, EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "OverrideHeaderAndDescription");

	Params::ItemInfoHeaderWidget_C_OverrideHeaderAndDescription Parms{};

	Parms.Header = std::move(Header);
	Parms.Description = std::move(Description);
	Parms.ItemType = std::move(ItemType);
	Parms.bUseAlternateHeaderBG = bUseAlternateHeaderBG;
	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::SetLocked(bool ShouldShowLocked, const class FText& LockReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetLocked");

	Params::ItemInfoHeaderWidget_C_SetLocked Parms{};

	Parms.ShouldShowLocked = ShouldShowLocked;
	Parms.LockReason = std::move(LockReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32 NewRemainingQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetRemainingQuantity");

	Params::ItemInfoHeaderWidget_C_SetRemainingQuantity Parms{};

	Parms.ShouldShowRemainingQuantity = ShouldShowRemainingQuantity;
	Parms.NewRemainingQuantity = NewRemainingQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetScrollWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemInfoHeaderWidget_C::Setup(bool ShouldShowCard, EFortItemCardSize CardSize_0, bool ShouldShowDetails, bool ShouldShowDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "Setup");

	Params::ItemInfoHeaderWidget_C_Setup Parms{};

	Parms.ShouldShowCard = ShouldShowCard;
	Parms.CardSize_0 = CardSize_0;
	Parms.ShouldShowDetails = ShouldShowDetails;
	Parms.ShouldShowDescription = ShouldShowDescription;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::Update(class UFortItemDefinition* ItemDefinition_0, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "Update");

	Params::ItemInfoHeaderWidget_C_Update Parms{};

	Parms.ItemDefinition_0 = ItemDefinition_0;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::UpdateCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateCard");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemInfoHeaderWidget_C::UpdateColorRarity(const struct FFortColorPalette& Colors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateColorRarity");

	Params::ItemInfoHeaderWidget_C_UpdateColorRarity Parms{};

	Parms.Colors = std::move(Colors);

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::UpdateDetailVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateDetailVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemInfoHeaderWidget_C::UpdateLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateLocked");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemInfoHeaderWidget_C::UpdateNameText(class UFortItemDefinition* ItemDefinition_0, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateNameText");

	Params::ItemInfoHeaderWidget_C_UpdateNameText Parms{};

	Parms.ItemDefinition_0 = ItemDefinition_0;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemInfoHeaderWidget_C::UpdateRemainingQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateRemainingQuantity");

	UObject::ProcessEvent(Func, nullptr);
}

}
