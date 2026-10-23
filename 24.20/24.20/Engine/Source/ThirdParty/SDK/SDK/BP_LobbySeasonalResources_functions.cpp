#pragma once

#include "Basic.hpp"

#include "BP_LobbySeasonalResources_classes.hpp"
#include "BP_LobbySeasonalResources_parameters.hpp"

namespace SDK
{

void UBP_LobbySeasonalResources_C::BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_LobbySeasonalResources_C::BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::BP_LobbySeasonalResources_C_BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_LobbySeasonalResources_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_LobbySeasonalResources_C::ExecuteUbergraph_BP_LobbySeasonalResources(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "ExecuteUbergraph_BP_LobbySeasonalResources");

	Params::BP_LobbySeasonalResources_C_ExecuteUbergraph_BP_LobbySeasonalResources Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_LobbySeasonalResources_C::OnShowMoreInfo(bool bShouldShowMoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbySeasonalResources_C", "OnShowMoreInfo");

	Params::BP_LobbySeasonalResources_C_OnShowMoreInfo Parms{};

	Parms.bShouldShowMoreInfo = bShouldShowMoreInfo;

	UObject::ProcessEvent(Func, &Parms);
}

}
