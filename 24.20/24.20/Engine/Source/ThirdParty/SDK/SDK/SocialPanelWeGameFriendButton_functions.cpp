#pragma once

#include "Basic.hpp"

#include "SocialPanelWeGameFriendButton_classes.hpp"
#include "SocialPanelWeGameFriendButton_parameters.hpp"

namespace SDK
{

void USocialPanelWeGameFriendButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelWeGameFriendButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelWeGameFriendButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelWeGameFriendButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelWeGameFriendButton_C::ExecuteUbergraph_SocialPanelWeGameFriendButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelWeGameFriendButton_C", "ExecuteUbergraph_SocialPanelWeGameFriendButton");

	Params::SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
