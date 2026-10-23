#pragma once

#include "Basic.hpp"

#include "VKDownloadOnDemandUI_classes.hpp"
#include "VKDownloadOnDemandUI_parameters.hpp"

namespace SDK
{

void UDownloadOnDemandProjectManagementTab::RemoveProjectConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "RemoveProjectConfirmed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDownloadOnDemandProjectManagementTab::UpdateProjectConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandProjectManagementTab", "UpdateProjectConfirmed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDownloadOnDemandAddProjectModal::HandleDownloadLinkIdTextChanged(const class FText& InputLinkCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "HandleDownloadLinkIdTextChanged");

	Params::DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged Parms{};

	Parms.InputLinkCode = std::move(InputLinkCode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDownloadOnDemandAddProjectModal::UpdateLightningViolator(ESlateVisibility InVisibility, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandAddProjectModal", "UpdateLightningViolator");

	Params::DownloadOnDemandAddProjectModal_UpdateLightningViolator Parms{};

	Parms.InVisibility = InVisibility;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UDownloadOnDemandProjectTile::OnLabelUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandProjectTile", "OnLabelUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UDownloadOnDemandProjectTile::UpdateLabel(bool bShowLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandProjectTile", "UpdateLabel");

	Params::DownloadOnDemandProjectTile_UpdateLabel Parms{};

	Parms.bShowLabel = bShowLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
