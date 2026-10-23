#pragma once

#include "Basic.hpp"

#include "ActivityBrowserLobbyTileButton_classes.hpp"
#include "ActivityBrowserLobbyTileButton_parameters.hpp"

namespace SDK
{

void UActivityBrowserLobbyTileButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::ExecuteUbergraph_ActivityBrowserLobbyTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "ExecuteUbergraph_ActivityBrowserLobbyTileButton");

	Params::ActivityBrowserLobbyTileButton_C_ExecuteUbergraph_ActivityBrowserLobbyTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserLobbyTileButton_C::Finished_839C1612477AFCFDCF8BB89840A6FFE3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "Finished_839C1612477AFCFDCF8BB89840A6FFE3");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnDetailsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::OnHideChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnHideChildActivityFirstTimeNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnPreviewImageChanged");

	Params::ActivityBrowserLobbyTileButton_C_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserLobbyTileButton_C::OnSelectedMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnSelectedMatchmaking");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::OnShowChildActivityChangedNotification(const class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnShowChildActivityChangedNotification");

	Params::ActivityBrowserLobbyTileButton_C_OnShowChildActivityChangedNotification Parms{};

	Parms.DisplayName = std::move(DisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityBrowserLobbyTileButton_C::OnShowChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnShowChildActivityFirstTimeNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::OnUnSelectedMatchmakingCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "OnUnSelectedMatchmakingCanceled");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityBrowserLobbyTileButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityBrowserLobbyTileButton_C", "PreConstruct");

	Params::ActivityBrowserLobbyTileButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
