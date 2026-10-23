#pragma once

#include "Basic.hpp"

#include "SocialButton_Sidebar_classes.hpp"
#include "SocialButton_Sidebar_parameters.hpp"

namespace SDK
{

void USocialButton_Sidebar_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_Sidebar_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_Sidebar_C::ExecuteUbergraph_SocialButton_Sidebar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "ExecuteUbergraph_SocialButton_Sidebar");

	Params::SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialButton_Sidebar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_Sidebar_C::OnNumFriendsTextUpdated(const int32 FriendsOnline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "OnNumFriendsTextUpdated");

	Params::SocialButton_Sidebar_C_OnNumFriendsTextUpdated Parms{};

	Parms.FriendsOnline = FriendsOnline;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialButton_Sidebar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_Sidebar_C", "PreConstruct");

	Params::SocialButton_Sidebar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
