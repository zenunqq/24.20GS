#pragma once

#include "Basic.hpp"

#include "SidebarUserSearchResultListEntry_XS_classes.hpp"
#include "SidebarUserSearchResultListEntry_XS_parameters.hpp"

namespace SDK
{

void USidebarUserSearchResultListEntry_XS_C::BindHoverAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "BindHoverAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserSearchResultListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserSearchResultListEntry_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserSearchResultListEntry_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserSearchResultListEntry_XS_C::ExecuteUbergraph_SidebarUserSearchResultListEntry_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "ExecuteUbergraph_SidebarUserSearchResultListEntry_XS");

	Params::SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserSearchResultListEntry_XS_C::HoverAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "HoverAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserSearchResultListEntry_XS_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserSearchResultListEntry_XS_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

}
