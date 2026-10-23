#pragma once

#include "Basic.hpp"

#include "SquadMemberTile_classes.hpp"
#include "SquadMemberTile_parameters.hpp"

namespace SDK
{

void USquadMemberTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::BP_OnTeamMemberEstablished(bool bHasValidMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnTeamMemberEstablished");

	Params::SquadMemberTile_C_BP_OnTeamMemberEstablished Parms{};

	Parms.bHasValidMember = bHasValidMember;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::ExecuteUbergraph_SquadMemberTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "ExecuteUbergraph_SquadMemberTile");

	Params::SquadMemberTile_C_ExecuteUbergraph_SquadMemberTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7");

	Params::SquadMemberTile_C_OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::OnMemberGameReadinessChanged(EGameReadiness ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnMemberGameReadinessChanged");

	Params::SquadMemberTile_C_OnMemberGameReadinessChanged Parms{};

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::OnMemberIsInFrontendChanged(bool bIsInFrontEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnMemberIsInFrontendChanged");

	Params::SquadMemberTile_C_OnMemberIsInFrontendChanged Parms{};

	Parms.bIsInFrontEnd = bIsInFrontEnd;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::OnSquadAssigned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnSquadAssigned");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "PreConstruct");

	Params::SquadMemberTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USquadMemberTile_C::SetEmptyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetEmptyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::SetNotReadyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetNotReadyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::SetReadyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetReadyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::SetSitOutVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetSitOutVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void USquadMemberTile_C::SetVisuals(EGameReadiness Member_Readiness, bool Is_In_Frontend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetVisuals");

	Params::SquadMemberTile_C_SetVisuals Parms{};

	Parms.Member_Readiness = Member_Readiness;
	Parms.Is_In_Frontend = Is_In_Frontend;

	UObject::ProcessEvent(Func, &Parms);
}

}
