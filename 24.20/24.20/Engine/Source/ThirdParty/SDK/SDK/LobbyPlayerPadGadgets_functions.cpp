#pragma once

#include "Basic.hpp"

#include "LobbyPlayerPadGadgets_classes.hpp"
#include "LobbyPlayerPadGadgets_parameters.hpp"

namespace SDK
{

void ULobbyPlayerPadGadgets_C::Refresh(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "Refresh");

	Params::LobbyPlayerPadGadgets_C_Refresh Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyPlayerPadGadgets_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseLeave");

	Params::LobbyPlayerPadGadgets_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyPlayerPadGadgets_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseEnter");

	Params::LobbyPlayerPadGadgets_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply ULobbyPlayerPadGadgets_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnMouseButtonDown");

	Params::LobbyPlayerPadGadgets_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ULobbyPlayerPadGadgets_C::OnInputClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "OnInputClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void ULobbyPlayerPadGadgets_C::Initialize(int32 PlayerIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "Initialize");

	Params::LobbyPlayerPadGadgets_C_Initialize Parms{};

	Parms.PlayerIndex_0 = PlayerIndex_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ULobbyPlayerPadGadgets_C::ExecuteUbergraph_LobbyPlayerPadGadgets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPlayerPadGadgets_C", "ExecuteUbergraph_LobbyPlayerPadGadgets");

	Params::LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
