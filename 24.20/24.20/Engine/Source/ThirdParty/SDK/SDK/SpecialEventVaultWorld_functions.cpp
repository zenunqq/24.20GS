#pragma once

#include "Basic.hpp"

#include "SpecialEventVaultWorld_classes.hpp"
#include "SpecialEventVaultWorld_parameters.hpp"

namespace SDK
{

void ASpecialEventVaultWorld_C::TransitionForward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionForward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::TransitionBackward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionBackward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::TransitionBackward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionBackward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::TransitionForward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionForward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::OnUpdateMaterialIndex(int32 MaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnUpdateMaterialIndex");

	Params::SpecialEventVaultWorld_C_OnUpdateMaterialIndex Parms{};

	Parms.MaterialIndex = MaterialIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnUpdateDisplay");

	Params::SpecialEventVaultWorld_C_OnUpdateDisplay Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionBackgroundForward");

	Params::SpecialEventVaultWorld_C_TransitionBackgroundForward Parms{};

	Parms.Forward = Forward;
	Parms.PreTransitionOffset = PreTransitionOffset;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::OnTransitionItemDetails(const bool bShowItemDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnTransitionItemDetails");

	Params::SpecialEventVaultWorld_C_OnTransitionItemDetails Parms{};

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "TransitionBackgroundBackward");

	Params::SpecialEventVaultWorld_C_TransitionBackgroundBackward Parms{};

	Parms.Backward = Backward;
	Parms.PreTransitionOffset = PreTransitionOffset;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnTransitionBackground");

	Params::SpecialEventVaultWorld_C_OnTransitionBackground Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "SetupBackgroundMaterial");

	Params::SpecialEventVaultWorld_C_SetupBackgroundMaterial Parms{};

	Parms.TextureBackground = TextureBackground;
	Parms.BackgroundInfo = std::move(BackgroundInfo);
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);

	TextureBackground = Parms.TextureBackground;
	BackgroundInfo = std::move(Parms.BackgroundInfo);
}

void ASpecialEventVaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnSetupBackground");

	Params::SpecialEventVaultWorld_C_OnSetupBackground Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = std::move(BackgroundInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::Floor_Visibility__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "Floor-Visibility__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::OnInitialBackgroundTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "OnInitialBackgroundTransition");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::ItemDetails__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "ItemDetails__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::Floor_Visibility__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "Floor-Visibility__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::ItemDetails__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "ItemDetails__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::ExecuteUbergraph_SpecialEventVaultWorld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "ExecuteUbergraph_SpecialEventVaultWorld");

	Params::SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventVaultWorld_C::Background_Effects__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "Background-Effects__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ASpecialEventVaultWorld_C::Background_Effects__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventVaultWorld_C", "Background-Effects__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
