#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_SideBarLeaveButton_classes.hpp"
#include "WBP_UIKit_SideBarLeaveButton_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_SideBarLeaveButton_C::ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_SideBarLeaveButton_C", "ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton");

	Params::WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_SideBarLeaveButton_C::OnTextChanged(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_SideBarLeaveButton_C", "OnTextChanged");

	Params::WBP_UIKit_SideBarLeaveButton_C_OnTextChanged Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_SideBarLeaveButton_C::OnTimerTextChanged(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_SideBarLeaveButton_C", "OnTimerTextChanged");

	Params::WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_SideBarLeaveButton_C::OnTimerVisibilityChanged(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_SideBarLeaveButton_C", "OnTimerVisibilityChanged");

	Params::WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_SideBarLeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_SideBarLeaveButton_C", "PreConstruct");

	Params::WBP_UIKit_SideBarLeaveButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
