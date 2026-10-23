#pragma once

#include "Basic.hpp"

#include "BP_FrontendBackPlate_classes.hpp"
#include "BP_FrontendBackPlate_parameters.hpp"

namespace SDK
{

void ABP_FrontendBackPlate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::UpdateRenderTargetRealtime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateRenderTargetRealtime");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::UpdateRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateRenderTarget");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::UISpecailEventTransition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UISpecailEventTransition__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::UISpecailEventTransition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UISpecailEventTransition__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::TestBlur()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "TestBlur");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::StopHyperSpeed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "StopHyperSpeed__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::StopHyperSpeed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "StopHyperSpeed__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetSpecialEventUIColorScheme");

	Params::BP_FrontendBackPlate_C_SetSpecialEventUIColorScheme Parms{};

	Parms.SetUIPanelColors = SetUIPanelColors;
	Parms.Backing = std::move(Backing);
	Parms.Backing_Hover = std::move(Backing_Hover);
	Parms.Backing_Selection = std::move(Backing_Selection);
	Parms.SetFontColors = SetFontColors;
	Parms.Primary = std::move(Primary);
	Parms.Secondary = std::move(Secondary);
	Parms.Tertiary = std::move(Tertiary);
	Parms.Quaternary = std::move(Quaternary);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::SetFloatingShapeVisibility(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetFloatingShapeVisibility");

	Params::BP_FrontendBackPlate_C_SetFloatingShapeVisibility Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::SetEnableBlackMondayFX(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetEnableBlackMondayFX");

	Params::BP_FrontendBackPlate_C_SetEnableBlackMondayFX Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::SetBackgroundTexture(class UTexture* InTexture, class UMaterialInterface* InMaterial, class UMaterialInterface* InPreBlurMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetBackgroundTexture");

	Params::BP_FrontendBackPlate_C_SetBackgroundTexture Parms{};

	Parms.InTexture = InTexture;
	Parms.InMaterial = InMaterial;
	Parms.InPreBlurMaterial = InPreBlurMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::SetAllowMatchmakingInteraction(bool AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetAllowMatchmakingInteraction");

	Params::BP_FrontendBackPlate_C_SetAllowMatchmakingInteraction Parms{};

	Parms.AllowInteraction = AllowInteraction;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::ResetUIColorScheme()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ResetUIColorScheme");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::ResetMatchmakingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ResetMatchmakingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::RequestUIColorScheme(const struct FLinearColor& MainUIColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "RequestUIColorScheme");

	Params::BP_FrontendBackPlate_C_RequestUIColorScheme Parms{};

	Parms.MainUIColor = std::move(MainUIColor);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ReceiveTick");

	Params::BP_FrontendBackPlate_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::PlayUISpecialEventTransition(bool bTransitionToSpecialEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "PlayUISpecialEventTransition");

	Params::BP_FrontendBackPlate_C_PlayUISpecialEventTransition Parms{};

	Parms.bTransitionToSpecialEvent = bTransitionToSpecialEvent;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::PlayEnterMatchmakingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "PlayEnterMatchmakingAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::MatchmakingEnded(bool bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "MatchmakingEnded");

	Params::BP_FrontendBackPlate_C_MatchmakingEnded Parms{};

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::HyperSpace__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HyperSpace__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::HyperSpace__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HyperSpace__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::HasUIColorOverride(bool* HasUIColorOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HasUIColorOverride");

	Params::BP_FrontendBackPlate_C_HasUIColorOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasUIColorOverride_0 != nullptr)
		*HasUIColorOverride_0 = Parms.HasUIColorOverride_0;
}

void ABP_FrontendBackPlate_C::HasMatcmakingInteraction(bool* HasInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HasMatcmakingInteraction");

	Params::BP_FrontendBackPlate_C_HasMatcmakingInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasInteraction != nullptr)
		*HasInteraction = Parms.HasInteraction;
}

void ABP_FrontendBackPlate_C::HandleSpecialEventAudioOnMatchmakingEnd(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HandleSpecialEventAudioOnMatchmakingEnd");

	Params::BP_FrontendBackPlate_C_HandleSpecialEventAudioOnMatchmakingEnd Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::GetUIColorScheme(struct FLinearColor* colorscheme, bool* bHasOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "GetUIColorScheme");

	Params::BP_FrontendBackPlate_C_GetUIColorScheme Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (colorscheme != nullptr)
		*colorscheme = std::move(Parms.colorscheme);

	if (bHasOverride != nullptr)
		*bHasOverride = Parms.bHasOverride;
}

void ABP_FrontendBackPlate_C::ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ExecuteUbergraph_BP_FrontendBackPlate");

	Params::BP_FrontendBackPlate_C_ExecuteUbergraph_BP_FrontendBackPlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::EnteringMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "EnteringMatchmaking");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FrontendBackPlate_C::EnableRealtimeUpdate(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "EnableRealtimeUpdate");

	Params::BP_FrontendBackPlate_C_EnableRealtimeUpdate Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FrontendBackPlate_C::CreateUniqueMaterialName(const class FString& PostFix, class FString* UniqueString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "CreateUniqueMaterialName");

	Params::BP_FrontendBackPlate_C_CreateUniqueMaterialName Parms{};

	Parms.PostFix = std::move(PostFix);

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueString != nullptr)
		*UniqueString = std::move(Parms.UniqueString);
}

}
