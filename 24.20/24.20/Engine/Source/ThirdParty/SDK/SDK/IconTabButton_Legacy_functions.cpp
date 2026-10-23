#pragma once

#include "Basic.hpp"

#include "IconTabButton_Legacy_classes.hpp"
#include "IconTabButton_Legacy_parameters.hpp"

namespace SDK
{

void UIconTabButton_Legacy_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::ExecuteUbergraph_IconTabButton_Legacy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "ExecuteUbergraph_IconTabButton_Legacy");

	Params::IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::Play_Hover_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "Play Hover Sound");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "PreConstruct");

	Params::IconTabButton_Legacy_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "Set Icon");

	Params::IconTabButton_Legacy_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "Set Text");

	Params::IconTabButton_Legacy_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "SetChangeIconColorWhenSelected");

	Params::IconTabButton_Legacy_C_SetChangeIconColorWhenSelected Parms{};

	Parms.ChangeColorWhenSelected = ChangeColorWhenSelected;
	Parms.SelectedColor = std::move(SelectedColor);
	Parms.UnselectedColor = std::move(UnselectedColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "SetTabLabelInfo");

	Params::IconTabButton_Legacy_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "SetTutorialBorderStyle");

	Params::IconTabButton_Legacy_C_SetTutorialBorderStyle Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UIconTabButton_Legacy_C::ShowText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "ShowText");

	UObject::ProcessEvent(Func, nullptr);
}

void UIconTabButton_Legacy_C::Update_Bang_State(bool bBangEnabled_0, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconTabButton_Legacy_C", "Update Bang State");

	Params::IconTabButton_Legacy_C_Update_Bang_State Parms{};

	Parms.bBangEnabled_0 = bBangEnabled_0;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}
