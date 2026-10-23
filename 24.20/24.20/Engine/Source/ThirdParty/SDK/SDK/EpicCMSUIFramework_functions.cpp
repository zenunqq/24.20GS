#pragma once

#include "Basic.hpp"

#include "EpicCMSUIFramework_classes.hpp"
#include "EpicCMSUIFramework_parameters.hpp"

namespace SDK
{

void UEpicCMSImage::SetMediaURL(const class FString& MediaUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSImage", "SetMediaURL");

	Params::EpicCMSImage_SetMediaURL Parms{};

	Parms.MediaUrl = std::move(MediaUrl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileBase::Launch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileBase", "Launch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::AddTilePage(class UWidget* TilePageWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "AddTilePage");

	Params::EpicCMSTileCarousel_AddTilePage Parms{};

	Parms.TilePageWidget = TilePageWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::BeginAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "BeginAutoScrolling");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "HandleTilePageAdded");

	Params::EpicCMSTileCarousel_HandleTilePageAdded Parms{};

	Parms.TileWidget = TileWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NavigationVisibilityChanged");

	Params::EpicCMSTileCarousel_NavigationVisibilityChanged Parms{};

	Parms.bShowNavigation = bShowNavigation;

	UObject::ProcessEvent(Func, &Parms);
}

void UEpicCMSTileCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "NextPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "PreviousPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicCMSTileCarousel::SetCurrentPageByIndex(const int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "SetCurrentPageByIndex");

	Params::EpicCMSTileCarousel_SetCurrentPageByIndex Parms{};

	Parms.PageIndex = PageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UEpicCMSTileCarousel::GetCurrentPageIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicCMSTileCarousel", "GetCurrentPageIndex");

	Params::EpicCMSTileCarousel_GetCurrentPageIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
