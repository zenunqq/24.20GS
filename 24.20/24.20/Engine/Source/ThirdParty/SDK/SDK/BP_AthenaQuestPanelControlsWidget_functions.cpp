#pragma once

#include "Basic.hpp"

#include "BP_AthenaQuestPanelControlsWidget_classes.hpp"
#include "BP_AthenaQuestPanelControlsWidget_parameters.hpp"

namespace SDK
{

void UBP_AthenaQuestPanelControlsWidget_C::BndEvt__BP_AthenaQuestPanelControlsWidget_Button_PinSelectedQuest_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "BndEvt__BP_AthenaQuestPanelControlsWidget_Button_PinSelectedQuest_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::BP_AthenaQuestPanelControlsWidget_C_BndEvt__BP_AthenaQuestPanelControlsWidget_Button_PinSelectedQuest_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanelControlsWidget_C::BndEvt__Button_QuestNPCIcons_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "BndEvt__Button_QuestNPCIcons_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::BP_AthenaQuestPanelControlsWidget_C_BndEvt__Button_QuestNPCIcons_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanelControlsWidget_C::BP_OnSortTypeTextChanged(const class FText& TypeText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "BP_OnSortTypeTextChanged");

	Params::BP_AthenaQuestPanelControlsWidget_C_BP_OnSortTypeTextChanged Parms{};

	Parms.TypeText = std::move(TypeText);

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanelControlsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaQuestPanelControlsWidget_C::ExecuteUbergraph_BP_AthenaQuestPanelControlsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "ExecuteUbergraph_BP_AthenaQuestPanelControlsWidget");

	Params::BP_AthenaQuestPanelControlsWidget_C_ExecuteUbergraph_BP_AthenaQuestPanelControlsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaQuestPanelControlsWidget_C::Set_Mobile_Visuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaQuestPanelControlsWidget_C", "Set Mobile Visuals");

	UObject::ProcessEvent(Func, nullptr);
}

}
