#pragma once

#include "Basic.hpp"

#include "VerseFortniteUI_classes.hpp"
#include "VerseFortniteUI_parameters.hpp"

namespace SDK
{

void UVerseFortniteUIFrameworkButton_Base::OnRep_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "OnRep_Text");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkButton_Base::ServerClick(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "ServerClick");

	Params::VerseFortniteUIFrameworkButton_Base_ServerClick Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkButton_Base::SetText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "SetText");

	Params::VerseFortniteUIFrameworkButton_Base_SetText Parms{};

	Parms.Text_0 = std::move(Text_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UVerseFortniteUIFrameworkButton_Base::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkButton_Base", "GetText");

	Params::VerseFortniteUIFrameworkButton_Base_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseFortniteUIFrameworkText_Base::ExecuteServerTextCommitted(const class FText& InText, ETextCommit InCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ExecuteServerTextCommitted");

	Params::VerseFortniteUIFrameworkText_Base_ExecuteServerTextCommitted Parms{};

	Parms.InText = std::move(InText);
	Parms.InCommitMethod = InCommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkText_Base::ServerTextCommitted(class APlayerController* PlayerController, const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkText_Base", "ServerTextCommitted");

	Params::VerseFortniteUIFrameworkText_Base_ServerTextCommitted Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NewText = std::move(NewText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::ExecuteServerValueChanged(float InNewValue, int32 InValueID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ExecuteServerValueChanged");

	Params::VerseFortniteUIFrameworkSlider_ExecuteServerValueChanged Parms{};

	Parms.InNewValue = InNewValue;
	Parms.InValueID = InValueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::HandleValueChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "HandleValueChanged");

	Params::VerseFortniteUIFrameworkSlider_HandleValueChanged Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::OnRep_MaxValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MaxValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::OnRep_MinValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_MinValue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::OnRep_StepSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_StepSize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::OnRep_Value()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "OnRep_Value");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32 InValueID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "ServerValueChanged");

	Params::VerseFortniteUIFrameworkSlider_ServerValueChanged Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InNewValue = InNewValue;
	Parms.InValueID = InValueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::SetMaxValue(float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMaxValue");

	Params::VerseFortniteUIFrameworkSlider_SetMaxValue Parms{};

	Parms.InMaxValue = InMaxValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::SetMinValue(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetMinValue");

	Params::VerseFortniteUIFrameworkSlider_SetMinValue Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::SetStepSize(float InMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetStepSize");

	Params::VerseFortniteUIFrameworkSlider_SetStepSize Parms{};

	Parms.InMinValue = InMinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseFortniteUIFrameworkSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "SetValue");

	Params::VerseFortniteUIFrameworkSlider_SetValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UVerseFortniteUIFrameworkSlider::GetMaxValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMaxValue");

	Params::VerseFortniteUIFrameworkSlider_GetMaxValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UVerseFortniteUIFrameworkSlider::GetMinValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetMinValue");

	Params::VerseFortniteUIFrameworkSlider_GetMinValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UVerseFortniteUIFrameworkSlider::GetStepSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetStepSize");

	Params::VerseFortniteUIFrameworkSlider_GetStepSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UVerseFortniteUIFrameworkSlider::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseFortniteUIFrameworkSlider", "GetValue");

	Params::VerseFortniteUIFrameworkSlider_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
