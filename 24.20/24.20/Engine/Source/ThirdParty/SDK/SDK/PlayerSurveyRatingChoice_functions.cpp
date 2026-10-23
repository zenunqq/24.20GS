#pragma once

#include "Basic.hpp"

#include "PlayerSurveyRatingChoice_classes.hpp"
#include "PlayerSurveyRatingChoice_parameters.hpp"

namespace SDK
{

void UPlayerSurveyRatingChoice_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::ExecuteUbergraph_PlayerSurveyRatingChoice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "ExecuteUbergraph_PlayerSurveyRatingChoice");

	Params::PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyRatingChoice_C::GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "GetCurrentButtonBrush");

	Params::PlayerSurveyRatingChoice_C_GetCurrentButtonBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBrush != nullptr)
		*CurrentBrush = std::move(Parms.CurrentBrush);
}

void UPlayerSurveyRatingChoice_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::OnSurveyResetChoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "OnSurveyResetChoice");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::UpdateInputActionRenderOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "UpdateInputActionRenderOpacity");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerSurveyRatingChoice_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}
