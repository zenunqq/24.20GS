#pragma once

#include "Basic.hpp"

#include "AthenaMatchmakingPlayButton_classes.hpp"
#include "AthenaMatchmakingPlayButton_parameters.hpp"

namespace SDK
{

void UAthenaMatchmakingPlayButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMatchmakingPlayButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMatchmakingPlayButton_C::ExecuteUbergraph_AthenaMatchmakingPlayButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "ExecuteUbergraph_AthenaMatchmakingPlayButton");

	Params::AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMatchmakingPlayButton_C::SetButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "SetButtonText");

	Params::AthenaMatchmakingPlayButton_C_SetButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}
