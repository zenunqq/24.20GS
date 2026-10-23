#pragma once

#include "Basic.hpp"

#include "TeamMemberManage_classes.hpp"
#include "TeamMemberManage_parameters.hpp"

namespace SDK
{

void UTeamMemberManage_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature");

	Params::TeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature Parms{};

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberManage_C::BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature");

	Params::TeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberManage_C::BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::TeamMemberManage_C_BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberManage_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeamMemberManage_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeamMemberManage_C::ExecuteUbergraph_TeamMemberManage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "ExecuteUbergraph_TeamMemberManage");

	Params::TeamMemberManage_C_ExecuteUbergraph_TeamMemberManage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberManage_C::OnParticipationChanged(bool bIsParticipating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "OnParticipationChanged");

	Params::TeamMemberManage_C_OnParticipationChanged Parms{};

	Parms.bIsParticipating = bIsParticipating;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMemberManage_C::OpenBannerEditor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberManage_C", "OpenBannerEditor");

	UObject::ProcessEvent(Func, nullptr);
}

}
