#pragma once

#include "Basic.hpp"

#include "TooltipLibrary_classes.hpp"
#include "TooltipLibrary_parameters.hpp"

namespace SDK
{

void UTooltipLibrary_C::Create_Basic_Tooltip(class APlayerController* Owning_Player, const class FText& Body_Text, const class FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UClass* Header_Style, class UClass* Body_Style, class UObject* __WorldContext, class UUserWidget** Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "Create Basic Tooltip");

	Params::TooltipLibrary_C_Create_Basic_Tooltip Parms{};

	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = std::move(Body_Text);
	Parms.Header_Text = std::move(Header_Text);
	Parms.Icon_Brush = Icon_Brush;
	Parms.Header_Style = Header_Style;
	Parms.Body_Style = Body_Style;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}

void UTooltipLibrary_C::Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "Create Compare Item Tooltip");

	Params::TooltipLibrary_C_Create_Compare_Item_Tooltip Parms{};

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = std::move(Header_Text);
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.ComparedItem = ComparedItem;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void UTooltipLibrary_C::Create_Custom_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "Create Custom Tooltip");

	Params::TooltipLibrary_C_Create_Custom_Tooltip Parms{};

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = std::move(Header_Text);
	Parms.Icon_Brush = Icon_Brush;
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}

void UTooltipLibrary_C::Create_Item_Tooltip(class APlayerController* Owning_Player, const class FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int32 OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "Create Item Tooltip");

	Params::TooltipLibrary_C_Create_Item_Tooltip Parms{};

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = std::move(Header_Text);
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.OverrideQuantity = OverrideQuantity;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void UTooltipLibrary_C::CreateXPTooltip(class APlayerController* Owner, const class FText& Header, const class FText& CommanderXP, const class FText& BoostXP, const class FText& RestXP, const class FText& Body, class UObject* __WorldContext, class UCommonUserWidget** Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "CreateXPTooltip");

	Params::TooltipLibrary_C_CreateXPTooltip Parms{};

	Parms.Owner = Owner;
	Parms.Header = std::move(Header);
	Parms.CommanderXP = std::move(CommanderXP);
	Parms.BoostXP = std::move(BoostXP);
	Parms.RestXP = std::move(RestXP);
	Parms.Body = std::move(Body);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}

void UTooltipLibrary_C::Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const class FText& Tooltip_Text, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TooltipLibrary_C", "Set Enabled And Tooltip Text");

	Params::TooltipLibrary_C_Set_Enabled_And_Tooltip_Text Parms{};

	Parms.Widget = Widget;
	Parms.Enabled = Enabled;
	Parms.Tooltip_Text = std::move(Tooltip_Text);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
