#pragma once

#include "Basic.hpp"

#include "BattlePassVaultWorld_classes.hpp"
#include "BattlePassVaultWorld_parameters.hpp"

namespace SDK
{

void ABattlePassVaultWorld_C::TransitionBackward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::TransitionBackward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::TransitionBackgroundForward(double Forward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundForward");

	Params::BattlePassVaultWorld_C_TransitionBackgroundForward Parms{};

	Parms.Forward = Forward;
	Parms.fade = fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::TransitionForward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::TransitionBackgroundBackward(double Backward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundBackward");

	Params::BattlePassVaultWorld_C_TransitionBackgroundBackward Parms{};

	Parms.Backward = Backward;
	Parms.fade = fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::TransitionForward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::OnTransitionItemDetails(const bool bShowItemDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionItemDetails");

	Params::BattlePassVaultWorld_C_OnTransitionItemDetails Parms{};

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "SetupBackgroundMaterial");

	Params::BattlePassVaultWorld_C_SetupBackgroundMaterial Parms{};

	Parms.TextureBackground = TextureBackground;
	Parms.BackgroundInfo = std::move(BackgroundInfo);
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);

	TextureBackground = Parms.TextureBackground;
	BackgroundInfo = std::move(Parms.BackgroundInfo);
}

void ABattlePassVaultWorld_C::OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionBackground");

	Params::BattlePassVaultWorld_C_OnTransitionBackground Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnSetupBackground");

	Params::BattlePassVaultWorld_C_OnSetupBackground Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = std::move(BackgroundInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "PageTransitionIntensityUpdate");

	Params::BattlePassVaultWorld_C_PageTransitionIntensityUpdate Parms{};

	Parms.MID_Background = MID_Background;
	Parms.MID_Floor = MID_Floor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::OnIntensityChange(bool bToLowIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnIntensityChange");

	Params::BattlePassVaultWorld_C_OnIntensityChange Parms{};

	Parms.bToLowIntensity = bToLowIntensity;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnUpdateDisplay");

	Params::BattlePassVaultWorld_C_OnUpdateDisplay Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::ItemDetails__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::OnInitialBackgroundTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnInitialBackgroundTransition");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::IconDissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::ItemDetailsIntensity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::IconDissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::ItemDetailsIntensity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::Floor_Visibility__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::ItemDetails__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::Floor_Visibility__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::ExecuteUbergraph_BattlePassVaultWorld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ExecuteUbergraph_BattlePassVaultWorld");

	Params::BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABattlePassVaultWorld_C::BackgroundIntenstiy__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::BackgroundIntenstiy__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::Background_Effects__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlePassVaultWorld_C::Background_Effects__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
