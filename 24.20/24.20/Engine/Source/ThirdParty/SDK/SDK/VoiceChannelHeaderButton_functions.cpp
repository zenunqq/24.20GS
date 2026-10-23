#pragma once

#include "Basic.hpp"

#include "VoiceChannelHeaderButton_classes.hpp"
#include "VoiceChannelHeaderButton_parameters.hpp"

namespace SDK
{

void UVoiceChannelHeaderButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelHeaderButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelHeaderButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelHeaderButton_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnItemExpansionChanged");

	Params::VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void UVoiceChannelHeaderButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UVoiceChannelHeaderButton_C::ExecuteUbergraph_VoiceChannelHeaderButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "ExecuteUbergraph_VoiceChannelHeaderButton");

	Params::VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UVoiceChannelHeaderButton_C::OnListItemObjectSet_1(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "OnListItemObjectSet_1");

	Params::VoiceChannelHeaderButton_C_OnListItemObjectSet_1 Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UVoiceChannelHeaderButton_C::OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "OnUpdateVisuals");

	Params::VoiceChannelHeaderButton_C_OnUpdateVisuals Parms{};

	Parms.bIsActiveAndListening = bIsActiveAndListening;
	Parms.bIsActiveOrAvailable = bIsActiveOrAvailable;
	Parms.bIsAvailableAndNotActive = bIsAvailableAndNotActive;
	Parms.bIsListening = bIsListening;
	Parms.bShowingRestriction = bShowingRestriction;

	UObject::ProcessEvent(Func, &Parms);
}

}
