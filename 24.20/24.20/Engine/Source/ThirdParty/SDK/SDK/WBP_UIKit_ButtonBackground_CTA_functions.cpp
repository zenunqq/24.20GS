#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_ButtonBackground_CTA_classes.hpp"
#include "WBP_UIKit_ButtonBackground_CTA_parameters.hpp"

namespace SDK
{

void UWBP_UIKit_ButtonBackground_CTA_C::ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA");

	Params::WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "PreConstruct");

	Params::WBP_UIKit_ButtonBackground_CTA_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::SetBackgroundMaterial(class UMaterialInstance*& Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetBackgroundMaterial");

	Params::WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial Parms{};

	Parms.Brush = Brush;

	UObject::ProcessEvent(Func, &Parms);

	Brush = Parms.Brush;
}

void UWBP_UIKit_ButtonBackground_CTA_C::SetBorderMaterial(class UMaterialInstance* Border_Material, bool IsAdditive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetBorderMaterial");

	Params::WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial Parms{};

	Parms.Border_Material = Border_Material;
	Parms.IsAdditive = IsAdditive;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::SetDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonBackground_CTA_C::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionDisabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionDisabled");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionEnabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionEnabled");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionFocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionFocused");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionPressed(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionPressed");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionReleased(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionReleased");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionUnfocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionUnfocused");

	Params::WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);
}

}
