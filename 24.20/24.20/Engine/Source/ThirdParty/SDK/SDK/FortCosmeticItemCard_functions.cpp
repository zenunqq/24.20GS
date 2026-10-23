#pragma once

#include "Basic.hpp"

#include "FortCosmeticItemCard_classes.hpp"
#include "FortCosmeticItemCard_parameters.hpp"

namespace SDK
{

void UFortCosmeticItemCard_C::OnUpdateItemCardMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardMaterial");

	Params::FortCosmeticItemCard_C_OnUpdateItemCardMaterial Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::OnUpdateItemCardIcon(class UTexture2D* Icon, float IconScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardIcon");

	Params::FortCosmeticItemCard_C_OnUpdateItemCardIcon Parms{};

	Parms.Icon = Icon;
	Parms.IconScale = IconScale;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::OnUpdateEnhanced(bool bEnhanced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateEnhanced");

	Params::FortCosmeticItemCard_C_OnUpdateEnhanced Parms{};

	Parms.bEnhanced = bEnhanced;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::OnUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUnhover");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCosmeticItemCard_C::OnSizeChanged(float InCardWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnSizeChanged");

	Params::FortCosmeticItemCard_C_OnSizeChanged Parms{};

	Parms.InCardWidth = InCardWidth;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::OnHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnHover");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCosmeticItemCard_C::HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, bool ShowAsArchived, bool UseAnimations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateVisuals");

	Params::FortCosmeticItemCard_C_HandleUpdateVisuals Parms{};

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.IsHero = IsHero;
	Parms.IsReward = IsReward;
	Parms.IsShuffleItem = IsShuffleItem;
	Parms.ShowAsArchived = ShowAsArchived;
	Parms.UseAnimations = UseAnimations;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::HandleUpdateRarity(const struct FFortColorPalette& RarityColors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateRarity");

	Params::FortCosmeticItemCard_C_HandleUpdateRarity Parms{};

	Parms.RarityColors = std::move(RarityColors);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "ExecuteUbergraph_FortCosmeticItemCard");

	Params::FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::ArchiveAnimation(bool IsArchived, bool UseAnimations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "ArchiveAnimation");

	Params::FortCosmeticItemCard_C_ArchiveAnimation Parms{};

	Parms.IsArchived = IsArchived;
	Parms.UseAnimations = UseAnimations;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::UpdateImageIconScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "UpdateImageIconScale");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCosmeticItemCard_C::SequenceEvent__ENTRYPOINTFortCosmeticItemCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "SequenceEvent__ENTRYPOINTFortCosmeticItemCard");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCosmeticItemCard_C::OnUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem, bool bShowAsArchived, bool bUseAnimations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateVisuals");

	Params::FortCosmeticItemCard_C_OnUpdateVisuals Parms{};

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.bIsHero = bIsHero;
	Parms.bReward = bReward;
	Parms.bIsShuffleItem = bIsShuffleItem;
	Parms.bShowAsArchived = bShowAsArchived;
	Parms.bUseAnimations = bUseAnimations;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCosmeticItemCard_C::OnUpdateSeriesOrRarityColors(const struct FFortColorPalette& ColorPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateSeriesOrRarityColors");

	Params::FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors Parms{};

	Parms.ColorPalette = std::move(ColorPalette);

	UObject::ProcessEvent(Func, &Parms);
}

}
