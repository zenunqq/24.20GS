#pragma once

#include "Basic.hpp"

#include "TeamMemberPedestal_XPBoostInfo_classes.hpp"
#include "TeamMemberPedestal_XPBoostInfo_parameters.hpp"

namespace SDK
{

void UTeamMemberPedestal_XPBoostInfo_C::OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_XPBoostInfo_C", "OnCameraChanged");

	Params::TeamMemberPedestal_XPBoostInfo_C_OnCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberPedestal_XPBoostInfo_C::ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_XPBoostInfo_C", "ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo");

	Params::TeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberPedestal_XPBoostInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_XPBoostInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
