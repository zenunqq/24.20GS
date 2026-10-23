#pragma once

#include "Basic.hpp"

#include "AthenaMOTDWidget_classes.hpp"
#include "AthenaMOTDWidget_parameters.hpp"

namespace SDK
{

void UAthenaMOTDWidget_C::BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::DialogResult_B7839D98483DEF9593D448BA28AE74F7(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "DialogResult_B7839D98483DEF9593D448BA28AE74F7");

	Params::AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::ExecuteUbergraph_AthenaMOTDWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "ExecuteUbergraph_AthenaMOTDWidget");

	Params::AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UAthenaMOTDWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "OnFocusReceived");

	Params::AthenaMOTDWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaMOTDWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::OnIsActivityLoadingChanged(bool bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "OnIsActivityLoadingChanged");

	Params::AthenaMOTDWidget_C_OnIsActivityLoadingChanged Parms{};

	Parms.bIsLoading = bIsLoading;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::OnSelectedNews(const struct FAthenaMOTDBase& NewsEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "OnSelectedNews");

	Params::AthenaMOTDWidget_C_OnSelectedNews Parms{};

	Parms.NewsEntry = std::move(NewsEntry);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::PlayIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "PlayIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::SetNormalButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "SetNormalButtonText");

	Params::AthenaMOTDWidget_C_SetNormalButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::SetSecondaryNormalButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "SetSecondaryNormalButtonText");

	Params::AthenaMOTDWidget_C_SetSecondaryNormalButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::SetSecondarySpecialButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "SetSecondarySpecialButtonText");

	Params::AthenaMOTDWidget_C_SetSecondarySpecialButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::SetSpecialButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "SetSpecialButtonText");

	Params::AthenaMOTDWidget_C_SetSpecialButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDWidget_C::StartSTWUpsell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "StartSTWUpsell");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDWidget_C::UpdateCustomColorStyle(bool bHasCustomColor, const struct FColor& CustomDarkColor, const struct FColor& CustomLightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDWidget_C", "UpdateCustomColorStyle");

	Params::AthenaMOTDWidget_C_UpdateCustomColorStyle Parms{};

	Parms.bHasCustomColor = bHasCustomColor;
	Parms.CustomDarkColor = std::move(CustomDarkColor);
	Parms.CustomLightColor = std::move(CustomLightColor);

	UObject::ProcessEvent(Func, &Parms);
}

}
