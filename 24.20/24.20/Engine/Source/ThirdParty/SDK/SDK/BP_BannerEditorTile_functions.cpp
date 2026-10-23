#pragma once

#include "Basic.hpp"

#include "BP_BannerEditorTile_classes.hpp"
#include "BP_BannerEditorTile_parameters.hpp"

namespace SDK
{

void UBP_BannerEditorTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BannerEditorTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BannerEditorTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BannerEditorTile_C::ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "ExecuteUbergraph_BP_BannerEditorTile");

	Params::BP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BannerEditorTile_C::HandleBannerIconLoadGuardFinished(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "HandleBannerIconLoadGuardFinished");

	Params::BP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BannerEditorTile_C::Mark_Item_As_Seen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "Mark Item As Seen");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BannerEditorTile_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "OnListItemObjectSet");

	Params::BP_BannerEditorTile_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BannerEditorTile_C::Update_Bang_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BannerEditorTile_C", "Update Bang State");

	UObject::ProcessEvent(Func, nullptr);
}

}
