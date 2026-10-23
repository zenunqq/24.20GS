#pragma once

#include "Basic.hpp"

#include "TeamMemberBanner_classes.hpp"
#include "TeamMemberBanner_parameters.hpp"

namespace SDK
{

void UTeamMemberBanner_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::ExecuteUbergraph_TeamMemberBanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "ExecuteUbergraph_TeamMemberBanner");

	Params::TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::HandleMouseHoverVisualState(bool Hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "HandleMouseHoverVisualState");

	Params::TeamMemberBanner_C_HandleMouseHoverVisualState Parms{};

	Parms.Hover = Hover;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "OnTeamMemberConnectionStateChanged");

	Params::TeamMemberBanner_C_OnTeamMemberConnectionStateChanged Parms{};

	Parms.NewConnectionState = NewConnectionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberBanner_C::OpenPartyFinder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberBanner_C", "OpenPartyFinder");

	UObject::ProcessEvent(Func, nullptr);
}

}
