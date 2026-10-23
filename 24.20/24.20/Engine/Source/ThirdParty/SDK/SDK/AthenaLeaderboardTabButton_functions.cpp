#pragma once

#include "Basic.hpp"

#include "AthenaLeaderboardTabButton_classes.hpp"
#include "AthenaLeaderboardTabButton_parameters.hpp"

namespace SDK
{

void UAthenaLeaderboardTabButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::ExecuteUbergraph_AthenaLeaderboardTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "ExecuteUbergraph_AthenaLeaderboardTabButton");

	Params::AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLeaderboardTabButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLeaderboardTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "PreConstruct");

	Params::AthenaLeaderboardTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLeaderboardTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Set Icon");

	Params::AthenaLeaderboardTabButton_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLeaderboardTabButton_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "Set Text");

	Params::AthenaLeaderboardTabButton_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLeaderboardTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "SetTabLabelInfo");

	Params::AthenaLeaderboardTabButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLeaderboardTabButton_C::ShowText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLeaderboardTabButton_C", "ShowText");

	UObject::ProcessEvent(Func, nullptr);
}

}
