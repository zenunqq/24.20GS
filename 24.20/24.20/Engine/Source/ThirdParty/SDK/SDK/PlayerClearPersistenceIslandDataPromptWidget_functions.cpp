#pragma once

#include "Basic.hpp"

#include "PlayerClearPersistenceIslandDataPromptWidget_classes.hpp"
#include "PlayerClearPersistenceIslandDataPromptWidget_parameters.hpp"

namespace SDK
{

void UPlayerClearPersistenceIslandDataPromptWidget_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerClearPersistenceIslandDataPromptWidget_C", "BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::PlayerClearPersistenceIslandDataPromptWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerClearPersistenceIslandDataPromptWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerClearPersistenceIslandDataPromptWidget_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::PlayerClearPersistenceIslandDataPromptWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerClearPersistenceIslandDataPromptWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerClearPersistenceIslandDataPromptWidget_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::PlayerClearPersistenceIslandDataPromptWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerClearPersistenceIslandDataPromptWidget_C::ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerClearPersistenceIslandDataPromptWidget_C", "ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget");

	Params::PlayerClearPersistenceIslandDataPromptWidget_C_ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerClearPersistenceIslandDataPromptWidget_C::SetDescription(const class FText& InDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerClearPersistenceIslandDataPromptWidget_C", "SetDescription");

	Params::PlayerClearPersistenceIslandDataPromptWidget_C_SetDescription Parms{};

	Parms.InDescription = std::move(InDescription);

	UObject::ProcessEvent(Func, &Parms);
}

}
