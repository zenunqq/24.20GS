#pragma once

#include "Basic.hpp"

#include "CorruptionGameplayCodeRuntime_classes.hpp"
#include "CorruptionGameplayCodeRuntime_parameters.hpp"

namespace SDK
{

int32 UWarEffortFundingLibrary::AdjustDonation(int32 DonationAmount, EWarEffortFundingStationType StationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "AdjustDonation");

	Params::WarEffortFundingLibrary_AdjustDonation Parms{};

	Parms.DonationAmount = DonationAmount;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWarEffortFundingLibrary::DoesChoiceHaveWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "DoesChoiceHaveWinner");

	Params::WarEffortFundingLibrary_DoesChoiceHaveWinner Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UWarEffortFundingLibrary::GetIndexFundedPercent(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "GetIndexFundedPercent");

	Params::WarEffortFundingLibrary_GetIndexFundedPercent Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.Index_0 = Index_0;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWarEffortFundingLibrary::IsIndexFunded(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "IsIndexFunded");

	Params::WarEffortFundingLibrary_IsIndexFunded Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.Index_0 = Index_0;
	Parms.StationType = StationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWarEffortFundingLibrary::IsOption1ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "IsOption1ChoiceWinner");

	Params::WarEffortFundingLibrary_IsOption1ChoiceWinner Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UWarEffortFundingLibrary::IsOption2ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "IsOption2ChoiceWinner");

	Params::WarEffortFundingLibrary_IsOption2ChoiceWinner Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.ChoiceIndex = ChoiceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UWarEffortFundingLibrary::WriteTextToBuffer(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WarEffortFundingLibrary", "WriteTextToBuffer");

	Params::WarEffortFundingLibrary_WriteTextToBuffer Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCorruptionCoverageMap::UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorruptionCoverageMap", "UpdateCorruptionCoverageMap");

	Params::CorruptionCoverageMap_UpdateCorruptionCoverageMap Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CorruptionRenderTarget = CorruptionRenderTarget;
	Parms.InTopLeftWorldCoordinate = std::move(InTopLeftWorldCoordinate);
	Parms.InBottomRightWorldCoordinate = std::move(InBottomRightWorldCoordinate);
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCorruptionCoverageMap::IsLocationCorrupted(const struct FVector& Location, float Padding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorruptionCoverageMap", "IsLocationCorrupted");

	Params::CorruptionCoverageMap_IsLocationCorrupted Parms{};

	Parms.Location = std::move(Location);
	Parms.Padding = Padding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ACubeMovementStaticPath::ClearAllGeneratedSplinesAndLockedData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CubeMovementStaticPath", "ClearAllGeneratedSplinesAndLockedData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACubeMovementStaticPath::EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CubeMovementStaticPath", "EditorGetCorruptionGenerationData");

	Params::CubeMovementStaticPath_EditorGetCorruptionGenerationData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}

void AWarEffortMeshActor::OnRep_ActiveFundedItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveFundedItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AWarEffortMeshActor::OnRep_ActiveTryBeforeYouBuyItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_ActiveTryBeforeYouBuyItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AWarEffortMeshActor::OnRep_CurrentFundingData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarEffortMeshActor", "OnRep_CurrentFundingData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::OnRep_PreloadedItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "OnRep_PreloadedItemList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::SetFundingManagerReady(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetFundingManagerReady");

	Params::FortAthenaMutator_WarEffort_SetFundingManagerReady Parms{};

	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedAmount");

	Params::FortAthenaMutator_WarEffort_SetItemFundedAmount Parms{};

	Parms.ItemFundingTag = std::move(ItemFundingTag);
	Parms.CurrentFundingAmount = CurrentFundingAmount;
	Parms.TargetFundingAmount = TargetFundingAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedPercent");

	Params::FortAthenaMutator_WarEffort_SetItemFundedPercent Parms{};

	Parms.ItemFundingTag = std::move(ItemFundingTag);
	Parms.FundingPercent = FundingPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetItemFundedState");

	Params::FortAthenaMutator_WarEffort_SetItemFundedState Parms{};

	Parms.ItemFundingTag = std::move(ItemFundingTag);
	Parms.bIsActive = bIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_WarEffort::SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_WarEffort", "SetTryBeforeYouBuyItemState");

	Params::FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState Parms{};

	Parms.ItemFundingTag = std::move(ItemFundingTag);
	Parms.bIsActive = bIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
