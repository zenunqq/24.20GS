#pragma once

#include "Basic.hpp"

#include "B_EmotePreviewDisplay_classes.hpp"
#include "B_EmotePreviewDisplay_parameters.hpp"

namespace SDK
{

void AB_EmotePreviewDisplay_C::SpecialCaseShoutHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "SpecialCaseShoutHandler");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_EmotePreviewDisplay_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "ReceiveEndPlay");

	Params::B_EmotePreviewDisplay_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_EmotePreviewDisplay_C::PreviewEmote(const class UFortMontageItemDefinitionBase* Emote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "PreviewEmote");

	Params::B_EmotePreviewDisplay_C_PreviewEmote Parms{};

	Parms.Emote = Emote;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_EmotePreviewDisplay_C::ExecuteUbergraph_B_EmotePreviewDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "ExecuteUbergraph_B_EmotePreviewDisplay");

	Params::B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_EmotePreviewDisplay_C::PerformSpecialAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "PerformSpecialAction");

	Params::B_EmotePreviewDisplay_C_PerformSpecialAction Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_EmotePreviewDisplay_C::CleanupDynamicSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "CleanupDynamicSounds");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_EmotePreviewDisplay_C::OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "OnLoaded_638F148342254A777E929B88915A8958");

	Params::B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_EmotePreviewDisplay_C::ApplyEmoteToPet(bool IsRemoval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_EmotePreviewDisplay_C", "ApplyEmoteToPet");

	Params::B_EmotePreviewDisplay_C_ApplyEmoteToPet Parms{};

	Parms.IsRemoval = IsRemoval;

	UObject::ProcessEvent(Func, &Parms);
}

}
