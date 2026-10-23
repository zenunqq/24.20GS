#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_Block_Base_classes.hpp"
#include "WBP_UIKit_Block_Base_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_Block_Base_C::SetDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_Block_Base_C::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_Block_Base_C::TransitionDisabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionDisabled");

	Params::WBP_UIKit_Block_Base_C_TransitionDisabled Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionEnabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionEnabled");

	Params::WBP_UIKit_Block_Base_C_TransitionEnabled Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionFocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionFocused");

	Params::WBP_UIKit_Block_Base_C_TransitionFocused Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionHovered(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionHovered");

	Params::WBP_UIKit_Block_Base_C_TransitionHovered Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionPressed(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionPressed");

	Params::WBP_UIKit_Block_Base_C_TransitionPressed Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionReleased(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionReleased");

	Params::WBP_UIKit_Block_Base_C_TransitionReleased Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionState");

	Params::WBP_UIKit_Block_Base_C_TransitionState Parms{};

	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionTime = TransitionTime;
	Parms.PlayForward = PlayForward;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionUnfocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionUnfocused");

	Params::WBP_UIKit_Block_Base_C_TransitionUnfocused Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_Block_Base_C::TransitionUnhovered(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionUnhovered");

	Params::WBP_UIKit_Block_Base_C_TransitionUnhovered Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

}
