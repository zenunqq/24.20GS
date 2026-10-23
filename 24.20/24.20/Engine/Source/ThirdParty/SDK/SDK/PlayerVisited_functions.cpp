#pragma once

#include "Basic.hpp"

#include "PlayerVisited_classes.hpp"
#include "PlayerVisited_parameters.hpp"

namespace SDK
{

void UPlayerVisited_C::BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "BP_HandlePlaylistExtensionWidgetCreated");

	Params::PlayerVisited_C_BP_HandlePlaylistExtensionWidgetCreated Parms{};

	Parms.Widget = Widget;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerVisited_C::Brief_Show_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "Brief Show Finished");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::EndOfShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "EndOfShow");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::ExecuteUbergraph_PlayerVisited(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "ExecuteUbergraph_PlayerVisited");

	Params::PlayerVisited_C_ExecuteUbergraph_PlayerVisited Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerVisited_C::K2_OnBecomeActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "K2_OnBecomeActive");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::OnAnimBackupTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "OnAnimBackupTimerFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562");

	Params::PlayerVisited_C_OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerVisited_C::OnNewVisited(const class FText& LocalizedLocationName, const TSoftObjectPtr<class USoundCue>& DiscoveredSoundCue, bool bIsNamedLocation, bool bIsDiscovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "OnNewVisited");

	Params::PlayerVisited_C_OnNewVisited Parms{};

	Parms.LocalizedLocationName = std::move(LocalizedLocationName);
	Parms.DiscoveredSoundCue = DiscoveredSoundCue;
	Parms.bIsNamedLocation = bIsNamedLocation;
	Parms.bIsDiscovered = bIsDiscovered;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerVisited_C::OnStompFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "OnStompFailed");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::Play_Brief_Show_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "Play Brief Show Sound");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::SetMobileVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "SetMobileVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerVisited_C::SetPOIMusic(class USoundBase* Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerVisited_C", "SetPOIMusic");

	Params::PlayerVisited_C_SetPOIMusic Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);
}

}
