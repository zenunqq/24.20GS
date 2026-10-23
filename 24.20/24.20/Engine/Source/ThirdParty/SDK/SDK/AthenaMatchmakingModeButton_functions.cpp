#pragma once

#include "Basic.hpp"

#include "AthenaMatchmakingModeButton_classes.hpp"
#include "AthenaMatchmakingModeButton_parameters.hpp"

namespace SDK
{

void UAthenaMatchmakingModeButton_C::ExecuteUbergraph_AthenaMatchmakingModeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "ExecuteUbergraph_AthenaMatchmakingModeButton");

	Params::AthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "OnMouseEnter");

	Params::AthenaMatchmakingModeButton_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "OnMouseLeave");

	Params::AthenaMatchmakingModeButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::PlaylistChanged(class UFortPlaylistAthena* NewPlaylist, const class FText& OverrideName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "PlaylistChanged");

	Params::AthenaMatchmakingModeButton_C_PlaylistChanged Parms{};

	Parms.NewPlaylist = NewPlaylist;
	Parms.OverrideName = std::move(OverrideName);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::RefreshFillText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "RefreshFillText");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMatchmakingModeButton_C::RefreshLimitedPoolWarning(bool IsCrossplayEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "RefreshLimitedPoolWarning");

	Params::AthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning Parms{};

	Parms.IsCrossplayEnabled = IsCrossplayEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::SetSquadFillText(bool bFill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "SetSquadFillText");

	Params::AthenaMatchmakingModeButton_C_SetSquadFillText Parms{};

	Parms.bFill = bFill;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingModeButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "SetTabLabelInfo");

	Params::AthenaMatchmakingModeButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
