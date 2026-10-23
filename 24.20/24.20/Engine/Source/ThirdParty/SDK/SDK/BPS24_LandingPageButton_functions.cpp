#pragma once

#include "Basic.hpp"

#include "BPS24_LandingPageButton_classes.hpp"
#include "BPS24_LandingPageButton_parameters.hpp"

namespace SDK
{

void UBPS24_LandingPageButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::ConvertWhiteTextToHoveredColor(bool Hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "ConvertWhiteTextToHoveredColor");

	Params::BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor Parms{};

	Parms.Hover = Hover;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

class UWidgetAnimation* UBPS24_LandingPageButton_C::DetermineSelectedAnim(bool Hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "DetermineSelectedAnim");

	Params::BPS24_LandingPageButton_C_DetermineSelectedAnim Parms{};

	Parms.Hover = Hover;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UBPS24_LandingPageButton_C::ExecuteUbergraph_BPS24_LandingPageButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "ExecuteUbergraph_BPS24_LandingPageButton");

	Params::BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::ForceUnHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "ForceUnHover");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::InputChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "InputChanged");

	Params::BPS24_LandingPageButton_C_InputChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::IsCompetingButtonSelected(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "IsCompetingButtonSelected");

	Params::BPS24_LandingPageButton_C_IsCompetingButtonSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

void UBPS24_LandingPageButton_C::OnDisplayDetailsUpdated(const struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "OnDisplayDetailsUpdated");

	Params::BPS24_LandingPageButton_C_OnDisplayDetailsUpdated Parms{};

	Parms.NewDisplayDetails = std::move(NewDisplayDetails);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::OnSetTileImageMaterial(class UMaterialInstance* Material_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "OnSetTileImageMaterial");

	Params::BPS24_LandingPageButton_C_OnSetTileImageMaterial Parms{};

	Parms.Material_0 = Material_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::OnShowDisplayDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "OnShowDisplayDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::OnSubscriptionTextureLoaded(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "OnSubscriptionTextureLoaded");

	Params::BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::Play_intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "Play intro");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "PreConstruct");

	Params::BPS24_LandingPageButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::SetExtraLock(bool ExtraLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "SetExtraLock");

	Params::BPS24_LandingPageButton_C_SetExtraLock Parms{};

	Parms.ExtraLock = ExtraLock;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::UnHoverOtherLandingPageButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "UnHoverOtherLandingPageButtons");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_LandingPageButton_C::UpdateDisplayBehaviorFromData(const struct FBattlePassLandingPageButtonDisplayBehaviorData& BehaviorData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "UpdateDisplayBehaviorFromData");

	Params::BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData Parms{};

	Parms.BehaviorData = std::move(BehaviorData);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_LandingPageButton_C::UpdateStatusIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_LandingPageButton_C", "UpdateStatusIcons");

	UObject::ProcessEvent(Func, nullptr);
}

}
