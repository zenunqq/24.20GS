#pragma once

#include "Basic.hpp"

#include "MenuScreen_Athena_classes.hpp"
#include "MenuScreen_Athena_parameters.hpp"

namespace SDK
{

void UMenuScreen_Athena_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimGraph");

	Params::MenuScreen_Athena_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UMenuScreen_Athena_C::AnimNotify_LeftB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_LeftB");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::AnimNotify_LobbySkydive_Diving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_LobbySkydive_Diving");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::AnimNotify_LobbySkydive_Gliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_LobbySkydive_Gliding");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_playFacialAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "BlueprintUpdateAnimation");

	Params::MenuScreen_Athena_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::CalculateMontagePlayTiming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "CalculateMontagePlayTiming");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByBool_846B1F144FCC62C0860150BBCD95C2E8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByBool_846B1F144FCC62C0860150BBCD95C2E8");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_TransitionResult_2E3328A94B338669440FEBAFF4C036E7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_TransitionResult_2E3328A94B338669440FEBAFF4C036E7");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "ExecuteUbergraph_MenuScreen_Athena");

	Params::MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::HidePropsForBlend(class UAnimMontage* NewMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "HidePropsForBlend");

	Params::MenuScreen_Athena_C_HidePropsForBlend Parms{};

	Parms.NewMontage = NewMontage;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::OnBodyPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "OnBodyPart");

	Params::MenuScreen_Athena_C_OnBodyPart Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::OnFocusedItemChanged(const class UFortItemDefinition* FocusedItem, const class AFortWeapon* EquippedWeapon, const class AFortPlayerParachute* CurrentParachute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "OnFocusedItemChanged");

	Params::MenuScreen_Athena_C_OnFocusedItemChanged Parms{};

	Parms.FocusedItem = FocusedItem;
	Parms.EquippedWeapon = EquippedWeapon;
	Parms.CurrentParachute = CurrentParachute;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::OnMontageBlendingOut_Event_HideProps(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "OnMontageBlendingOut_Event_HideProps");

	Params::MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::OnMontageStarted_Event_HideProps(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "OnMontageStarted_Event_HideProps");

	Params::MenuScreen_Athena_C_OnMontageStarted_Event_HideProps Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);
}

void UMenuScreen_Athena_C::UserFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "UserFocus");

	UObject::ProcessEvent(Func, nullptr);
}

void UMenuScreen_Athena_C::WhenBackpackPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuScreen_Athena_C", "WhenBackpackPart");

	Params::MenuScreen_Athena_C_WhenBackpackPart Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

}
