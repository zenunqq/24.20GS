#pragma once

#include "Basic.hpp"

#include "PictureInPictureFNEventsOverlay_classes.hpp"
#include "PictureInPictureFNEventsOverlay_parameters.hpp"

namespace SDK
{

void UPictureInPictureFNEventsOverlay_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UPictureInPictureFNEventsOverlay_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UPictureInPictureFNEventsOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPictureInPictureFNEventsOverlay_C::ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "ExecuteUbergraph_PictureInPictureFNEventsOverlay");

	Params::PictureInPictureFNEventsOverlay_C_ExecuteUbergraph_PictureInPictureFNEventsOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPictureFNEventsOverlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UPictureInPictureFNEventsOverlay_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "OnMouseEnter");

	Params::PictureInPictureFNEventsOverlay_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPictureFNEventsOverlay_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "OnMouseLeave");

	Params::PictureInPictureFNEventsOverlay_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPictureFNEventsOverlay_C::ShowError(int32 ErrorNumber, const class FString& ErrorMessage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "ShowError");

	Params::PictureInPictureFNEventsOverlay_C_ShowError Parms{};

	Parms.ErrorNumber = ErrorNumber;
	Parms.ErrorMessage_0 = std::move(ErrorMessage_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UPictureInPictureFNEventsOverlay_C::ShowHideInstructions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsOverlay_C", "ShowHideInstructions");

	UObject::ProcessEvent(Func, nullptr);
}

}
