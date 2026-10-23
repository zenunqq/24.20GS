#pragma once

#include "Basic.hpp"

#include "SkewButton_classes.hpp"
#include "SkewButton_parameters.hpp"

namespace SDK
{

void USkewButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "PreConstruct");

	Params::SkewButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USkewButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnMouseEnter");

	Params::SkewButton_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply USkewButton_C::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnTouchStarted");

	Params::SkewButton_C_OnTouchStarted Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply USkewButton_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnMouseButtonUp");

	Params::SkewButton_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply USkewButton_C::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnTouchEnded");

	Params::SkewButton_C_OnTouchEnded Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InTouchEvent = std::move(InTouchEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FEventReply USkewButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnMouseButtonDown");

	Params::SkewButton_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USkewButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "OnMouseLeave");

	Params::SkewButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USkewButton_C::ExecuteUbergraph_SkewButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "ExecuteUbergraph_SkewButton");

	Params::SkewButton_C_ExecuteUbergraph_SkewButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USkewButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USkewButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USkewButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USkewButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkewButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

}
