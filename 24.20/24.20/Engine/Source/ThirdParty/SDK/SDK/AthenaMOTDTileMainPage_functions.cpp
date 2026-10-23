#pragma once

#include "Basic.hpp"

#include "AthenaMOTDTileMainPage_classes.hpp"
#include "AthenaMOTDTileMainPage_parameters.hpp"

namespace SDK
{

void UAthenaMOTDTileMainPage_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTileMainPage_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "BP_OnItemSelectionChanged");

	Params::AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTileMainPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTileMainPage_C::ExecuteUbergraph_AthenaMOTDTileMainPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "ExecuteUbergraph_AthenaMOTDTileMainPage");

	Params::AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTileMainPage_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "OnMouseEnter");

	Params::AthenaMOTDTileMainPage_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "OnMouseLeave");

	Params::AthenaMOTDTileMainPage_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "OnPopulateNews");

	Params::AthenaMOTDTileMainPage_C_OnPopulateNews Parms{};

	Parms.NewsEntry = std::move(NewsEntry);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "PreConstruct");

	Params::AthenaMOTDTileMainPage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMOTDTileMainPage_C::ShowImageOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "ShowImageOnly");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMOTDTileMainPage_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMOTDTileMainPage_C", "UpdateDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

}
