#pragma once

#include "Basic.hpp"

#include "WBP_PlayerAvatar_classes.hpp"
#include "WBP_PlayerAvatar_parameters.hpp"

namespace SDK
{

void UWBP_PlayerAvatar_C::Event_Set_Presence_Icon_Settings(double Scale, const struct FVector2D& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerAvatar_C", "Event Set Presence Icon Settings");

	Params::WBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings Parms{};

	Parms.Scale = Scale;
	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PlayerAvatar_C::Event_Set_Size(const struct FVector2D& NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerAvatar_C", "Event Set Size");

	Params::WBP_PlayerAvatar_C_Event_Set_Size Parms{};

	Parms.NewSize = std::move(NewSize);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PlayerAvatar_C::ExecuteUbergraph_WBP_PlayerAvatar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerAvatar_C", "ExecuteUbergraph_WBP_PlayerAvatar");

	Params::WBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PlayerAvatar_C::OnOnlinePresenceChanged(const bool bHidePresence, const EPresenceIndicatorState PresenceState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerAvatar_C", "OnOnlinePresenceChanged");

	Params::WBP_PlayerAvatar_C_OnOnlinePresenceChanged Parms{};

	Parms.bHidePresence = bHidePresence;
	Parms.PresenceState = PresenceState;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_PlayerAvatar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerAvatar_C", "PreConstruct");

	Params::WBP_PlayerAvatar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
