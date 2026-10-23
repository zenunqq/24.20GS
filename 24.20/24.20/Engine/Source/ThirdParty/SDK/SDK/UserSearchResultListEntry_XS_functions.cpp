#pragma once

#include "Basic.hpp"

#include "UserSearchResultListEntry_XS_classes.hpp"
#include "UserSearchResultListEntry_XS_parameters.hpp"

namespace SDK
{

void UUserSearchResultListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSearchResultListEntry_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserSearchResultListEntry_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSearchResultListEntry_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserSearchResultListEntry_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSearchResultListEntry_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserSearchResultListEntry_XS_C::ExecuteUbergraph_UserSearchResultListEntry_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSearchResultListEntry_XS_C", "ExecuteUbergraph_UserSearchResultListEntry_XS");

	Params::UserSearchResultListEntry_XS_C_ExecuteUbergraph_UserSearchResultListEntry_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserSearchResultListEntry_XS_C::SetNamePlatformAndMutuals(const class FText& DisplayName, const class FText& Platform, int32 MutualCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSearchResultListEntry_XS_C", "SetNamePlatformAndMutuals");

	Params::UserSearchResultListEntry_XS_C_SetNamePlatformAndMutuals Parms{};

	Parms.DisplayName = std::move(DisplayName);
	Parms.Platform = std::move(Platform);
	Parms.MutualCount = MutualCount;

	UObject::ProcessEvent(Func, &Parms);
}

}
