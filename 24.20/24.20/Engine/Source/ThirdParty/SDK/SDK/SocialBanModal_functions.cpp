#pragma once

#include "Basic.hpp"

#include "SocialBanModal_classes.hpp"
#include "SocialBanModal_parameters.hpp"

namespace SDK
{

void USocialBanModal_C::ExecuteUbergraph_SocialBanModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialBanModal_C", "ExecuteUbergraph_SocialBanModal");

	Params::SocialBanModal_C_ExecuteUbergraph_SocialBanModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialBanModal_C::OnDisplayModeSet(bool bIsBanned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialBanModal_C", "OnDisplayModeSet");

	Params::SocialBanModal_C_OnDisplayModeSet Parms{};

	Parms.bIsBanned = bIsBanned;

	UObject::ProcessEvent(Func, &Parms);
}

}
