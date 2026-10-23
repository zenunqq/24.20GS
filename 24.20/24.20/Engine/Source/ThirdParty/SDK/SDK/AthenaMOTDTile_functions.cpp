#pragma once

#include "Basic.hpp"

#include "AthenaMOTDTile_classes.hpp"
#include "AthenaMOTDTile_parameters.hpp"

namespace SDK
{

void UAthenaMOTDTile_C::ExecuteUbergraph_AthenaMOTDTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "ExecuteUbergraph_AthenaMOTDTile");

	Params::AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTile_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "OnMouseEnter");

	Params::AthenaMOTDTile_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTile_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "OnMouseLeave");

	Params::AthenaMOTDTile_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "PreConstruct");

	Params::AthenaMOTDTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTile_C::ShowImageOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "ShowImageOnly");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTile_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTile_C", "UpdateDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

}
