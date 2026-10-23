#pragma once

#include "Basic.hpp"

#include "QuestScreen_ArrowButton_classes.hpp"
#include "QuestScreen_ArrowButton_parameters.hpp"

namespace SDK
{

void UQuestScreen_ArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestScreen_ArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestScreen_ArrowButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UQuestScreen_ArrowButton_C::ExecuteUbergraph_QuestScreen_ArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "ExecuteUbergraph_QuestScreen_ArrowButton");

	Params::QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestScreen_ArrowButton_C::GetActiveAnimation(class UWidgetAnimation** ActiveAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "GetActiveAnimation");

	Params::QuestScreen_ArrowButton_C_GetActiveAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveAnimation != nullptr)
		*ActiveAnimation = Parms.ActiveAnimation;
}

void UQuestScreen_ArrowButton_C::OnRowActiveChanged(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "OnRowActiveChanged");

	Params::QuestScreen_ArrowButton_C_OnRowActiveChanged Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestScreen_ArrowButton_C::OnRowReset(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "OnRowReset");

	Params::QuestScreen_ArrowButton_C_OnRowReset Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestScreen_ArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "PreConstruct");

	Params::QuestScreen_ArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestScreen_ArrowButton_C::SnapAnimationToEnd(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "SnapAnimationToEnd");

	Params::QuestScreen_ArrowButton_C_SnapAnimationToEnd Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UQuestScreen_ArrowButton_C::UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& HoverColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestScreen_ArrowButton_C", "UpdateArrowColor");

	Params::QuestScreen_ArrowButton_C_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.HoverColor = std::move(HoverColor);

	UObject::ProcessEvent(Func, &Parms);
}

}
