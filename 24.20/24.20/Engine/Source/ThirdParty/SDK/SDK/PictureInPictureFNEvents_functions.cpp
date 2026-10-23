#pragma once

#include "Basic.hpp"

#include "PictureInPictureFNEvents_classes.hpp"
#include "PictureInPictureFNEvents_parameters.hpp"

namespace SDK
{

void ULiveEventHUDAd::ShowAdvertisement(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveEventHUDAd", "ShowAdvertisement");

	Params::LiveEventHUDAd_ShowAdvertisement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UPictureInPictureFNEventsCheatManager::AddPiPEvent(const class FString& EventName, const class FString& VUID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "AddPiPEvent");

	Params::PictureInPictureFNEventsCheatManager_AddPiPEvent Parms{};

	Parms.EventName = std::move(EventName);
	Parms.VUID = std::move(VUID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::ListAllPiPEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListAllPiPEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::ListPiPEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListPiPEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::RemovePiPEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "RemovePiPEvent");

	Params::PictureInPictureFNEventsCheatManager_RemovePiPEvent Parms{};

	Parms.EventName = std::move(EventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::SelectPiPEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "SelectPiPEvent");

	Params::PictureInPictureFNEventsCheatManager_SelectPiPEvent Parms{};

	Parms.EventName = std::move(EventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::StartPiPBouncingLlama()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StartPiPBouncingLlama");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsCheatManager::StopPiPBouncingLlama()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StopPiPBouncingLlama");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::AddPartnerActionAnalytics(const class FString& InPartnerName, EPictureInPictureAction InActionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "AddPartnerActionAnalytics");

	Params::PictureInPictureFNEventsController_AddPartnerActionAnalytics Parms{};

	Parms.InPartnerName = std::move(InPartnerName);
	Parms.InActionType = InActionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::ExitEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "ExitEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::HandleFNMediaEventsStreams(const struct FFortMediaEventsStreamAssets& VideoStreamAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaEventsStreams");

	Params::PictureInPictureFNEventsController_HandleFNMediaEventsStreams Parms{};

	Parms.VideoStreamAssets = std::move(VideoStreamAssets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::HandleFNMediaRemoveEventsStream(const class FString& InEventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaRemoveEventsStream");

	Params::PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream Parms{};

	Parms.InEventName = std::move(InEventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::OnClientLoginSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLoginSuccess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::OnClientLogoutSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLogoutSuccess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureFNEventsController::UpdateClientLoginState(const TArray<struct FPiPPartnerSource>& UpdatedSources)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "UpdateClientLoginState");

	Params::PictureInPictureFNEventsController_UpdateClientLoginState Parms{};

	Parms.UpdatedSources = std::move(UpdatedSources);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
