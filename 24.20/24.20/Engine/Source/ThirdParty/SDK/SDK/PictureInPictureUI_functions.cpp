#pragma once

#include "Basic.hpp"

#include "PictureInPictureUI_classes.hpp"
#include "PictureInPictureUI_parameters.hpp"

namespace SDK
{

void UPictureInPictureBladeMenuButton::HandlePiPEnabled(const bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPEnabled");

	Params::PictureInPictureBladeMenuButton_HandlePiPEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureBladeMenuButton::HandlePiPLoginSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPLoginSuccess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureBladeMenuButton::HandlePiPLogoutSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPLogoutSuccess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureBladeMenuButton::OnPartnerListUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "OnPartnerListUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureBladeMenuButton::UpdatePiPStatusBP(const bool LoggedIn, const bool Enabled, const bool ParentalControlsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "UpdatePiPStatusBP");

	Params::PictureInPictureBladeMenuButton_UpdatePiPStatusBP Parms{};

	Parms.LoggedIn = LoggedIn;
	Parms.Enabled = Enabled;
	Parms.ParentalControlsEnabled = ParentalControlsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPictureMetadataOverlay::HandleOnPIPVideoResumed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "HandleOnPIPVideoResumed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMetadataOverlay::HandleOnPIPVideoStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "HandleOnPIPVideoStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMetadataOverlay::OnMediaStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "OnMediaStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UPictureInPicturePanelWidget::AutoEnableController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "AutoEnableController");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::DestroyPIPSoundComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "DestroyPIPSoundComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::FlipPIPAudioSubmix(bool bInDefault, const struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "FlipPIPAudioSubmix");

	Params::PictureInPicturePanelWidget_FlipPIPAudioSubmix Parms{};

	Parms.bInDefault = bInDefault;
	Parms.InStreamAssets = std::move(InStreamAssets);
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleIsPictureInPictureEnabledChanged");

	Params::PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged Parms{};

	Parms.bIsPiPEnabled = bIsPiPEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerChanged");

	Params::PictureInPicturePanelWidget_HandleOnPartnerChanged Parms{};

	Parms.NewPartnerControls = NewPartnerControls;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::HandleOnPartnerListUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerListUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::HandleOnPartnerSourceChanged(const struct FPiPPartnerSource& InSelectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerSourceChanged");

	Params::PictureInPicturePanelWidget_HandleOnPartnerSourceChanged Parms{};

	Parms.InSelectedSource = std::move(InSelectedSource);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::HandleToggleFullscreenMap(bool bFullscreenMapVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleToggleFullscreenMap");

	Params::PictureInPicturePanelWidget_HandleToggleFullscreenMap Parms{};

	Parms.bFullscreenMapVisible = bFullscreenMapVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::IntentionalDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "IntentionalDeactivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::SetupPIPSoundComponent(const struct FFortMediaEventsStreamAssets& InStreamAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "SetupPIPSoundComponent");

	Params::PictureInPicturePanelWidget_SetupPIPSoundComponent Parms{};

	Parms.InStreamAssets = std::move(InStreamAssets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePanelWidget::ShowDebugInfo(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "ShowDebugInfo");

	Params::PictureInPicturePanelWidget_ShowDebugInfo Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPicturePanelWidget::ToggleFullScreenPiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "ToggleFullScreenPiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSourcePicker::HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSourcePicker", "HandleOnPartnerChanged");

	Params::PictureInPictureSourcePicker_HandleOnPartnerChanged Parms{};

	Parms.NewPartner = NewPartner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSourcePicker::HandleOnPartnerSourceChanged(const TArray<struct FPiPPartnerSource>& CurrentSources)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSourcePicker", "HandleOnPartnerSourceChanged");

	Params::PictureInPictureSourcePicker_HandleOnPartnerSourceChanged Parms{};

	Parms.CurrentSources = std::move(CurrentSources);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
